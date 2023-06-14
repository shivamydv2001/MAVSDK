// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: calibration/calibration.proto

#include "calibration/calibration.pb.h"
#include "calibration/calibration.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/channel_interface.h>
#include <grpcpp/impl/client_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/rpc_service_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>
namespace mavsdk {
namespace rpc {
namespace calibration {

static const char* CalibrationService_method_names[] = {
  "/mavsdk.rpc.calibration.CalibrationService/SubscribeCalibrateGyro",
  "/mavsdk.rpc.calibration.CalibrationService/SubscribeCalibrateAccelerometer",
  "/mavsdk.rpc.calibration.CalibrationService/SubscribeCalibrateMagnetometer",
  "/mavsdk.rpc.calibration.CalibrationService/SubscribeCalibrateLevelHorizon",
  "/mavsdk.rpc.calibration.CalibrationService/SubscribeCalibrateGimbalAccelerometer",
  "/mavsdk.rpc.calibration.CalibrationService/Cancel",
};

std::unique_ptr< CalibrationService::Stub> CalibrationService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< CalibrationService::Stub> stub(new CalibrationService::Stub(channel, options));
  return stub;
}

CalibrationService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_SubscribeCalibrateGyro_(CalibrationService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_SubscribeCalibrateAccelerometer_(CalibrationService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_SubscribeCalibrateMagnetometer_(CalibrationService_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_SubscribeCalibrateLevelHorizon_(CalibrationService_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_SubscribeCalibrateGimbalAccelerometer_(CalibrationService_method_names[4], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_Cancel_(CalibrationService_method_names[5], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::ClientReader< ::mavsdk::rpc::calibration::CalibrateGyroResponse>* CalibrationService::Stub::SubscribeCalibrateGyroRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::calibration::SubscribeCalibrateGyroRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::mavsdk::rpc::calibration::CalibrateGyroResponse>::Create(channel_.get(), rpcmethod_SubscribeCalibrateGyro_, context, request);
}

void CalibrationService::Stub::async::SubscribeCalibrateGyro(::grpc::ClientContext* context, const ::mavsdk::rpc::calibration::SubscribeCalibrateGyroRequest* request, ::grpc::ClientReadReactor< ::mavsdk::rpc::calibration::CalibrateGyroResponse>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::mavsdk::rpc::calibration::CalibrateGyroResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_SubscribeCalibrateGyro_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::mavsdk::rpc::calibration::CalibrateGyroResponse>* CalibrationService::Stub::AsyncSubscribeCalibrateGyroRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::calibration::SubscribeCalibrateGyroRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::mavsdk::rpc::calibration::CalibrateGyroResponse>::Create(channel_.get(), cq, rpcmethod_SubscribeCalibrateGyro_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::mavsdk::rpc::calibration::CalibrateGyroResponse>* CalibrationService::Stub::PrepareAsyncSubscribeCalibrateGyroRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::calibration::SubscribeCalibrateGyroRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::mavsdk::rpc::calibration::CalibrateGyroResponse>::Create(channel_.get(), cq, rpcmethod_SubscribeCalibrateGyro_, context, request, false, nullptr);
}

::grpc::ClientReader< ::mavsdk::rpc::calibration::CalibrateAccelerometerResponse>* CalibrationService::Stub::SubscribeCalibrateAccelerometerRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::calibration::SubscribeCalibrateAccelerometerRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::mavsdk::rpc::calibration::CalibrateAccelerometerResponse>::Create(channel_.get(), rpcmethod_SubscribeCalibrateAccelerometer_, context, request);
}

void CalibrationService::Stub::async::SubscribeCalibrateAccelerometer(::grpc::ClientContext* context, const ::mavsdk::rpc::calibration::SubscribeCalibrateAccelerometerRequest* request, ::grpc::ClientReadReactor< ::mavsdk::rpc::calibration::CalibrateAccelerometerResponse>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::mavsdk::rpc::calibration::CalibrateAccelerometerResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_SubscribeCalibrateAccelerometer_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::mavsdk::rpc::calibration::CalibrateAccelerometerResponse>* CalibrationService::Stub::AsyncSubscribeCalibrateAccelerometerRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::calibration::SubscribeCalibrateAccelerometerRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::mavsdk::rpc::calibration::CalibrateAccelerometerResponse>::Create(channel_.get(), cq, rpcmethod_SubscribeCalibrateAccelerometer_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::mavsdk::rpc::calibration::CalibrateAccelerometerResponse>* CalibrationService::Stub::PrepareAsyncSubscribeCalibrateAccelerometerRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::calibration::SubscribeCalibrateAccelerometerRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::mavsdk::rpc::calibration::CalibrateAccelerometerResponse>::Create(channel_.get(), cq, rpcmethod_SubscribeCalibrateAccelerometer_, context, request, false, nullptr);
}

::grpc::ClientReader< ::mavsdk::rpc::calibration::CalibrateMagnetometerResponse>* CalibrationService::Stub::SubscribeCalibrateMagnetometerRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::calibration::SubscribeCalibrateMagnetometerRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::mavsdk::rpc::calibration::CalibrateMagnetometerResponse>::Create(channel_.get(), rpcmethod_SubscribeCalibrateMagnetometer_, context, request);
}

void CalibrationService::Stub::async::SubscribeCalibrateMagnetometer(::grpc::ClientContext* context, const ::mavsdk::rpc::calibration::SubscribeCalibrateMagnetometerRequest* request, ::grpc::ClientReadReactor< ::mavsdk::rpc::calibration::CalibrateMagnetometerResponse>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::mavsdk::rpc::calibration::CalibrateMagnetometerResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_SubscribeCalibrateMagnetometer_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::mavsdk::rpc::calibration::CalibrateMagnetometerResponse>* CalibrationService::Stub::AsyncSubscribeCalibrateMagnetometerRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::calibration::SubscribeCalibrateMagnetometerRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::mavsdk::rpc::calibration::CalibrateMagnetometerResponse>::Create(channel_.get(), cq, rpcmethod_SubscribeCalibrateMagnetometer_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::mavsdk::rpc::calibration::CalibrateMagnetometerResponse>* CalibrationService::Stub::PrepareAsyncSubscribeCalibrateMagnetometerRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::calibration::SubscribeCalibrateMagnetometerRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::mavsdk::rpc::calibration::CalibrateMagnetometerResponse>::Create(channel_.get(), cq, rpcmethod_SubscribeCalibrateMagnetometer_, context, request, false, nullptr);
}

::grpc::ClientReader< ::mavsdk::rpc::calibration::CalibrateLevelHorizonResponse>* CalibrationService::Stub::SubscribeCalibrateLevelHorizonRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::calibration::SubscribeCalibrateLevelHorizonRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::mavsdk::rpc::calibration::CalibrateLevelHorizonResponse>::Create(channel_.get(), rpcmethod_SubscribeCalibrateLevelHorizon_, context, request);
}

void CalibrationService::Stub::async::SubscribeCalibrateLevelHorizon(::grpc::ClientContext* context, const ::mavsdk::rpc::calibration::SubscribeCalibrateLevelHorizonRequest* request, ::grpc::ClientReadReactor< ::mavsdk::rpc::calibration::CalibrateLevelHorizonResponse>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::mavsdk::rpc::calibration::CalibrateLevelHorizonResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_SubscribeCalibrateLevelHorizon_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::mavsdk::rpc::calibration::CalibrateLevelHorizonResponse>* CalibrationService::Stub::AsyncSubscribeCalibrateLevelHorizonRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::calibration::SubscribeCalibrateLevelHorizonRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::mavsdk::rpc::calibration::CalibrateLevelHorizonResponse>::Create(channel_.get(), cq, rpcmethod_SubscribeCalibrateLevelHorizon_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::mavsdk::rpc::calibration::CalibrateLevelHorizonResponse>* CalibrationService::Stub::PrepareAsyncSubscribeCalibrateLevelHorizonRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::calibration::SubscribeCalibrateLevelHorizonRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::mavsdk::rpc::calibration::CalibrateLevelHorizonResponse>::Create(channel_.get(), cq, rpcmethod_SubscribeCalibrateLevelHorizon_, context, request, false, nullptr);
}

::grpc::ClientReader< ::mavsdk::rpc::calibration::CalibrateGimbalAccelerometerResponse>* CalibrationService::Stub::SubscribeCalibrateGimbalAccelerometerRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::calibration::SubscribeCalibrateGimbalAccelerometerRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::mavsdk::rpc::calibration::CalibrateGimbalAccelerometerResponse>::Create(channel_.get(), rpcmethod_SubscribeCalibrateGimbalAccelerometer_, context, request);
}

void CalibrationService::Stub::async::SubscribeCalibrateGimbalAccelerometer(::grpc::ClientContext* context, const ::mavsdk::rpc::calibration::SubscribeCalibrateGimbalAccelerometerRequest* request, ::grpc::ClientReadReactor< ::mavsdk::rpc::calibration::CalibrateGimbalAccelerometerResponse>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::mavsdk::rpc::calibration::CalibrateGimbalAccelerometerResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_SubscribeCalibrateGimbalAccelerometer_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::mavsdk::rpc::calibration::CalibrateGimbalAccelerometerResponse>* CalibrationService::Stub::AsyncSubscribeCalibrateGimbalAccelerometerRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::calibration::SubscribeCalibrateGimbalAccelerometerRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::mavsdk::rpc::calibration::CalibrateGimbalAccelerometerResponse>::Create(channel_.get(), cq, rpcmethod_SubscribeCalibrateGimbalAccelerometer_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::mavsdk::rpc::calibration::CalibrateGimbalAccelerometerResponse>* CalibrationService::Stub::PrepareAsyncSubscribeCalibrateGimbalAccelerometerRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::calibration::SubscribeCalibrateGimbalAccelerometerRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::mavsdk::rpc::calibration::CalibrateGimbalAccelerometerResponse>::Create(channel_.get(), cq, rpcmethod_SubscribeCalibrateGimbalAccelerometer_, context, request, false, nullptr);
}

::grpc::Status CalibrationService::Stub::Cancel(::grpc::ClientContext* context, const ::mavsdk::rpc::calibration::CancelRequest& request, ::mavsdk::rpc::calibration::CancelResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::calibration::CancelRequest, ::mavsdk::rpc::calibration::CancelResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Cancel_, context, request, response);
}

void CalibrationService::Stub::async::Cancel(::grpc::ClientContext* context, const ::mavsdk::rpc::calibration::CancelRequest* request, ::mavsdk::rpc::calibration::CancelResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::calibration::CancelRequest, ::mavsdk::rpc::calibration::CancelResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Cancel_, context, request, response, std::move(f));
}

void CalibrationService::Stub::async::Cancel(::grpc::ClientContext* context, const ::mavsdk::rpc::calibration::CancelRequest* request, ::mavsdk::rpc::calibration::CancelResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Cancel_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::calibration::CancelResponse>* CalibrationService::Stub::PrepareAsyncCancelRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::calibration::CancelRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::calibration::CancelResponse, ::mavsdk::rpc::calibration::CancelRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Cancel_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::calibration::CancelResponse>* CalibrationService::Stub::AsyncCancelRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::calibration::CancelRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncCancelRaw(context, request, cq);
  result->StartCall();
  return result;
}

CalibrationService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      CalibrationService_method_names[0],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< CalibrationService::Service, ::mavsdk::rpc::calibration::SubscribeCalibrateGyroRequest, ::mavsdk::rpc::calibration::CalibrateGyroResponse>(
          [](CalibrationService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::calibration::SubscribeCalibrateGyroRequest* req,
             ::grpc::ServerWriter<::mavsdk::rpc::calibration::CalibrateGyroResponse>* writer) {
               return service->SubscribeCalibrateGyro(ctx, req, writer);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      CalibrationService_method_names[1],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< CalibrationService::Service, ::mavsdk::rpc::calibration::SubscribeCalibrateAccelerometerRequest, ::mavsdk::rpc::calibration::CalibrateAccelerometerResponse>(
          [](CalibrationService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::calibration::SubscribeCalibrateAccelerometerRequest* req,
             ::grpc::ServerWriter<::mavsdk::rpc::calibration::CalibrateAccelerometerResponse>* writer) {
               return service->SubscribeCalibrateAccelerometer(ctx, req, writer);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      CalibrationService_method_names[2],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< CalibrationService::Service, ::mavsdk::rpc::calibration::SubscribeCalibrateMagnetometerRequest, ::mavsdk::rpc::calibration::CalibrateMagnetometerResponse>(
          [](CalibrationService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::calibration::SubscribeCalibrateMagnetometerRequest* req,
             ::grpc::ServerWriter<::mavsdk::rpc::calibration::CalibrateMagnetometerResponse>* writer) {
               return service->SubscribeCalibrateMagnetometer(ctx, req, writer);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      CalibrationService_method_names[3],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< CalibrationService::Service, ::mavsdk::rpc::calibration::SubscribeCalibrateLevelHorizonRequest, ::mavsdk::rpc::calibration::CalibrateLevelHorizonResponse>(
          [](CalibrationService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::calibration::SubscribeCalibrateLevelHorizonRequest* req,
             ::grpc::ServerWriter<::mavsdk::rpc::calibration::CalibrateLevelHorizonResponse>* writer) {
               return service->SubscribeCalibrateLevelHorizon(ctx, req, writer);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      CalibrationService_method_names[4],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< CalibrationService::Service, ::mavsdk::rpc::calibration::SubscribeCalibrateGimbalAccelerometerRequest, ::mavsdk::rpc::calibration::CalibrateGimbalAccelerometerResponse>(
          [](CalibrationService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::calibration::SubscribeCalibrateGimbalAccelerometerRequest* req,
             ::grpc::ServerWriter<::mavsdk::rpc::calibration::CalibrateGimbalAccelerometerResponse>* writer) {
               return service->SubscribeCalibrateGimbalAccelerometer(ctx, req, writer);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      CalibrationService_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< CalibrationService::Service, ::mavsdk::rpc::calibration::CancelRequest, ::mavsdk::rpc::calibration::CancelResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](CalibrationService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::calibration::CancelRequest* req,
             ::mavsdk::rpc::calibration::CancelResponse* resp) {
               return service->Cancel(ctx, req, resp);
             }, this)));
}

CalibrationService::Service::~Service() {
}

::grpc::Status CalibrationService::Service::SubscribeCalibrateGyro(::grpc::ServerContext* context, const ::mavsdk::rpc::calibration::SubscribeCalibrateGyroRequest* request, ::grpc::ServerWriter< ::mavsdk::rpc::calibration::CalibrateGyroResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status CalibrationService::Service::SubscribeCalibrateAccelerometer(::grpc::ServerContext* context, const ::mavsdk::rpc::calibration::SubscribeCalibrateAccelerometerRequest* request, ::grpc::ServerWriter< ::mavsdk::rpc::calibration::CalibrateAccelerometerResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status CalibrationService::Service::SubscribeCalibrateMagnetometer(::grpc::ServerContext* context, const ::mavsdk::rpc::calibration::SubscribeCalibrateMagnetometerRequest* request, ::grpc::ServerWriter< ::mavsdk::rpc::calibration::CalibrateMagnetometerResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status CalibrationService::Service::SubscribeCalibrateLevelHorizon(::grpc::ServerContext* context, const ::mavsdk::rpc::calibration::SubscribeCalibrateLevelHorizonRequest* request, ::grpc::ServerWriter< ::mavsdk::rpc::calibration::CalibrateLevelHorizonResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status CalibrationService::Service::SubscribeCalibrateGimbalAccelerometer(::grpc::ServerContext* context, const ::mavsdk::rpc::calibration::SubscribeCalibrateGimbalAccelerometerRequest* request, ::grpc::ServerWriter< ::mavsdk::rpc::calibration::CalibrateGimbalAccelerometerResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status CalibrationService::Service::Cancel(::grpc::ServerContext* context, const ::mavsdk::rpc::calibration::CancelRequest* request, ::mavsdk::rpc::calibration::CancelResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace mavsdk
}  // namespace rpc
}  // namespace calibration

