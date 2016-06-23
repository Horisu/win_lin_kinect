// Generated by the gRPC protobuf plugin.
// If you make any local change, they will be lost.
// source: kinect_rgbd.proto

#include "kinect_rgbd.pb.h"
#include "kinect_rgbd.grpc.pb.h"

#include <grpc++/channel.h>
#include <grpc++/impl/client_unary_call.h>
#include <grpc++/impl/rpc_service_method.h>
#include <grpc++/impl/service_type.h>
#include <grpc++/support/async_unary_call.h>
#include <grpc++/support/async_stream.h>
#include <grpc++/support/sync_stream.h>
namespace kinectrgbd {

static const char* KinectRgbd_method_names[] = {
  "/kinectrgbd.KinectRgbd/CheckRequest",
  "/kinectrgbd.KinectRgbd/SendPoints",
  "/kinectrgbd.KinectRgbd/SendImage",
  "/kinectrgbd.KinectRgbd/SendPosition",
};

std::unique_ptr< KinectRgbd::Stub> KinectRgbd::NewStub(const std::shared_ptr< ::grpc::Channel>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< KinectRgbd::Stub> stub(new KinectRgbd::Stub(channel));
  return stub;
}

KinectRgbd::Stub::Stub(const std::shared_ptr< ::grpc::Channel>& channel)
  : channel_(channel), rpcmethod_CheckRequest_(KinectRgbd_method_names[0], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SendPoints_(KinectRgbd_method_names[1], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SendImage_(KinectRgbd_method_names[2], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SendPosition_(KinectRgbd_method_names[3], ::grpc::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status KinectRgbd::Stub::CheckRequest(::grpc::ClientContext* context, const ::kinectrgbd::Header& request, ::kinectrgbd::Request* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_CheckRequest_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::kinectrgbd::Request>* KinectRgbd::Stub::AsyncCheckRequestRaw(::grpc::ClientContext* context, const ::kinectrgbd::Header& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::kinectrgbd::Request>(channel_.get(), cq, rpcmethod_CheckRequest_, context, request);
}

::grpc::Status KinectRgbd::Stub::SendPoints(::grpc::ClientContext* context, const ::kinectrgbd::Points& request, ::kinectrgbd::Response* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_SendPoints_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::kinectrgbd::Response>* KinectRgbd::Stub::AsyncSendPointsRaw(::grpc::ClientContext* context, const ::kinectrgbd::Points& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::kinectrgbd::Response>(channel_.get(), cq, rpcmethod_SendPoints_, context, request);
}

::grpc::Status KinectRgbd::Stub::SendImage(::grpc::ClientContext* context, const ::kinectrgbd::Pixels& request, ::kinectrgbd::Response* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_SendImage_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::kinectrgbd::Response>* KinectRgbd::Stub::AsyncSendImageRaw(::grpc::ClientContext* context, const ::kinectrgbd::Pixels& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::kinectrgbd::Response>(channel_.get(), cq, rpcmethod_SendImage_, context, request);
}

::grpc::Status KinectRgbd::Stub::SendPosition(::grpc::ClientContext* context, const ::kinectrgbd::Positions& request, ::kinectrgbd::Response* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_SendPosition_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::kinectrgbd::Response>* KinectRgbd::Stub::AsyncSendPositionRaw(::grpc::ClientContext* context, const ::kinectrgbd::Positions& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::kinectrgbd::Response>(channel_.get(), cq, rpcmethod_SendPosition_, context, request);
}

KinectRgbd::AsyncService::AsyncService() : ::grpc::AsynchronousService(KinectRgbd_method_names, 4) {}

KinectRgbd::Service::~Service() {
  delete service_;
}

::grpc::Status KinectRgbd::Service::CheckRequest(::grpc::ServerContext* context, const ::kinectrgbd::Header* request, ::kinectrgbd::Request* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

void KinectRgbd::AsyncService::RequestCheckRequest(::grpc::ServerContext* context, ::kinectrgbd::Header* request, ::grpc::ServerAsyncResponseWriter< ::kinectrgbd::Request>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
  AsynchronousService::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
}

::grpc::Status KinectRgbd::Service::SendPoints(::grpc::ServerContext* context, const ::kinectrgbd::Points* request, ::kinectrgbd::Response* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

void KinectRgbd::AsyncService::RequestSendPoints(::grpc::ServerContext* context, ::kinectrgbd::Points* request, ::grpc::ServerAsyncResponseWriter< ::kinectrgbd::Response>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
  AsynchronousService::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
}

::grpc::Status KinectRgbd::Service::SendImage(::grpc::ServerContext* context, const ::kinectrgbd::Pixels* request, ::kinectrgbd::Response* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

void KinectRgbd::AsyncService::RequestSendImage(::grpc::ServerContext* context, ::kinectrgbd::Pixels* request, ::grpc::ServerAsyncResponseWriter< ::kinectrgbd::Response>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
  AsynchronousService::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
}

::grpc::Status KinectRgbd::Service::SendPosition(::grpc::ServerContext* context, const ::kinectrgbd::Positions* request, ::kinectrgbd::Response* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

void KinectRgbd::AsyncService::RequestSendPosition(::grpc::ServerContext* context, ::kinectrgbd::Positions* request, ::grpc::ServerAsyncResponseWriter< ::kinectrgbd::Response>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
  AsynchronousService::RequestAsyncUnary(3, context, request, response, new_call_cq, notification_cq, tag);
}

::grpc::RpcService* KinectRgbd::Service::service() {
  if (service_ != nullptr) {
    return service_;
  }
  service_ = new ::grpc::RpcService();
  service_->AddMethod(new ::grpc::RpcServiceMethod(
      KinectRgbd_method_names[0],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< KinectRgbd::Service, ::kinectrgbd::Header, ::kinectrgbd::Request>(
          std::mem_fn(&KinectRgbd::Service::CheckRequest), this)));
  service_->AddMethod(new ::grpc::RpcServiceMethod(
      KinectRgbd_method_names[1],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< KinectRgbd::Service, ::kinectrgbd::Points, ::kinectrgbd::Response>(
          std::mem_fn(&KinectRgbd::Service::SendPoints), this)));
  service_->AddMethod(new ::grpc::RpcServiceMethod(
      KinectRgbd_method_names[2],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< KinectRgbd::Service, ::kinectrgbd::Pixels, ::kinectrgbd::Response>(
          std::mem_fn(&KinectRgbd::Service::SendImage), this)));
  service_->AddMethod(new ::grpc::RpcServiceMethod(
      KinectRgbd_method_names[3],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< KinectRgbd::Service, ::kinectrgbd::Positions, ::kinectrgbd::Response>(
          std::mem_fn(&KinectRgbd::Service::SendPosition), this)));
  return service_;
}


}  // namespace kinectrgbd

