// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: scheduling/scheduling_delta.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "scheduling/scheduling_delta.pb.h"

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

const ::google::protobuf::Descriptor* SchedulingDelta_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SchedulingDelta_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* SchedulingDelta_ChangeType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_scheduling_2fscheduling_5fdelta_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_scheduling_2fscheduling_5fdelta_2eproto() {
  protobuf_AddDesc_scheduling_2fscheduling_5fdelta_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "scheduling/scheduling_delta.proto");
  GOOGLE_CHECK(file != NULL);
  SchedulingDelta_descriptor_ = file->message_type(0);
  static const int SchedulingDelta_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SchedulingDelta, task_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SchedulingDelta, resource_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SchedulingDelta, type_),
  };
  SchedulingDelta_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      SchedulingDelta_descriptor_,
      SchedulingDelta::internal_default_instance(),
      SchedulingDelta_offsets_,
      -1,
      -1,
      -1,
      sizeof(SchedulingDelta),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SchedulingDelta, _internal_metadata_));
  SchedulingDelta_ChangeType_descriptor_ = SchedulingDelta_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_scheduling_2fscheduling_5fdelta_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      SchedulingDelta_descriptor_, SchedulingDelta::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_scheduling_2fscheduling_5fdelta_2eproto() {
  SchedulingDelta_default_instance_.Shutdown();
  delete SchedulingDelta_reflection_;
}

void protobuf_InitDefaults_scheduling_2fscheduling_5fdelta_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::GetEmptyString();
  SchedulingDelta_default_instance_.DefaultConstruct();
  SchedulingDelta_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_scheduling_2fscheduling_5fdelta_2eproto_once_);
void protobuf_InitDefaults_scheduling_2fscheduling_5fdelta_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_scheduling_2fscheduling_5fdelta_2eproto_once_,
                 &protobuf_InitDefaults_scheduling_2fscheduling_5fdelta_2eproto_impl);
}
void protobuf_AddDesc_scheduling_2fscheduling_5fdelta_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_scheduling_2fscheduling_5fdelta_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n!scheduling/scheduling_delta.proto\022\tfir"
    "mament\"\251\001\n\017SchedulingDelta\022\017\n\007task_id\030\001 "
    "\001(\004\022\023\n\013resource_id\030\002 \001(\t\0223\n\004type\030\003 \001(\0162%"
    ".firmament.SchedulingDelta.ChangeType\";\n"
    "\nChangeType\022\010\n\004NOOP\020\000\022\t\n\005PLACE\020\001\022\013\n\007PREE"
    "MPT\020\002\022\013\n\007MIGRATE\020\003b\006proto3", 226);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "scheduling/scheduling_delta.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_scheduling_2fscheduling_5fdelta_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_scheduling_2fscheduling_5fdelta_2eproto_once_);
void protobuf_AddDesc_scheduling_2fscheduling_5fdelta_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_scheduling_2fscheduling_5fdelta_2eproto_once_,
                 &protobuf_AddDesc_scheduling_2fscheduling_5fdelta_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_scheduling_2fscheduling_5fdelta_2eproto {
  StaticDescriptorInitializer_scheduling_2fscheduling_5fdelta_2eproto() {
    protobuf_AddDesc_scheduling_2fscheduling_5fdelta_2eproto();
  }
} static_descriptor_initializer_scheduling_2fscheduling_5fdelta_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

const ::google::protobuf::EnumDescriptor* SchedulingDelta_ChangeType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SchedulingDelta_ChangeType_descriptor_;
}
bool SchedulingDelta_ChangeType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const SchedulingDelta_ChangeType SchedulingDelta::NOOP;
const SchedulingDelta_ChangeType SchedulingDelta::PLACE;
const SchedulingDelta_ChangeType SchedulingDelta::PREEMPT;
const SchedulingDelta_ChangeType SchedulingDelta::MIGRATE;
const SchedulingDelta_ChangeType SchedulingDelta::ChangeType_MIN;
const SchedulingDelta_ChangeType SchedulingDelta::ChangeType_MAX;
const int SchedulingDelta::ChangeType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SchedulingDelta::kTaskIdFieldNumber;
const int SchedulingDelta::kResourceIdFieldNumber;
const int SchedulingDelta::kTypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SchedulingDelta::SchedulingDelta()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_scheduling_2fscheduling_5fdelta_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:firmament.SchedulingDelta)
}

void SchedulingDelta::InitAsDefaultInstance() {
}

SchedulingDelta::SchedulingDelta(const SchedulingDelta& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:firmament.SchedulingDelta)
}

void SchedulingDelta::SharedCtor() {
  resource_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&task_id_, 0, reinterpret_cast<char*>(&type_) -
    reinterpret_cast<char*>(&task_id_) + sizeof(type_));
  _cached_size_ = 0;
}

SchedulingDelta::~SchedulingDelta() {
  // @@protoc_insertion_point(destructor:firmament.SchedulingDelta)
  SharedDtor();
}

void SchedulingDelta::SharedDtor() {
  resource_id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void SchedulingDelta::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SchedulingDelta::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SchedulingDelta_descriptor_;
}

const SchedulingDelta& SchedulingDelta::default_instance() {
  protobuf_InitDefaults_scheduling_2fscheduling_5fdelta_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<SchedulingDelta> SchedulingDelta_default_instance_;

SchedulingDelta* SchedulingDelta::New(::google::protobuf::Arena* arena) const {
  SchedulingDelta* n = new SchedulingDelta;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SchedulingDelta::Clear() {
// @@protoc_insertion_point(message_clear_start:firmament.SchedulingDelta)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(SchedulingDelta, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<SchedulingDelta*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&(first), 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(task_id_, type_);
  resource_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());

#undef ZR_HELPER_
#undef ZR_

}

bool SchedulingDelta::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:firmament.SchedulingDelta)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint64 task_id = 1;
      case 1: {
        if (tag == 8) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &task_id_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_resource_id;
        break;
      }

      // optional string resource_id = 2;
      case 2: {
        if (tag == 18) {
         parse_resource_id:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_resource_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->resource_id().data(), this->resource_id().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "firmament.SchedulingDelta.resource_id"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_type;
        break;
      }

      // optional .firmament.SchedulingDelta.ChangeType type = 3;
      case 3: {
        if (tag == 24) {
         parse_type:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_type(static_cast< ::firmament::SchedulingDelta_ChangeType >(value));
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
  // @@protoc_insertion_point(parse_success:firmament.SchedulingDelta)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:firmament.SchedulingDelta)
  return false;
#undef DO_
}

void SchedulingDelta::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:firmament.SchedulingDelta)
  // optional uint64 task_id = 1;
  if (this->task_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->task_id(), output);
  }

  // optional string resource_id = 2;
  if (this->resource_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->resource_id().data(), this->resource_id().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "firmament.SchedulingDelta.resource_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->resource_id(), output);
  }

  // optional .firmament.SchedulingDelta.ChangeType type = 3;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->type(), output);
  }

  // @@protoc_insertion_point(serialize_end:firmament.SchedulingDelta)
}

::google::protobuf::uint8* SchedulingDelta::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:firmament.SchedulingDelta)
  // optional uint64 task_id = 1;
  if (this->task_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->task_id(), target);
  }

  // optional string resource_id = 2;
  if (this->resource_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->resource_id().data(), this->resource_id().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "firmament.SchedulingDelta.resource_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->resource_id(), target);
  }

  // optional .firmament.SchedulingDelta.ChangeType type = 3;
  if (this->type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->type(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:firmament.SchedulingDelta)
  return target;
}

size_t SchedulingDelta::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:firmament.SchedulingDelta)
  size_t total_size = 0;

  // optional uint64 task_id = 1;
  if (this->task_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->task_id());
  }

  // optional string resource_id = 2;
  if (this->resource_id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->resource_id());
  }

  // optional .firmament.SchedulingDelta.ChangeType type = 3;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SchedulingDelta::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:firmament.SchedulingDelta)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const SchedulingDelta* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SchedulingDelta>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:firmament.SchedulingDelta)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:firmament.SchedulingDelta)
    UnsafeMergeFrom(*source);
  }
}

void SchedulingDelta::MergeFrom(const SchedulingDelta& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:firmament.SchedulingDelta)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void SchedulingDelta::UnsafeMergeFrom(const SchedulingDelta& from) {
  GOOGLE_DCHECK(&from != this);
  if (from.task_id() != 0) {
    set_task_id(from.task_id());
  }
  if (from.resource_id().size() > 0) {

    resource_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.resource_id_);
  }
  if (from.type() != 0) {
    set_type(from.type());
  }
}

void SchedulingDelta::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:firmament.SchedulingDelta)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SchedulingDelta::CopyFrom(const SchedulingDelta& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:firmament.SchedulingDelta)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool SchedulingDelta::IsInitialized() const {

  return true;
}

void SchedulingDelta::Swap(SchedulingDelta* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SchedulingDelta::InternalSwap(SchedulingDelta* other) {
  std::swap(task_id_, other->task_id_);
  resource_id_.Swap(&other->resource_id_);
  std::swap(type_, other->type_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SchedulingDelta::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SchedulingDelta_descriptor_;
  metadata.reflection = SchedulingDelta_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SchedulingDelta

// optional uint64 task_id = 1;
void SchedulingDelta::clear_task_id() {
  task_id_ = GOOGLE_ULONGLONG(0);
}
::google::protobuf::uint64 SchedulingDelta::task_id() const {
  // @@protoc_insertion_point(field_get:firmament.SchedulingDelta.task_id)
  return task_id_;
}
void SchedulingDelta::set_task_id(::google::protobuf::uint64 value) {
  
  task_id_ = value;
  // @@protoc_insertion_point(field_set:firmament.SchedulingDelta.task_id)
}

// optional string resource_id = 2;
void SchedulingDelta::clear_resource_id() {
  resource_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& SchedulingDelta::resource_id() const {
  // @@protoc_insertion_point(field_get:firmament.SchedulingDelta.resource_id)
  return resource_id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void SchedulingDelta::set_resource_id(const ::std::string& value) {
  
  resource_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:firmament.SchedulingDelta.resource_id)
}
void SchedulingDelta::set_resource_id(const char* value) {
  
  resource_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:firmament.SchedulingDelta.resource_id)
}
void SchedulingDelta::set_resource_id(const char* value, size_t size) {
  
  resource_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:firmament.SchedulingDelta.resource_id)
}
::std::string* SchedulingDelta::mutable_resource_id() {
  
  // @@protoc_insertion_point(field_mutable:firmament.SchedulingDelta.resource_id)
  return resource_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* SchedulingDelta::release_resource_id() {
  // @@protoc_insertion_point(field_release:firmament.SchedulingDelta.resource_id)
  
  return resource_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void SchedulingDelta::set_allocated_resource_id(::std::string* resource_id) {
  if (resource_id != NULL) {
    
  } else {
    
  }
  resource_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), resource_id);
  // @@protoc_insertion_point(field_set_allocated:firmament.SchedulingDelta.resource_id)
}

// optional .firmament.SchedulingDelta.ChangeType type = 3;
void SchedulingDelta::clear_type() {
  type_ = 0;
}
::firmament::SchedulingDelta_ChangeType SchedulingDelta::type() const {
  // @@protoc_insertion_point(field_get:firmament.SchedulingDelta.type)
  return static_cast< ::firmament::SchedulingDelta_ChangeType >(type_);
}
void SchedulingDelta::set_type(::firmament::SchedulingDelta_ChangeType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:firmament.SchedulingDelta.type)
}

inline const SchedulingDelta* SchedulingDelta::internal_default_instance() {
  return &SchedulingDelta_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace firmament

// @@protoc_insertion_point(global_scope)
