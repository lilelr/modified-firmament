// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sim/event_desc.proto

#ifndef PROTOBUF_sim_2fevent_5fdesc_2eproto__INCLUDED
#define PROTOBUF_sim_2fevent_5fdesc_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace firmament {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_sim_2fevent_5fdesc_2eproto();
void protobuf_InitDefaults_sim_2fevent_5fdesc_2eproto();
void protobuf_AssignDesc_sim_2fevent_5fdesc_2eproto();
void protobuf_ShutdownFile_sim_2fevent_5fdesc_2eproto();

class EventDescriptor;

enum EventDescriptor_EventType {
  EventDescriptor_EventType_ADD_MACHINE = 0,
  EventDescriptor_EventType_REMOVE_MACHINE = 1,
  EventDescriptor_EventType_UPDATE_MACHINE = 2,
  EventDescriptor_EventType_TASK_END_RUNTIME = 3,
  EventDescriptor_EventType_TASK_SUBMIT = 4,
  EventDescriptor_EventType_MACHINE_HEARTBEAT = 5,
  EventDescriptor_EventType_EventDescriptor_EventType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  EventDescriptor_EventType_EventDescriptor_EventType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool EventDescriptor_EventType_IsValid(int value);
const EventDescriptor_EventType EventDescriptor_EventType_EventType_MIN = EventDescriptor_EventType_ADD_MACHINE;
const EventDescriptor_EventType EventDescriptor_EventType_EventType_MAX = EventDescriptor_EventType_MACHINE_HEARTBEAT;
const int EventDescriptor_EventType_EventType_ARRAYSIZE = EventDescriptor_EventType_EventType_MAX + 1;

const ::google::protobuf::EnumDescriptor* EventDescriptor_EventType_descriptor();
inline const ::std::string& EventDescriptor_EventType_Name(EventDescriptor_EventType value) {
  return ::google::protobuf::internal::NameOfEnum(
    EventDescriptor_EventType_descriptor(), value);
}
inline bool EventDescriptor_EventType_Parse(
    const ::std::string& name, EventDescriptor_EventType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<EventDescriptor_EventType>(
    EventDescriptor_EventType_descriptor(), name, value);
}
// ===================================================================

class EventDescriptor : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:firmament.EventDescriptor) */ {
 public:
  EventDescriptor();
  virtual ~EventDescriptor();

  EventDescriptor(const EventDescriptor& from);

  inline EventDescriptor& operator=(const EventDescriptor& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const EventDescriptor& default_instance();

  static const EventDescriptor* internal_default_instance();

  void Swap(EventDescriptor* other);

  // implements Message ----------------------------------------------

  inline EventDescriptor* New() const { return New(NULL); }

  EventDescriptor* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const EventDescriptor& from);
  void MergeFrom(const EventDescriptor& from);
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
  void InternalSwap(EventDescriptor* other);
  void UnsafeMergeFrom(const EventDescriptor& from);
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

  typedef EventDescriptor_EventType EventType;
  static const EventType ADD_MACHINE =
    EventDescriptor_EventType_ADD_MACHINE;
  static const EventType REMOVE_MACHINE =
    EventDescriptor_EventType_REMOVE_MACHINE;
  static const EventType UPDATE_MACHINE =
    EventDescriptor_EventType_UPDATE_MACHINE;
  static const EventType TASK_END_RUNTIME =
    EventDescriptor_EventType_TASK_END_RUNTIME;
  static const EventType TASK_SUBMIT =
    EventDescriptor_EventType_TASK_SUBMIT;
  static const EventType MACHINE_HEARTBEAT =
    EventDescriptor_EventType_MACHINE_HEARTBEAT;
  static inline bool EventType_IsValid(int value) {
    return EventDescriptor_EventType_IsValid(value);
  }
  static const EventType EventType_MIN =
    EventDescriptor_EventType_EventType_MIN;
  static const EventType EventType_MAX =
    EventDescriptor_EventType_EventType_MAX;
  static const int EventType_ARRAYSIZE =
    EventDescriptor_EventType_EventType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  EventType_descriptor() {
    return EventDescriptor_EventType_descriptor();
  }
  static inline const ::std::string& EventType_Name(EventType value) {
    return EventDescriptor_EventType_Name(value);
  }
  static inline bool EventType_Parse(const ::std::string& name,
      EventType* value) {
    return EventDescriptor_EventType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .firmament.EventDescriptor.EventType type = 1;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  ::firmament::EventDescriptor_EventType type() const;
  void set_type(::firmament::EventDescriptor_EventType value);

  // optional uint64 machine_id = 2;
  void clear_machine_id();
  static const int kMachineIdFieldNumber = 2;
  ::google::protobuf::uint64 machine_id() const;
  void set_machine_id(::google::protobuf::uint64 value);

  // optional uint64 task_index = 3;
  void clear_task_index();
  static const int kTaskIndexFieldNumber = 3;
  ::google::protobuf::uint64 task_index() const;
  void set_task_index(::google::protobuf::uint64 value);

  // optional uint64 job_id = 4;
  void clear_job_id();
  static const int kJobIdFieldNumber = 4;
  ::google::protobuf::uint64 job_id() const;
  void set_job_id(::google::protobuf::uint64 value);

  // optional float requested_cpu_cores = 5;
  void clear_requested_cpu_cores();
  static const int kRequestedCpuCoresFieldNumber = 5;
  float requested_cpu_cores() const;
  void set_requested_cpu_cores(float value);

  // optional uint64 requested_ram = 6;
  void clear_requested_ram();
  static const int kRequestedRamFieldNumber = 6;
  ::google::protobuf::uint64 requested_ram() const;
  void set_requested_ram(::google::protobuf::uint64 value);

  // optional uint32 priority = 7;
  void clear_priority();
  static const int kPriorityFieldNumber = 7;
  ::google::protobuf::uint32 priority() const;
  void set_priority(::google::protobuf::uint32 value);

  // optional uint32 scheduling_class = 8;
  void clear_scheduling_class();
  static const int kSchedulingClassFieldNumber = 8;
  ::google::protobuf::uint32 scheduling_class() const;
  void set_scheduling_class(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:firmament.EventDescriptor)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint64 machine_id_;
  ::google::protobuf::uint64 task_index_;
  int type_;
  float requested_cpu_cores_;
  ::google::protobuf::uint64 job_id_;
  ::google::protobuf::uint64 requested_ram_;
  ::google::protobuf::uint32 priority_;
  ::google::protobuf::uint32 scheduling_class_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_sim_2fevent_5fdesc_2eproto_impl();
  friend void  protobuf_AddDesc_sim_2fevent_5fdesc_2eproto_impl();
  friend void protobuf_AssignDesc_sim_2fevent_5fdesc_2eproto();
  friend void protobuf_ShutdownFile_sim_2fevent_5fdesc_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<EventDescriptor> EventDescriptor_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// EventDescriptor

// optional .firmament.EventDescriptor.EventType type = 1;
inline void EventDescriptor::clear_type() {
  type_ = 0;
}
inline ::firmament::EventDescriptor_EventType EventDescriptor::type() const {
  // @@protoc_insertion_point(field_get:firmament.EventDescriptor.type)
  return static_cast< ::firmament::EventDescriptor_EventType >(type_);
}
inline void EventDescriptor::set_type(::firmament::EventDescriptor_EventType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:firmament.EventDescriptor.type)
}

// optional uint64 machine_id = 2;
inline void EventDescriptor::clear_machine_id() {
  machine_id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 EventDescriptor::machine_id() const {
  // @@protoc_insertion_point(field_get:firmament.EventDescriptor.machine_id)
  return machine_id_;
}
inline void EventDescriptor::set_machine_id(::google::protobuf::uint64 value) {
  
  machine_id_ = value;
  // @@protoc_insertion_point(field_set:firmament.EventDescriptor.machine_id)
}

// optional uint64 task_index = 3;
inline void EventDescriptor::clear_task_index() {
  task_index_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 EventDescriptor::task_index() const {
  // @@protoc_insertion_point(field_get:firmament.EventDescriptor.task_index)
  return task_index_;
}
inline void EventDescriptor::set_task_index(::google::protobuf::uint64 value) {
  
  task_index_ = value;
  // @@protoc_insertion_point(field_set:firmament.EventDescriptor.task_index)
}

// optional uint64 job_id = 4;
inline void EventDescriptor::clear_job_id() {
  job_id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 EventDescriptor::job_id() const {
  // @@protoc_insertion_point(field_get:firmament.EventDescriptor.job_id)
  return job_id_;
}
inline void EventDescriptor::set_job_id(::google::protobuf::uint64 value) {
  
  job_id_ = value;
  // @@protoc_insertion_point(field_set:firmament.EventDescriptor.job_id)
}

// optional float requested_cpu_cores = 5;
inline void EventDescriptor::clear_requested_cpu_cores() {
  requested_cpu_cores_ = 0;
}
inline float EventDescriptor::requested_cpu_cores() const {
  // @@protoc_insertion_point(field_get:firmament.EventDescriptor.requested_cpu_cores)
  return requested_cpu_cores_;
}
inline void EventDescriptor::set_requested_cpu_cores(float value) {
  
  requested_cpu_cores_ = value;
  // @@protoc_insertion_point(field_set:firmament.EventDescriptor.requested_cpu_cores)
}

// optional uint64 requested_ram = 6;
inline void EventDescriptor::clear_requested_ram() {
  requested_ram_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 EventDescriptor::requested_ram() const {
  // @@protoc_insertion_point(field_get:firmament.EventDescriptor.requested_ram)
  return requested_ram_;
}
inline void EventDescriptor::set_requested_ram(::google::protobuf::uint64 value) {
  
  requested_ram_ = value;
  // @@protoc_insertion_point(field_set:firmament.EventDescriptor.requested_ram)
}

// optional uint32 priority = 7;
inline void EventDescriptor::clear_priority() {
  priority_ = 0u;
}
inline ::google::protobuf::uint32 EventDescriptor::priority() const {
  // @@protoc_insertion_point(field_get:firmament.EventDescriptor.priority)
  return priority_;
}
inline void EventDescriptor::set_priority(::google::protobuf::uint32 value) {
  
  priority_ = value;
  // @@protoc_insertion_point(field_set:firmament.EventDescriptor.priority)
}

// optional uint32 scheduling_class = 8;
inline void EventDescriptor::clear_scheduling_class() {
  scheduling_class_ = 0u;
}
inline ::google::protobuf::uint32 EventDescriptor::scheduling_class() const {
  // @@protoc_insertion_point(field_get:firmament.EventDescriptor.scheduling_class)
  return scheduling_class_;
}
inline void EventDescriptor::set_scheduling_class(::google::protobuf::uint32 value) {
  
  scheduling_class_ = value;
  // @@protoc_insertion_point(field_set:firmament.EventDescriptor.scheduling_class)
}

inline const EventDescriptor* EventDescriptor::internal_default_instance() {
  return &EventDescriptor_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace firmament

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::firmament::EventDescriptor_EventType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::firmament::EventDescriptor_EventType>() {
  return ::firmament::EventDescriptor_EventType_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_sim_2fevent_5fdesc_2eproto__INCLUDED
