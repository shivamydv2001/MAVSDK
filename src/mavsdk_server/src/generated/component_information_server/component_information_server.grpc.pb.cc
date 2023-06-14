// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: component_information_server/component_information_server.proto

#include "component_information_server/component_information_server.pb.h"
#include "component_information_server/component_information_server.grpc.pb.h"

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
namespace component_information_server {

static const char* ComponentInformationServerService_method_names[] = {
  "/mavsdk.rpc.component_information_server.ComponentInformationServerService/ProvideFloatParam",
  "/mavsdk.rpc.component_information_server.ComponentInformationServerService/SubscribeFloatParam",
};

std::unique_ptr< ComponentInformationServerService::Stub> ComponentInformationServerService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< ComponentInformationServerService::Stub> stub(new ComponentInformationServerService::Stub(channel, options));
  return stub;
}

ComponentInformationServerService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_ProvideFloatParam_(ComponentInformationServerService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SubscribeFloatParam_(ComponentInformationServerService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  {}

::grpc::Status ComponentInformationServerService::Stub::ProvideFloatParam(::grpc::ClientContext* context, const ::mavsdk::rpc::component_information_server::ProvideFloatParamRequest& request, ::mavsdk::rpc::component_information_server::ProvideFloatParamResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::component_information_server::ProvideFloatParamRequest, ::mavsdk::rpc::component_information_server::ProvideFloatParamResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_ProvideFloatParam_, context, request, response);
}

void ComponentInformationServerService::Stub::async::ProvideFloatParam(::grpc::ClientContext* context, const ::mavsdk::rpc::component_information_server::ProvideFloatParamRequest* request, ::mavsdk::rpc::component_information_server::ProvideFloatParamResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::component_information_server::ProvideFloatParamRequest, ::mavsdk::rpc::component_information_server::ProvideFloatParamResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ProvideFloatParam_, context, request, response, std::move(f));
}

void ComponentInformationServerService::Stub::async::ProvideFloatParam(::grpc::ClientContext* context, const ::mavsdk::rpc::component_information_server::ProvideFloatParamRequest* request, ::mavsdk::rpc::component_information_server::ProvideFloatParamResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ProvideFloatParam_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::component_information_server::ProvideFloatParamResponse>* ComponentInformationServerService::Stub::PrepareAsyncProvideFloatParamRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::component_information_server::ProvideFloatParamRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::component_information_server::ProvideFloatParamResponse, ::mavsdk::rpc::component_information_server::ProvideFloatParamRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_ProvideFloatParam_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::component_information_server::ProvideFloatParamResponse>* ComponentInformationServerService::Stub::AsyncProvideFloatParamRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::component_information_server::ProvideFloatParamRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncProvideFloatParamRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::ClientReader< ::mavsdk::rpc::component_information_server::FloatParamResponse>* ComponentInformationServerService::Stub::SubscribeFloatParamRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::component_information_server::SubscribeFloatParamRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::mavsdk::rpc::component_information_server::FloatParamResponse>::Create(channel_.get(), rpcmethod_SubscribeFloatParam_, context, request);
}

void ComponentInformationServerService::Stub::async::SubscribeFloatParam(::grpc::ClientContext* context, const ::mavsdk::rpc::component_information_server::SubscribeFloatParamRequest* request, ::grpc::ClientReadReactor< ::mavsdk::rpc::component_information_server::FloatParamResponse>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::mavsdk::rpc::component_information_server::FloatParamResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_SubscribeFloatParam_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::mavsdk::rpc::component_information_server::FloatParamResponse>* ComponentInformationServerService::Stub::AsyncSubscribeFloatParamRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::component_information_server::SubscribeFloatParamRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::mavsdk::rpc::component_information_server::FloatParamResponse>::Create(channel_.get(), cq, rpcmethod_SubscribeFloatParam_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::mavsdk::rpc::component_information_server::FloatParamResponse>* ComponentInformationServerService::Stub::PrepareAsyncSubscribeFloatParamRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::component_information_server::SubscribeFloatParamRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::mavsdk::rpc::component_information_server::FloatParamResponse>::Create(channel_.get(), cq, rpcmethod_SubscribeFloatParam_, context, request, false, nullptr);
}

ComponentInformationServerService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ComponentInformationServerService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ComponentInformationServerService::Service, ::mavsdk::rpc::component_information_server::ProvideFloatParamRequest, ::mavsdk::rpc::component_information_server::ProvideFloatParamResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](ComponentInformationServerService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::component_information_server::ProvideFloatParamRequest* req,
             ::mavsdk::rpc::component_information_server::ProvideFloatParamResponse* resp) {
               return service->ProvideFloatParam(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ComponentInformationServerService_method_names[1],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< ComponentInformationServerService::Service, ::mavsdk::rpc::component_information_server::SubscribeFloatParamRequest, ::mavsdk::rpc::component_information_server::FloatParamResponse>(
          [](ComponentInformationServerService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::component_information_server::SubscribeFloatParamRequest* req,
             ::grpc::ServerWriter<::mavsdk::rpc::component_information_server::FloatParamResponse>* writer) {
               return service->SubscribeFloatParam(ctx, req, writer);
             }, this)));
}

ComponentInformationServerService::Service::~Service() {
}

::grpc::Status ComponentInformationServerService::Service::ProvideFloatParam(::grpc::ServerContext* context, const ::mavsdk::rpc::component_information_server::ProvideFloatParamRequest* request, ::mavsdk::rpc::component_information_server::ProvideFloatParamResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ComponentInformationServerService::Service::SubscribeFloatParam(::grpc::ServerContext* context, const ::mavsdk::rpc::component_information_server::SubscribeFloatParamRequest* request, ::grpc::ServerWriter< ::mavsdk::rpc::component_information_server::FloatParamResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace mavsdk
}  // namespace rpc
}  // namespace component_information_server

