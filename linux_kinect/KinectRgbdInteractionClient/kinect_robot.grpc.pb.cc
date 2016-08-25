// Generated by the gRPC protobuf plugin.
// If you make any local change, they will be lost.
// source: kinect_robot.proto

#include "kinect_robot.pb.h"
#include "kinect_robot.grpc.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/channel_interface.h>
#include <grpc++/impl/codegen/client_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/rpc_service_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/sync_stream.h>
namespace kinectrobot {

static const char* KinectRobot_method_names[] = {
  "/kinectrobot.KinectRobot/ReturnPoints",
  "/kinectrobot.KinectRobot/ReturnImage",
  "/kinectrobot.KinectRobot/ReturnPixelBoundsFromSpaceBounds",
  "/kinectrobot.KinectRobot/ReturnCognition",
  "/kinectrobot.KinectRobot/SetStreamSettings",
  "/kinectrobot.KinectRobot/SendSpeech",
  "/kinectrobot.KinectRobot/SetSTTBehavior",
  "/kinectrobot.KinectRobot/WebAgent",
};

std::unique_ptr< KinectRobot::Stub> KinectRobot::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< KinectRobot::Stub> stub(new KinectRobot::Stub(channel));
  return stub;
}

KinectRobot::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_ReturnPoints_(KinectRobot_method_names[0], ::grpc::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_ReturnImage_(KinectRobot_method_names[1], ::grpc::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_ReturnPixelBoundsFromSpaceBounds_(KinectRobot_method_names[2], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ReturnCognition_(KinectRobot_method_names[3], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SetStreamSettings_(KinectRobot_method_names[4], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SendSpeech_(KinectRobot_method_names[5], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SetSTTBehavior_(KinectRobot_method_names[6], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_WebAgent_(KinectRobot_method_names[7], ::grpc::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::ClientReader< ::kinectrobot::Points>* KinectRobot::Stub::ReturnPointsRaw(::grpc::ClientContext* context, const ::kinectrobot::Request& request) {
  return new ::grpc::ClientReader< ::kinectrobot::Points>(channel_.get(), rpcmethod_ReturnPoints_, context, request);
}

::grpc::ClientAsyncReader< ::kinectrobot::Points>* KinectRobot::Stub::AsyncReturnPointsRaw(::grpc::ClientContext* context, const ::kinectrobot::Request& request, ::grpc::CompletionQueue* cq, void* tag) {
  return new ::grpc::ClientAsyncReader< ::kinectrobot::Points>(channel_.get(), cq, rpcmethod_ReturnPoints_, context, request, tag);
}

::grpc::ClientReader< ::kinectrobot::Pixels>* KinectRobot::Stub::ReturnImageRaw(::grpc::ClientContext* context, const ::kinectrobot::Request& request) {
  return new ::grpc::ClientReader< ::kinectrobot::Pixels>(channel_.get(), rpcmethod_ReturnImage_, context, request);
}

::grpc::ClientAsyncReader< ::kinectrobot::Pixels>* KinectRobot::Stub::AsyncReturnImageRaw(::grpc::ClientContext* context, const ::kinectrobot::Request& request, ::grpc::CompletionQueue* cq, void* tag) {
  return new ::grpc::ClientAsyncReader< ::kinectrobot::Pixels>(channel_.get(), cq, rpcmethod_ReturnImage_, context, request, tag);
}

::grpc::Status KinectRobot::Stub::ReturnPixelBoundsFromSpaceBounds(::grpc::ClientContext* context, const ::kinectrobot::Request& request, ::kinectrobot::BitStream* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_ReturnPixelBoundsFromSpaceBounds_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::kinectrobot::BitStream>* KinectRobot::Stub::AsyncReturnPixelBoundsFromSpaceBoundsRaw(::grpc::ClientContext* context, const ::kinectrobot::Request& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::kinectrobot::BitStream>(channel_.get(), cq, rpcmethod_ReturnPixelBoundsFromSpaceBounds_, context, request);
}

::grpc::Status KinectRobot::Stub::ReturnCognition(::grpc::ClientContext* context, const ::kinectrobot::Request& request, ::kinectrobot::DataStream* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_ReturnCognition_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::kinectrobot::DataStream>* KinectRobot::Stub::AsyncReturnCognitionRaw(::grpc::ClientContext* context, const ::kinectrobot::Request& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::kinectrobot::DataStream>(channel_.get(), cq, rpcmethod_ReturnCognition_, context, request);
}

::grpc::Status KinectRobot::Stub::SetStreamSettings(::grpc::ClientContext* context, const ::kinectrobot::StreamSettings& request, ::kinectrobot::Response* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_SetStreamSettings_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::kinectrobot::Response>* KinectRobot::Stub::AsyncSetStreamSettingsRaw(::grpc::ClientContext* context, const ::kinectrobot::StreamSettings& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::kinectrobot::Response>(channel_.get(), cq, rpcmethod_SetStreamSettings_, context, request);
}

::grpc::Status KinectRobot::Stub::SendSpeech(::grpc::ClientContext* context, const ::kinectrobot::Speech& request, ::kinectrobot::Response* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_SendSpeech_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::kinectrobot::Response>* KinectRobot::Stub::AsyncSendSpeechRaw(::grpc::ClientContext* context, const ::kinectrobot::Speech& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::kinectrobot::Response>(channel_.get(), cq, rpcmethod_SendSpeech_, context, request);
}

::grpc::Status KinectRobot::Stub::SetSTTBehavior(::grpc::ClientContext* context, const ::kinectrobot::VoiceTriggers& request, ::kinectrobot::Response* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_SetSTTBehavior_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::kinectrobot::Response>* KinectRobot::Stub::AsyncSetSTTBehaviorRaw(::grpc::ClientContext* context, const ::kinectrobot::VoiceTriggers& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::kinectrobot::Response>(channel_.get(), cq, rpcmethod_SetSTTBehavior_, context, request);
}

::grpc::Status KinectRobot::Stub::WebAgent(::grpc::ClientContext* context, const ::kinectrobot::UrlInfo& request, ::kinectrobot::Response* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_WebAgent_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::kinectrobot::Response>* KinectRobot::Stub::AsyncWebAgentRaw(::grpc::ClientContext* context, const ::kinectrobot::UrlInfo& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::kinectrobot::Response>(channel_.get(), cq, rpcmethod_WebAgent_, context, request);
}

KinectRobot::Service::Service() {
  (void)KinectRobot_method_names;
  AddMethod(new ::grpc::RpcServiceMethod(
      KinectRobot_method_names[0],
      ::grpc::RpcMethod::SERVER_STREAMING,
      new ::grpc::ServerStreamingHandler< KinectRobot::Service, ::kinectrobot::Request, ::kinectrobot::Points>(
          std::mem_fn(&KinectRobot::Service::ReturnPoints), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      KinectRobot_method_names[1],
      ::grpc::RpcMethod::SERVER_STREAMING,
      new ::grpc::ServerStreamingHandler< KinectRobot::Service, ::kinectrobot::Request, ::kinectrobot::Pixels>(
          std::mem_fn(&KinectRobot::Service::ReturnImage), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      KinectRobot_method_names[2],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< KinectRobot::Service, ::kinectrobot::Request, ::kinectrobot::BitStream>(
          std::mem_fn(&KinectRobot::Service::ReturnPixelBoundsFromSpaceBounds), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      KinectRobot_method_names[3],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< KinectRobot::Service, ::kinectrobot::Request, ::kinectrobot::DataStream>(
          std::mem_fn(&KinectRobot::Service::ReturnCognition), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      KinectRobot_method_names[4],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< KinectRobot::Service, ::kinectrobot::StreamSettings, ::kinectrobot::Response>(
          std::mem_fn(&KinectRobot::Service::SetStreamSettings), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      KinectRobot_method_names[5],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< KinectRobot::Service, ::kinectrobot::Speech, ::kinectrobot::Response>(
          std::mem_fn(&KinectRobot::Service::SendSpeech), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      KinectRobot_method_names[6],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< KinectRobot::Service, ::kinectrobot::VoiceTriggers, ::kinectrobot::Response>(
          std::mem_fn(&KinectRobot::Service::SetSTTBehavior), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      KinectRobot_method_names[7],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< KinectRobot::Service, ::kinectrobot::UrlInfo, ::kinectrobot::Response>(
          std::mem_fn(&KinectRobot::Service::WebAgent), this)));
}

KinectRobot::Service::~Service() {
}

::grpc::Status KinectRobot::Service::ReturnPoints(::grpc::ServerContext* context, const ::kinectrobot::Request* request, ::grpc::ServerWriter< ::kinectrobot::Points>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status KinectRobot::Service::ReturnImage(::grpc::ServerContext* context, const ::kinectrobot::Request* request, ::grpc::ServerWriter< ::kinectrobot::Pixels>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status KinectRobot::Service::ReturnPixelBoundsFromSpaceBounds(::grpc::ServerContext* context, const ::kinectrobot::Request* request, ::kinectrobot::BitStream* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status KinectRobot::Service::ReturnCognition(::grpc::ServerContext* context, const ::kinectrobot::Request* request, ::kinectrobot::DataStream* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status KinectRobot::Service::SetStreamSettings(::grpc::ServerContext* context, const ::kinectrobot::StreamSettings* request, ::kinectrobot::Response* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status KinectRobot::Service::SendSpeech(::grpc::ServerContext* context, const ::kinectrobot::Speech* request, ::kinectrobot::Response* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status KinectRobot::Service::SetSTTBehavior(::grpc::ServerContext* context, const ::kinectrobot::VoiceTriggers* request, ::kinectrobot::Response* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status KinectRobot::Service::WebAgent(::grpc::ServerContext* context, const ::kinectrobot::UrlInfo* request, ::kinectrobot::Response* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace kinectrobot

