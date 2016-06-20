﻿//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;
//using System.Threading.Tasks;
//using System.Windows;
//using System.Windows.Controls;
//using System.Windows.Data;
//using System.Windows.Documents;
//using System.Windows.Input;
//using System.Windows.Media;
//using System.Windows.Media.Imaging;
//using System.Windows.Navigation;
//using System.Windows.Shapes;

using Grpc.Core;

namespace KinectSimpleRgbdServer
{
    using System;
    using System.Collections.Concurrent;
    using System.Collections.Generic;
    using System.ComponentModel;
    using System.Diagnostics;
    using System.Globalization;
    using System.IO;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;
    using System.Windows;
    using System.Windows.Media;
    using System.Windows.Media.Imaging;
    using Microsoft.Kinect;

    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        private KinectSensor kinectSensor = null;

        private CoordinateMapper coordinateMapper = null;

        private MultiSourceFrameReader multiSourceFrameReader = null;

        private Kinectrgbd.KinectRgbdImpl streamer =
            new Kinectrgbd.KinectRgbdImpl();

        private int skippedFrame = 0;

        private Grpc.Core.Server myserver;

        public MainWindow()
        {
            this.kinectSensor = KinectSensor.GetDefault();

            this.coordinateMapper = this.kinectSensor.CoordinateMapper;

            this.multiSourceFrameReader =
                    this.kinectSensor.OpenMultiSourceFrameReader(FrameSourceTypes.Color | FrameSourceTypes.Depth);
            this.multiSourceFrameReader.MultiSourceFrameArrived += this.Reader_FrameArrived;

            this.kinectSensor.Open();

            InitializeComponent();
        }

        private void MainWindow_Loaded(object sender, RoutedEventArgs e)
        {
            this.myserver = new Grpc.Core.Server
            {
                Services = { Kinectrgbd.KinectRgbd.BindService(this.streamer) },
                Ports = { new ServerPort("192.168.101.190", 50052, Grpc.Core.ServerCredentials.Insecure) }
            };
            this.myserver.Start();
        }

        private void MainWindow_Closing(object sender, CancelEventArgs e)
        {
            if (this.kinectSensor != null)
            {
                this.kinectSensor.Close();
                this.kinectSensor = null;
            }
            this.myserver.ShutdownAsync().Wait();
        }

        private void Reader_FrameArrived(object sender, MultiSourceFrameArrivedEventArgs e)
        {
            // the code crashes with 30fps, set parameter according to computer specifications
            if (this.skippedFrame < 30)
            {
                ++skippedFrame;
                return;
            }

            skippedFrame = 0;

            MultiSourceFrame frame = e.FrameReference.AcquireFrame();

            if (frame == null)
                return;
            
            ColorFrame colorFrame = frame.ColorFrameReference.AcquireFrame();
            DepthFrame depthFrame = frame.DepthFrameReference.AcquireFrame();
            if (colorFrame == null | depthFrame == null)
                return;

            // get depth map from depthFrame
            var depthDesc = depthFrame.FrameDescription;
            ushort[] depthData = new ushort[depthDesc.Width * depthDesc.Height];
            depthFrame.CopyFrameDataToArray(depthData);

            // get color pixels from colorFrame
            var colorDesc = colorFrame.FrameDescription;
            byte[] pixels = new byte[colorDesc.Width * colorDesc.Height * 4];
            colorFrame.CopyConvertedFrameDataToArray(pixels, ColorImageFormat.Bgra);

            //CameraSpacePoint[] cameraPoints = new CameraSpacePoint[colorDesc.Width * colorDesc.Height];
            //this.coordinateMapper.MapColorFrameToCameraSpace(depthData, cameraPoints);

            // get physical xyz position for each point on depth map
            CameraSpacePoint[] cameraPoints = new CameraSpacePoint[depthDesc.Width * depthDesc.Height];
            this.coordinateMapper.MapDepthFrameToCameraSpace(depthData, cameraPoints);

            // get corresponding color pixel for each point on depth map
            ColorSpacePoint[] colorPoints = new ColorSpacePoint[depthDesc.Width * depthDesc.Height];
            this.coordinateMapper.MapDepthFrameToColorSpace(depthData, colorPoints);

            // draw camera image
            BitmapSource bitmapSource = BitmapSource.Create(colorDesc.Width, colorDesc.Height, 96, 96,
                PixelFormats.Bgr32, null, pixels, colorDesc.Width * 4);
            this.canvas.Background = new ImageBrush(bitmapSource);

            // if point cloud is being requested from client, try later
            // else, set a lock so that reading and writing does not conflict
            if (!this.streamer.SetLockState())
            {
                colorFrame.Dispose();
                depthFrame.Dispose();
                return;
            }

            // set point cloud to send (iterate through depth map)
            int pointIndex = 0;
            foreach (CameraSpacePoint point in cameraPoints)
            {
                if (Double.IsInfinity(point.X) || Double.IsInfinity(point.Y) || Double.IsInfinity(point.Z)
                    || Double.IsNaN(point.X) || Double.IsNaN(point.Y) || Double.IsNaN(point.Z))
                {
                    ++pointIndex;
                    continue;
                }

                // get color from corresponding color pixel
                // note, corresponding pixel can be out of range on color map, due to coordinate difference
                int img_y = Convert.ToInt32(colorPoints[pointIndex].Y);
                int img_x = Convert.ToInt32(colorPoints[pointIndex].X);
                if (img_x < 0 || img_y < 0 || img_x >= 1960 || img_y >= 1080)
                {
                    ++pointIndex;
                    continue;
                }
                int pixel = 4 * (img_y * colorDesc.Width + img_x); // bgra, so skip be 4

                if (point.X > 1.0 || point.Y > 1.0 || point.Z > 2.0 || point.X < -1.0 || point.Y < -1.0)
                {
                    ++pointIndex;
                    continue;
                }

                // add point to stream
                Kinectrgbd.Point p = new Kinectrgbd.Point
                {
                    Color = ((pixels[pixel++] << 16) & 0xfffffff) + ((pixels[pixel++] << 8) & 0xfffffff) + pixels[pixel++],
                    X = point.X,
                    Y = point.Y,
                    Z = point.Z
                };
                ++pointIndex;
                this.streamer.SetPoint(p);
            }
            // writing ended, so free lock
            this.streamer.FreeLockState();

            colorFrame.Dispose();
            depthFrame.Dispose();
        }
    }
}
