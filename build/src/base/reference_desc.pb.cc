// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: base/reference_desc.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "base/reference_desc.pb.h"

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

const ::google::protobuf::Descriptor* ReferenceDescriptor_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ReferenceDescriptor_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* ReferenceDescriptor_ReferenceType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* ReferenceDescriptor_ReferenceScope_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_base_2freference_5fdesc_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_base_2freference_5fdesc_2eproto() {
  protobuf_AddDesc_base_2freference_5fdesc_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "base/reference_desc.proto");
  GOOGLE_CHECK(file != NULL);
  ReferenceDescriptor_descriptor_ = file->message_type(0);
  static const int ReferenceDescriptor_offsets_[10] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReferenceDescriptor, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReferenceDescriptor, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReferenceDescriptor, scope_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReferenceDescriptor, non_deterministic_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReferenceDescriptor, size_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReferenceDescriptor, location_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReferenceDescriptor, inline_data_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReferenceDescriptor, producing_task_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReferenceDescriptor, time_to_compute_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReferenceDescriptor, version_),
  };
  ReferenceDescriptor_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ReferenceDescriptor_descriptor_,
      ReferenceDescriptor::internal_default_instance(),
      ReferenceDescriptor_offsets_,
      -1,
      -1,
      -1,
      sizeof(ReferenceDescriptor),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReferenceDescriptor, _internal_metadata_));
  ReferenceDescriptor_ReferenceType_descriptor_ = ReferenceDescriptor_descriptor_->enum_type(0);
  ReferenceDescriptor_ReferenceScope_descriptor_ = ReferenceDescriptor_descriptor_->enum_type(1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_base_2freference_5fdesc_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ReferenceDescriptor_descriptor_, ReferenceDescriptor::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_base_2freference_5fdesc_2eproto() {
  ReferenceDescriptor_default_instance_.Shutdown();
  delete ReferenceDescriptor_reflection_;
}

void protobuf_InitDefaults_base_2freference_5fdesc_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::GetEmptyString();
  ReferenceDescriptor_default_instance_.DefaultConstruct();
  ReferenceDescriptor_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_base_2freference_5fdesc_2eproto_once_);
void protobuf_InitDefaults_base_2freference_5fdesc_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_base_2freference_5fdesc_2eproto_once_,
                 &protobuf_InitDefaults_base_2freference_5fdesc_2eproto_impl);
}
void protobuf_AddDesc_base_2freference_5fdesc_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_base_2freference_5fdesc_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\031base/reference_desc.proto\022\tfirmament\"\264"
    "\003\n\023ReferenceDescriptor\022\n\n\002id\030\001 \001(\014\022:\n\004ty"
    "pe\030\002 \001(\0162,.firmament.ReferenceDescriptor"
    ".ReferenceType\022<\n\005scope\030\003 \001(\0162-.firmamen"
    "t.ReferenceDescriptor.ReferenceScope\022\031\n\021"
    "non_deterministic\030\004 \001(\010\022\014\n\004size\030\005 \001(\004\022\020\n"
    "\010location\030\006 \001(\t\022\023\n\013inline_data\030\007 \001(\014\022\026\n\016"
    "producing_task\030\010 \001(\004\022\027\n\017time_to_compute\030"
    "\t \001(\004\022\017\n\007version\030\n \001(\004\"Z\n\rReferenceType\022"
    "\r\n\tTOMBSTONE\020\000\022\n\n\006FUTURE\020\001\022\014\n\010CONCRETE\020\002"
    "\022\n\n\006STREAM\020\003\022\t\n\005VALUE\020\004\022\t\n\005ERROR\020\005\")\n\016Re"
    "ferenceScope\022\n\n\006PUBLIC\020\000\022\013\n\007PRIVATE\020\001b\006p"
    "roto3", 485);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "base/reference_desc.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_base_2freference_5fdesc_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_base_2freference_5fdesc_2eproto_once_);
void protobuf_AddDesc_base_2freference_5fdesc_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_base_2freference_5fdesc_2eproto_once_,
                 &protobuf_AddDesc_base_2freference_5fdesc_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_base_2freference_5fdesc_2eproto {
  StaticDescriptorInitializer_base_2freference_5fdesc_2eproto() {
    protobuf_AddDesc_base_2freference_5fdesc_2eproto();
  }
} static_descriptor_initializer_base_2freference_5fdesc_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

const ::google::protobuf::EnumDescriptor* ReferenceDescriptor_ReferenceType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ReferenceDescriptor_ReferenceType_descriptor_;
}
bool ReferenceDescriptor_ReferenceType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const ReferenceDescriptor_ReferenceType ReferenceDescriptor::TOMBSTONE;
const ReferenceDescriptor_ReferenceType ReferenceDescriptor::FUTURE;
const ReferenceDescriptor_ReferenceType ReferenceDescriptor::CONCRETE;
const ReferenceDescriptor_ReferenceType ReferenceDescriptor::STREAM;
const ReferenceDescriptor_ReferenceType ReferenceDescriptor::VALUE;
const ReferenceDescriptor_ReferenceType ReferenceDescriptor::ERROR;
const ReferenceDescriptor_ReferenceType ReferenceDescriptor::ReferenceType_MIN;
const ReferenceDescriptor_ReferenceType ReferenceDescriptor::ReferenceType_MAX;
const int ReferenceDescriptor::ReferenceType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
const ::google::protobuf::EnumDescriptor* ReferenceDescriptor_ReferenceScope_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ReferenceDescriptor_ReferenceScope_descriptor_;
}
bool ReferenceDescriptor_ReferenceScope_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const ReferenceDescriptor_ReferenceScope ReferenceDescriptor::PUBLIC;
const ReferenceDescriptor_ReferenceScope ReferenceDescriptor::PRIVATE;
const ReferenceDescriptor_ReferenceScope ReferenceDescriptor::ReferenceScope_MIN;
const ReferenceDescriptor_ReferenceScope ReferenceDescriptor::ReferenceScope_MAX;
const int ReferenceDescriptor::ReferenceScope_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ReferenceDescriptor::kIdFieldNumber;
const int ReferenceDescriptor::kTypeFieldNumber;
const int ReferenceDescriptor::kScopeFieldNumber;
const int ReferenceDescriptor::kNonDeterministicFieldNumber;
const int ReferenceDescriptor::kSizeFieldNumber;
const int ReferenceDescriptor::kLocationFieldNumber;
const int ReferenceDescriptor::kInlineDataFieldNumber;
const int ReferenceDescriptor::kProducingTaskFieldNumber;
const int ReferenceDescriptor::kTimeToComputeFieldNumber;
const int ReferenceDescriptor::kVersionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ReferenceDescriptor::ReferenceDescriptor()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_base_2freference_5fdesc_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:firmament.ReferenceDescriptor)
}

void ReferenceDescriptor::InitAsDefaultInstance() {
}

ReferenceDescriptor::ReferenceDescriptor(const ReferenceDescriptor& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:firmament.ReferenceDescriptor)
}

void ReferenceDescriptor::SharedCtor() {
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  location_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  inline_data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&type_, 0, reinterpret_cast<char*>(&non_deterministic_) -
    reinterpret_cast<char*>(&type_) + sizeof(non_deterministic_));
  _cached_size_ = 0;
}

ReferenceDescriptor::~ReferenceDescriptor() {
  // @@protoc_insertion_point(destructor:firmament.ReferenceDescriptor)
  SharedDtor();
}

void ReferenceDescriptor::SharedDtor() {
  id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  location_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  inline_data_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ReferenceDescriptor::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ReferenceDescriptor::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ReferenceDescriptor_descriptor_;
}

const ReferenceDescriptor& ReferenceDescriptor::default_instance() {
  protobuf_InitDefaults_base_2freference_5fdesc_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<ReferenceDescriptor> ReferenceDescriptor_default_instance_;

ReferenceDescriptor* ReferenceDescriptor::New(::google::protobuf::Arena* arena) const {
  ReferenceDescriptor* n = new ReferenceDescriptor;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ReferenceDescriptor::Clear() {
// @@protoc_insertion_point(message_clear_start:firmament.ReferenceDescriptor)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(ReferenceDescriptor, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<ReferenceDescriptor*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&(first), 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(type_, producing_task_);
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  non_deterministic_ = false;
  location_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  inline_data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ZR_(time_to_compute_, version_);

#undef ZR_HELPER_
#undef ZR_

}

bool ReferenceDescriptor::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:firmament.ReferenceDescriptor)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bytes id = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_id()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_type;
        break;
      }

      // optional .firmament.ReferenceDescriptor.ReferenceType type = 2;
      case 2: {
        if (tag == 16) {
         parse_type:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_type(static_cast< ::firmament::ReferenceDescriptor_ReferenceType >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_scope;
        break;
      }

      // optional .firmament.ReferenceDescriptor.ReferenceScope scope = 3;
      case 3: {
        if (tag == 24) {
         parse_scope:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_scope(static_cast< ::firmament::ReferenceDescriptor_ReferenceScope >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_non_deterministic;
        break;
      }

      // optional bool non_deterministic = 4;
      case 4: {
        if (tag == 32) {
         parse_non_deterministic:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &non_deterministic_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_size;
        break;
      }

      // optional uint64 size = 5;
      case 5: {
        if (tag == 40) {
         parse_size:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &size_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_location;
        break;
      }

      // optional string location = 6;
      case 6: {
        if (tag == 50) {
         parse_location:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_location()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->location().data(), this->location().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "firmament.ReferenceDescriptor.location"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(58)) goto parse_inline_data;
        break;
      }

      // optional bytes inline_data = 7;
      case 7: {
        if (tag == 58) {
         parse_inline_data:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_inline_data()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(64)) goto parse_producing_task;
        break;
      }

      // optional uint64 producing_task = 8;
      case 8: {
        if (tag == 64) {
         parse_producing_task:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &producing_task_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(72)) goto parse_time_to_compute;
        break;
      }

      // optional uint64 time_to_compute = 9;
      case 9: {
        if (tag == 72) {
         parse_time_to_compute:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &time_to_compute_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(80)) goto parse_version;
        break;
      }

      // optional uint64 version = 10;
      case 10: {
        if (tag == 80) {
         parse_version:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &version_)));
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
  // @@protoc_insertion_point(parse_success:firmament.ReferenceDescriptor)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:firmament.ReferenceDescriptor)
  return false;
#undef DO_
}

void ReferenceDescriptor::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:firmament.ReferenceDescriptor)
  // optional bytes id = 1;
  if (this->id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->id(), output);
  }

  // optional .firmament.ReferenceDescriptor.ReferenceType type = 2;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->type(), output);
  }

  // optional .firmament.ReferenceDescriptor.ReferenceScope scope = 3;
  if (this->scope() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->scope(), output);
  }

  // optional bool non_deterministic = 4;
  if (this->non_deterministic() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->non_deterministic(), output);
  }

  // optional uint64 size = 5;
  if (this->size() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(5, this->size(), output);
  }

  // optional string location = 6;
  if (this->location().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->location().data(), this->location().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "firmament.ReferenceDescriptor.location");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->location(), output);
  }

  // optional bytes inline_data = 7;
  if (this->inline_data().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      7, this->inline_data(), output);
  }

  // optional uint64 producing_task = 8;
  if (this->producing_task() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(8, this->producing_task(), output);
  }

  // optional uint64 time_to_compute = 9;
  if (this->time_to_compute() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(9, this->time_to_compute(), output);
  }

  // optional uint64 version = 10;
  if (this->version() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(10, this->version(), output);
  }

  // @@protoc_insertion_point(serialize_end:firmament.ReferenceDescriptor)
}

::google::protobuf::uint8* ReferenceDescriptor::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:firmament.ReferenceDescriptor)
  // optional bytes id = 1;
  if (this->id().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->id(), target);
  }

  // optional .firmament.ReferenceDescriptor.ReferenceType type = 2;
  if (this->type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->type(), target);
  }

  // optional .firmament.ReferenceDescriptor.ReferenceScope scope = 3;
  if (this->scope() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->scope(), target);
  }

  // optional bool non_deterministic = 4;
  if (this->non_deterministic() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->non_deterministic(), target);
  }

  // optional uint64 size = 5;
  if (this->size() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(5, this->size(), target);
  }

  // optional string location = 6;
  if (this->location().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->location().data(), this->location().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "firmament.ReferenceDescriptor.location");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->location(), target);
  }

  // optional bytes inline_data = 7;
  if (this->inline_data().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        7, this->inline_data(), target);
  }

  // optional uint64 producing_task = 8;
  if (this->producing_task() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(8, this->producing_task(), target);
  }

  // optional uint64 time_to_compute = 9;
  if (this->time_to_compute() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(9, this->time_to_compute(), target);
  }

  // optional uint64 version = 10;
  if (this->version() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(10, this->version(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:firmament.ReferenceDescriptor)
  return target;
}

size_t ReferenceDescriptor::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:firmament.ReferenceDescriptor)
  size_t total_size = 0;

  // optional bytes id = 1;
  if (this->id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->id());
  }

  // optional .firmament.ReferenceDescriptor.ReferenceType type = 2;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
  }

  // optional .firmament.ReferenceDescriptor.ReferenceScope scope = 3;
  if (this->scope() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->scope());
  }

  // optional bool non_deterministic = 4;
  if (this->non_deterministic() != 0) {
    total_size += 1 + 1;
  }

  // optional uint64 size = 5;
  if (this->size() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->size());
  }

  // optional string location = 6;
  if (this->location().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->location());
  }

  // optional bytes inline_data = 7;
  if (this->inline_data().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->inline_data());
  }

  // optional uint64 producing_task = 8;
  if (this->producing_task() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->producing_task());
  }

  // optional uint64 time_to_compute = 9;
  if (this->time_to_compute() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->time_to_compute());
  }

  // optional uint64 version = 10;
  if (this->version() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->version());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ReferenceDescriptor::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:firmament.ReferenceDescriptor)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const ReferenceDescriptor* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ReferenceDescriptor>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:firmament.ReferenceDescriptor)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:firmament.ReferenceDescriptor)
    UnsafeMergeFrom(*source);
  }
}

void ReferenceDescriptor::MergeFrom(const ReferenceDescriptor& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:firmament.ReferenceDescriptor)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void ReferenceDescriptor::UnsafeMergeFrom(const ReferenceDescriptor& from) {
  GOOGLE_DCHECK(&from != this);
  if (from.id().size() > 0) {

    id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
  }
  if (from.type() != 0) {
    set_type(from.type());
  }
  if (from.scope() != 0) {
    set_scope(from.scope());
  }
  if (from.non_deterministic() != 0) {
    set_non_deterministic(from.non_deterministic());
  }
  if (from.size() != 0) {
    set_size(from.size());
  }
  if (from.location().size() > 0) {

    location_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.location_);
  }
  if (from.inline_data().size() > 0) {

    inline_data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.inline_data_);
  }
  if (from.producing_task() != 0) {
    set_producing_task(from.producing_task());
  }
  if (from.time_to_compute() != 0) {
    set_time_to_compute(from.time_to_compute());
  }
  if (from.version() != 0) {
    set_version(from.version());
  }
}

void ReferenceDescriptor::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:firmament.ReferenceDescriptor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ReferenceDescriptor::CopyFrom(const ReferenceDescriptor& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:firmament.ReferenceDescriptor)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool ReferenceDescriptor::IsInitialized() const {

  return true;
}

void ReferenceDescriptor::Swap(ReferenceDescriptor* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ReferenceDescriptor::InternalSwap(ReferenceDescriptor* other) {
  id_.Swap(&other->id_);
  std::swap(type_, other->type_);
  std::swap(scope_, other->scope_);
  std::swap(non_deterministic_, other->non_deterministic_);
  std::swap(size_, other->size_);
  location_.Swap(&other->location_);
  inline_data_.Swap(&other->inline_data_);
  std::swap(producing_task_, other->producing_task_);
  std::swap(time_to_compute_, other->time_to_compute_);
  std::swap(version_, other->version_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ReferenceDescriptor::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ReferenceDescriptor_descriptor_;
  metadata.reflection = ReferenceDescriptor_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ReferenceDescriptor

// optional bytes id = 1;
void ReferenceDescriptor::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& ReferenceDescriptor::id() const {
  // @@protoc_insertion_point(field_get:firmament.ReferenceDescriptor.id)
  return id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void ReferenceDescriptor::set_id(const ::std::string& value) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:firmament.ReferenceDescriptor.id)
}
void ReferenceDescriptor::set_id(const char* value) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:firmament.ReferenceDescriptor.id)
}
void ReferenceDescriptor::set_id(const void* value, size_t size) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:firmament.ReferenceDescriptor.id)
}
::std::string* ReferenceDescriptor::mutable_id() {
  
  // @@protoc_insertion_point(field_mutable:firmament.ReferenceDescriptor.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* ReferenceDescriptor::release_id() {
  // @@protoc_insertion_point(field_release:firmament.ReferenceDescriptor.id)
  
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void ReferenceDescriptor::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    
  } else {
    
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:firmament.ReferenceDescriptor.id)
}

// optional .firmament.ReferenceDescriptor.ReferenceType type = 2;
void ReferenceDescriptor::clear_type() {
  type_ = 0;
}
::firmament::ReferenceDescriptor_ReferenceType ReferenceDescriptor::type() const {
  // @@protoc_insertion_point(field_get:firmament.ReferenceDescriptor.type)
  return static_cast< ::firmament::ReferenceDescriptor_ReferenceType >(type_);
}
void ReferenceDescriptor::set_type(::firmament::ReferenceDescriptor_ReferenceType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:firmament.ReferenceDescriptor.type)
}

// optional .firmament.ReferenceDescriptor.ReferenceScope scope = 3;
void ReferenceDescriptor::clear_scope() {
  scope_ = 0;
}
::firmament::ReferenceDescriptor_ReferenceScope ReferenceDescriptor::scope() const {
  // @@protoc_insertion_point(field_get:firmament.ReferenceDescriptor.scope)
  return static_cast< ::firmament::ReferenceDescriptor_ReferenceScope >(scope_);
}
void ReferenceDescriptor::set_scope(::firmament::ReferenceDescriptor_ReferenceScope value) {
  
  scope_ = value;
  // @@protoc_insertion_point(field_set:firmament.ReferenceDescriptor.scope)
}

// optional bool non_deterministic = 4;
void ReferenceDescriptor::clear_non_deterministic() {
  non_deterministic_ = false;
}
bool ReferenceDescriptor::non_deterministic() const {
  // @@protoc_insertion_point(field_get:firmament.ReferenceDescriptor.non_deterministic)
  return non_deterministic_;
}
void ReferenceDescriptor::set_non_deterministic(bool value) {
  
  non_deterministic_ = value;
  // @@protoc_insertion_point(field_set:firmament.ReferenceDescriptor.non_deterministic)
}

// optional uint64 size = 5;
void ReferenceDescriptor::clear_size() {
  size_ = GOOGLE_ULONGLONG(0);
}
::google::protobuf::uint64 ReferenceDescriptor::size() const {
  // @@protoc_insertion_point(field_get:firmament.ReferenceDescriptor.size)
  return size_;
}
void ReferenceDescriptor::set_size(::google::protobuf::uint64 value) {
  
  size_ = value;
  // @@protoc_insertion_point(field_set:firmament.ReferenceDescriptor.size)
}

// optional string location = 6;
void ReferenceDescriptor::clear_location() {
  location_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& ReferenceDescriptor::location() const {
  // @@protoc_insertion_point(field_get:firmament.ReferenceDescriptor.location)
  return location_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void ReferenceDescriptor::set_location(const ::std::string& value) {
  
  location_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:firmament.ReferenceDescriptor.location)
}
void ReferenceDescriptor::set_location(const char* value) {
  
  location_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:firmament.ReferenceDescriptor.location)
}
void ReferenceDescriptor::set_location(const char* value, size_t size) {
  
  location_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:firmament.ReferenceDescriptor.location)
}
::std::string* ReferenceDescriptor::mutable_location() {
  
  // @@protoc_insertion_point(field_mutable:firmament.ReferenceDescriptor.location)
  return location_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* ReferenceDescriptor::release_location() {
  // @@protoc_insertion_point(field_release:firmament.ReferenceDescriptor.location)
  
  return location_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void ReferenceDescriptor::set_allocated_location(::std::string* location) {
  if (location != NULL) {
    
  } else {
    
  }
  location_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), location);
  // @@protoc_insertion_point(field_set_allocated:firmament.ReferenceDescriptor.location)
}

// optional bytes inline_data = 7;
void ReferenceDescriptor::clear_inline_data() {
  inline_data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& ReferenceDescriptor::inline_data() const {
  // @@protoc_insertion_point(field_get:firmament.ReferenceDescriptor.inline_data)
  return inline_data_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void ReferenceDescriptor::set_inline_data(const ::std::string& value) {
  
  inline_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:firmament.ReferenceDescriptor.inline_data)
}
void ReferenceDescriptor::set_inline_data(const char* value) {
  
  inline_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:firmament.ReferenceDescriptor.inline_data)
}
void ReferenceDescriptor::set_inline_data(const void* value, size_t size) {
  
  inline_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:firmament.ReferenceDescriptor.inline_data)
}
::std::string* ReferenceDescriptor::mutable_inline_data() {
  
  // @@protoc_insertion_point(field_mutable:firmament.ReferenceDescriptor.inline_data)
  return inline_data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* ReferenceDescriptor::release_inline_data() {
  // @@protoc_insertion_point(field_release:firmament.ReferenceDescriptor.inline_data)
  
  return inline_data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void ReferenceDescriptor::set_allocated_inline_data(::std::string* inline_data) {
  if (inline_data != NULL) {
    
  } else {
    
  }
  inline_data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), inline_data);
  // @@protoc_insertion_point(field_set_allocated:firmament.ReferenceDescriptor.inline_data)
}

// optional uint64 producing_task = 8;
void ReferenceDescriptor::clear_producing_task() {
  producing_task_ = GOOGLE_ULONGLONG(0);
}
::google::protobuf::uint64 ReferenceDescriptor::producing_task() const {
  // @@protoc_insertion_point(field_get:firmament.ReferenceDescriptor.producing_task)
  return producing_task_;
}
void ReferenceDescriptor::set_producing_task(::google::protobuf::uint64 value) {
  
  producing_task_ = value;
  // @@protoc_insertion_point(field_set:firmament.ReferenceDescriptor.producing_task)
}

// optional uint64 time_to_compute = 9;
void ReferenceDescriptor::clear_time_to_compute() {
  time_to_compute_ = GOOGLE_ULONGLONG(0);
}
::google::protobuf::uint64 ReferenceDescriptor::time_to_compute() const {
  // @@protoc_insertion_point(field_get:firmament.ReferenceDescriptor.time_to_compute)
  return time_to_compute_;
}
void ReferenceDescriptor::set_time_to_compute(::google::protobuf::uint64 value) {
  
  time_to_compute_ = value;
  // @@protoc_insertion_point(field_set:firmament.ReferenceDescriptor.time_to_compute)
}

// optional uint64 version = 10;
void ReferenceDescriptor::clear_version() {
  version_ = GOOGLE_ULONGLONG(0);
}
::google::protobuf::uint64 ReferenceDescriptor::version() const {
  // @@protoc_insertion_point(field_get:firmament.ReferenceDescriptor.version)
  return version_;
}
void ReferenceDescriptor::set_version(::google::protobuf::uint64 value) {
  
  version_ = value;
  // @@protoc_insertion_point(field_set:firmament.ReferenceDescriptor.version)
}

inline const ReferenceDescriptor* ReferenceDescriptor::internal_default_instance() {
  return &ReferenceDescriptor_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace firmament

// @@protoc_insertion_point(global_scope)