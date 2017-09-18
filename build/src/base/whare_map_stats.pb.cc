// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: base/whare_map_stats.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "base/whare_map_stats.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace firmament {

namespace {

const ::google::protobuf::Descriptor* WhareMapStats_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  WhareMapStats_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_base_2fwhare_5fmap_5fstats_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_base_2fwhare_5fmap_5fstats_2eproto() {
  protobuf_AddDesc_base_2fwhare_5fmap_5fstats_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "base/whare_map_stats.proto");
  GOOGLE_CHECK(file != NULL);
  WhareMapStats_descriptor_ = file->message_type(0);
  static const int WhareMapStats_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WhareMapStats, num_idle_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WhareMapStats, num_devils_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WhareMapStats, num_rabbits_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WhareMapStats, num_sheep_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WhareMapStats, num_turtles_),
  };
  WhareMapStats_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      WhareMapStats_descriptor_,
      WhareMapStats::internal_default_instance(),
      WhareMapStats_offsets_,
      -1,
      -1,
      -1,
      sizeof(WhareMapStats),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WhareMapStats, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_base_2fwhare_5fmap_5fstats_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      WhareMapStats_descriptor_, WhareMapStats::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_base_2fwhare_5fmap_5fstats_2eproto() {
  WhareMapStats_default_instance_.Shutdown();
  delete WhareMapStats_reflection_;
}

void protobuf_InitDefaults_base_2fwhare_5fmap_5fstats_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  WhareMapStats_default_instance_.DefaultConstruct();
  WhareMapStats_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_base_2fwhare_5fmap_5fstats_2eproto_once_);
void protobuf_InitDefaults_base_2fwhare_5fmap_5fstats_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_base_2fwhare_5fmap_5fstats_2eproto_once_,
                 &protobuf_InitDefaults_base_2fwhare_5fmap_5fstats_2eproto_impl);
}
void protobuf_AddDesc_base_2fwhare_5fmap_5fstats_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_base_2fwhare_5fmap_5fstats_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\032base/whare_map_stats.proto\022\tfirmament\""
    "r\n\rWhareMapStats\022\020\n\010num_idle\030\001 \001(\004\022\022\n\nnu"
    "m_devils\030\002 \001(\004\022\023\n\013num_rabbits\030\003 \001(\004\022\021\n\tn"
    "um_sheep\030\004 \001(\004\022\023\n\013num_turtles\030\005 \001(\004b\006pro"
    "to3", 163);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "base/whare_map_stats.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_base_2fwhare_5fmap_5fstats_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_base_2fwhare_5fmap_5fstats_2eproto_once_);
void protobuf_AddDesc_base_2fwhare_5fmap_5fstats_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_base_2fwhare_5fmap_5fstats_2eproto_once_,
                 &protobuf_AddDesc_base_2fwhare_5fmap_5fstats_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_base_2fwhare_5fmap_5fstats_2eproto {
  StaticDescriptorInitializer_base_2fwhare_5fmap_5fstats_2eproto() {
    protobuf_AddDesc_base_2fwhare_5fmap_5fstats_2eproto();
  }
} static_descriptor_initializer_base_2fwhare_5fmap_5fstats_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int WhareMapStats::kNumIdleFieldNumber;
const int WhareMapStats::kNumDevilsFieldNumber;
const int WhareMapStats::kNumRabbitsFieldNumber;
const int WhareMapStats::kNumSheepFieldNumber;
const int WhareMapStats::kNumTurtlesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

WhareMapStats::WhareMapStats()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_base_2fwhare_5fmap_5fstats_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:firmament.WhareMapStats)
}

void WhareMapStats::InitAsDefaultInstance() {
}

WhareMapStats::WhareMapStats(const WhareMapStats& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:firmament.WhareMapStats)
}

void WhareMapStats::SharedCtor() {
  ::memset(&num_idle_, 0, reinterpret_cast<char*>(&num_turtles_) -
    reinterpret_cast<char*>(&num_idle_) + sizeof(num_turtles_));
  _cached_size_ = 0;
}

WhareMapStats::~WhareMapStats() {
  // @@protoc_insertion_point(destructor:firmament.WhareMapStats)
  SharedDtor();
}

void WhareMapStats::SharedDtor() {
}

void WhareMapStats::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* WhareMapStats::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return WhareMapStats_descriptor_;
}

const WhareMapStats& WhareMapStats::default_instance() {
  protobuf_InitDefaults_base_2fwhare_5fmap_5fstats_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<WhareMapStats> WhareMapStats_default_instance_;

WhareMapStats* WhareMapStats::New(::google::protobuf::Arena* arena) const {
  WhareMapStats* n = new WhareMapStats;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void WhareMapStats::Clear() {
// @@protoc_insertion_point(message_clear_start:firmament.WhareMapStats)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(WhareMapStats, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<WhareMapStats*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&(first), 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(num_idle_, num_turtles_);

#undef ZR_HELPER_
#undef ZR_

}

bool WhareMapStats::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:firmament.WhareMapStats)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint64 num_idle = 1;
      case 1: {
        if (tag == 8) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &num_idle_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_num_devils;
        break;
      }

      // optional uint64 num_devils = 2;
      case 2: {
        if (tag == 16) {
         parse_num_devils:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &num_devils_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_num_rabbits;
        break;
      }

      // optional uint64 num_rabbits = 3;
      case 3: {
        if (tag == 24) {
         parse_num_rabbits:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &num_rabbits_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_num_sheep;
        break;
      }

      // optional uint64 num_sheep = 4;
      case 4: {
        if (tag == 32) {
         parse_num_sheep:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &num_sheep_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_num_turtles;
        break;
      }

      // optional uint64 num_turtles = 5;
      case 5: {
        if (tag == 40) {
         parse_num_turtles:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &num_turtles_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:firmament.WhareMapStats)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:firmament.WhareMapStats)
  return false;
#undef DO_
}

void WhareMapStats::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:firmament.WhareMapStats)
  // optional uint64 num_idle = 1;
  if (this->num_idle() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->num_idle(), output);
  }

  // optional uint64 num_devils = 2;
  if (this->num_devils() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->num_devils(), output);
  }

  // optional uint64 num_rabbits = 3;
  if (this->num_rabbits() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->num_rabbits(), output);
  }

  // optional uint64 num_sheep = 4;
  if (this->num_sheep() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(4, this->num_sheep(), output);
  }

  // optional uint64 num_turtles = 5;
  if (this->num_turtles() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(5, this->num_turtles(), output);
  }

  // @@protoc_insertion_point(serialize_end:firmament.WhareMapStats)
}

::google::protobuf::uint8* WhareMapStats::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:firmament.WhareMapStats)
  // optional uint64 num_idle = 1;
  if (this->num_idle() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->num_idle(), target);
  }

  // optional uint64 num_devils = 2;
  if (this->num_devils() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->num_devils(), target);
  }

  // optional uint64 num_rabbits = 3;
  if (this->num_rabbits() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(3, this->num_rabbits(), target);
  }

  // optional uint64 num_sheep = 4;
  if (this->num_sheep() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(4, this->num_sheep(), target);
  }

  // optional uint64 num_turtles = 5;
  if (this->num_turtles() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(5, this->num_turtles(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:firmament.WhareMapStats)
  return target;
}

size_t WhareMapStats::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:firmament.WhareMapStats)
  size_t total_size = 0;

  // optional uint64 num_idle = 1;
  if (this->num_idle() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->num_idle());
  }

  // optional uint64 num_devils = 2;
  if (this->num_devils() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->num_devils());
  }

  // optional uint64 num_rabbits = 3;
  if (this->num_rabbits() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->num_rabbits());
  }

  // optional uint64 num_sheep = 4;
  if (this->num_sheep() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->num_sheep());
  }

  // optional uint64 num_turtles = 5;
  if (this->num_turtles() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->num_turtles());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void WhareMapStats::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:firmament.WhareMapStats)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const WhareMapStats* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const WhareMapStats>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:firmament.WhareMapStats)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:firmament.WhareMapStats)
    UnsafeMergeFrom(*source);
  }
}

void WhareMapStats::MergeFrom(const WhareMapStats& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:firmament.WhareMapStats)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void WhareMapStats::UnsafeMergeFrom(const WhareMapStats& from) {
  GOOGLE_DCHECK(&from != this);
  if (from.num_idle() != 0) {
    set_num_idle(from.num_idle());
  }
  if (from.num_devils() != 0) {
    set_num_devils(from.num_devils());
  }
  if (from.num_rabbits() != 0) {
    set_num_rabbits(from.num_rabbits());
  }
  if (from.num_sheep() != 0) {
    set_num_sheep(from.num_sheep());
  }
  if (from.num_turtles() != 0) {
    set_num_turtles(from.num_turtles());
  }
}

void WhareMapStats::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:firmament.WhareMapStats)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void WhareMapStats::CopyFrom(const WhareMapStats& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:firmament.WhareMapStats)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool WhareMapStats::IsInitialized() const {

  return true;
}

void WhareMapStats::Swap(WhareMapStats* other) {
  if (other == this) return;
  InternalSwap(other);
}
void WhareMapStats::InternalSwap(WhareMapStats* other) {
  std::swap(num_idle_, other->num_idle_);
  std::swap(num_devils_, other->num_devils_);
  std::swap(num_rabbits_, other->num_rabbits_);
  std::swap(num_sheep_, other->num_sheep_);
  std::swap(num_turtles_, other->num_turtles_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata WhareMapStats::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = WhareMapStats_descriptor_;
  metadata.reflection = WhareMapStats_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// WhareMapStats

// optional uint64 num_idle = 1;
void WhareMapStats::clear_num_idle() {
  num_idle_ = GOOGLE_ULONGLONG(0);
}
::google::protobuf::uint64 WhareMapStats::num_idle() const {
  // @@protoc_insertion_point(field_get:firmament.WhareMapStats.num_idle)
  return num_idle_;
}
void WhareMapStats::set_num_idle(::google::protobuf::uint64 value) {
  
  num_idle_ = value;
  // @@protoc_insertion_point(field_set:firmament.WhareMapStats.num_idle)
}

// optional uint64 num_devils = 2;
void WhareMapStats::clear_num_devils() {
  num_devils_ = GOOGLE_ULONGLONG(0);
}
::google::protobuf::uint64 WhareMapStats::num_devils() const {
  // @@protoc_insertion_point(field_get:firmament.WhareMapStats.num_devils)
  return num_devils_;
}
void WhareMapStats::set_num_devils(::google::protobuf::uint64 value) {
  
  num_devils_ = value;
  // @@protoc_insertion_point(field_set:firmament.WhareMapStats.num_devils)
}

// optional uint64 num_rabbits = 3;
void WhareMapStats::clear_num_rabbits() {
  num_rabbits_ = GOOGLE_ULONGLONG(0);
}
::google::protobuf::uint64 WhareMapStats::num_rabbits() const {
  // @@protoc_insertion_point(field_get:firmament.WhareMapStats.num_rabbits)
  return num_rabbits_;
}
void WhareMapStats::set_num_rabbits(::google::protobuf::uint64 value) {
  
  num_rabbits_ = value;
  // @@protoc_insertion_point(field_set:firmament.WhareMapStats.num_rabbits)
}

// optional uint64 num_sheep = 4;
void WhareMapStats::clear_num_sheep() {
  num_sheep_ = GOOGLE_ULONGLONG(0);
}
::google::protobuf::uint64 WhareMapStats::num_sheep() const {
  // @@protoc_insertion_point(field_get:firmament.WhareMapStats.num_sheep)
  return num_sheep_;
}
void WhareMapStats::set_num_sheep(::google::protobuf::uint64 value) {
  
  num_sheep_ = value;
  // @@protoc_insertion_point(field_set:firmament.WhareMapStats.num_sheep)
}

// optional uint64 num_turtles = 5;
void WhareMapStats::clear_num_turtles() {
  num_turtles_ = GOOGLE_ULONGLONG(0);
}
::google::protobuf::uint64 WhareMapStats::num_turtles() const {
  // @@protoc_insertion_point(field_get:firmament.WhareMapStats.num_turtles)
  return num_turtles_;
}
void WhareMapStats::set_num_turtles(::google::protobuf::uint64 value) {
  
  num_turtles_ = value;
  // @@protoc_insertion_point(field_set:firmament.WhareMapStats.num_turtles)
}

inline const WhareMapStats* WhareMapStats::internal_default_instance() {
  return &WhareMapStats_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace firmament

// @@protoc_insertion_point(global_scope)
