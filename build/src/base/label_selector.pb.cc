// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: base/label_selector.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "base/label_selector.pb.h"

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

const ::google::protobuf::Descriptor* LabelSelector_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  LabelSelector_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* LabelSelector_SelectorType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_base_2flabel_5fselector_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_base_2flabel_5fselector_2eproto() {
  protobuf_AddDesc_base_2flabel_5fselector_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "base/label_selector.proto");
  GOOGLE_CHECK(file != NULL);
  LabelSelector_descriptor_ = file->message_type(0);
  static const int LabelSelector_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LabelSelector, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LabelSelector, key_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LabelSelector, values_),
  };
  LabelSelector_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      LabelSelector_descriptor_,
      LabelSelector::internal_default_instance(),
      LabelSelector_offsets_,
      -1,
      -1,
      -1,
      sizeof(LabelSelector),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LabelSelector, _internal_metadata_));
  LabelSelector_SelectorType_descriptor_ = LabelSelector_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_base_2flabel_5fselector_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      LabelSelector_descriptor_, LabelSelector::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_base_2flabel_5fselector_2eproto() {
  LabelSelector_default_instance_.Shutdown();
  delete LabelSelector_reflection_;
}

void protobuf_InitDefaults_base_2flabel_5fselector_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::GetEmptyString();
  LabelSelector_default_instance_.DefaultConstruct();
  LabelSelector_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_base_2flabel_5fselector_2eproto_once_);
void protobuf_InitDefaults_base_2flabel_5fselector_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_base_2flabel_5fselector_2eproto_once_,
                 &protobuf_InitDefaults_base_2flabel_5fselector_2eproto_impl);
}
void protobuf_AddDesc_base_2flabel_5fselector_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_base_2flabel_5fselector_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\031base/label_selector.proto\022\tfirmament\"\261"
    "\001\n\rLabelSelector\0223\n\004type\030\001 \001(\0162%.firmame"
    "nt.LabelSelector.SelectorType\022\013\n\003key\030\002 \001"
    "(\t\022\016\n\006values\030\003 \003(\t\"N\n\014SelectorType\022\n\n\006IN"
    "_SET\020\000\022\016\n\nNOT_IN_SET\020\001\022\016\n\nEXISTS_KEY\020\002\022\022"
    "\n\016NOT_EXISTS_KEY\020\003b\006proto3", 226);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "base/label_selector.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_base_2flabel_5fselector_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_base_2flabel_5fselector_2eproto_once_);
void protobuf_AddDesc_base_2flabel_5fselector_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_base_2flabel_5fselector_2eproto_once_,
                 &protobuf_AddDesc_base_2flabel_5fselector_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_base_2flabel_5fselector_2eproto {
  StaticDescriptorInitializer_base_2flabel_5fselector_2eproto() {
    protobuf_AddDesc_base_2flabel_5fselector_2eproto();
  }
} static_descriptor_initializer_base_2flabel_5fselector_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

const ::google::protobuf::EnumDescriptor* LabelSelector_SelectorType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LabelSelector_SelectorType_descriptor_;
}
bool LabelSelector_SelectorType_IsValid(int value) {
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
const LabelSelector_SelectorType LabelSelector::IN_SET;
const LabelSelector_SelectorType LabelSelector::NOT_IN_SET;
const LabelSelector_SelectorType LabelSelector::EXISTS_KEY;
const LabelSelector_SelectorType LabelSelector::NOT_EXISTS_KEY;
const LabelSelector_SelectorType LabelSelector::SelectorType_MIN;
const LabelSelector_SelectorType LabelSelector::SelectorType_MAX;
const int LabelSelector::SelectorType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LabelSelector::kTypeFieldNumber;
const int LabelSelector::kKeyFieldNumber;
const int LabelSelector::kValuesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LabelSelector::LabelSelector()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_base_2flabel_5fselector_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:firmament.LabelSelector)
}

void LabelSelector::InitAsDefaultInstance() {
}

LabelSelector::LabelSelector(const LabelSelector& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:firmament.LabelSelector)
}

void LabelSelector::SharedCtor() {
  key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  type_ = 0;
  _cached_size_ = 0;
}

LabelSelector::~LabelSelector() {
  // @@protoc_insertion_point(destructor:firmament.LabelSelector)
  SharedDtor();
}

void LabelSelector::SharedDtor() {
  key_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LabelSelector::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LabelSelector::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LabelSelector_descriptor_;
}

const LabelSelector& LabelSelector::default_instance() {
  protobuf_InitDefaults_base_2flabel_5fselector_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<LabelSelector> LabelSelector_default_instance_;

LabelSelector* LabelSelector::New(::google::protobuf::Arena* arena) const {
  LabelSelector* n = new LabelSelector;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LabelSelector::Clear() {
// @@protoc_insertion_point(message_clear_start:firmament.LabelSelector)
  type_ = 0;
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  values_.Clear();
}

bool LabelSelector::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:firmament.LabelSelector)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .firmament.LabelSelector.SelectorType type = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_type(static_cast< ::firmament::LabelSelector_SelectorType >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_key;
        break;
      }

      // optional string key = 2;
      case 2: {
        if (tag == 18) {
         parse_key:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_key()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->key().data(), this->key().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "firmament.LabelSelector.key"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_values;
        break;
      }

      // repeated string values = 3;
      case 3: {
        if (tag == 26) {
         parse_values:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_values()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->values(this->values_size() - 1).data(),
            this->values(this->values_size() - 1).length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "firmament.LabelSelector.values"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_values;
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
  // @@protoc_insertion_point(parse_success:firmament.LabelSelector)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:firmament.LabelSelector)
  return false;
#undef DO_
}

void LabelSelector::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:firmament.LabelSelector)
  // optional .firmament.LabelSelector.SelectorType type = 1;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // optional string key = 2;
  if (this->key().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->key().data(), this->key().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "firmament.LabelSelector.key");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->key(), output);
  }

  // repeated string values = 3;
  for (int i = 0; i < this->values_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->values(i).data(), this->values(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "firmament.LabelSelector.values");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->values(i), output);
  }

  // @@protoc_insertion_point(serialize_end:firmament.LabelSelector)
}

::google::protobuf::uint8* LabelSelector::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:firmament.LabelSelector)
  // optional .firmament.LabelSelector.SelectorType type = 1;
  if (this->type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->type(), target);
  }

  // optional string key = 2;
  if (this->key().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->key().data(), this->key().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "firmament.LabelSelector.key");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->key(), target);
  }

  // repeated string values = 3;
  for (int i = 0; i < this->values_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->values(i).data(), this->values(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "firmament.LabelSelector.values");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(3, this->values(i), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:firmament.LabelSelector)
  return target;
}

size_t LabelSelector::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:firmament.LabelSelector)
  size_t total_size = 0;

  // optional .firmament.LabelSelector.SelectorType type = 1;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
  }

  // optional string key = 2;
  if (this->key().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->key());
  }

  // repeated string values = 3;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->values_size());
  for (int i = 0; i < this->values_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->values(i));
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LabelSelector::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:firmament.LabelSelector)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const LabelSelector* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LabelSelector>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:firmament.LabelSelector)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:firmament.LabelSelector)
    UnsafeMergeFrom(*source);
  }
}

void LabelSelector::MergeFrom(const LabelSelector& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:firmament.LabelSelector)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void LabelSelector::UnsafeMergeFrom(const LabelSelector& from) {
  GOOGLE_DCHECK(&from != this);
  values_.UnsafeMergeFrom(from.values_);
  if (from.type() != 0) {
    set_type(from.type());
  }
  if (from.key().size() > 0) {

    key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.key_);
  }
}

void LabelSelector::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:firmament.LabelSelector)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LabelSelector::CopyFrom(const LabelSelector& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:firmament.LabelSelector)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool LabelSelector::IsInitialized() const {

  return true;
}

void LabelSelector::Swap(LabelSelector* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LabelSelector::InternalSwap(LabelSelector* other) {
  std::swap(type_, other->type_);
  key_.Swap(&other->key_);
  values_.UnsafeArenaSwap(&other->values_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LabelSelector::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = LabelSelector_descriptor_;
  metadata.reflection = LabelSelector_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LabelSelector

// optional .firmament.LabelSelector.SelectorType type = 1;
void LabelSelector::clear_type() {
  type_ = 0;
}
::firmament::LabelSelector_SelectorType LabelSelector::type() const {
  // @@protoc_insertion_point(field_get:firmament.LabelSelector.type)
  return static_cast< ::firmament::LabelSelector_SelectorType >(type_);
}
void LabelSelector::set_type(::firmament::LabelSelector_SelectorType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:firmament.LabelSelector.type)
}

// optional string key = 2;
void LabelSelector::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LabelSelector::key() const {
  // @@protoc_insertion_point(field_get:firmament.LabelSelector.key)
  return key_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LabelSelector::set_key(const ::std::string& value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:firmament.LabelSelector.key)
}
void LabelSelector::set_key(const char* value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:firmament.LabelSelector.key)
}
void LabelSelector::set_key(const char* value, size_t size) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:firmament.LabelSelector.key)
}
::std::string* LabelSelector::mutable_key() {
  
  // @@protoc_insertion_point(field_mutable:firmament.LabelSelector.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LabelSelector::release_key() {
  // @@protoc_insertion_point(field_release:firmament.LabelSelector.key)
  
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LabelSelector::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    
  } else {
    
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:firmament.LabelSelector.key)
}

// repeated string values = 3;
int LabelSelector::values_size() const {
  return values_.size();
}
void LabelSelector::clear_values() {
  values_.Clear();
}
const ::std::string& LabelSelector::values(int index) const {
  // @@protoc_insertion_point(field_get:firmament.LabelSelector.values)
  return values_.Get(index);
}
::std::string* LabelSelector::mutable_values(int index) {
  // @@protoc_insertion_point(field_mutable:firmament.LabelSelector.values)
  return values_.Mutable(index);
}
void LabelSelector::set_values(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:firmament.LabelSelector.values)
  values_.Mutable(index)->assign(value);
}
void LabelSelector::set_values(int index, const char* value) {
  values_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:firmament.LabelSelector.values)
}
void LabelSelector::set_values(int index, const char* value, size_t size) {
  values_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:firmament.LabelSelector.values)
}
::std::string* LabelSelector::add_values() {
  // @@protoc_insertion_point(field_add_mutable:firmament.LabelSelector.values)
  return values_.Add();
}
void LabelSelector::add_values(const ::std::string& value) {
  values_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:firmament.LabelSelector.values)
}
void LabelSelector::add_values(const char* value) {
  values_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:firmament.LabelSelector.values)
}
void LabelSelector::add_values(const char* value, size_t size) {
  values_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:firmament.LabelSelector.values)
}
const ::google::protobuf::RepeatedPtrField< ::std::string>&
LabelSelector::values() const {
  // @@protoc_insertion_point(field_list:firmament.LabelSelector.values)
  return values_;
}
::google::protobuf::RepeatedPtrField< ::std::string>*
LabelSelector::mutable_values() {
  // @@protoc_insertion_point(field_mutable_list:firmament.LabelSelector.values)
  return &values_;
}

inline const LabelSelector* LabelSelector::internal_default_instance() {
  return &LabelSelector_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace firmament

// @@protoc_insertion_point(global_scope)