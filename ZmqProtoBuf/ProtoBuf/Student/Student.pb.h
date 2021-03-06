// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Student.proto

#ifndef PROTOBUF_Student_2eproto__INCLUDED
#define PROTOBUF_Student_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_Student_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsStudentDetailsImpl();
void InitDefaultsStudentDetails();
inline void InitDefaults() {
  InitDefaultsStudentDetails();
}
}  // namespace protobuf_Student_2eproto
namespace School {
class StudentDetails;
class StudentDetailsDefaultTypeInternal;
extern StudentDetailsDefaultTypeInternal _StudentDetails_default_instance_;
}  // namespace School
namespace School {

enum Gender {
  FEMALE = 0,
  MALE = 1,
  Gender_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Gender_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Gender_IsValid(int value);
const Gender Gender_MIN = FEMALE;
const Gender Gender_MAX = MALE;
const int Gender_ARRAYSIZE = Gender_MAX + 1;

const ::google::protobuf::EnumDescriptor* Gender_descriptor();
inline const ::std::string& Gender_Name(Gender value) {
  return ::google::protobuf::internal::NameOfEnum(
    Gender_descriptor(), value);
}
inline bool Gender_Parse(
    const ::std::string& name, Gender* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Gender>(
    Gender_descriptor(), name, value);
}
// ===================================================================

class StudentDetails : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:School.StudentDetails) */ {
 public:
  StudentDetails();
  virtual ~StudentDetails();

  StudentDetails(const StudentDetails& from);

  inline StudentDetails& operator=(const StudentDetails& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  StudentDetails(StudentDetails&& from) noexcept
    : StudentDetails() {
    *this = ::std::move(from);
  }

  inline StudentDetails& operator=(StudentDetails&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const StudentDetails& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const StudentDetails* internal_default_instance() {
    return reinterpret_cast<const StudentDetails*>(
               &_StudentDetails_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(StudentDetails* other);
  friend void swap(StudentDetails& a, StudentDetails& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline StudentDetails* New() const PROTOBUF_FINAL { return New(NULL); }

  StudentDetails* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const StudentDetails& from);
  void MergeFrom(const StudentDetails& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(StudentDetails* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string name = 1;
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

  // int32 age = 2;
  void clear_age();
  static const int kAgeFieldNumber = 2;
  ::google::protobuf::int32 age() const;
  void set_age(::google::protobuf::int32 value);

  // .School.Gender gender = 3;
  void clear_gender();
  static const int kGenderFieldNumber = 3;
  ::School::Gender gender() const;
  void set_gender(::School::Gender value);

  // @@protoc_insertion_point(class_scope:School.StudentDetails)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::int32 age_;
  int gender_;
  mutable int _cached_size_;
  friend struct ::protobuf_Student_2eproto::TableStruct;
  friend void ::protobuf_Student_2eproto::InitDefaultsStudentDetailsImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// StudentDetails

// string name = 1;
inline void StudentDetails::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& StudentDetails::name() const {
  // @@protoc_insertion_point(field_get:School.StudentDetails.name)
  return name_.GetNoArena();
}
inline void StudentDetails::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:School.StudentDetails.name)
}
#if LANG_CXX11
inline void StudentDetails::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:School.StudentDetails.name)
}
#endif
inline void StudentDetails::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:School.StudentDetails.name)
}
inline void StudentDetails::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:School.StudentDetails.name)
}
inline ::std::string* StudentDetails::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:School.StudentDetails.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* StudentDetails::release_name() {
  // @@protoc_insertion_point(field_release:School.StudentDetails.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void StudentDetails::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:School.StudentDetails.name)
}

// int32 age = 2;
inline void StudentDetails::clear_age() {
  age_ = 0;
}
inline ::google::protobuf::int32 StudentDetails::age() const {
  // @@protoc_insertion_point(field_get:School.StudentDetails.age)
  return age_;
}
inline void StudentDetails::set_age(::google::protobuf::int32 value) {
  
  age_ = value;
  // @@protoc_insertion_point(field_set:School.StudentDetails.age)
}

// .School.Gender gender = 3;
inline void StudentDetails::clear_gender() {
  gender_ = 0;
}
inline ::School::Gender StudentDetails::gender() const {
  // @@protoc_insertion_point(field_get:School.StudentDetails.gender)
  return static_cast< ::School::Gender >(gender_);
}
inline void StudentDetails::set_gender(::School::Gender value) {
  
  gender_ = value;
  // @@protoc_insertion_point(field_set:School.StudentDetails.gender)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace School

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::School::Gender> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::School::Gender>() {
  return ::School::Gender_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Student_2eproto__INCLUDED
