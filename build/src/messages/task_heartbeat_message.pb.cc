// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messages/task_heartbeat_message.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "messages/task_heartbeat_message.pb.h"

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

const ::google::protobuf::Descriptor* TaskHeartbeatMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TaskHeartbeatMessage_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_messages_2ftask_5fheartbeat_5fmessage_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_messages_2ftask_5fheartbeat_5fmessage_2eproto() {
  protobuf_AddDesc_messages_2ftask_5fheartbeat_5fmessage_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "messages/task_heartbeat_message.proto");
  GOOGLE_CHECK(file != NULL);
  TaskHeartbeatMessage_descriptor_ = file->message_type(0);
  static const int TaskHeartbeatMessage_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskHeartbeatMessage, task_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskHeartbeatMessage, location_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskHeartbeatMessage, sequence_number_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskHeartbeatMessage, stats_),
  };
  TaskHeartbeatMessage_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      TaskHeartbeatMessage_descriptor_,
      TaskHeartbeatMessage::internal_default_instance(),
      TaskHeartbeatMessage_offsets_,
      -1,
      -1,
      -1,
      sizeof(TaskHeartbeatMessage),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskHeartbeatMessage, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_messages_2ftask_5fheartbeat_5fmessage_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      TaskHeartbeatMessage_descriptor_, TaskHeartbeatMessage::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_messages_2ftask_5fheartbeat_5fmessage_2eproto() {
  TaskHeartbeatMessage_default_instance_.Shutdown();
  delete TaskHeartbeatMessage_reflection_;
}

void protobuf_InitDefaults_messages_2ftask_5fheartbeat_5fmessage_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::firmament::protobuf_InitDefaults_base_2ftask_5fstats_2eproto();
  ::google::protobuf::internal::GetEmptyString();
  TaskHeartbeatMessage_default_instance_.DefaultConstruct();
  TaskHeartbeatMessage_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_messages_2ftask_5fheartbeat_5fmessage_2eproto_once_);
void protobuf_InitDefaults_messages_2ftask_5fheartbeat_5fmessage_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_messages_2ftask_5fheartbeat_5fmessage_2eproto_once_,
                 &protobuf_InitDefaults_messages_2ftask_5fheartbeat_5fmessage_2eproto_impl);
}
void protobuf_AddDesc_messages_2ftask_5fheartbeat_5fmessage_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_messages_2ftask_5fheartbeat_5fmessage_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n%messages/task_heartbeat_message.proto\022"
    "\tfirmament\032\025base/task_stats.proto\"w\n\024Tas"
    "kHeartbeatMessage\022\017\n\007task_id\030\001 \001(\004\022\020\n\010lo"
    "cation\030\002 \001(\t\022\027\n\017sequence_number\030\003 \001(\004\022#\n"
    "\005stats\030\004 \001(\0132\024.firmament.TaskStatsb\006prot"
    "o3", 202);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "messages/task_heartbeat_message.proto", &protobuf_RegisterTypes);
  ::firmament::protobuf_AddDesc_base_2ftask_5fstats_2eproto();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_messages_2ftask_5fheartbeat_5fmessage_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_messages_2ftask_5fheartbeat_5fmessage_2eproto_once_);
void protobuf_AddDesc_messages_2ftask_5fheartbeat_5fmessage_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_messages_2ftask_5fheartbeat_5fmessage_2eproto_once_,
                 &protobuf_AddDesc_messages_2ftask_5fheartbeat_5fmessage_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_messages_2ftask_5fheartbeat_5fmessage_2eproto {
  StaticDescriptorInitializer_messages_2ftask_5fheartbeat_5fmessage_2eproto() {
    protobuf_AddDesc_messages_2ftask_5fheartbeat_5fmessage_2eproto();
  }
} static_descriptor_initializer_messages_2ftask_5fheartbeat_5fmessage_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TaskHeartbeatMessage::kTaskIdFieldNumber;
const int TaskHeartbeatMessage::kLocationFieldNumber;
const int TaskHeartbeatMessage::kSequenceNumberFieldNumber;
const int TaskHeartbeatMessage::kStatsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TaskHeartbeatMessage::TaskHeartbeatMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_messages_2ftask_5fheartbeat_5fmessage_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:firmament.TaskHeartbeatMessage)
}

void TaskHeartbeatMessage::InitAsDefaultInstance() {
  stats_ = const_cast< ::firmament::TaskStats*>(
      ::firmament::TaskStats::internal_default_instance());
}

TaskHeartbeatMessage::TaskHeartbeatMessage(const TaskHeartbeatMessage& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:firmament.TaskHeartbeatMessage)
}

void TaskHeartbeatMessage::SharedCtor() {
  location_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  stats_ = NULL;
  ::memset(&task_id_, 0, reinterpret_cast<char*>(&sequence_number_) -
    reinterpret_cast<char*>(&task_id_) + sizeof(sequence_number_));
  _cached_size_ = 0;
}

TaskHeartbeatMessage::~TaskHeartbeatMessage() {
  // @@protoc_insertion_point(destructor:firmament.TaskHeartbeatMessage)
  SharedDtor();
}

void TaskHeartbeatMessage::SharedDtor() {
  location_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != &TaskHeartbeatMessage_default_instance_.get()) {
    delete stats_;
  }
}

void TaskHeartbeatMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TaskHeartbeatMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TaskHeartbeatMessage_descriptor_;
}

const TaskHeartbeatMessage& TaskHeartbeatMessage::default_instance() {
  protobuf_InitDefaults_messages_2ftask_5fheartbeat_5fmessage_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<TaskHeartbeatMessage> TaskHeartbeatMessage_default_instance_;

TaskHeartbeatMessage* TaskHeartbeatMessage::New(::google::protobuf::Arena* arena) const {
  TaskHeartbeatMessage* n = new TaskHeartbeatMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void TaskHeartbeatMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:firmament.TaskHeartbeatMessage)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(TaskHeartbeatMessage, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<TaskHeartbeatMessage*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&(first), 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(task_id_, sequence_number_);
  location_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && stats_ != NULL) delete stats_;
  stats_ = NULL;

#undef ZR_HELPER_
#undef ZR_

}

bool TaskHeartbeatMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:firmament.TaskHeartbeatMessage)
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
        if (input->ExpectTag(18)) goto parse_location;
        break;
      }

      // optional string location = 2;
      case 2: {
        if (tag == 18) {
         parse_location:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_location()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->location().data(), this->location().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "firmament.TaskHeartbeatMessage.location"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_sequence_number;
        break;
      }

      // optional uint64 sequence_number = 3;
      case 3: {
        if (tag == 24) {
         parse_sequence_number:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &sequence_number_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_stats;
        break;
      }

      // optional .firmament.TaskStats stats = 4;
      case 4: {
        if (tag == 34) {
         parse_stats:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_stats()));
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
  // @@protoc_insertion_point(parse_success:firmament.TaskHeartbeatMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:firmament.TaskHeartbeatMessage)
  return false;
#undef DO_
}

void TaskHeartbeatMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:firmament.TaskHeartbeatMessage)
  // optional uint64 task_id = 1;
  if (this->task_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->task_id(), output);
  }

  // optional string location = 2;
  if (this->location().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->location().data(), this->location().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "firmament.TaskHeartbeatMessage.location");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->location(), output);
  }

  // optional uint64 sequence_number = 3;
  if (this->sequence_number() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->sequence_number(), output);
  }

  // optional .firmament.TaskStats stats = 4;
  if (this->has_stats()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, *this->stats_, output);
  }

  // @@protoc_insertion_point(serialize_end:firmament.TaskHeartbeatMessage)
}

::google::protobuf::uint8* TaskHeartbeatMessage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:firmament.TaskHeartbeatMessage)
  // optional uint64 task_id = 1;
  if (this->task_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->task_id(), target);
  }

  // optional string location = 2;
  if (this->location().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->location().data(), this->location().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "firmament.TaskHeartbeatMessage.location");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->location(), target);
  }

  // optional uint64 sequence_number = 3;
  if (this->sequence_number() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(3, this->sequence_number(), target);
  }

  // optional .firmament.TaskStats stats = 4;
  if (this->has_stats()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, *this->stats_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:firmament.TaskHeartbeatMessage)
  return target;
}

size_t TaskHeartbeatMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:firmament.TaskHeartbeatMessage)
  size_t total_size = 0;

  // optional uint64 task_id = 1;
  if (this->task_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->task_id());
  }

  // optional string location = 2;
  if (this->location().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->location());
  }

  // optional uint64 sequence_number = 3;
  if (this->sequence_number() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->sequence_number());
  }

  // optional .firmament.TaskStats stats = 4;
  if (this->has_stats()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->stats_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TaskHeartbeatMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:firmament.TaskHeartbeatMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const TaskHeartbeatMessage* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const TaskHeartbeatMessage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:firmament.TaskHeartbeatMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:firmament.TaskHeartbeatMessage)
    UnsafeMergeFrom(*source);
  }
}

void TaskHeartbeatMessage::MergeFrom(const TaskHeartbeatMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:firmament.TaskHeartbeatMessage)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void TaskHeartbeatMessage::UnsafeMergeFrom(const TaskHeartbeatMessage& from) {
  GOOGLE_DCHECK(&from != this);
  if (from.task_id() != 0) {
    set_task_id(from.task_id());
  }
  if (from.location().size() > 0) {

    location_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.location_);
  }
  if (from.sequence_number() != 0) {
    set_sequence_number(from.sequence_number());
  }
  if (from.has_stats()) {
    mutable_stats()->::firmament::TaskStats::MergeFrom(from.stats());
  }
}

void TaskHeartbeatMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:firmament.TaskHeartbeatMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TaskHeartbeatMessage::CopyFrom(const TaskHeartbeatMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:firmament.TaskHeartbeatMessage)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool TaskHeartbeatMessage::IsInitialized() const {

  return true;
}

void TaskHeartbeatMessage::Swap(TaskHeartbeatMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TaskHeartbeatMessage::InternalSwap(TaskHeartbeatMessage* other) {
  std::swap(task_id_, other->task_id_);
  location_.Swap(&other->location_);
  std::swap(sequence_number_, other->sequence_number_);
  std::swap(stats_, other->stats_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata TaskHeartbeatMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TaskHeartbeatMessage_descriptor_;
  metadata.reflection = TaskHeartbeatMessage_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// TaskHeartbeatMessage

// optional uint64 task_id = 1;
void TaskHeartbeatMessage::clear_task_id() {
  task_id_ = GOOGLE_ULONGLONG(0);
}
::google::protobuf::uint64 TaskHeartbeatMessage::task_id() const {
  // @@protoc_insertion_point(field_get:firmament.TaskHeartbeatMessage.task_id)
  return task_id_;
}
void TaskHeartbeatMessage::set_task_id(::google::protobuf::uint64 value) {
  
  task_id_ = value;
  // @@protoc_insertion_point(field_set:firmament.TaskHeartbeatMessage.task_id)
}

// optional string location = 2;
void TaskHeartbeatMessage::clear_location() {
  location_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& TaskHeartbeatMessage::location() const {
  // @@protoc_insertion_point(field_get:firmament.TaskHeartbeatMessage.location)
  return location_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void TaskHeartbeatMessage::set_location(const ::std::string& value) {
  
  location_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:firmament.TaskHeartbeatMessage.location)
}
void TaskHeartbeatMessage::set_location(const char* value) {
  
  location_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:firmament.TaskHeartbeatMessage.location)
}
void TaskHeartbeatMessage::set_location(const char* value, size_t size) {
  
  location_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:firmament.TaskHeartbeatMessage.location)
}
::std::string* TaskHeartbeatMessage::mutable_location() {
  
  // @@protoc_insertion_point(field_mutable:firmament.TaskHeartbeatMessage.location)
  return location_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* TaskHeartbeatMessage::release_location() {
  // @@protoc_insertion_point(field_release:firmament.TaskHeartbeatMessage.location)
  
  return location_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void TaskHeartbeatMessage::set_allocated_location(::std::string* location) {
  if (location != NULL) {
    
  } else {
    
  }
  location_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), location);
  // @@protoc_insertion_point(field_set_allocated:firmament.TaskHeartbeatMessage.location)
}

// optional uint64 sequence_number = 3;
void TaskHeartbeatMessage::clear_sequence_number() {
  sequence_number_ = GOOGLE_ULONGLONG(0);
}
::google::protobuf::uint64 TaskHeartbeatMessage::sequence_number() const {
  // @@protoc_insertion_point(field_get:firmament.TaskHeartbeatMessage.sequence_number)
  return sequence_number_;
}
void TaskHeartbeatMessage::set_sequence_number(::google::protobuf::uint64 value) {
  
  sequence_number_ = value;
  // @@protoc_insertion_point(field_set:firmament.TaskHeartbeatMessage.sequence_number)
}

// optional .firmament.TaskStats stats = 4;
bool TaskHeartbeatMessage::has_stats() const {
  return this != internal_default_instance() && stats_ != NULL;
}
void TaskHeartbeatMessage::clear_stats() {
  if (GetArenaNoVirtual() == NULL && stats_ != NULL) delete stats_;
  stats_ = NULL;
}
const ::firmament::TaskStats& TaskHeartbeatMessage::stats() const {
  // @@protoc_insertion_point(field_get:firmament.TaskHeartbeatMessage.stats)
  return stats_ != NULL ? *stats_
                         : *::firmament::TaskStats::internal_default_instance();
}
::firmament::TaskStats* TaskHeartbeatMessage::mutable_stats() {
  
  if (stats_ == NULL) {
    stats_ = new ::firmament::TaskStats;
  }
  // @@protoc_insertion_point(field_mutable:firmament.TaskHeartbeatMessage.stats)
  return stats_;
}
::firmament::TaskStats* TaskHeartbeatMessage::release_stats() {
  // @@protoc_insertion_point(field_release:firmament.TaskHeartbeatMessage.stats)
  
  ::firmament::TaskStats* temp = stats_;
  stats_ = NULL;
  return temp;
}
void TaskHeartbeatMessage::set_allocated_stats(::firmament::TaskStats* stats) {
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
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace firmament

// @@protoc_insertion_point(global_scope)