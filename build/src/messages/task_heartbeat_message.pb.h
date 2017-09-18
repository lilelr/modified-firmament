// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messages/task_heartbeat_message.proto

#ifndef PROTOBUF_messages_2ftask_5fheartbeat_5fmessage_2eproto__INCLUDED
#define PROTOBUF_messages_2ftask_5fheartbeat_5fmessage_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "base/task_stats.pb.h"
// @@protoc_insertion_point(includes)

namespace firmament {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_messages_2ftask_5fheartbeat_5fmessage_2eproto();
void protobuf_InitDefaults_messages_2ftask_5fheartbeat_5fmessage_2eproto();
void protobuf_AssignDesc_messages_2ftask_5fheartbeat_5fmessage_2eproto();
void protobuf_ShutdownFile_messages_2ftask_5fheartbeat_5fmessage_2eproto();

class TaskHeartbeatMessage;

// ===================================================================

class TaskHeartbeatMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:firmament.TaskHeartbeatMessage) */ {
 public:
  TaskHeartbeatMessage();
  virtual ~TaskHeartbeatMessage();

  TaskHeartbeatMessage(const TaskHeartbeatMessage& from);

  inline TaskHeartbeatMessage& operator=(const TaskHeartbeatMessage& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const TaskHeartbeatMessage& default_instance();

  static const TaskHeartbeatMessage* internal_default_instance();

  void Swap(TaskHeartbeatMessage* other);

  // implements Message ----------------------------------------------

  inline TaskHeartbeatMessage* New() const { return New(NULL); }

  TaskHeartbeatMessage* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TaskHeartbeatMessage& from);
  void MergeFrom(const TaskHeartbeatMessage& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(TaskHeartbeatMessage* other);
  void UnsafeMergeFrom(const TaskHeartbeatMessage& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint64 task_id = 1;
  void clear_task_id();
  static const int kTaskIdFieldNumber = 1;
  ::google::protobuf::uint64 task_id() const;
  void set_task_id(::google::protobuf::uint64 value);

  // optional string location = 2;
  void clear_location();
  static const int kLocationFieldNumber = 2;
  const ::std::string& location() const;
  void set_location(const ::std::string& value);
  void set_location(const char* value);
  void set_location(const char* value, size_t size);
  ::std::string* mutable_location();
  ::std::string* release_location();
  void set_allocated_location(::std::string* location);

  // optional uint64 sequence_number = 3;
  void clear_sequence_number();
  static const int kSequenceNumberFieldNumber = 3;
  ::google::protobuf::uint64 sequence_number() const;
  void set_sequence_number(::google::protobuf::uint64 value);

  // optional .firmament.TaskStats stats = 4;
  bool has_stats() const;
  void clear_stats();
  static const int kStatsFieldNumber = 4;
  const ::firmament::TaskStats& stats() const;
  ::firmament::TaskStats* mutable_stats();
  ::firmament::TaskStats* release_stats();
  void set_allocated_stats(::firmament::TaskStats* stats);

  // @@protoc_insertion_point(class_scope:firmament.TaskHeartbeatMessage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr location_;
  ::firmament::TaskStats* stats_;
  ::google::protobuf::uint64 task_id_;
  ::google::protobuf::uint64 sequence_number_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_messages_2ftask_5fheartbeat_5fmessage_2eproto_impl();
  friend void  protobuf_AddDesc_messages_2ftask_5fheartbeat_5fmessage_2eproto_impl();
  friend void protobuf_AssignDesc_messages_2ftask_5fheartbeat_5fmessage_2eproto();
  friend void protobuf_ShutdownFile_messages_2ftask_5fheartbeat_5fmessage_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<TaskHeartbeatMessage> TaskHeartbeatMessage_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// TaskHeartbeatMessage

// optional uint64 task_id = 1;
inline void TaskHeartbeatMessage::clear_task_id() {
  task_id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 TaskHeartbeatMessage::task_id() const {
  // @@protoc_insertion_point(field_get:firmament.TaskHeartbeatMessage.task_id)
  return task_id_;
}
inline void TaskHeartbeatMessage::set_task_id(::google::protobuf::uint64 value) {
  
  task_id_ = value;
  // @@protoc_insertion_point(field_set:firmament.TaskHeartbeatMessage.task_id)
}

// optional string location = 2;
inline void TaskHeartbeatMessage::clear_location() {
  location_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& TaskHeartbeatMessage::location() const {
  // @@protoc_insertion_point(field_get:firmament.TaskHeartbeatMessage.location)
  return location_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TaskHeartbeatMessage::set_location(const ::std::string& value) {
  
  location_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:firmament.TaskHeartbeatMessage.location)
}
inline void TaskHeartbeatMessage::set_location(const char* value) {
  
  location_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:firmament.TaskHeartbeatMessage.location)
}
inline void TaskHeartbeatMessage::set_location(const char* value, size_t size) {
  
  location_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:firmament.TaskHeartbeatMessage.location)
}
inline ::std::string* TaskHeartbeatMessage::mutable_location() {
  
  // @@protoc_insertion_point(field_mutable:firmament.TaskHeartbeatMessage.location)
  return location_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TaskHeartbeatMessage::release_location() {
  // @@protoc_insertion_point(field_release:firmament.TaskHeartbeatMessage.location)
  
  return location_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TaskHeartbeatMessage::set_allocated_location(::std::string* location) {
  if (location != NULL) {
    
  } else {
    
  }
  location_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), location);
  // @@protoc_insertion_point(field_set_allocated:firmament.TaskHeartbeatMessage.location)
}

// optional uint64 sequence_number = 3;
inline void TaskHeartbeatMessage::clear_sequence_number() {
  sequence_number_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 TaskHeartbeatMessage::sequence_number() const {
  // @@protoc_insertion_point(field_get:firmament.TaskHeartbeatMessage.sequence_number)
  return sequence_number_;
}
inline void TaskHeartbeatMessage::set_sequence_number(::google::protobuf::uint64 value) {
  
  sequence_number_ = value;
  // @@protoc_insertion_point(field_set:firmament.TaskHeartbeatMessage.sequence_number)
}

// optional .firmament.TaskStats stats = 4;
inline bool TaskHeartbeatMessage::has_stats() const {
  return this != internal_default_instance() && stats_ != NULL;
}
inline void TaskHeartbeatMessage::clear_stats() {
  if (GetArenaNoVirtual() == NULL && stats_ != NULL) delete stats_;
  stats_ = NULL;
}
inline const ::firmament::TaskStats& TaskHeartbeatMessage::stats() const {
  // @@protoc_insertion_point(field_get:firmament.TaskHeartbeatMessage.stats)
  return stats_ != NULL ? *stats_
                         : *::firmament::TaskStats::internal_default_instance();
}
inline ::firmament::TaskStats* TaskHeartbeatMessage::mutable_stats() {
  
  if (stats_ == NULL) {
    stats_ = new ::firmament::TaskStats;
  }
  // @@protoc_insertion_point(field_mutable:firmament.TaskHeartbeatMessage.stats)
  return stats_;
}
inline ::firmament::TaskStats* TaskHeartbeatMessage::release_stats() {
  // @@protoc_insertion_point(field_release:firmament.TaskHeartbeatMessage.stats)
  
  ::firmament::TaskStats* temp = stats_;
  stats_ = NULL;
  return temp;
}
inline void TaskHeartbeatMessage::set_allocated_stats(::firmament::TaskStats* stats) {
  delete stats_;
  stats_ = stats;
  if (stats) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:firmament.TaskHeartbeatMessage.stats)
}

inline const TaskHeartbeatMessage* TaskHeartbeatMessage::internal_default_instance() {
  return &TaskHeartbeatMessage_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace firmament

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_messages_2ftask_5fheartbeat_5fmessage_2eproto__INCLUDED
