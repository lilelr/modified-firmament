// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: scheduling/firmament_scheduler.proto

#include "scheduling/firmament_scheduler.pb.h"
#include "scheduling/firmament_scheduler.grpc.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/channel_interface.h>
#include <grpc++/impl/codegen/client_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/rpc_service_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/sync_stream.h>
namespace firmament {

static const char* FirmamentScheduler_method_names[] = {
  "/firmament.FirmamentScheduler/Schedule",
  "/firmament.FirmamentScheduler/TaskCompleted",
  "/firmament.FirmamentScheduler/TaskFailed",
  "/firmament.FirmamentScheduler/TaskRemoved",
  "/firmament.FirmamentScheduler/TaskSubmitted",
  "/firmament.FirmamentScheduler/TaskUpdated",
  "/firmament.FirmamentScheduler/NodeAdded",
  "/firmament.FirmamentScheduler/NodeFailed",
  "/firmament.FirmamentScheduler/NodeRemoved",
  "/firmament.FirmamentScheduler/NodeUpdated",
  "/firmament.FirmamentScheduler/AddTaskStats",
  "/firmament.FirmamentScheduler/AddNodeStats",
};

std::unique_ptr< FirmamentScheduler::Stub> FirmamentScheduler::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< FirmamentScheduler::Stub> stub(new FirmamentScheduler::Stub(channel));
  return stub;
}

FirmamentScheduler::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Schedule_(FirmamentScheduler_method_names[0], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_TaskCompleted_(FirmamentScheduler_method_names[1], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_TaskFailed_(FirmamentScheduler_method_names[2], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_TaskRemoved_(FirmamentScheduler_method_names[3], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_TaskSubmitted_(FirmamentScheduler_method_names[4], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_TaskUpdated_(FirmamentScheduler_method_names[5], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_NodeAdded_(FirmamentScheduler_method_names[6], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_NodeFailed_(FirmamentScheduler_method_names[7], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_NodeRemoved_(FirmamentScheduler_method_names[8], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_NodeUpdated_(FirmamentScheduler_method_names[9], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_AddTaskStats_(FirmamentScheduler_method_names[10], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_AddNodeStats_(FirmamentScheduler_method_names[11], ::grpc::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status FirmamentScheduler::Stub::Schedule(::grpc::ClientContext* context, const ::firmament::ScheduleRequest& request, ::firmament::SchedulingDeltas* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_Schedule_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::firmament::SchedulingDeltas>* FirmamentScheduler::Stub::AsyncScheduleRaw(::grpc::ClientContext* context, const ::firmament::ScheduleRequest& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::firmament::SchedulingDeltas>(channel_.get(), cq, rpcmethod_Schedule_, context, request);
}

::grpc::Status FirmamentScheduler::Stub::TaskCompleted(::grpc::ClientContext* context, const ::firmament::TaskUID& request, ::firmament::TaskCompletedResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_TaskCompleted_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::firmament::TaskCompletedResponse>* FirmamentScheduler::Stub::AsyncTaskCompletedRaw(::grpc::ClientContext* context, const ::firmament::TaskUID& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::firmament::TaskCompletedResponse>(channel_.get(), cq, rpcmethod_TaskCompleted_, context, request);
}

::grpc::Status FirmamentScheduler::Stub::TaskFailed(::grpc::ClientContext* context, const ::firmament::TaskUID& request, ::firmament::TaskFailedResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_TaskFailed_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::firmament::TaskFailedResponse>* FirmamentScheduler::Stub::AsyncTaskFailedRaw(::grpc::ClientContext* context, const ::firmament::TaskUID& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::firmament::TaskFailedResponse>(channel_.get(), cq, rpcmethod_TaskFailed_, context, request);
}

::grpc::Status FirmamentScheduler::Stub::TaskRemoved(::grpc::ClientContext* context, const ::firmament::TaskUID& request, ::firmament::TaskRemovedResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_TaskRemoved_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::firmament::TaskRemovedResponse>* FirmamentScheduler::Stub::AsyncTaskRemovedRaw(::grpc::ClientContext* context, const ::firmament::TaskUID& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::firmament::TaskRemovedResponse>(channel_.get(), cq, rpcmethod_TaskRemoved_, context, request);
}

::grpc::Status FirmamentScheduler::Stub::TaskSubmitted(::grpc::ClientContext* context, const ::firmament::TaskDescription& request, ::firmament::TaskSubmittedResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_TaskSubmitted_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::firmament::TaskSubmittedResponse>* FirmamentScheduler::Stub::AsyncTaskSubmittedRaw(::grpc::ClientContext* context, const ::firmament::TaskDescription& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::firmament::TaskSubmittedResponse>(channel_.get(), cq, rpcmethod_TaskSubmitted_, context, request);
}

::grpc::Status FirmamentScheduler::Stub::TaskUpdated(::grpc::ClientContext* context, const ::firmament::TaskDescription& request, ::firmament::TaskUpdatedResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_TaskUpdated_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::firmament::TaskUpdatedResponse>* FirmamentScheduler::Stub::AsyncTaskUpdatedRaw(::grpc::ClientContext* context, const ::firmament::TaskDescription& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::firmament::TaskUpdatedResponse>(channel_.get(), cq, rpcmethod_TaskUpdated_, context, request);
}

::grpc::Status FirmamentScheduler::Stub::NodeAdded(::grpc::ClientContext* context, const ::firmament::ResourceTopologyNodeDescriptor& request, ::firmament::NodeAddedResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_NodeAdded_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::firmament::NodeAddedResponse>* FirmamentScheduler::Stub::AsyncNodeAddedRaw(::grpc::ClientContext* context, const ::firmament::ResourceTopologyNodeDescriptor& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::firmament::NodeAddedResponse>(channel_.get(), cq, rpcmethod_NodeAdded_, context, request);
}

::grpc::Status FirmamentScheduler::Stub::NodeFailed(::grpc::ClientContext* context, const ::firmament::ResourceUID& request, ::firmament::NodeFailedResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_NodeFailed_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::firmament::NodeFailedResponse>* FirmamentScheduler::Stub::AsyncNodeFailedRaw(::grpc::ClientContext* context, const ::firmament::ResourceUID& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::firmament::NodeFailedResponse>(channel_.get(), cq, rpcmethod_NodeFailed_, context, request);
}

::grpc::Status FirmamentScheduler::Stub::NodeRemoved(::grpc::ClientContext* context, const ::firmament::ResourceUID& request, ::firmament::NodeRemovedResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_NodeRemoved_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::firmament::NodeRemovedResponse>* FirmamentScheduler::Stub::AsyncNodeRemovedRaw(::grpc::ClientContext* context, const ::firmament::ResourceUID& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::firmament::NodeRemovedResponse>(channel_.get(), cq, rpcmethod_NodeRemoved_, context, request);
}

::grpc::Status FirmamentScheduler::Stub::NodeUpdated(::grpc::ClientContext* context, const ::firmament::ResourceTopologyNodeDescriptor& request, ::firmament::NodeUpdatedResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_NodeUpdated_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::firmament::NodeUpdatedResponse>* FirmamentScheduler::Stub::AsyncNodeUpdatedRaw(::grpc::ClientContext* context, const ::firmament::ResourceTopologyNodeDescriptor& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::firmament::NodeUpdatedResponse>(channel_.get(), cq, rpcmethod_NodeUpdated_, context, request);
}

::grpc::Status FirmamentScheduler::Stub::AddTaskStats(::grpc::ClientContext* context, const ::firmament::TaskStats& request, ::firmament::TaskStatsResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_AddTaskStats_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::firmament::TaskStatsResponse>* FirmamentScheduler::Stub::AsyncAddTaskStatsRaw(::grpc::ClientContext* context, const ::firmament::TaskStats& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::firmament::TaskStatsResponse>(channel_.get(), cq, rpcmethod_AddTaskStats_, context, request);
}

::grpc::Status FirmamentScheduler::Stub::AddNodeStats(::grpc::ClientContext* context, const ::firmament::ResourceStats& request, ::firmament::ResourceStatsResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_AddNodeStats_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::firmament::ResourceStatsResponse>* FirmamentScheduler::Stub::AsyncAddNodeStatsRaw(::grpc::ClientContext* context, const ::firmament::ResourceStats& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::firmament::ResourceStatsResponse>(channel_.get(), cq, rpcmethod_AddNodeStats_, context, request);
}

FirmamentScheduler::Service::Service() {
  AddMethod(new ::grpc::RpcServiceMethod(
      FirmamentScheduler_method_names[0],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< FirmamentScheduler::Service, ::firmament::ScheduleRequest, ::firmament::SchedulingDeltas>(
          std::mem_fn(&FirmamentScheduler::Service::Schedule), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      FirmamentScheduler_method_names[1],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< FirmamentScheduler::Service, ::firmament::TaskUID, ::firmament::TaskCompletedResponse>(
          std::mem_fn(&FirmamentScheduler::Service::TaskCompleted), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      FirmamentScheduler_method_names[2],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< FirmamentScheduler::Service, ::firmament::TaskUID, ::firmament::TaskFailedResponse>(
          std::mem_fn(&FirmamentScheduler::Service::TaskFailed), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      FirmamentScheduler_method_names[3],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< FirmamentScheduler::Service, ::firmament::TaskUID, ::firmament::TaskRemovedResponse>(
          std::mem_fn(&FirmamentScheduler::Service::TaskRemoved), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      FirmamentScheduler_method_names[4],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< FirmamentScheduler::Service, ::firmament::TaskDescription, ::firmament::TaskSubmittedResponse>(
          std::mem_fn(&FirmamentScheduler::Service::TaskSubmitted), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      FirmamentScheduler_method_names[5],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< FirmamentScheduler::Service, ::firmament::TaskDescription, ::firmament::TaskUpdatedResponse>(
          std::mem_fn(&FirmamentScheduler::Service::TaskUpdated), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      FirmamentScheduler_method_names[6],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< FirmamentScheduler::Service, ::firmament::ResourceTopologyNodeDescriptor, ::firmament::NodeAddedResponse>(
          std::mem_fn(&FirmamentScheduler::Service::NodeAdded), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      FirmamentScheduler_method_names[7],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< FirmamentScheduler::Service, ::firmament::ResourceUID, ::firmament::NodeFailedResponse>(
          std::mem_fn(&FirmamentScheduler::Service::NodeFailed), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      FirmamentScheduler_method_names[8],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< FirmamentScheduler::Service, ::firmament::ResourceUID, ::firmament::NodeRemovedResponse>(
          std::mem_fn(&FirmamentScheduler::Service::NodeRemoved), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      FirmamentScheduler_method_names[9],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< FirmamentScheduler::Service, ::firmament::ResourceTopologyNodeDescriptor, ::firmament::NodeUpdatedResponse>(
          std::mem_fn(&FirmamentScheduler::Service::NodeUpdated), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      FirmamentScheduler_method_names[10],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< FirmamentScheduler::Service, ::firmament::TaskStats, ::firmament::TaskStatsResponse>(
          std::mem_fn(&FirmamentScheduler::Service::AddTaskStats), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      FirmamentScheduler_method_names[11],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< FirmamentScheduler::Service, ::firmament::ResourceStats, ::firmament::ResourceStatsResponse>(
          std::mem_fn(&FirmamentScheduler::Service::AddNodeStats), this)));
}

FirmamentScheduler::Service::~Service() {
}

::grpc::Status FirmamentScheduler::Service::Schedule(::grpc::ServerContext* context, const ::firmament::ScheduleRequest* request, ::firmament::SchedulingDeltas* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FirmamentScheduler::Service::TaskCompleted(::grpc::ServerContext* context, const ::firmament::TaskUID* request, ::firmament::TaskCompletedResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FirmamentScheduler::Service::TaskFailed(::grpc::ServerContext* context, const ::firmament::TaskUID* request, ::firmament::TaskFailedResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FirmamentScheduler::Service::TaskRemoved(::grpc::ServerContext* context, const ::firmament::TaskUID* request, ::firmament::TaskRemovedResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FirmamentScheduler::Service::TaskSubmitted(::grpc::ServerContext* context, const ::firmament::TaskDescription* request, ::firmament::TaskSubmittedResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FirmamentScheduler::Service::TaskUpdated(::grpc::ServerContext* context, const ::firmament::TaskDescription* request, ::firmament::TaskUpdatedResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FirmamentScheduler::Service::NodeAdded(::grpc::ServerContext* context, const ::firmament::ResourceTopologyNodeDescriptor* request, ::firmament::NodeAddedResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FirmamentScheduler::Service::NodeFailed(::grpc::ServerContext* context, const ::firmament::ResourceUID* request, ::firmament::NodeFailedResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FirmamentScheduler::Service::NodeRemoved(::grpc::ServerContext* context, const ::firmament::ResourceUID* request, ::firmament::NodeRemovedResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FirmamentScheduler::Service::NodeUpdated(::grpc::ServerContext* context, const ::firmament::ResourceTopologyNodeDescriptor* request, ::firmament::NodeUpdatedResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FirmamentScheduler::Service::AddTaskStats(::grpc::ServerContext* context, const ::firmament::TaskStats* request, ::firmament::TaskStatsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FirmamentScheduler::Service::AddNodeStats(::grpc::ServerContext* context, const ::firmament::ResourceStats* request, ::firmament::ResourceStatsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace firmament

