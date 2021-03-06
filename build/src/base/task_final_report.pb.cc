// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: base/task_final_report.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "base/task_final_report.pb.h"

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

const ::google::protobuf::Descriptor* TaskFinalReport_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TaskFinalReport_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_base_2ftask_5ffinal_5freport_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_base_2ftask_5ffinal_5freport_2eproto() {
  protobuf_AddDesc_base_2ftask_5ffinal_5freport_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "base/task_final_report.proto");
  GOOGLE_CHECK(file != NULL);
  TaskFinalReport_descriptor_ = file->message_type(0);
  static const int TaskFinalReport_offsets_[8] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskFinalReport, task_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskFinalReport, start_time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskFinalReport, finish_time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskFinalReport, instructions_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskFinalReport, cycles_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskFinalReport, llc_refs_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskFinalReport, llc_misses_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskFinalReport, runtime_),
  };
  TaskFinalReport_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      TaskFinalReport_descriptor_,
      TaskFinalReport::internal_default_instance(),
      TaskFinalReport_offsets_,
      -1,
      -1,
      -1,
      sizeof(TaskFinalReport),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskFinalReport, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_base_2ftask_5ffinal_5freport_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      TaskFinalReport_descriptor_, TaskFinalReport::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_base_2ftask_5ffinal_5freport_2eproto() {
  TaskFinalReport_default_instance_.Shutdown();
  delete TaskFinalReport_reflection_;
}

void protobuf_InitDefaults_base_2ftask_5ffinal_5freport_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  TaskFinalReport_default_instance_.DefaultConstruct();
  TaskFinalReport_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_base_2ftask_5ffinal_5freport_2eproto_once_);
void protobuf_InitDefaults_base_2ftask_5ffinal_5freport_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_base_2ftask_5ffinal_5freport_2eproto_once_,
                 &protobuf_InitDefaults_base_2ftask_5ffinal_5freport_2eproto_impl);
}
void protobuf_AddDesc_base_2ftask_5ffinal_5freport_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_base_2ftask_5ffinal_5freport_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\034base/task_final_report.proto\022\tfirmamen"
    "t\"\250\001\n\017TaskFinalReport\022\017\n\007task_id\030\001 \001(\004\022\022"
    "\n\nstart_time\030\002 \001(\004\022\023\n\013finish_time\030\003 \001(\004\022"
    "\024\n\014instructions\030\004 \001(\004\022\016\n\006cycles\030\005 \001(\004\022\020\n"
    "\010llc_refs\030\006 \001(\004\022\022\n\nllc_misses\030\007 \001(\004\022\017\n\007r"
    "untime\030\010 \001(\001b\006proto3", 220);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "base/task_final_report.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_base_2ftask_5ffinal_5freport_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_base_2ftask_5ffinal_5freport_2eproto_once_);
void protobuf_AddDesc_base_2ftask_5ffinal_5freport_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_base_2ftask_5ffinal_5freport_2eproto_once_,
                 &protobuf_AddDesc_base_2ftask_5ffinal_5freport_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_base_2ftask_5ffinal_5freport_2eproto {
  StaticDescriptorInitializer_base_2ftask_5ffinal_5freport_2eproto() {
    protobuf_AddDesc_base_2ftask_5ffinal_5freport_2eproto();
  }
} static_descriptor_initializer_base_2ftask_5ffinal_5freport_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TaskFinalReport::kTaskIdFieldNumber;
const int TaskFinalReport::kStartTimeFieldNumber;
const int TaskFinalReport::kFinishTimeFieldNumber;
const int TaskFinalReport::kInstructionsFieldNumber;
const int TaskFinalReport::kCyclesFieldNumber;
const int TaskFinalReport::kLlcRefsFieldNumber;
const int TaskFinalReport::kLlcMissesFieldNumber;
const int TaskFinalReport::kRuntimeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TaskFinalReport::TaskFinalReport()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_base_2ftask_5ffinal_5freport_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:firmament.TaskFinalReport)
}

void TaskFinalReport::InitAsDefaultInstance() {
}

TaskFinalReport::TaskFinalReport(const TaskFinalReport& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:firmament.TaskFinalReport)
}

void TaskFinalReport::SharedCtor() {
  ::memset(&task_id_, 0, reinterpret_cast<char*>(&runtime_) -
    reinterpret_cast<char*>(&task_id_) + sizeof(runtime_));
  _cached_size_ = 0;
}

TaskFinalReport::~TaskFinalReport() {
  // @@protoc_insertion_point(destructor:firmament.TaskFinalReport)
  SharedDtor();
}

void TaskFinalReport::SharedDtor() {
}

void TaskFinalReport::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TaskFinalReport::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TaskFinalReport_descriptor_;
}

const TaskFinalReport& TaskFinalReport::default_instance() {
  protobuf_InitDefaults_base_2ftask_5ffinal_5freport_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<TaskFinalReport> TaskFinalReport_default_instance_;

TaskFinalReport* TaskFinalReport::New(::google::protobuf::Arena* arena) const {
  TaskFinalReport* n = new TaskFinalReport;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void TaskFinalReport::Clear() {
// @@protoc_insertion_point(message_clear_start:firmament.TaskFinalReport)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(TaskFinalReport, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<TaskFinalReport*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&(first), 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(task_id_, runtime_);

#undef ZR_HELPER_
#undef ZR_

}

bool TaskFinalReport::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:firmament.TaskFinalReport)
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
        if (input->ExpectTag(16)) goto parse_start_time;
        break;
      }

      // optional uint64 start_time = 2;
      case 2: {
        if (tag == 16) {
         parse_start_time:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &start_time_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_finish_time;
        break;
      }

      // optional uint64 finish_time = 3;
      case 3: {
        if (tag == 24) {
         parse_finish_time:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &finish_time_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_instructions;
        break;
      }

      // optional uint64 instructions = 4;
      case 4: {
        if (tag == 32) {
         parse_instructions:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &instructions_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_cycles;
        break;
      }

      // optional uint64 cycles = 5;
      case 5: {
        if (tag == 40) {
         parse_cycles:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &cycles_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_llc_refs;
        break;
      }

      // optional uint64 llc_refs = 6;
      case 6: {
        if (tag == 48) {
         parse_llc_refs:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &llc_refs_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(56)) goto parse_llc_misses;
        break;
      }

      // optional uint64 llc_misses = 7;
      case 7: {
        if (tag == 56) {
         parse_llc_misses:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &llc_misses_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(65)) goto parse_runtime;
        break;
      }

      // optional double runtime = 8;
      case 8: {
        if (tag == 65) {
         parse_runtime:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &runtime_)));
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
  // @@protoc_insertion_point(parse_success:firmament.TaskFinalReport)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:firmament.TaskFinalReport)
  return false;
#undef DO_
}

void TaskFinalReport::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:firmament.TaskFinalReport)
  // optional uint64 task_id = 1;
  if (this->task_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->task_id(), output);
  }

  // optional uint64 start_time = 2;
  if (this->start_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->start_time(), output);
  }

  // optional uint64 finish_time = 3;
  if (this->finish_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->finish_time(), output);
  }

  // optional uint64 instructions = 4;
  if (this->instructions() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(4, this->instructions(), output);
  }

  // optional uint64 cycles = 5;
  if (this->cycles() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(5, this->cycles(), output);
  }

  // optional uint64 llc_refs = 6;
  if (this->llc_refs() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(6, this->llc_refs(), output);
  }

  // optional uint64 llc_misses = 7;
  if (this->llc_misses() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(7, this->llc_misses(), output);
  }

  // optional double runtime = 8;
  if (this->runtime() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(8, this->runtime(), output);
  }

  // @@protoc_insertion_point(serialize_end:firmament.TaskFinalReport)
}

::google::protobuf::uint8* TaskFinalReport::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:firmament.TaskFinalReport)
  // optional uint64 task_id = 1;
  if (this->task_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->task_id(), target);
  }

  // optional uint64 start_time = 2;
  if (this->start_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->start_time(), target);
  }

  // optional uint64 finish_time = 3;
  if (this->finish_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(3, this->finish_time(), target);
  }

  // optional uint64 instructions = 4;
  if (this->instructions() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(4, this->instructions(), target);
  }

  // optional uint64 cycles = 5;
  if (this->cycles() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(5, this->cycles(), target);
  }

  // optional uint64 llc_refs = 6;
  if (this->llc_refs() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(6, this->llc_refs(), target);
  }

  // optional uint64 llc_misses = 7;
  if (this->llc_misses() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(7, this->llc_misses(), target);
  }

  // optional double runtime = 8;
  if (this->runtime() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(8, this->runtime(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:firmament.TaskFinalReport)
  return target;
}

size_t TaskFinalReport::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:firmament.TaskFinalReport)
  size_t total_size = 0;

  // optional uint64 task_id = 1;
  if (this->task_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->task_id());
  }

  // optional uint64 start_time = 2;
  if (this->start_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->start_time());
  }

  // optional uint64 finish_time = 3;
  if (this->finish_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->finish_time());
  }

  // optional uint64 instructions = 4;
  if (this->instructions() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->instructions());
  }

  // optional uint64 cycles = 5;
  if (this->cycles() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->cycles());
  }

  // optional uint64 llc_refs = 6;
  if (this->llc_refs() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->llc_refs());
  }

  // optional uint64 llc_misses = 7;
  if (this->llc_misses() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->llc_misses());
  }

  // optional double runtime = 8;
  if (this->runtime() != 0) {
    total_size += 1 + 8;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TaskFinalReport::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:firmament.TaskFinalReport)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const TaskFinalReport* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const TaskFinalReport>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:firmament.TaskFinalReport)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:firmament.TaskFinalReport)
    UnsafeMergeFrom(*source);
  }
}

void TaskFinalReport::MergeFrom(const TaskFinalReport& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:firmament.TaskFinalReport)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void TaskFinalReport::UnsafeMergeFrom(const TaskFinalReport& from) {
  GOOGLE_DCHECK(&from != this);
  if (from.task_id() != 0) {
    set_task_id(from.task_id());
  }
  if (from.start_time() != 0) {
    set_start_time(from.start_time());
  }
  if (from.finish_time() != 0) {
    set_finish_time(from.finish_time());
  }
  if (from.instructions() != 0) {
    set_instructions(from.instructions());
  }
  if (from.cycles() != 0) {
    set_cycles(from.cycles());
  }
  if (from.llc_refs() != 0) {
    set_llc_refs(from.llc_refs());
  }
  if (from.llc_misses() != 0) {
    set_llc_misses(from.llc_misses());
  }
  if (from.runtime() != 0) {
    set_runtime(from.runtime());
  }
}

void TaskFinalReport::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:firmament.TaskFinalReport)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TaskFinalReport::CopyFrom(const TaskFinalReport& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:firmament.TaskFinalReport)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool TaskFinalReport::IsInitialized() const {

  return true;
}

void TaskFinalReport::Swap(TaskFinalReport* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TaskFinalReport::InternalSwap(TaskFinalReport* other) {
  std::swap(task_id_, other->task_id_);
  std::swap(start_time_, other->start_time_);
  std::swap(finish_time_, other->finish_time_);
  std::swap(instructions_, other->instructions_);
  std::swap(cycles_, other->cycles_);
  std::swap(llc_refs_, other->llc_refs_);
  std::swap(llc_misses_, other->llc_misses_);
  std::swap(runtime_, other->runtime_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata TaskFinalReport::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TaskFinalReport_descriptor_;
  metadata.reflection = TaskFinalReport_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// TaskFinalReport

// optional uint64 task_id = 1;
void TaskFinalReport::clear_task_id() {
  task_id_ = GOOGLE_ULONGLONG(0);
}
::google::protobuf::uint64 TaskFinalReport::task_id() const {
  // @@protoc_insertion_point(field_get:firmament.TaskFinalReport.task_id)
  return task_id_;
}
void TaskFinalReport::set_task_id(::google::protobuf::uint64 value) {
  
  task_id_ = value;
  // @@protoc_insertion_point(field_set:firmament.TaskFinalReport.task_id)
}

// optional uint64 start_time = 2;
void TaskFinalReport::clear_start_time() {
  start_time_ = GOOGLE_ULONGLONG(0);
}
::google::protobuf::uint64 TaskFinalReport::start_time() const {
  // @@protoc_insertion_point(field_get:firmament.TaskFinalReport.start_time)
  return start_time_;
}
void TaskFinalReport::set_start_time(::google::protobuf::uint64 value) {
  
  start_time_ = value;
  // @@protoc_insertion_point(field_set:firmament.TaskFinalReport.start_time)
}

// optional uint64 finish_time = 3;
void TaskFinalReport::clear_finish_time() {
  finish_time_ = GOOGLE_ULONGLONG(0);
}
::google::protobuf::uint64 TaskFinalReport::finish_time() const {
  // @@protoc_insertion_point(field_get:firmament.TaskFinalReport.finish_time)
  return finish_time_;
}
void TaskFinalReport::set_finish_time(::google::protobuf::uint64 value) {
  
  finish_time_ = value;
  // @@protoc_insertion_point(field_set:firmament.TaskFinalReport.finish_time)
}

// optional uint64 instructions = 4;
void TaskFinalReport::clear_instructions() {
  instructions_ = GOOGLE_ULONGLONG(0);
}
::google::protobuf::uint64 TaskFinalReport::instructions() const {
  // @@protoc_insertion_point(field_get:firmament.TaskFinalReport.instructions)
  return instructions_;
}
void TaskFinalReport::set_instructions(::google::protobuf::uint64 value) {
  
  instructions_ = value;
  // @@protoc_insertion_point(field_set:firmament.TaskFinalReport.instructions)
}

// optional uint64 cycles = 5;
void TaskFinalReport::clear_cycles() {
  cycles_ = GOOGLE_ULONGLONG(0);
}
::google::protobuf::uint64 TaskFinalReport::cycles() const {
  // @@protoc_insertion_point(field_get:firmament.TaskFinalReport.cycles)
  return cycles_;
}
void TaskFinalReport::set_cycles(::google::protobuf::uint64 value) {
  
  cycles_ = value;
  // @@protoc_insertion_point(field_set:firmament.TaskFinalReport.cycles)
}

// optional uint64 llc_refs = 6;
void TaskFinalReport::clear_llc_refs() {
  llc_refs_ = GOOGLE_ULONGLONG(0);
}
::google::protobuf::uint64 TaskFinalReport::llc_refs() const {
  // @@protoc_insertion_point(field_get:firmament.TaskFinalReport.llc_refs)
  return llc_refs_;
}
void TaskFinalReport::set_llc_refs(::google::protobuf::uint64 value) {
  
  llc_refs_ = value;
  // @@protoc_insertion_point(field_set:firmament.TaskFinalReport.llc_refs)
}

// optional uint64 llc_misses = 7;
void TaskFinalReport::clear_llc_misses() {
  llc_misses_ = GOOGLE_ULONGLONG(0);
}
::google::protobuf::uint64 TaskFinalReport::llc_misses() const {
  // @@protoc_insertion_point(field_get:firmament.TaskFinalReport.llc_misses)
  return llc_misses_;
}
void TaskFinalReport::set_llc_misses(::google::protobuf::uint64 value) {
  
  llc_misses_ = value;
  // @@protoc_insertion_point(field_set:firmament.TaskFinalReport.llc_misses)
}

// optional double runtime = 8;
void TaskFinalReport::clear_runtime() {
  runtime_ = 0;
}
double TaskFinalReport::runtime() const {
  // @@protoc_insertion_point(field_get:firmament.TaskFinalReport.runtime)
  return runtime_;
}
void TaskFinalReport::set_runtime(double value) {
  
  runtime_ = value;
  // @@protoc_insertion_point(field_set:firmament.TaskFinalReport.runtime)
}

inline const TaskFinalReport* TaskFinalReport::internal_default_instance() {
  return &TaskFinalReport_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace firmament

// @@protoc_insertion_point(global_scope)
