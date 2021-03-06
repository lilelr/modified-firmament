// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: base/resource_stats.proto

#ifndef PROTOBUF_base_2fresource_5fstats_2eproto__INCLUDED
#define PROTOBUF_base_2fresource_5fstats_2eproto__INCLUDED

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
void protobuf_AddDesc_base_2fresource_5fstats_2eproto();
void protobuf_InitDefaults_base_2fresource_5fstats_2eproto();
void protobuf_AssignDesc_base_2fresource_5fstats_2eproto();
void protobuf_ShutdownFile_base_2fresource_5fstats_2eproto();

class CpuStats;
class ResourceStats;

// ===================================================================

class ResourceStats : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:firmament.ResourceStats) */ {
 public:
  ResourceStats();
  virtual ~ResourceStats();

  ResourceStats(const ResourceStats& from);

  inline ResourceStats& operator=(const ResourceStats& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ResourceStats& default_instance();

  static const ResourceStats* internal_default_instance();

  void Swap(ResourceStats* other);

  // implements Message ----------------------------------------------

  inline ResourceStats* New() const { return New(NULL); }

  ResourceStats* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ResourceStats& from);
  void MergeFrom(const ResourceStats& from);
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
  void InternalSwap(ResourceStats* other);
  void UnsafeMergeFrom(const ResourceStats& from);
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

  // optional string resource_id = 1;
  void clear_resource_id();
  static const int kResourceIdFieldNumber = 1;
  const ::std::string& resource_id() const;
  void set_resource_id(const ::std::string& value);
  void set_resource_id(const char* value);
  void set_resource_id(const char* value, size_t size);
  ::std::string* mutable_resource_id();
  ::std::string* release_resource_id();
  void set_allocated_resource_id(::std::string* resource_id);

  // optional uint64 timestamp = 2;
  void clear_timestamp();
  static const int kTimestampFieldNumber = 2;
  ::google::protobuf::uint64 timestamp() const;
  void set_timestamp(::google::protobuf::uint64 value);

  // repeated .firmament.CpuStats cpus_stats = 3;
  int cpus_stats_size() const;
  void clear_cpus_stats();
  static const int kCpusStatsFieldNumber = 3;
  const ::firmament::CpuStats& cpus_stats(int index) const;
  ::firmament::CpuStats* mutable_cpus_stats(int index);
  ::firmament::CpuStats* add_cpus_stats();
  ::google::protobuf::RepeatedPtrField< ::firmament::CpuStats >*
      mutable_cpus_stats();
  const ::google::protobuf::RepeatedPtrField< ::firmament::CpuStats >&
      cpus_stats() const;

  // optional int64 mem_allocatable = 4;
  void clear_mem_allocatable();
  static const int kMemAllocatableFieldNumber = 4;
  ::google::protobuf::int64 mem_allocatable() const;
  void set_mem_allocatable(::google::protobuf::int64 value);

  // optional int64 mem_capacity = 5;
  void clear_mem_capacity();
  static const int kMemCapacityFieldNumber = 5;
  ::google::protobuf::int64 mem_capacity() const;
  void set_mem_capacity(::google::protobuf::int64 value);

  // optional double mem_reservation = 6;
  void clear_mem_reservation();
  static const int kMemReservationFieldNumber = 6;
  double mem_reservation() const;
  void set_mem_reservation(double value);

  // optional double mem_utilization = 7;
  void clear_mem_utilization();
  static const int kMemUtilizationFieldNumber = 7;
  double mem_utilization() const;
  void set_mem_utilization(double value);

  // optional int64 disk_bw = 8;
  void clear_disk_bw();
  static const int kDiskBwFieldNumber = 8;
  ::google::protobuf::int64 disk_bw() const;
  void set_disk_bw(::google::protobuf::int64 value);

  // optional int64 net_rx_bw = 9;
  void clear_net_rx_bw();
  static const int kNetRxBwFieldNumber = 9;
  ::google::protobuf::int64 net_rx_bw() const;
  void set_net_rx_bw(::google::protobuf::int64 value);

  // optional int64 net_tx_bw = 10;
  void clear_net_tx_bw();
  static const int kNetTxBwFieldNumber = 10;
  ::google::protobuf::int64 net_tx_bw() const;
  void set_net_tx_bw(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:firmament.ResourceStats)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::firmament::CpuStats > cpus_stats_;
  ::google::protobuf::internal::ArenaStringPtr resource_id_;
  ::google::protobuf::uint64 timestamp_;
  ::google::protobuf::int64 mem_allocatable_;
  ::google::protobuf::int64 mem_capacity_;
  double mem_reservation_;
  double mem_utilization_;
  ::google::protobuf::int64 disk_bw_;
  ::google::protobuf::int64 net_rx_bw_;
  ::google::protobuf::int64 net_tx_bw_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_base_2fresource_5fstats_2eproto_impl();
  friend void  protobuf_AddDesc_base_2fresource_5fstats_2eproto_impl();
  friend void protobuf_AssignDesc_base_2fresource_5fstats_2eproto();
  friend void protobuf_ShutdownFile_base_2fresource_5fstats_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<ResourceStats> ResourceStats_default_instance_;

// -------------------------------------------------------------------

class CpuStats : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:firmament.CpuStats) */ {
 public:
  CpuStats();
  virtual ~CpuStats();

  CpuStats(const CpuStats& from);

  inline CpuStats& operator=(const CpuStats& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CpuStats& default_instance();

  static const CpuStats* internal_default_instance();

  void Swap(CpuStats* other);

  // implements Message ----------------------------------------------

  inline CpuStats* New() const { return New(NULL); }

  CpuStats* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CpuStats& from);
  void MergeFrom(const CpuStats& from);
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
  void InternalSwap(CpuStats* other);
  void UnsafeMergeFrom(const CpuStats& from);
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

  // optional int64 cpu_allocatable = 1;
  void clear_cpu_allocatable();
  static const int kCpuAllocatableFieldNumber = 1;
  ::google::protobuf::int64 cpu_allocatable() const;
  void set_cpu_allocatable(::google::protobuf::int64 value);

  // optional int64 cpu_capacity = 2;
  void clear_cpu_capacity();
  static const int kCpuCapacityFieldNumber = 2;
  ::google::protobuf::int64 cpu_capacity() const;
  void set_cpu_capacity(::google::protobuf::int64 value);

  // optional double cpu_reservation = 3;
  void clear_cpu_reservation();
  static const int kCpuReservationFieldNumber = 3;
  double cpu_reservation() const;
  void set_cpu_reservation(double value);

  // optional double cpu_utilization = 4;
  void clear_cpu_utilization();
  static const int kCpuUtilizationFieldNumber = 4;
  double cpu_utilization() const;
  void set_cpu_utilization(double value);

  // @@protoc_insertion_point(class_scope:firmament.CpuStats)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int64 cpu_allocatable_;
  ::google::protobuf::int64 cpu_capacity_;
  double cpu_reservation_;
  double cpu_utilization_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_base_2fresource_5fstats_2eproto_impl();
  friend void  protobuf_AddDesc_base_2fresource_5fstats_2eproto_impl();
  friend void protobuf_AssignDesc_base_2fresource_5fstats_2eproto();
  friend void protobuf_ShutdownFile_base_2fresource_5fstats_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<CpuStats> CpuStats_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ResourceStats

// optional string resource_id = 1;
inline void ResourceStats::clear_resource_id() {
  resource_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ResourceStats::resource_id() const {
  // @@protoc_insertion_point(field_get:firmament.ResourceStats.resource_id)
  return resource_id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ResourceStats::set_resource_id(const ::std::string& value) {
  
  resource_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:firmament.ResourceStats.resource_id)
}
inline void ResourceStats::set_resource_id(const char* value) {
  
  resource_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:firmament.ResourceStats.resource_id)
}
inline void ResourceStats::set_resource_id(const char* value, size_t size) {
  
  resource_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:firmament.ResourceStats.resource_id)
}
inline ::std::string* ResourceStats::mutable_resource_id() {
  
  // @@protoc_insertion_point(field_mutable:firmament.ResourceStats.resource_id)
  return resource_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ResourceStats::release_resource_id() {
  // @@protoc_insertion_point(field_release:firmament.ResourceStats.resource_id)
  
  return resource_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ResourceStats::set_allocated_resource_id(::std::string* resource_id) {
  if (resource_id != NULL) {
    
  } else {
    
  }
  resource_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), resource_id);
  // @@protoc_insertion_point(field_set_allocated:firmament.ResourceStats.resource_id)
}

// optional uint64 timestamp = 2;
inline void ResourceStats::clear_timestamp() {
  timestamp_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 ResourceStats::timestamp() const {
  // @@protoc_insertion_point(field_get:firmament.ResourceStats.timestamp)
  return timestamp_;
}
inline void ResourceStats::set_timestamp(::google::protobuf::uint64 value) {
  
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:firmament.ResourceStats.timestamp)
}

// repeated .firmament.CpuStats cpus_stats = 3;
inline int ResourceStats::cpus_stats_size() const {
  return cpus_stats_.size();
}
inline void ResourceStats::clear_cpus_stats() {
  cpus_stats_.Clear();
}
inline const ::firmament::CpuStats& ResourceStats::cpus_stats(int index) const {
  // @@protoc_insertion_point(field_get:firmament.ResourceStats.cpus_stats)
  return cpus_stats_.Get(index);
}
inline ::firmament::CpuStats* ResourceStats::mutable_cpus_stats(int index) {
  // @@protoc_insertion_point(field_mutable:firmament.ResourceStats.cpus_stats)
  return cpus_stats_.Mutable(index);
}
inline ::firmament::CpuStats* ResourceStats::add_cpus_stats() {
  // @@protoc_insertion_point(field_add:firmament.ResourceStats.cpus_stats)
  return cpus_stats_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::firmament::CpuStats >*
ResourceStats::mutable_cpus_stats() {
  // @@protoc_insertion_point(field_mutable_list:firmament.ResourceStats.cpus_stats)
  return &cpus_stats_;
}
inline const ::google::protobuf::RepeatedPtrField< ::firmament::CpuStats >&
ResourceStats::cpus_stats() const {
  // @@protoc_insertion_point(field_list:firmament.ResourceStats.cpus_stats)
  return cpus_stats_;
}

// optional int64 mem_allocatable = 4;
inline void ResourceStats::clear_mem_allocatable() {
  mem_allocatable_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ResourceStats::mem_allocatable() const {
  // @@protoc_insertion_point(field_get:firmament.ResourceStats.mem_allocatable)
  return mem_allocatable_;
}
inline void ResourceStats::set_mem_allocatable(::google::protobuf::int64 value) {
  
  mem_allocatable_ = value;
  // @@protoc_insertion_point(field_set:firmament.ResourceStats.mem_allocatable)
}

// optional int64 mem_capacity = 5;
inline void ResourceStats::clear_mem_capacity() {
  mem_capacity_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ResourceStats::mem_capacity() const {
  // @@protoc_insertion_point(field_get:firmament.ResourceStats.mem_capacity)
  return mem_capacity_;
}
inline void ResourceStats::set_mem_capacity(::google::protobuf::int64 value) {
  
  mem_capacity_ = value;
  // @@protoc_insertion_point(field_set:firmament.ResourceStats.mem_capacity)
}

// optional double mem_reservation = 6;
inline void ResourceStats::clear_mem_reservation() {
  mem_reservation_ = 0;
}
inline double ResourceStats::mem_reservation() const {
  // @@protoc_insertion_point(field_get:firmament.ResourceStats.mem_reservation)
  return mem_reservation_;
}
inline void ResourceStats::set_mem_reservation(double value) {
  
  mem_reservation_ = value;
  // @@protoc_insertion_point(field_set:firmament.ResourceStats.mem_reservation)
}

// optional double mem_utilization = 7;
inline void ResourceStats::clear_mem_utilization() {
  mem_utilization_ = 0;
}
inline double ResourceStats::mem_utilization() const {
  // @@protoc_insertion_point(field_get:firmament.ResourceStats.mem_utilization)
  return mem_utilization_;
}
inline void ResourceStats::set_mem_utilization(double value) {
  
  mem_utilization_ = value;
  // @@protoc_insertion_point(field_set:firmament.ResourceStats.mem_utilization)
}

// optional int64 disk_bw = 8;
inline void ResourceStats::clear_disk_bw() {
  disk_bw_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ResourceStats::disk_bw() const {
  // @@protoc_insertion_point(field_get:firmament.ResourceStats.disk_bw)
  return disk_bw_;
}
inline void ResourceStats::set_disk_bw(::google::protobuf::int64 value) {
  
  disk_bw_ = value;
  // @@protoc_insertion_point(field_set:firmament.ResourceStats.disk_bw)
}

// optional int64 net_rx_bw = 9;
inline void ResourceStats::clear_net_rx_bw() {
  net_rx_bw_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ResourceStats::net_rx_bw() const {
  // @@protoc_insertion_point(field_get:firmament.ResourceStats.net_rx_bw)
  return net_rx_bw_;
}
inline void ResourceStats::set_net_rx_bw(::google::protobuf::int64 value) {
  
  net_rx_bw_ = value;
  // @@protoc_insertion_point(field_set:firmament.ResourceStats.net_rx_bw)
}

// optional int64 net_tx_bw = 10;
inline void ResourceStats::clear_net_tx_bw() {
  net_tx_bw_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ResourceStats::net_tx_bw() const {
  // @@protoc_insertion_point(field_get:firmament.ResourceStats.net_tx_bw)
  return net_tx_bw_;
}
inline void ResourceStats::set_net_tx_bw(::google::protobuf::int64 value) {
  
  net_tx_bw_ = value;
  // @@protoc_insertion_point(field_set:firmament.ResourceStats.net_tx_bw)
}

inline const ResourceStats* ResourceStats::internal_default_instance() {
  return &ResourceStats_default_instance_.get();
}
// -------------------------------------------------------------------

// CpuStats

// optional int64 cpu_allocatable = 1;
inline void CpuStats::clear_cpu_allocatable() {
  cpu_allocatable_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 CpuStats::cpu_allocatable() const {
  // @@protoc_insertion_point(field_get:firmament.CpuStats.cpu_allocatable)
  return cpu_allocatable_;
}
inline void CpuStats::set_cpu_allocatable(::google::protobuf::int64 value) {
  
  cpu_allocatable_ = value;
  // @@protoc_insertion_point(field_set:firmament.CpuStats.cpu_allocatable)
}

// optional int64 cpu_capacity = 2;
inline void CpuStats::clear_cpu_capacity() {
  cpu_capacity_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 CpuStats::cpu_capacity() const {
  // @@protoc_insertion_point(field_get:firmament.CpuStats.cpu_capacity)
  return cpu_capacity_;
}
inline void CpuStats::set_cpu_capacity(::google::protobuf::int64 value) {
  
  cpu_capacity_ = value;
  // @@protoc_insertion_point(field_set:firmament.CpuStats.cpu_capacity)
}

// optional double cpu_reservation = 3;
inline void CpuStats::clear_cpu_reservation() {
  cpu_reservation_ = 0;
}
inline double CpuStats::cpu_reservation() const {
  // @@protoc_insertion_point(field_get:firmament.CpuStats.cpu_reservation)
  return cpu_reservation_;
}
inline void CpuStats::set_cpu_reservation(double value) {
  
  cpu_reservation_ = value;
  // @@protoc_insertion_point(field_set:firmament.CpuStats.cpu_reservation)
}

// optional double cpu_utilization = 4;
inline void CpuStats::clear_cpu_utilization() {
  cpu_utilization_ = 0;
}
inline double CpuStats::cpu_utilization() const {
  // @@protoc_insertion_point(field_get:firmament.CpuStats.cpu_utilization)
  return cpu_utilization_;
}
inline void CpuStats::set_cpu_utilization(double value) {
  
  cpu_utilization_ = value;
  // @@protoc_insertion_point(field_set:firmament.CpuStats.cpu_utilization)
}

inline const CpuStats* CpuStats::internal_default_instance() {
  return &CpuStats_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace firmament

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_base_2fresource_5fstats_2eproto__INCLUDED
