// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messages/test_message.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "messages/test_message.pb.h"

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

const ::google::protobuf::Descriptor* TestMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TestMessage_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_messages_2ftest_5fmessage_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_messages_2ftest_5fmessage_2eproto() {
  protobuf_AddDesc_messages_2ftest_5fmessage_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "messages/test_message.proto");
  GOOGLE_CHECK(file != NULL);
  TestMessage_descriptor_ = file->message_type(0);
  static const int TestMessage_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestMessage, test_),
  };
  TestMessage_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      TestMessage_descriptor_,
      TestMessage::internal_default_instance(),
      TestMessage_offsets_,
      -1,
      -1,
      -1,
      sizeof(TestMessage),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestMessage, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_messages_2ftest_5fmessage_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      TestMessage_descriptor_, TestMessage::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_messages_2ftest_5fmessage_2eproto() {
  TestMessage_default_instance_.Shutdown();
  delete TestMessage_reflection_;
}

void protobuf_InitDefaults_messages_2ftest_5fmessage_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  TestMessage_default_instance_.DefaultConstruct();
  TestMessage_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_messages_2ftest_5fmessage_2eproto_once_);
void protobuf_InitDefaults_messages_2ftest_5fmessage_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_messages_2ftest_5fmessage_2eproto_once_,
                 &protobuf_InitDefaults_messages_2ftest_5fmessage_2eproto_impl);
}
void protobuf_AddDesc_messages_2ftest_5fmessage_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_messages_2ftest_5fmessage_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\033messages/test_message.proto\022\tfirmament"
    "\"\033\n\013TestMessage\022\014\n\004test\030\001 \001(\003b\006proto3", 77);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "messages/test_message.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_messages_2ftest_5fmessage_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_messages_2ftest_5fmessage_2eproto_once_);
void protobuf_AddDesc_messages_2ftest_5fmessage_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_messages_2ftest_5fmessage_2eproto_once_,
                 &protobuf_AddDesc_messages_2ftest_5fmessage_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_messages_2ftest_5fmessage_2eproto {
  StaticDescriptorInitializer_messages_2ftest_5fmessage_2eproto() {
    protobuf_AddDesc_messages_2ftest_5fmessage_2eproto();
  }
} static_descriptor_initializer_messages_2ftest_5fmessage_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TestMessage::kTestFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TestMessage::TestMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_messages_2ftest_5fmessage_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:firmament.TestMessage)
}

void TestMessage::InitAsDefaultInstance() {
}

TestMessage::TestMessage(const TestMessage& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:firmament.TestMessage)
}

void TestMessage::SharedCtor() {
  test_ = GOOGLE_LONGLONG(0);
  _cached_size_ = 0;
}

TestMessage::~TestMessage() {
  // @@protoc_insertion_point(destructor:firmament.TestMessage)
  SharedDtor();
}

void TestMessage::SharedDtor() {
}

void TestMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TestMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TestMessage_descriptor_;
}

const TestMessage& TestMessage::default_instance() {
  protobuf_InitDefaults_messages_2ftest_5fmessage_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<TestMessage> TestMessage_default_instance_;

TestMessage* TestMessage::New(::google::protobuf::Arena* arena) const {
  TestMessage* n = new TestMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void TestMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:firmament.TestMessage)
  test_ = GOOGLE_LONGLONG(0);
}

bool TestMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:firmament.TestMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 test = 1;
      case 1: {
        if (tag == 8) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &test_)));
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
  // @@protoc_insertion_point(parse_success:firmament.TestMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:firmament.TestMessage)
  return false;
#undef DO_
}

void TestMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:firmament.TestMessage)
  // optional int64 test = 1;
  if (this->test() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->test(), output);
  }

  // @@protoc_insertion_point(serialize_end:firmament.TestMessage)
}

::google::protobuf::uint8* TestMessage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:firmament.TestMessage)
  // optional int64 test = 1;
  if (this->test() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->test(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:firmament.TestMessage)
  return target;
}

size_t TestMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:firmament.TestMessage)
  size_t total_size = 0;

  // optional int64 test = 1;
  if (this->test() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->test());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TestMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:firmament.TestMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const TestMessage* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const TestMessage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:firmament.TestMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:firmament.TestMessage)
    UnsafeMergeFrom(*source);
  }
}

void TestMessage::MergeFrom(const TestMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:firmament.TestMessage)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void TestMessage::UnsafeMergeFrom(const TestMessage& from) {
  GOOGLE_DCHECK(&from != this);
  if (from.test() != 0) {
    set_test(from.test());
  }
}

void TestMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:firmament.TestMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TestMessage::CopyFrom(const TestMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:firmament.TestMessage)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool TestMessage::IsInitialized() const {

  return true;
}

void TestMessage::Swap(TestMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TestMessage::InternalSwap(TestMessage* other) {
  std::swap(test_, other->test_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata TestMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TestMessage_descriptor_;
  metadata.reflection = TestMessage_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// TestMessage

// optional int64 test = 1;
void TestMessage::clear_test() {
  test_ = GOOGLE_LONGLONG(0);
}
::google::protobuf::int64 TestMessage::test() const {
  // @@protoc_insertion_point(field_get:firmament.TestMessage.test)
  return test_;
}
void TestMessage::set_test(::google::protobuf::int64 value) {
  
  test_ = value;
  // @@protoc_insertion_point(field_set:firmament.TestMessage.test)
}

inline const TestMessage* TestMessage::internal_default_instance() {
  return &TestMessage_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace firmament

// @@protoc_insertion_point(global_scope)
