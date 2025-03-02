// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: feature_extractor.proto

#ifndef PROTOBUF_INCLUDED_feature_5fextractor_2eproto
#define PROTOBUF_INCLUDED_feature_5fextractor_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_feature_5fextractor_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_feature_5fextractor_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
namespace chrome_lang_id {
class FeatureExtractorDescriptor;
class FeatureExtractorDescriptorDefaultTypeInternal;
extern FeatureExtractorDescriptorDefaultTypeInternal _FeatureExtractorDescriptor_default_instance_;
class FeatureFunctionDescriptor;
class FeatureFunctionDescriptorDefaultTypeInternal;
extern FeatureFunctionDescriptorDefaultTypeInternal _FeatureFunctionDescriptor_default_instance_;
class Parameter;
class ParameterDefaultTypeInternal;
extern ParameterDefaultTypeInternal _Parameter_default_instance_;
}  // namespace chrome_lang_id
namespace google {
namespace protobuf {
template<> ::chrome_lang_id::FeatureExtractorDescriptor* Arena::CreateMaybeMessage<::chrome_lang_id::FeatureExtractorDescriptor>(Arena*);
template<> ::chrome_lang_id::FeatureFunctionDescriptor* Arena::CreateMaybeMessage<::chrome_lang_id::FeatureFunctionDescriptor>(Arena*);
template<> ::chrome_lang_id::Parameter* Arena::CreateMaybeMessage<::chrome_lang_id::Parameter>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace chrome_lang_id {

// ===================================================================

class Parameter final :
    public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:chrome_lang_id.Parameter) */ {
 public:
  Parameter();
  virtual ~Parameter();

  Parameter(const Parameter& from);

  inline Parameter& operator=(const Parameter& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Parameter(Parameter&& from) noexcept
    : Parameter() {
    *this = ::std::move(from);
  }

  inline Parameter& operator=(Parameter&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const Parameter& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Parameter* internal_default_instance() {
    return reinterpret_cast<const Parameter*>(
               &_Parameter_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Parameter* other);
  friend void swap(Parameter& a, Parameter& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Parameter* New() const final {
    return CreateMaybeMessage<Parameter>(nullptr);
  }

  Parameter* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Parameter>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    final;
  void CopyFrom(const Parameter& from);
  void MergeFrom(const Parameter& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Parameter* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string name = 1;
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional string value = 2;
  bool has_value() const;
  void clear_value();
  static const int kValueFieldNumber = 2;
  const ::std::string& value() const;
  void set_value(const ::std::string& value);
  #if LANG_CXX11
  void set_value(::std::string&& value);
  #endif
  void set_value(const char* value);
  void set_value(const char* value, size_t size);
  ::std::string* mutable_value();
  ::std::string* release_value();
  void set_allocated_value(::std::string* value);

  // @@protoc_insertion_point(class_scope:chrome_lang_id.Parameter)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr value_;
  friend struct ::TableStruct_feature_5fextractor_2eproto;
};
// -------------------------------------------------------------------

class FeatureFunctionDescriptor final :
    public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:chrome_lang_id.FeatureFunctionDescriptor) */ {
 public:
  FeatureFunctionDescriptor();
  virtual ~FeatureFunctionDescriptor();

  FeatureFunctionDescriptor(const FeatureFunctionDescriptor& from);

  inline FeatureFunctionDescriptor& operator=(const FeatureFunctionDescriptor& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  FeatureFunctionDescriptor(FeatureFunctionDescriptor&& from) noexcept
    : FeatureFunctionDescriptor() {
    *this = ::std::move(from);
  }

  inline FeatureFunctionDescriptor& operator=(FeatureFunctionDescriptor&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const FeatureFunctionDescriptor& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const FeatureFunctionDescriptor* internal_default_instance() {
    return reinterpret_cast<const FeatureFunctionDescriptor*>(
               &_FeatureFunctionDescriptor_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(FeatureFunctionDescriptor* other);
  friend void swap(FeatureFunctionDescriptor& a, FeatureFunctionDescriptor& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline FeatureFunctionDescriptor* New() const final {
    return CreateMaybeMessage<FeatureFunctionDescriptor>(nullptr);
  }

  FeatureFunctionDescriptor* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<FeatureFunctionDescriptor>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    final;
  void CopyFrom(const FeatureFunctionDescriptor& from);
  void MergeFrom(const FeatureFunctionDescriptor& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(FeatureFunctionDescriptor* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .chrome_lang_id.Parameter parameter = 4;
  int parameter_size() const;
  void clear_parameter();
  static const int kParameterFieldNumber = 4;
  ::chrome_lang_id::Parameter* mutable_parameter(int index);
  ::google::protobuf::RepeatedPtrField< ::chrome_lang_id::Parameter >*
      mutable_parameter();
  const ::chrome_lang_id::Parameter& parameter(int index) const;
  ::chrome_lang_id::Parameter* add_parameter();
  const ::google::protobuf::RepeatedPtrField< ::chrome_lang_id::Parameter >&
      parameter() const;

  // repeated .chrome_lang_id.FeatureFunctionDescriptor feature = 7;
  int feature_size() const;
  void clear_feature();
  static const int kFeatureFieldNumber = 7;
  ::chrome_lang_id::FeatureFunctionDescriptor* mutable_feature(int index);
  ::google::protobuf::RepeatedPtrField< ::chrome_lang_id::FeatureFunctionDescriptor >*
      mutable_feature();
  const ::chrome_lang_id::FeatureFunctionDescriptor& feature(int index) const;
  ::chrome_lang_id::FeatureFunctionDescriptor* add_feature();
  const ::google::protobuf::RepeatedPtrField< ::chrome_lang_id::FeatureFunctionDescriptor >&
      feature() const;

  // required string type = 1;
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  const ::std::string& type() const;
  void set_type(const ::std::string& value);
  #if LANG_CXX11
  void set_type(::std::string&& value);
  #endif
  void set_type(const char* value);
  void set_type(const char* value, size_t size);
  ::std::string* mutable_type();
  ::std::string* release_type();
  void set_allocated_type(::std::string* type);

  // optional string name = 2;
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional int32 argument = 3 [default = 0];
  bool has_argument() const;
  void clear_argument();
  static const int kArgumentFieldNumber = 3;
  ::google::protobuf::int32 argument() const;
  void set_argument(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:chrome_lang_id.FeatureFunctionDescriptor)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::chrome_lang_id::Parameter > parameter_;
  ::google::protobuf::RepeatedPtrField< ::chrome_lang_id::FeatureFunctionDescriptor > feature_;
  ::google::protobuf::internal::ArenaStringPtr type_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::int32 argument_;
  friend struct ::TableStruct_feature_5fextractor_2eproto;
};
// -------------------------------------------------------------------

class FeatureExtractorDescriptor final :
    public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:chrome_lang_id.FeatureExtractorDescriptor) */ {
 public:
  FeatureExtractorDescriptor();
  virtual ~FeatureExtractorDescriptor();

  FeatureExtractorDescriptor(const FeatureExtractorDescriptor& from);

  inline FeatureExtractorDescriptor& operator=(const FeatureExtractorDescriptor& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  FeatureExtractorDescriptor(FeatureExtractorDescriptor&& from) noexcept
    : FeatureExtractorDescriptor() {
    *this = ::std::move(from);
  }

  inline FeatureExtractorDescriptor& operator=(FeatureExtractorDescriptor&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const FeatureExtractorDescriptor& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const FeatureExtractorDescriptor* internal_default_instance() {
    return reinterpret_cast<const FeatureExtractorDescriptor*>(
               &_FeatureExtractorDescriptor_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(FeatureExtractorDescriptor* other);
  friend void swap(FeatureExtractorDescriptor& a, FeatureExtractorDescriptor& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline FeatureExtractorDescriptor* New() const final {
    return CreateMaybeMessage<FeatureExtractorDescriptor>(nullptr);
  }

  FeatureExtractorDescriptor* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<FeatureExtractorDescriptor>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    final;
  void CopyFrom(const FeatureExtractorDescriptor& from);
  void MergeFrom(const FeatureExtractorDescriptor& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(FeatureExtractorDescriptor* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .chrome_lang_id.FeatureFunctionDescriptor feature = 1;
  int feature_size() const;
  void clear_feature();
  static const int kFeatureFieldNumber = 1;
  ::chrome_lang_id::FeatureFunctionDescriptor* mutable_feature(int index);
  ::google::protobuf::RepeatedPtrField< ::chrome_lang_id::FeatureFunctionDescriptor >*
      mutable_feature();
  const ::chrome_lang_id::FeatureFunctionDescriptor& feature(int index) const;
  ::chrome_lang_id::FeatureFunctionDescriptor* add_feature();
  const ::google::protobuf::RepeatedPtrField< ::chrome_lang_id::FeatureFunctionDescriptor >&
      feature() const;

  // @@protoc_insertion_point(class_scope:chrome_lang_id.FeatureExtractorDescriptor)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::chrome_lang_id::FeatureFunctionDescriptor > feature_;
  friend struct ::TableStruct_feature_5fextractor_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Parameter

// optional string name = 1;
inline bool Parameter::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Parameter::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::std::string& Parameter::name() const {
  // @@protoc_insertion_point(field_get:chrome_lang_id.Parameter.name)
  return name_.GetNoArena();
}
inline void Parameter::set_name(const ::std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:chrome_lang_id.Parameter.name)
}
#if LANG_CXX11
inline void Parameter::set_name(::std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:chrome_lang_id.Parameter.name)
}
#endif
inline void Parameter::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:chrome_lang_id.Parameter.name)
}
inline void Parameter::set_name(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:chrome_lang_id.Parameter.name)
}
inline ::std::string* Parameter::mutable_name() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:chrome_lang_id.Parameter.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Parameter::release_name() {
  // @@protoc_insertion_point(field_release:chrome_lang_id.Parameter.name)
  if (!has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return name_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Parameter::set_allocated_name(::std::string* name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:chrome_lang_id.Parameter.name)
}

// optional string value = 2;
inline bool Parameter::has_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Parameter::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000002u;
}
inline const ::std::string& Parameter::value() const {
  // @@protoc_insertion_point(field_get:chrome_lang_id.Parameter.value)
  return value_.GetNoArena();
}
inline void Parameter::set_value(const ::std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:chrome_lang_id.Parameter.value)
}
#if LANG_CXX11
inline void Parameter::set_value(::std::string&& value) {
  _has_bits_[0] |= 0x00000002u;
  value_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:chrome_lang_id.Parameter.value)
}
#endif
inline void Parameter::set_value(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000002u;
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:chrome_lang_id.Parameter.value)
}
inline void Parameter::set_value(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000002u;
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:chrome_lang_id.Parameter.value)
}
inline ::std::string* Parameter::mutable_value() {
  _has_bits_[0] |= 0x00000002u;
  // @@protoc_insertion_point(field_mutable:chrome_lang_id.Parameter.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Parameter::release_value() {
  // @@protoc_insertion_point(field_release:chrome_lang_id.Parameter.value)
  if (!has_value()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return value_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Parameter::set_allocated_value(::std::string* value) {
  if (value != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:chrome_lang_id.Parameter.value)
}

// -------------------------------------------------------------------

// FeatureFunctionDescriptor

// required string type = 1;
inline bool FeatureFunctionDescriptor::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void FeatureFunctionDescriptor::clear_type() {
  type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::std::string& FeatureFunctionDescriptor::type() const {
  // @@protoc_insertion_point(field_get:chrome_lang_id.FeatureFunctionDescriptor.type)
  return type_.GetNoArena();
}
inline void FeatureFunctionDescriptor::set_type(const ::std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:chrome_lang_id.FeatureFunctionDescriptor.type)
}
#if LANG_CXX11
inline void FeatureFunctionDescriptor::set_type(::std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  type_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:chrome_lang_id.FeatureFunctionDescriptor.type)
}
#endif
inline void FeatureFunctionDescriptor::set_type(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:chrome_lang_id.FeatureFunctionDescriptor.type)
}
inline void FeatureFunctionDescriptor::set_type(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:chrome_lang_id.FeatureFunctionDescriptor.type)
}
inline ::std::string* FeatureFunctionDescriptor::mutable_type() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:chrome_lang_id.FeatureFunctionDescriptor.type)
  return type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* FeatureFunctionDescriptor::release_type() {
  // @@protoc_insertion_point(field_release:chrome_lang_id.FeatureFunctionDescriptor.type)
  if (!has_type()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return type_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void FeatureFunctionDescriptor::set_allocated_type(::std::string* type) {
  if (type != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), type);
  // @@protoc_insertion_point(field_set_allocated:chrome_lang_id.FeatureFunctionDescriptor.type)
}

// optional string name = 2;
inline bool FeatureFunctionDescriptor::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void FeatureFunctionDescriptor::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000002u;
}
inline const ::std::string& FeatureFunctionDescriptor::name() const {
  // @@protoc_insertion_point(field_get:chrome_lang_id.FeatureFunctionDescriptor.name)
  return name_.GetNoArena();
}
inline void FeatureFunctionDescriptor::set_name(const ::std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:chrome_lang_id.FeatureFunctionDescriptor.name)
}
#if LANG_CXX11
inline void FeatureFunctionDescriptor::set_name(::std::string&& value) {
  _has_bits_[0] |= 0x00000002u;
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:chrome_lang_id.FeatureFunctionDescriptor.name)
}
#endif
inline void FeatureFunctionDescriptor::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000002u;
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:chrome_lang_id.FeatureFunctionDescriptor.name)
}
inline void FeatureFunctionDescriptor::set_name(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000002u;
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:chrome_lang_id.FeatureFunctionDescriptor.name)
}
inline ::std::string* FeatureFunctionDescriptor::mutable_name() {
  _has_bits_[0] |= 0x00000002u;
  // @@protoc_insertion_point(field_mutable:chrome_lang_id.FeatureFunctionDescriptor.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* FeatureFunctionDescriptor::release_name() {
  // @@protoc_insertion_point(field_release:chrome_lang_id.FeatureFunctionDescriptor.name)
  if (!has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return name_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void FeatureFunctionDescriptor::set_allocated_name(::std::string* name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:chrome_lang_id.FeatureFunctionDescriptor.name)
}

// optional int32 argument = 3 [default = 0];
inline bool FeatureFunctionDescriptor::has_argument() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void FeatureFunctionDescriptor::clear_argument() {
  argument_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::google::protobuf::int32 FeatureFunctionDescriptor::argument() const {
  // @@protoc_insertion_point(field_get:chrome_lang_id.FeatureFunctionDescriptor.argument)
  return argument_;
}
inline void FeatureFunctionDescriptor::set_argument(::google::protobuf::int32 value) {
  _has_bits_[0] |= 0x00000004u;
  argument_ = value;
  // @@protoc_insertion_point(field_set:chrome_lang_id.FeatureFunctionDescriptor.argument)
}

// repeated .chrome_lang_id.Parameter parameter = 4;
inline int FeatureFunctionDescriptor::parameter_size() const {
  return parameter_.size();
}
inline void FeatureFunctionDescriptor::clear_parameter() {
  parameter_.Clear();
}
inline ::chrome_lang_id::Parameter* FeatureFunctionDescriptor::mutable_parameter(int index) {
  // @@protoc_insertion_point(field_mutable:chrome_lang_id.FeatureFunctionDescriptor.parameter)
  return parameter_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::chrome_lang_id::Parameter >*
FeatureFunctionDescriptor::mutable_parameter() {
  // @@protoc_insertion_point(field_mutable_list:chrome_lang_id.FeatureFunctionDescriptor.parameter)
  return &parameter_;
}
inline const ::chrome_lang_id::Parameter& FeatureFunctionDescriptor::parameter(int index) const {
  // @@protoc_insertion_point(field_get:chrome_lang_id.FeatureFunctionDescriptor.parameter)
  return parameter_.Get(index);
}
inline ::chrome_lang_id::Parameter* FeatureFunctionDescriptor::add_parameter() {
  // @@protoc_insertion_point(field_add:chrome_lang_id.FeatureFunctionDescriptor.parameter)
  return parameter_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::chrome_lang_id::Parameter >&
FeatureFunctionDescriptor::parameter() const {
  // @@protoc_insertion_point(field_list:chrome_lang_id.FeatureFunctionDescriptor.parameter)
  return parameter_;
}

// repeated .chrome_lang_id.FeatureFunctionDescriptor feature = 7;
inline int FeatureFunctionDescriptor::feature_size() const {
  return feature_.size();
}
inline void FeatureFunctionDescriptor::clear_feature() {
  feature_.Clear();
}
inline ::chrome_lang_id::FeatureFunctionDescriptor* FeatureFunctionDescriptor::mutable_feature(int index) {
  // @@protoc_insertion_point(field_mutable:chrome_lang_id.FeatureFunctionDescriptor.feature)
  return feature_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::chrome_lang_id::FeatureFunctionDescriptor >*
FeatureFunctionDescriptor::mutable_feature() {
  // @@protoc_insertion_point(field_mutable_list:chrome_lang_id.FeatureFunctionDescriptor.feature)
  return &feature_;
}
inline const ::chrome_lang_id::FeatureFunctionDescriptor& FeatureFunctionDescriptor::feature(int index) const {
  // @@protoc_insertion_point(field_get:chrome_lang_id.FeatureFunctionDescriptor.feature)
  return feature_.Get(index);
}
inline ::chrome_lang_id::FeatureFunctionDescriptor* FeatureFunctionDescriptor::add_feature() {
  // @@protoc_insertion_point(field_add:chrome_lang_id.FeatureFunctionDescriptor.feature)
  return feature_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::chrome_lang_id::FeatureFunctionDescriptor >&
FeatureFunctionDescriptor::feature() const {
  // @@protoc_insertion_point(field_list:chrome_lang_id.FeatureFunctionDescriptor.feature)
  return feature_;
}

// -------------------------------------------------------------------

// FeatureExtractorDescriptor

// repeated .chrome_lang_id.FeatureFunctionDescriptor feature = 1;
inline int FeatureExtractorDescriptor::feature_size() const {
  return feature_.size();
}
inline void FeatureExtractorDescriptor::clear_feature() {
  feature_.Clear();
}
inline ::chrome_lang_id::FeatureFunctionDescriptor* FeatureExtractorDescriptor::mutable_feature(int index) {
  // @@protoc_insertion_point(field_mutable:chrome_lang_id.FeatureExtractorDescriptor.feature)
  return feature_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::chrome_lang_id::FeatureFunctionDescriptor >*
FeatureExtractorDescriptor::mutable_feature() {
  // @@protoc_insertion_point(field_mutable_list:chrome_lang_id.FeatureExtractorDescriptor.feature)
  return &feature_;
}
inline const ::chrome_lang_id::FeatureFunctionDescriptor& FeatureExtractorDescriptor::feature(int index) const {
  // @@protoc_insertion_point(field_get:chrome_lang_id.FeatureExtractorDescriptor.feature)
  return feature_.Get(index);
}
inline ::chrome_lang_id::FeatureFunctionDescriptor* FeatureExtractorDescriptor::add_feature() {
  // @@protoc_insertion_point(field_add:chrome_lang_id.FeatureExtractorDescriptor.feature)
  return feature_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::chrome_lang_id::FeatureFunctionDescriptor >&
FeatureExtractorDescriptor::feature() const {
  // @@protoc_insertion_point(field_list:chrome_lang_id.FeatureExtractorDescriptor.feature)
  return feature_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace chrome_lang_id

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_feature_5fextractor_2eproto
