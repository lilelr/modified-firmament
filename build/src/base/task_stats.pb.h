// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: base/task_stats.proto

#ifndef PROTOBUF_base_2ftask_5fstats_2eproto__INCLUDED
#define PROTOBUF_base_2ftask_5fstats_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace firmament {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_base_2ftask_5fstats_2eproto();
void protobuf_InitDefaults_base_2ftask_5fstats_2eproto();
void protobuf_AssignDesc_base_2ftask_5fstats_2eproto();
void protobuf_ShutdownFile_base_2ftask_5fstats_2eproto();

class TaskStats;

// ===================================================================

class TaskStats : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:firmament.TaskStats) */ {
 public:
  TaskStats();
  virtual ~TaskStats();

  TaskStats(const TaskStats& from);

  inline TaskStats& operator=(const TaskStats& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const TaskStats& default_instance();

  static const TaskStats* internal_default_instance();

  void Swap(TaskStats* other);

  // implements Message ----------------------------------------------

  inline TaskStats* New() const { return New(NULL); }

  TaskStats* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TaskStats& from);
  void MergeFrom(const TaskStats& from);
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
  void InternalSwap(TaskStats* other);
  void UnsafeMergeFrom(const TaskStats& from);
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

  // optional string hostname = 2;
  void clear_hostname();
  static const int kHostnameFieldNumber = 2;
  const ::std::string& hostname() const;
  void set_hostname(const ::std::string& value);
  void set_hostname(const char* value);
  void set_hostname(const char* value, size_t size);
  ::std::string* mutable_hostname();
  ::std::string* release_hostname();
  void set_allocated_hostname(::std::string* hostname);

  // optional uint64 timestamp = 3;
  void clear_timestamp();
  static const int kTimestampFieldNumber = 3;
  ::google::protobuf::uint64 timestamp() const;
  void set_timestamp(::google::protobuf::uint64 value);

  // optional int64 cpu_limit = 4;
  void clear_cpu_limit();
  static const int kCpuLimitFieldNumber = 4;
  ::google::protobuf::int64 cpu_limit() const;
  void set_cpu_limit(::google::protobuf::int64 value);

  // optional int64 cpu_request = 5;
  void clear_cpu_request();
  static const int kCpuRequestFieldNumber = 5;
  ::google::protobuf::int64 cpu_request() const;
  void set_cpu_request(::google::protobuf::int64 value);

  // optional int64 cpu_usage = 6;
  void clear_cpu_usage();
  static const int kCpuUsageFieldNumber = 6;
  ::google::protobuf::int64 cpu_usage() const;
  void set_cpu_usage(::google::protobuf::int64 value);

  // optional int64 mem_limit = 7;
  void clear_mem_limit();
  static const int kMemLimitFieldNumber = 7;
  ::google::protobuf::int64 mem_limit() const;
  void set_mem_limit(::google::protobuf::int64 value);

  // optional int64 mem_request = 8;
  void clear_mem_request();
  static const int kMemRequestFieldNumber = 8;
  ::google::protobuf::int64 mem_request() const;
  void set_mem_request(::google::protobuf::int64 value);

  // optional int64 mem_usage = 9;
  void clear_mem_usage();
  static const int kMemUsageFieldNumber = 9;
  ::google::protobuf::int64 mem_usage() const;
  void set_mem_usage(::google::protobuf::int64 value);

  // optional int64 mem_rss = 10;
  void clear_mem_rss();
  static const int kMemRssFieldNumber = 10;
  ::google::protobuf::int64 mem_rss() const;
  void set_mem_rss(::google::protobuf::int64 value);

  // optional int64 mem_cache = 11;
  void clear_mem_cache();
  static const int kMemCacheFieldNumber = 11;
  ::google::protobuf::int64 mem_cache() const;
  void set_mem_cache(::google::protobuf::int64 value);

  // optional int64 mem_working_set = 12;
  void clear_mem_working_set();
  static const int kMemWorkingSetFieldNumber = 12;
  ::google::protobuf::int64 mem_working_set() const;
  void set_mem_working_set(::google::protobuf::int64 value);

  // optional int64 mem_page_faults = 13;
  void clear_mem_page_faults();
  static const int kMemPageFaultsFieldNumber = 13;
  ::google::protobuf::int64 mem_page_faults() const;
  void set_mem_page_faults(::google::protobuf::int64 value);

  // optional double mem_page_faults_rate = 14;
  void clear_mem_page_faults_rate();
  static const int kMemPageFaultsRateFieldNumber = 14;
  double mem_page_faults_rate() const;
  void set_mem_page_faults_rate(double value);

  // optional int64 major_page_faults = 15;
  void clear_major_page_faults();
  static const int kMajorPageFaultsFieldNumber = 15;
  ::google::protobuf::int64 major_page_faults() const;
  void set_major_page_faults(::google::protobuf::int64 value);

  // optional double major_page_faults_rate = 16;
  void clear_major_page_faults_rate();
  static const int kMajorPageFaultsRateFieldNumber = 16;
  double major_page_faults_rate() const;
  void set_major_page_faults_rate(double value);

  // optional int64 net_rx = 17;
  void clear_net_rx();
  static const int kNetRxFieldNumber = 17;
  ::google::protobuf::int64 net_rx() const;
  void set_net_rx(::google::protobuf::int64 value);

  // optional int64 net_rx_errors = 18;
  void clear_net_rx_errors();
  static const int kNetRxErrorsFieldNumber = 18;
  ::google::protobuf::int64 net_rx_errors() const;
  void set_net_rx_errors(::google::protobuf::int64 value);

  // optional double net_rx_errors_rate = 19;
  void clear_net_rx_errors_rate();
  static const int kNetRxErrorsRateFieldNumber = 19;
  double net_rx_errors_rate() const;
  void set_net_rx_errors_rate(double value);

  // optional double net_rx_rate = 20;
  void clear_net_rx_rate();
  static const int kNetRxRateFieldNumber = 20;
  double net_rx_rate() const;
  void set_net_rx_rate(double value);

  // optional int64 net_tx = 21;
  void clear_net_tx();
  static const int kNetTxFieldNumber = 21;
  ::google::protobuf::int64 net_tx() const;
  void set_net_tx(::google::protobuf::int64 value);

  // optional int64 net_tx_errors = 22;
  void clear_net_tx_errors();
  static const int kNetTxErrorsFieldNumber = 22;
  ::google::protobuf::int64 net_tx_errors() const;
  void set_net_tx_errors(::google::protobuf::int64 value);

  // optional double net_tx_errors_rate = 23;
  void clear_net_tx_errors_rate();
  static const int kNetTxErrorsRateFieldNumber = 23;
  double net_tx_errors_rate() const;
  void set_net_tx_errors_rate(double value);

  // optional double net_tx_rate = 24;
  void clear_net_tx_rate();
  static const int kNetTxRateFieldNumber = 24;
  double net_tx_rate() const;
  void set_net_tx_rate(double value);

  // @@protoc_insertion_point(class_scope:firmament.TaskStats)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr hostname_;
  ::google::protobuf::uint64 task_id_;
  ::google::protobuf::uint64 timestamp_;
  ::google::protobuf::int64 cpu_limit_;
  ::google::protobuf::int64 cpu_request_;
  ::google::protobuf::int64 cpu_usage_;
  ::google::protobuf::int64 mem_limit_;
  ::google::protobuf::int64 mem_request_;
  ::google::protobuf::int64 mem_usage_;
  ::google::protobuf::int64 mem_rss_;
  ::google::protobuf::int64 mem_cache_;
  ::google::protobuf::int64 mem_working_set_;
  ::google::protobuf::int64 mem_page_faults_;
  double mem_page_faults_rate_;
  ::google::protobuf::int64 major_page_faults_;
  double major_page_faults_rate_;
  ::google::protobuf::int64 net_rx_;
  ::google::protobuf::int64 net_rx_errors_;
  double net_rx_errors_rate_;
  double net_rx_rate_;
  ::google::protobuf::int64 net_tx_;
  ::google::protobuf::int64 net_tx_errors_;
  double net_tx_errors_rate_;
  double net_tx_rate_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_base_2ftask_5fstats_2eproto_impl();
  friend void  protobuf_AddDesc_base_2ftask_5fstats_2eproto_impl();
  friend void protobuf_AssignDesc_base_2ftask_5fstats_2eproto();
  friend void protobuf_ShutdownFile_base_2ftask_5fstats_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<TaskStats> TaskStats_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// TaskStats

// optional uint64 task_id = 1;
inline void TaskStats::clear_task_id() {
  task_id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 TaskStats::task_id() const {
  // @@protoc_insertion_point(field_get:firmament.TaskStats.task_id)
  return task_id_;
}
inline void TaskStats::set_task_id(::google::protobuf::uint64 value) {
  
  task_id_ = value;
  // @@protoc_insertion_point(field_set:firmament.TaskStats.task_id)
}

// optional string hostname = 2;
inline void TaskStats::clear_hostname() {
  hostname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& TaskStats::hostname() const {
  // @@protoc_insertion_point(field_get:firmament.TaskStats.hostname)
  return hostname_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TaskStats::set_hostname(const ::std::string& value) {
  
  hostname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:firmament.TaskStats.hostname)
}
inline void TaskStats::set_hostname(const char* value) {
  
  hostname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:firmament.TaskStats.hostname)
}
inline void TaskStats::set_hostname(const char* value, size_t size) {
  
  hostname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:firmament.TaskStats.hostname)
}
inline ::std::string* TaskStats::mutable_hostname() {
  
  // @@protoc_insertion_point(field_mutable:firmament.TaskStats.hostname)
  return hostname_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TaskStats::release_hostname() {
  // @@protoc_insertion_point(field_release:firmament.TaskStats.hostname)
  
  return hostname_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TaskStats::set_allocated_hostname(::std::string* hostname) {
  if (hostname != NULL) {
    
  } else {
    
  }
  hostname_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), hostname);
  // @@protoc_insertion_point(field_set_allocated:firmament.TaskStats.hostname)
}

// optional uint64 timestamp = 3;
inline void TaskStats::clear_timestamp() {
  timestamp_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 TaskStats::timestamp() const {
  // @@protoc_insertion_point(field_get:firmament.TaskStats.timestamp)
  return timestamp_;
}
inline void TaskStats::set_timestamp(::google::protobuf::uint64 value) {
  
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:firmament.TaskStats.timestamp)
}

// optional int64 cpu_limit = 4;
inline void TaskStats::clear_cpu_limit() {
  cpu_limit_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 TaskStats::cpu_limit() const {
  // @@protoc_insertion_point(field_get:firmament.TaskStats.cpu_limit)
  return cpu_limit_;
}
inline void TaskStats::set_cpu_limit(::google::protobuf::int64 value) {
  
  cpu_limit_ = value;
  // @@protoc_insertion_point(field_set:firmament.TaskStats.cpu_limit)
}

// optional int64 cpu_request = 5;
inline void TaskStats::clear_cpu_request() {
  cpu_request_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 TaskStats::cpu_request() const {
  // @@protoc_insertion_point(field_get:firmament.TaskStats.cpu_request)
  return cpu_request_;
}
inline void TaskStats::set_cpu_request(::google::protobuf::int64 value) {
  
  cpu_request_ = value;
  // @@protoc_insertion_point(field_set:firmament.TaskStats.cpu_request)
}

// optional int64 cpu_usage = 6;
inline void TaskStats::clear_cpu_usage() {
  cpu_usage_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 TaskStats::cpu_usage() const {
  // @@protoc_insertion_point(field_get:firmament.TaskStats.cpu_usage)
  return cpu_usage_;
}
inline void TaskStats::set_cpu_usage(::google::protobuf::int64 value) {
  
  cpu_usage_ = value;
  // @@protoc_insertion_point(field_set:firmament.TaskStats.cpu_usage)
}

// optional int64 mem_limit = 7;
inline void TaskStats::clear_mem_limit() {
  mem_limit_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 TaskStats::mem_limit() const {
  // @@protoc_insertion_point(field_get:firmament.TaskStats.mem_limit)
  return mem_limit_;
}
inline void TaskStats::set_mem_limit(::google::protobuf::int64 value) {
  
  mem_limit_ = value;
  // @@protoc_insertion_point(field_set:firmament.TaskStats.mem_limit)
}

// optional int64 mem_request = 8;
inline void TaskStats::clear_mem_request() {
  mem_request_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 TaskStats::mem_request() const {
  // @@protoc_insertion_point(field_get:firmament.TaskStats.mem_request)
  return mem_request_;
}
inline void TaskStats::set_mem_request(::google::protobuf::int64 value) {
  
  mem_request_ = value;
  // @@protoc_insertion_point(field_set:firmament.TaskStats.mem_request)
}

// optional int64 mem_usage = 9;
inline void TaskStats::clear_mem_usage() {
  mem_usage_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 TaskStats::mem_usage() const {
  // @@protoc_insertion_point(field_get:firmament.TaskStats.mem_usage)
  return mem_usage_;
}
inline void TaskStats::set_mem_usage(::google::protobuf::int64 value) {
  
  mem_usage_ = value;
  // @@protoc_insertion_point(field_set:firmament.TaskStats.mem_usage)
}

// optional int64 mem_rss = 10;
inline void TaskStats::clear_mem_rss() {
  mem_rss_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 TaskStats::mem_rss() const {
  // @@protoc_insertion_point(field_get:firmament.TaskStats.mem_rss)
  return mem_rss_;
}
inline void TaskStats::set_mem_rss(::google::protobuf::int64 value) {
  
  mem_rss_ = value;
  // @@protoc_insertion_point(field_set:firmament.TaskStats.mem_rss)
}

// optional int64 mem_cache = 11;
inline void TaskStats::clear_mem_cache() {
  mem_cache_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 TaskStats::mem_cache() const {
  // @@protoc_insertion_point(field_get:firmament.TaskStats.mem_cache)
  return mem_cache_;
}
inline void TaskStats::set_mem_cache(::google::protobuf::int64 value) {
  
  mem_cache_ = value;
  // @@protoc_insertion_point(field_set:firmament.TaskStats.mem_cache)
}

// optional int64 mem_working_set = 12;
inline void TaskStats::clear_mem_working_set() {
  mem_working_set_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 TaskStats::mem_working_set() const {
  // @@protoc_insertion_point(field_get:firmament.TaskStats.mem_working_set)
  return mem_working_set_;
}
inline void TaskStats::set_mem_working_set(::google::protobuf::int64 value) {
  
  mem_working_set_ = value;
  // @@protoc_insertion_point(field_set:firmament.TaskStats.mem_working_set)
}

// optional int64 mem_page_faults = 13;
inline void TaskStats::clear_mem_page_faults() {
  mem_page_faults_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 TaskStats::mem_page_faults() const {
  // @@protoc_insertion_point(field_get:firmament.TaskStats.mem_page_faults)
  return mem_page_faults_;
}
inline void TaskStats::set_mem_page_faults(::google::protobuf::int64 value) {
  
  mem_page_faults_ = value;
  // @@protoc_insertion_point(field_set:firmament.TaskStats.mem_page_faults)
}

// optional double mem_page_faults_rate = 14;
inline void TaskStats::clear_mem_page_faults_rate() {
  mem_page_faults_rate_ = 0;
}
inline double TaskStats::mem_page_faults_rate() const {
  // @@protoc_insertion_point(field_get:firmament.TaskStats.mem_page_faults_rate)
  return mem_page_faults_rate_;
}
inline void TaskStats::set_mem_page_faults_rate(double value) {
  
  mem_page_faults_rate_ = value;
  // @@protoc_insertion_point(field_set:firmament.TaskStats.mem_page_faults_rate)
}

// optional int64 major_page_faults = 15;
inline void TaskStats::clear_major_page_faults() {
  major_page_faults_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 TaskStats::major_page_faults() const {
  // @@protoc_insertion_point(field_get:firmament.TaskStats.major_page_faults)
  return major_page_faults_;
}
inline void TaskStats::set_major_page_faults(::google::protobuf::int64 value) {
  
  major_page_faults_ = value;
  // @@protoc_insertion_point(field_set:firmament.TaskStats.major_page_faults)
}

// optional double major_page_faults_rate = 16;
inline void TaskStats::clear_major_page_faults_rate() {
  major_page_faults_rate_ = 0;
}
inline double TaskStats::major_page_faults_rate() const {
  // @@protoc_insertion_point(field_get:firmament.TaskStats.major_page_faults_rate)
  return major_page_faults_rate_;
}
inline void TaskStats::set_major_page_faults_rate(double value) {
  
  major_page_faults_rate_ = value;
  // @@protoc_insertion_point(field_set:firmament.TaskStats.major_page_faults_rate)
}

// optional int64 net_rx = 17;
inline void TaskStats::clear_net_rx() {
  net_rx_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 TaskStats::net_rx() const {
  // @@protoc_insertion_point(field_get:firmament.TaskStats.net_rx)
  return net_rx_;
}
inline void TaskStats::set_net_rx(::google::protobuf::int64 value) {
  
  net_rx_ = value;
  // @@protoc_insertion_point(field_set:firmament.TaskStats.net_rx)
}

// optional int64 net_rx_errors = 18;
inline void TaskStats::clear_net_rx_errors() {
  net_rx_errors_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 TaskStats::net_rx_errors() const {
  // @@protoc_insertion_point(field_get:firmament.TaskStats.net_rx_errors)
  return net_rx_errors_;
}
inline void TaskStats::set_net_rx_errors(::google::protobuf::int64 value) {
  
  net_rx_errors_ = value;
  // @@protoc_insertion_point(field_set:firmament.TaskStats.net_rx_errors)
}

// optional double net_rx_errors_rate = 19;
inline void TaskStats::clear_net_rx_errors_rate() {
  net_rx_errors_rate_ = 0;
}
inline double TaskStats::net_rx_errors_rate() const {
  // @@protoc_insertion_point(field_get:firmament.TaskStats.net_rx_errors_rate)
  return net_rx_errors_rate_;
}
inline void TaskStats::set_net_rx_errors_rate(double value) {
  
  net_rx_errors_rate_ = value;
  // @@protoc_insertion_point(field_set:firmament.TaskStats.net_rx_errors_rate)
}

// optional double net_rx_rate = 20;
inline void TaskStats::clear_net_rx_rate() {
  net_rx_rate_ = 0;
}
inline double TaskStats::net_rx_rate() const {
  // @@protoc_insertion_point(field_get:firmament.TaskStats.net_rx_rate)
  return net_rx_rate_;
}
inline void TaskStats::set_net_rx_rate(double value) {
  
  net_rx_rate_ = value;
  // @@protoc_insertion_point(field_set:firmament.TaskStats.net_rx_rate)
}

// optional int64 net_tx = 21;
inline void TaskStats::clear_net_tx() {
  net_tx_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 TaskStats::net_tx() const {
  // @@protoc_insertion_point(field_get:firmament.TaskStats.net_tx)
  return net_tx_;
}
inline void TaskStats::set_net_tx(::google::protobuf::int64 value) {
  
  net_tx_ = value;
  // @@protoc_insertion_point(field_set:firmament.TaskStats.net_tx)
}

// optional int64 net_tx_errors = 22;
inline void TaskStats::clear_net_tx_errors() {
  net_tx_errors_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 TaskStats::net_tx_errors() const {
  // @@protoc_insertion_point(field_get:firmament.TaskStats.net_tx_errors)
  return net_tx_errors_;
}
inline void TaskStats::set_net_tx_errors(::google::protobuf::int64 value) {
  
  net_tx_errors_ = value;
  // @@protoc_insertion_point(field_set:firmament.TaskStats.net_tx_errors)
}

// optional double net_tx_errors_rate = 23;
inline void TaskStats::clear_net_tx_errors_rate() {
  net_tx_errors_rate_ = 0;
}
inline double TaskStats::net_tx_errors_rate() const {
  // @@protoc_insertion_point(field_get:firmament.TaskStats.net_tx_errors_rate)
  return net_tx_errors_rate_;
}
inline void TaskStats::set_net_tx_errors_rate(double value) {
  
  net_tx_errors_rate_ = value;
  // @@protoc_insertion_point(field_set:firmament.TaskStats.net_tx_errors_rate)
}

// optional double net_tx_rate = 24;
inline void TaskStats::clear_net_tx_rate() {
  net_tx_rate_ = 0;
}
inline double TaskStats::net_tx_rate() const {
  // @@protoc_insertion_point(field_get:firmament.TaskStats.net_tx_rate)
  return net_tx_rate_;
}
inline void TaskStats::set_net_tx_rate(double value) {
  
  net_tx_rate_ = value;
  // @@protoc_insertion_point(field_set:firmament.TaskStats.net_tx_rate)
}

inline const TaskStats* TaskStats::internal_default_instance() {
  return &TaskStats_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace firmament

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_base_2ftask_5fstats_2eproto__INCLUDED
