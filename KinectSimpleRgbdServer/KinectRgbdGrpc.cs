// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: kinect_rgbd.proto
#region Designer generated code

using System;
using System.Threading;
using System.Threading.Tasks;
using Grpc.Core;

namespace Kinectrgbd {
  public static class KinectRgbd
  {
    static readonly string __ServiceName = "kinectrgbd.KinectRgbd";

    static readonly Marshaller<global::Kinectrgbd.Header> __Marshaller_Header = Marshallers.Create((arg) => global::Google.Protobuf.MessageExtensions.ToByteArray(arg), global::Kinectrgbd.Header.Parser.ParseFrom);
    static readonly Marshaller<global::Kinectrgbd.Request> __Marshaller_Request = Marshallers.Create((arg) => global::Google.Protobuf.MessageExtensions.ToByteArray(arg), global::Kinectrgbd.Request.Parser.ParseFrom);
    static readonly Marshaller<global::Kinectrgbd.Points> __Marshaller_Points = Marshallers.Create((arg) => global::Google.Protobuf.MessageExtensions.ToByteArray(arg), global::Kinectrgbd.Points.Parser.ParseFrom);
    static readonly Marshaller<global::Kinectrgbd.Response> __Marshaller_Response = Marshallers.Create((arg) => global::Google.Protobuf.MessageExtensions.ToByteArray(arg), global::Kinectrgbd.Response.Parser.ParseFrom);
    static readonly Marshaller<global::Kinectrgbd.Pixels> __Marshaller_Pixels = Marshallers.Create((arg) => global::Google.Protobuf.MessageExtensions.ToByteArray(arg), global::Kinectrgbd.Pixels.Parser.ParseFrom);
    static readonly Marshaller<global::Kinectrgbd.DataStream> __Marshaller_DataStream = Marshallers.Create((arg) => global::Google.Protobuf.MessageExtensions.ToByteArray(arg), global::Kinectrgbd.DataStream.Parser.ParseFrom);
    static readonly Marshaller<global::Kinectrgbd.BitStream> __Marshaller_BitStream = Marshallers.Create((arg) => global::Google.Protobuf.MessageExtensions.ToByteArray(arg), global::Kinectrgbd.BitStream.Parser.ParseFrom);

    static readonly Method<global::Kinectrgbd.Header, global::Kinectrgbd.Request> __Method_CheckRequest = new Method<global::Kinectrgbd.Header, global::Kinectrgbd.Request>(
        MethodType.Unary,
        __ServiceName,
        "CheckRequest",
        __Marshaller_Header,
        __Marshaller_Request);

    static readonly Method<global::Kinectrgbd.Points, global::Kinectrgbd.Response> __Method_SendPoints = new Method<global::Kinectrgbd.Points, global::Kinectrgbd.Response>(
        MethodType.ClientStreaming,
        __ServiceName,
        "SendPoints",
        __Marshaller_Points,
        __Marshaller_Response);

    static readonly Method<global::Kinectrgbd.Pixels, global::Kinectrgbd.Response> __Method_SendImage = new Method<global::Kinectrgbd.Pixels, global::Kinectrgbd.Response>(
        MethodType.ClientStreaming,
        __ServiceName,
        "SendImage",
        __Marshaller_Pixels,
        __Marshaller_Response);

    static readonly Method<global::Kinectrgbd.DataStream, global::Kinectrgbd.Response> __Method_ReturnPositionsFromPixels = new Method<global::Kinectrgbd.DataStream, global::Kinectrgbd.Response>(
        MethodType.Unary,
        __ServiceName,
        "ReturnPositionsFromPixels",
        __Marshaller_DataStream,
        __Marshaller_Response);

    static readonly Method<global::Kinectrgbd.BitStream, global::Kinectrgbd.Response> __Method_ReturnPixelBoundsFromSpaceBounds = new Method<global::Kinectrgbd.BitStream, global::Kinectrgbd.Response>(
        MethodType.Unary,
        __ServiceName,
        "ReturnPixelBoundsFromSpaceBounds",
        __Marshaller_BitStream,
        __Marshaller_Response);

    static readonly Method<global::Kinectrgbd.DataStream, global::Kinectrgbd.Response> __Method_ReturnCognition = new Method<global::Kinectrgbd.DataStream, global::Kinectrgbd.Response>(
        MethodType.Unary,
        __ServiceName,
        "ReturnCognition",
        __Marshaller_DataStream,
        __Marshaller_Response);

    /// <summary>Service descriptor</summary>
    public static global::Google.Protobuf.Reflection.ServiceDescriptor Descriptor
    {
      get { return global::Kinectrgbd.KinectRgbdReflection.Descriptor.Services[0]; }
    }

    /// <summary>Base class for server-side implementations of KinectRgbd</summary>
    public abstract class KinectRgbdBase
    {
      public virtual global::System.Threading.Tasks.Task<global::Kinectrgbd.Request> CheckRequest(global::Kinectrgbd.Header request, ServerCallContext context)
      {
        throw new RpcException(new Status(StatusCode.Unimplemented, ""));
      }

      public virtual global::System.Threading.Tasks.Task<global::Kinectrgbd.Response> SendPoints(IAsyncStreamReader<global::Kinectrgbd.Points> requestStream, ServerCallContext context)
      {
        throw new RpcException(new Status(StatusCode.Unimplemented, ""));
      }

      public virtual global::System.Threading.Tasks.Task<global::Kinectrgbd.Response> SendImage(IAsyncStreamReader<global::Kinectrgbd.Pixels> requestStream, ServerCallContext context)
      {
        throw new RpcException(new Status(StatusCode.Unimplemented, ""));
      }

      public virtual global::System.Threading.Tasks.Task<global::Kinectrgbd.Response> ReturnPositionsFromPixels(global::Kinectrgbd.DataStream request, ServerCallContext context)
      {
        throw new RpcException(new Status(StatusCode.Unimplemented, ""));
      }

      public virtual global::System.Threading.Tasks.Task<global::Kinectrgbd.Response> ReturnPixelBoundsFromSpaceBounds(global::Kinectrgbd.BitStream request, ServerCallContext context)
      {
        throw new RpcException(new Status(StatusCode.Unimplemented, ""));
      }

      public virtual global::System.Threading.Tasks.Task<global::Kinectrgbd.Response> ReturnCognition(global::Kinectrgbd.DataStream request, ServerCallContext context)
      {
        throw new RpcException(new Status(StatusCode.Unimplemented, ""));
      }

    }

    /// <summary>Client for KinectRgbd</summary>
    public class KinectRgbdClient : ClientBase<KinectRgbdClient>
    {
      /// <summary>Creates a new client for KinectRgbd</summary>
      /// <param name="channel">The channel to use to make remote calls.</param>
      public KinectRgbdClient(Channel channel) : base(channel)
      {
      }
      /// <summary>Creates a new client for KinectRgbd that uses a custom <c>CallInvoker</c>.</summary>
      /// <param name="callInvoker">The callInvoker to use to make remote calls.</param>
      public KinectRgbdClient(CallInvoker callInvoker) : base(callInvoker)
      {
      }
      /// <summary>Protected parameterless constructor to allow creation of test doubles.</summary>
      protected KinectRgbdClient() : base()
      {
      }
      /// <summary>Protected constructor to allow creation of configured clients.</summary>
      /// <param name="configuration">The client configuration.</param>
      protected KinectRgbdClient(ClientBaseConfiguration configuration) : base(configuration)
      {
      }

      public virtual global::Kinectrgbd.Request CheckRequest(global::Kinectrgbd.Header request, Metadata headers = null, DateTime? deadline = null, CancellationToken cancellationToken = default(CancellationToken))
      {
        return CheckRequest(request, new CallOptions(headers, deadline, cancellationToken));
      }
      public virtual global::Kinectrgbd.Request CheckRequest(global::Kinectrgbd.Header request, CallOptions options)
      {
        return CallInvoker.BlockingUnaryCall(__Method_CheckRequest, null, options, request);
      }
      public virtual AsyncUnaryCall<global::Kinectrgbd.Request> CheckRequestAsync(global::Kinectrgbd.Header request, Metadata headers = null, DateTime? deadline = null, CancellationToken cancellationToken = default(CancellationToken))
      {
        return CheckRequestAsync(request, new CallOptions(headers, deadline, cancellationToken));
      }
      public virtual AsyncUnaryCall<global::Kinectrgbd.Request> CheckRequestAsync(global::Kinectrgbd.Header request, CallOptions options)
      {
        return CallInvoker.AsyncUnaryCall(__Method_CheckRequest, null, options, request);
      }
      public virtual AsyncClientStreamingCall<global::Kinectrgbd.Points, global::Kinectrgbd.Response> SendPoints(Metadata headers = null, DateTime? deadline = null, CancellationToken cancellationToken = default(CancellationToken))
      {
        return SendPoints(new CallOptions(headers, deadline, cancellationToken));
      }
      public virtual AsyncClientStreamingCall<global::Kinectrgbd.Points, global::Kinectrgbd.Response> SendPoints(CallOptions options)
      {
        return CallInvoker.AsyncClientStreamingCall(__Method_SendPoints, null, options);
      }
      public virtual AsyncClientStreamingCall<global::Kinectrgbd.Pixels, global::Kinectrgbd.Response> SendImage(Metadata headers = null, DateTime? deadline = null, CancellationToken cancellationToken = default(CancellationToken))
      {
        return SendImage(new CallOptions(headers, deadline, cancellationToken));
      }
      public virtual AsyncClientStreamingCall<global::Kinectrgbd.Pixels, global::Kinectrgbd.Response> SendImage(CallOptions options)
      {
        return CallInvoker.AsyncClientStreamingCall(__Method_SendImage, null, options);
      }
      public virtual global::Kinectrgbd.Response ReturnPositionsFromPixels(global::Kinectrgbd.DataStream request, Metadata headers = null, DateTime? deadline = null, CancellationToken cancellationToken = default(CancellationToken))
      {
        return ReturnPositionsFromPixels(request, new CallOptions(headers, deadline, cancellationToken));
      }
      public virtual global::Kinectrgbd.Response ReturnPositionsFromPixels(global::Kinectrgbd.DataStream request, CallOptions options)
      {
        return CallInvoker.BlockingUnaryCall(__Method_ReturnPositionsFromPixels, null, options, request);
      }
      public virtual AsyncUnaryCall<global::Kinectrgbd.Response> ReturnPositionsFromPixelsAsync(global::Kinectrgbd.DataStream request, Metadata headers = null, DateTime? deadline = null, CancellationToken cancellationToken = default(CancellationToken))
      {
        return ReturnPositionsFromPixelsAsync(request, new CallOptions(headers, deadline, cancellationToken));
      }
      public virtual AsyncUnaryCall<global::Kinectrgbd.Response> ReturnPositionsFromPixelsAsync(global::Kinectrgbd.DataStream request, CallOptions options)
      {
        return CallInvoker.AsyncUnaryCall(__Method_ReturnPositionsFromPixels, null, options, request);
      }
      public virtual global::Kinectrgbd.Response ReturnPixelBoundsFromSpaceBounds(global::Kinectrgbd.BitStream request, Metadata headers = null, DateTime? deadline = null, CancellationToken cancellationToken = default(CancellationToken))
      {
        return ReturnPixelBoundsFromSpaceBounds(request, new CallOptions(headers, deadline, cancellationToken));
      }
      public virtual global::Kinectrgbd.Response ReturnPixelBoundsFromSpaceBounds(global::Kinectrgbd.BitStream request, CallOptions options)
      {
        return CallInvoker.BlockingUnaryCall(__Method_ReturnPixelBoundsFromSpaceBounds, null, options, request);
      }
      public virtual AsyncUnaryCall<global::Kinectrgbd.Response> ReturnPixelBoundsFromSpaceBoundsAsync(global::Kinectrgbd.BitStream request, Metadata headers = null, DateTime? deadline = null, CancellationToken cancellationToken = default(CancellationToken))
      {
        return ReturnPixelBoundsFromSpaceBoundsAsync(request, new CallOptions(headers, deadline, cancellationToken));
      }
      public virtual AsyncUnaryCall<global::Kinectrgbd.Response> ReturnPixelBoundsFromSpaceBoundsAsync(global::Kinectrgbd.BitStream request, CallOptions options)
      {
        return CallInvoker.AsyncUnaryCall(__Method_ReturnPixelBoundsFromSpaceBounds, null, options, request);
      }
      public virtual global::Kinectrgbd.Response ReturnCognition(global::Kinectrgbd.DataStream request, Metadata headers = null, DateTime? deadline = null, CancellationToken cancellationToken = default(CancellationToken))
      {
        return ReturnCognition(request, new CallOptions(headers, deadline, cancellationToken));
      }
      public virtual global::Kinectrgbd.Response ReturnCognition(global::Kinectrgbd.DataStream request, CallOptions options)
      {
        return CallInvoker.BlockingUnaryCall(__Method_ReturnCognition, null, options, request);
      }
      public virtual AsyncUnaryCall<global::Kinectrgbd.Response> ReturnCognitionAsync(global::Kinectrgbd.DataStream request, Metadata headers = null, DateTime? deadline = null, CancellationToken cancellationToken = default(CancellationToken))
      {
        return ReturnCognitionAsync(request, new CallOptions(headers, deadline, cancellationToken));
      }
      public virtual AsyncUnaryCall<global::Kinectrgbd.Response> ReturnCognitionAsync(global::Kinectrgbd.DataStream request, CallOptions options)
      {
        return CallInvoker.AsyncUnaryCall(__Method_ReturnCognition, null, options, request);
      }
      protected override KinectRgbdClient NewInstance(ClientBaseConfiguration configuration)
      {
        return new KinectRgbdClient(configuration);
      }
    }

    /// <summary>Creates service definition that can be registered with a server</summary>
    public static ServerServiceDefinition BindService(KinectRgbdBase serviceImpl)
    {
      return ServerServiceDefinition.CreateBuilder()
          .AddMethod(__Method_CheckRequest, serviceImpl.CheckRequest)
          .AddMethod(__Method_SendPoints, serviceImpl.SendPoints)
          .AddMethod(__Method_SendImage, serviceImpl.SendImage)
          .AddMethod(__Method_ReturnPositionsFromPixels, serviceImpl.ReturnPositionsFromPixels)
          .AddMethod(__Method_ReturnPixelBoundsFromSpaceBounds, serviceImpl.ReturnPixelBoundsFromSpaceBounds)
          .AddMethod(__Method_ReturnCognition, serviceImpl.ReturnCognition).Build();
    }

  }
}
#endregion
