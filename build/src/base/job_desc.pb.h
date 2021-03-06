// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: base/job_desc.proto

#ifndef PROTOBUF_base_2fjob_5fdesc_2eproto__INCLUDED
#define PROTOBUF_base_2fjob_5fdesc_2eproto__INCLUDED

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
#include "base/task_desc.pb.h"
// @@protoc_insertion_point(includes)

namespace firmament {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_base_2fjob_5fdesc_2eproto();
void protobuf_InitDefaults_base_2fjob_5fdesc_2eproto();
void protobuf_AssignDesc_base_2fjob_5fdesc_2eproto();
void protobuf_ShutdownFile_base_2fjob_5fdesc_2eproto();

class JobDescriptor;

enum JobDescriptor_JobState {
  JobDescriptor_JobState_NEW = 0,
  JobDescriptor_JobState_CREATED = 1,
  JobDescriptor_JobState_RUNNING = 2,
  JobDescriptor_JobState_COMPLETED = 3,
  JobDescriptor_JobState_FAILED = 4,
  JobDescriptor_JobState_ABORTED = 5,
  JobDescriptor_JobState_UNKNOWN = 6,
  JobDescriptor_JobState_JobDescriptor_JobState_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  JobDescriptor_JobState_JobDescriptor_JobState_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool JobDescriptor_JobState_IsValid(int value);
const JobDescriptor_JobState JobDescriptor_JobState_JobState_MIN = JobDescriptor_JobState_NEW;
const JobDescriptor_JobState JobDescriptor_JobState_JobState_MAX = JobDescriptor_JobState_UNKNOWN;
const int JobDescriptor_JobState_JobState_ARRAYSIZE = JobDescriptor_JobState_JobState_MAX + 1;

const ::google::protobuf::EnumDescriptor* JobDescriptor_JobState_descriptor();
inline const ::std::string& JobDescriptor_JobState_Name(JobDescriptor_JobState value) {
  return ::google::protobuf::internal::NameOfEnum(
    JobDescriptor_JobState_descriptor(), value);
}
inline bool JobDescriptor_JobState_Parse(
    const ::std::string& name, JobDescriptor_JobState* value) {
  return ::google::protobuf::internal::ParseNamedEnum<JobDescriptor_JobState>(
    JobDescriptor_JobState_descriptor(), name, value);
}
// ===================================================================

class JobDescriptor : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:firmament.JobDescriptor) */ {
 public:
  JobDescriptor();
  virtual ~JobDescriptor();

  JobDescriptor(const JobDescriptor& from);

  inline JobDescriptor& operator=(const JobDescriptor& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const JobDescriptor& default_instance();

  static const JobDescriptor* internal_default_instance();

  void Swap(JobDescriptor* other);

  // implements Message ----------------------------------------------

  inline JobDescriptor* New() const { return New(NULL); }

  JobDescriptor* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const JobDescriptor& from);
  void MergeFrom(const JobDescriptor& from);
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
  void InternalSwap(JobDescriptor* other);
  void UnsafeMergeFrom(const JobDescriptor& from);
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

  typedef JobDescriptor_JobState JobState;
  static const JobState NEW =
    JobDescriptor_JobState_NEW;
  static const JobState CREATED =
    JobDescriptor_JobState_CREATED;
  static const JobState RUNNING =
    JobDescriptor_JobState_RUNNING;
  static const JobState COMPLETED =
    JobDescriptor_JobState_COMPLETED;
  static const JobState FAILED =
    JobDescriptor_JobState_FAILED;
  static const JobState ABORTED =
    JobDescriptor_JobState_ABORTED;
  static const JobState UNKNOWN =
    JobDescriptor_JobState_UNKNOWN;
  static inline bool JobState_IsValid(int value) {
    return JobDescriptor_JobState_IsValid(value);
  }
  static const JobState JobState_MIN =
    JobDescriptor_JobState_JobState_MIN;
  static const JobState JobState_MAX =
    JobDescriptor_JobState_JobState_MAX;
  static const int JobState_ARRAYSIZE =
    JobDescriptor_JobState_JobState_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  JobState_descriptor() {
    return JobDescriptor_JobState_descriptor();
  }
  static inline const ::std::string& JobState_Name(JobState value) {
    return JobDescriptor_JobState_Name(value);
  }
  static inline bool JobState_Parse(const ::std::string& name,
      JobState* value) {
    return JobDescriptor_JobState_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional string uuid = 1;
  void clear_uuid();
  static const int kUuidFieldNumber = 1;
  const ::std::string& uuid() const;
  void set_uuid(const ::std::string& value);
  void set_uuid(const char* value);
  void set_uuid(const char* value, size_t size);
  ::std::string* mutable_uuid();
  ::std::string* release_uuid();
  void set_allocated_uuid(::std::string* uuid);

  // optional string name = 2;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional .firmament.JobDescriptor.JobState state = 3;
  void clear_state();
  static const int kStateFieldNumber = 3;
  ::firmament::JobDescriptor_JobState state() const;
  void set_state(::firmament::JobDescriptor_JobState value);

  // optional .firmament.TaskDescriptor root_task = 4;
  bool has_root_task() const;
  void clear_root_task();
  static const int kRootTaskFieldNumber = 4;
  const ::firmament::TaskDescriptor& root_task() const;
  ::firmament::TaskDescriptor* mutable_root_task();
  ::firmament::TaskDescriptor* release_root_task();
  void set_allocated_root_task(::firmament::TaskDescriptor* root_task);

  // repeated bytes output_ids = 5;
  int output_ids_size() const;
  void clear_output_ids();
  static const int kOutputIdsFieldNumber = 5;
  const ::std::string& output_ids(int index) const;
  ::std::string* mutable_output_ids(int index);
  void set_output_ids(int index, const ::std::string& value);
  void set_output_ids(int index, const char* value);
  void set_output_ids(int index, const void* value, size_t size);
  ::std::string* add_output_ids();
  void add_output_ids(const ::std::string& value);
  void add_output_ids(const char* value);
  void add_output_ids(const void* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& output_ids() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_output_ids();

  // @@protoc_insertion_point(class_scope:firmament.JobDescriptor)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::std::string> output_ids_;
  ::google::protobuf::internal::ArenaStringPtr uuid_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::firmament::TaskDescriptor* root_task_;
  int state_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_base_2fjob_5fdesc_2eproto_impl();
  friend void  protobuf_AddDesc_base_2fjob_5fdesc_2eproto_impl();
  friend void protobuf_AssignDesc_base_2fjob_5fdesc_2eproto();
  friend void protobuf_ShutdownFile_base_2fjob_5fdesc_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<JobDescriptor> JobDescriptor_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// JobDescriptor

// optional string uuid = 1;
inline void JobDescriptor::clear_uuid() {
  uuid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& JobDescriptor::uuid() const {
  // @@protoc_insertion_point(field_get:firmament.JobDescriptor.uuid)
  return uuid_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void JobDescriptor::set_uuid(const ::std::string& value) {
  
  uuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:firmament.JobDescriptor.uuid)
}
inline void JobDescriptor::set_uuid(const char* value) {
  
  uuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:firmament.JobDescriptor.uuid)
}
inline void JobDescriptor::set_uuid(const char* value, size_t size) {
  
  uuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:firmament.JobDescriptor.uuid)
}
inline ::std::string* JobDescriptor::mutable_uuid() {
  
  // @@protoc_insertion_point(field_mutable:firmament.JobDescriptor.uuid)
  return uuid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* JobDescriptor::release_uuid() {
  // @@protoc_insertion_point(field_release:firmament.JobDescriptor.uuid)
  
  return uuid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void JobDescriptor::set_allocated_uuid(::std::string* uuid) {
  if (uuid != NULL) {
    
  } else {
    
  }
  uuid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), uuid);
  // @@protoc_insertion_point(field_set_allocated:firmament.JobDescriptor.uuid)
}

// optional string name = 2;
inline void JobDescriptor::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& JobDescriptor::name() const {
  // @@protoc_insertion_point(field_get:firmament.JobDescriptor.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void JobDescriptor::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:firmament.JobDescriptor.name)
}
inline void JobDescriptor::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:firmament.JobDescriptor.name)
}
inline void JobDescriptor::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:firmament.JobDescriptor.name)
}
inline ::std::string* JobDescriptor::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:firmament.JobDescriptor.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* JobDescriptor::release_name() {
  // @@protoc_insertion_point(field_release:firmament.JobDescriptor.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void JobDescriptor::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:firmament.JobDescriptor.name)
}

// optional .firmament.JobDescriptor.JobState state = 3;
inline void JobDescriptor::clear_state() {
  state_ = 0;
}
inline ::firmament::JobDescriptor_JobState JobDescriptor::state() const {
  // @@protoc_insertion_point(field_get:firmament.JobDescriptor.state)
  return static_cast< ::firmament::JobDescriptor_JobState >(state_);
}
inline void JobDescriptor::set_state(::firmament::JobDescriptor_JobState value) {
  
  state_ = value;
  // @@protoc_insertion_point(field_set:firmament.JobDescriptor.state)
}

// optional .firmament.TaskDescriptor root_task = 4;
inline bool JobDescriptor::has_root_task() const {
  return this != internal_default_instance() && root_task_ != NULL;
}
inline void JobDescriptor::clear_root_task() {
  if (GetArenaNoVirtual() == NULL && root_task_ != NULL) delete root_task_;
  root_task_ = NULL;
}
inline const ::firmament::TaskDescriptor& JobDescriptor::root_task() const {
  // @@protoc_insertion_point(field_get:firmament.JobDescriptor.root_task)
  return root_task_ != NULL ? *root_task_
                         : *::firmament::TaskDescriptor::internal_default_instance();
}
inline ::firmament::TaskDescriptor* JobDescriptor::mutable_root_task() {
  
  if (root_task_ == NULL) {
    root_task_ = new ::firmament::TaskDescriptor;
  }
  // @@protoc_insertion_point(field_mutable:firmament.JobDescriptor.root_task)
  return root_task_;
}
inline ::firmament::TaskDescriptor* JobDescriptor::release_root_task() {
  // @@protoc_insertion_point(field_release:firmament.JobDescriptor.root_task)
  
  ::firmament::TaskDescriptor* temp = root_task_;
  root_task_ = NULL;
  return temp;
}
inline void JobDescriptor::set_allocated_root_task(::firmament::TaskDescriptor* root_task) {
  delete root_task_;
  root_task_ = root_task;
  if (root_task) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:firmament.JobDescriptor.root_task)
}

// repeated bytes output_ids = 5;
inline int JobDescriptor::output_ids_size() const {
  return output_ids_.size();
}
inline void JobDescriptor::clear_output_ids() {
  output_ids_.Clear();
}
inline const ::std::string& JobDescriptor::output_ids(int index) const {
  // @@protoc_insertion_point(field_get:firmament.JobDescriptor.output_ids)
  return output_ids_.Get(index);
}
inline ::std::string* JobDescriptor::mutable_output_ids(int index) {
  // @@protoc_insertion_point(field_mutable:firmament.JobDescriptor.output_ids)
  return output_ids_.Mutable(index);
}
inline void JobDescriptor::set_output_ids(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:firmament.JobDescriptor.output_ids)
  output_ids_.Mutable(index)->assign(value);
}
inline void JobDescriptor::set_output_ids(int index, const char* value) {
  output_ids_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:firmament.JobDescriptor.output_ids)
}
inline void JobDescriptor::set_output_ids(int index, const void* value, size_t size) {
  output_ids_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:firmament.JobDescriptor.output_ids)
}
inline ::std::string* JobDescriptor::add_output_ids() {
  // @@protoc_insertion_point(field_add_mutable:firmament.JobDescriptor.output_ids)
  return output_ids_.Add();
}
inline void JobDescriptor::add_output_ids(const ::std::string& value) {
  output_ids_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:firmament.JobDescriptor.output_ids)
}
inline void JobDescriptor::add_output_ids(const char* value) {
  output_ids_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:firmament.JobDescriptor.output_ids)
}
inline void JobDescriptor::add_output_ids(const void* value, size_t size) {
  output_ids_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:firmament.JobDescriptor.output_ids)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
JobDescriptor::output_ids() const {
  // @@protoc_insertion_point(field_list:firmament.JobDescriptor.output_ids)
  return output_ids_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
JobDescriptor::mutable_output_ids() {
  // @@protoc_insertion_point(field_mutable_list:firmament.JobDescriptor.output_ids)
  return &output_ids_;
}

inline const JobDescriptor* JobDescriptor::internal_default_instance() {
  return &JobDescriptor_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace firmament

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::firmament::JobDescriptor_JobState> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::firmament::JobDescriptor_JobState>() {
  return ::firmament::JobDescriptor_JobState_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_base_2fjob_5fdesc_2eproto__INCLUDED
