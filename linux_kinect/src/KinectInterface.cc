#include "linux_kinect/KinectInterface.hh"

using namespace kinect;
using namespace interface;

//////////////////////////////////////////////////
KinectInterface::KinectInterface(ros::NodeHandle _nh)
  : nh_(_nh), depth_width_(640), w_stride_(3), h_stride_(3)
{
  call_points_ =
    nh_.serviceClient<linux_kinect::KinectPoints>("/kinect/request/points");
  call_image_ =
    nh_.serviceClient<linux_kinect::KinectImage>("/kinect/request/image");
  call_centers_ =
    nh_.serviceClient<linux_kinect::KinectRequest>("/kinect/request/centers");
}

//////////////////////////////////////////////////
KinectInterface::~KinectInterface()
{
}

//////////////////////////////////////////////////
sensor_msgs::PointCloud2 KinectInterface::ReadPoints()
{
  linux_kinect::KinectPoints srv;

  if (!call_points_.call(srv)) {
    ROS_WARN("readpoints: service call failed");
    sensor_msgs::PointCloud2 null;
    return null;
  }

  return srv.response.points;
}

//////////////////////////////////////////////////
sensor_msgs::Image KinectInterface::ReadImage()
{
  linux_kinect::KinectImage srv;

  if (!call_image_.call(srv)) {
    ROS_WARN("readimage: service call failed");
    sensor_msgs::Image null;
    return null;
  }

  return srv.response.image;
}

//////////////////////////////////////////////////
std::vector<sensor_msgs::RegionOfInterest> KinectInterface::ImageBounds
(std::vector<std::array<int, 4> > _depth_indicies)
{
  std::vector<sensor_msgs::RegionOfInterest> result;
  result.reserve(_depth_indicies.size());

  for (auto it = _depth_indicies.begin(); it != _depth_indicies.end(); ++it) {
    // min x
    int depth0_y = it->at(0) / depth_width_;
    int depth0_x = it->at(0) - depth0_y * depth_width_;
    int pixel0_x = depth0_x * w_stride_;

    // min y
    int depth1_y = it->at(1) / depth_width_;
    int pixel1_y = depth1_y * h_stride_;

    // max_x
    int depth2_y = it->at(2) / depth_width_;
    int depth2_x = it->at(2) - depth2_y * depth_width_;
    int pixel2_x = depth2_x * w_stride_;

    // max_y
    int depth3_y = it->at(3) / depth_width_;
    int pixel3_y = depth3_y * h_stride_;

    sensor_msgs::RegionOfInterest image_bounds;
    image_bounds.x_offset = pixel0_x;
    image_bounds.y_offset = pixel1_y;
    image_bounds.width = pixel2_x - image_bounds.x_offset;
    image_bounds.height = pixel3_y - image_bounds.y_offset;

    result.push_back(image_bounds);
  }

  return result;
}

//////////////////////////////////////////////////
std::vector<geometry_msgs::Point> KinectInterface::ImageCenters
(std::vector<sensor_msgs::RegionOfInterest> _image_bounds)
{
  linux_kinect::KinectRequest srv;
  srv.request.data.reserve(_image_bounds.size());

  for (auto it = _image_bounds.begin(); it != _image_bounds.end(); ++it)
    srv.request.data.push_back(*it);

  if (!call_centers_.call(srv)) {
    ROS_WARN("imagecenters: service call failed");
    std::vector<geometry_msgs::Point> null;
    return null;
  }

  return srv.response.points;
}