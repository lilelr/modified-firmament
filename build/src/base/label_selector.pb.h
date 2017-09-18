// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: base/label_selector.proto

#ifndef PROTOBUF_base_2flabel_5fselector_2eproto__INCLUDED
#define PROTOBUF_base_2flabel_5fselector_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace firmament {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_base_2flabel_5fselector_2eproto();
void protobuf_InitDefaults_base_2flabel_5fselector_2eproto();
void protobuf_AssignDesc_base_2flabel_5fselector_2eproto();
void protobuf_ShutdownFile_base_2flabel_5fselector_2eproto();

class LabelSelector;

enum LabelSelector_SelectorType {
  LabelSelector_SelectorType_IN_SET = 0,
  LabelSelector_SelectorType_NOT_IN_SET = 1,
  LabelSelector_SelectorType_EXISTS_KEY = 2,
  LabelSelector_SelectorType_NOT_EXISTS_KEY = 3,
  LabelSelector_SelectorType_LabelSelector_SelectorType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  LabelSelector_SelectorType_LabelSelector_SelectorType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool LabelSelector_SelectorType_IsValid(int value);
const LabelSelector_SelectorType LabelSelector_SelectorType_SelectorType_MIN = LabelSelector_SelectorType_IN_SET;
const LabelSelector_SelectorType LabelSelector_SelectorType_SelectorType_MAX = LabelSelector_SelectorType_NOT_EXISTS_KEY;
const int LabelSelector_SelectorType_SelectorType_ARRAYSIZE = LabelSelector_SelectorType_SelectorType_MAX + 1;

const ::google::protobuf::EnumDescriptor* LabelSelector_SelectorType_descriptor();
inline const ::std::string& LabelSelector_SelectorType_Name(LabelSelector_SelectorType value) {
  return ::google::protobuf::internal::NameOfEnum(
    LabelSelector_SelectorType_descriptor(), value);
}
inline bool LabelSelector_SelectorType_Parse(
    const ::std::string& name, LabelSelector_SelectorType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<LabelSelector_SelectorType>(
    LabelSelector_SelectorType_descriptor(), name, value);
}
// ===================================================================

class LabelSelector : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:firmament.LabelSelector) */ {
 public:
  LabelSelector();
  virtual ~LabelSelector();

  LabelSelector(const LabelSelector& from);

  inline LabelSelector& operator=(const LabelSelector& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const LabelSelector& default_instance();

  static const LabelSelector* internal_default_instance();

  void Swap(LabelSelector* other);

  // implements Message ----------------------------------------------

  inline LabelSelector* New() const { return New(NULL); }

  LabelSelector* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LabelSelector& from);
  void MergeFrom(const LabelSelector& from);
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
  void InternalSwap(LabelSelector* other);
  void UnsafeMergeFrom(const LabelSelector& from);
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

  typedef LabelSelector_SelectorType SelectorType;
  static const SelectorType IN_SET =
    LabelSelector_SelectorType_IN_SET;
  static const SelectorType NOT_IN_SET =
    LabelSelector_SelectorType_NOT_IN_SET;
  static const SelectorType EXISTS_KEY =
    LabelSelector_SelectorType_EXISTS_KEY;
  static const SelectorType NOT_EXISTS_KEY =
    LabelSelector_SelectorType_NOT_EXISTS_KEY;
  static inline bool SelectorType_IsValid(int value) {
    return LabelSelector_SelectorType_IsValid(value);
  }
  static const SelectorType SelectorType_MIN =
    LabelSelector_SelectorType_SelectorType_MIN;
  static const SelectorType SelectorType_MAX =
    LabelSelector_SelectorType_SelectorType_MAX;
  static const int SelectorType_ARRAYSIZE =
    LabelSelector_SelectorType_SelectorType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  SelectorType_descriptor() {
    return LabelSelector_SelectorType_descriptor();
  }
  static inline const ::std::string& SelectorType_Name(SelectorType value) {
    return LabelSelector_SelectorType_Name(value);
  }
  static inline bool SelectorType_Parse(const ::std::string& name,
      SelectorType* value) {
    return LabelSelector_SelectorType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .firmament.LabelSelector.SelectorType type = 1;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  ::firmament::LabelSelector_SelectorType type() const;
  void set_type(::firmament::LabelSelector_SelectorType value);

  // optional string key = 2;
  void clear_key();
  static const int kKeyFieldNumber = 2;
  const ::std::string& key() const;
  void set_key(const ::std::string& value);
  void set_key(const char* value);
  void set_key(const char* value, size_t size);
  ::std::string* mutable_key();
  ::std::string* release_key();
  void set_allocated_key(::std::string* key);

  // repeated string values = 3;
  int values_size() const;
  void clear_values();
  static const int kValuesFieldNumber = 3;
  const ::std::string& values(int index) const;
  ::std::string* mutable_values(int index);
  void set_values(int index, const ::std::string& value);
  void set_values(int index, const char* value);
  void set_values(int index, const char* value, size_t size);
  ::std::string* add_values();
  void add_values(const ::std::string& value);
  void add_values(const char* value);
  void add_values(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& values() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_values();

  // @@protoc_insertion_point(class_scope:firmament.LabelSelector)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::std::string> values_;
  ::google::protobuf::internal::ArenaStringPtr key_;
  int type_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_base_2flabel_5fselector_2eproto_impl();
  friend void  protobuf_AddDesc_base_2flabel_5fselector_2eproto_impl();
  friend void protobuf_AssignDesc_base_2flabel_5fselector_2eproto();
  friend void protobuf_ShutdownFile_base_2flabel_5fselector_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<LabelSelector> LabelSelector_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// LabelSelector

// optional .firmament.LabelSelector.SelectorType type = 1;
inline void LabelSelector::clear_type() {
  type_ = 0;
}
inline ::firmament::LabelSelector_SelectorType LabelSelector::type() const {
  // @@protoc_insertion_point(field_get:firmament.LabelSelector.type)
  return static_cast< ::firmament::LabelSelector_SelectorType >(type_);
}
inline void LabelSelector::set_type(::firmament::LabelSelector_SelectorType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:firmament.LabelSelector.type)
}

// optional string key = 2;
inline void LabelSelector::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& LabelSelector::key() const {
  // @@protoc_insertion_point(field_get:firmament.LabelSelector.key)
  return key_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LabelSelector::set_key(const ::std::string& value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:firmament.LabelSelector.key)
}
inline void LabelSelector::set_key(const char* value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:firmament.LabelSelector.key)
}
inline void LabelSelector::set_key(const char* value, size_t size) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:firmament.LabelSelector.key)
}
inline ::std::string* LabelSelector::mutable_key() {
  
  // @@protoc_insertion_point(field_mutable:firmament.LabelSelector.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LabelSelector::release_key() {
  // @@protoc_insertion_point(field_release:firmament.LabelSelector.key)
  
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LabelSelector::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    
  } else {
    
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:firmament.LabelSelector.key)
}

// repeated string values = 3;
inline int LabelSelector::values_size() const {
  return values_.size();
}
inline void LabelSelector::clear_values() {
  values_.Clear();
}
inline const ::std::string& LabelSelector::values(int index) const {
  // @@protoc_insertion_point(field_get:firmament.LabelSelector.values)
  return values_.Get(index);
}
inline ::std::string* LabelSelector::mutable_values(int index) {
  // @@protoc_insertion_point(field_mutable:firmament.LabelSelector.values)
  return values_.Mutable(index);
}
inline void LabelSelector::set_values(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:firmament.LabelSelector.values)
  values_.Mutable(index)->assign(value);
}
inline void LabelSelector::set_values(int index, const char* value) {
  values_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:firmament.LabelSelector.values)
}
inline void LabelSelector::set_values(int index, const char* value, size_t size) {
  values_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:firmament.LabelSelector.values)
}
inline ::std::string* LabelSelector::add_values() {
  // @@protoc_insertion_point(field_add_mutable:firmament.LabelSelector.values)
  return values_.Add();
}
inline void LabelSelector::add_values(const ::std::string& value) {
  values_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:firmament.LabelSelector.values)
}
inline void LabelSelector::add_values(const char* value) {
  values_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:firmament.LabelSelector.values)
}
inline void LabelSelector::add_values(const char* value, size_t size) {
  values_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:firmament.LabelSelector.values)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
LabelSelector::values() const {
  // @@protoc_insertion_point(field_list:firmament.LabelSelector.values)
  return values_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
LabelSelector::mutable_values() {
  // @@protoc_insertion_point(field_mutable_list:firmament.LabelSelector.values)
  return &values_;
}

inline const LabelSelector* LabelSelector::internal_default_instance() {
  return &LabelSelector_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace firmament

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::firmament::LabelSelector_SelectorType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::firmament::LabelSelector_SelectorType>() {
  return ::firmament::LabelSelector_SelectorType_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_base_2flabel_5fselector_2eproto__INCLUDED