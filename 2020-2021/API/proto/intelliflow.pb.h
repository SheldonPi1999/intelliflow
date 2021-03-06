// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: intelliflow.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_intelliflow_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_intelliflow_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3013000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3013000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_intelliflow_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_intelliflow_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_intelliflow_2eproto;
namespace intelliflow {
class Admin;
class AdminDefaultTypeInternal;
extern AdminDefaultTypeInternal _Admin_default_instance_;
class Hub;
class HubDefaultTypeInternal;
extern HubDefaultTypeInternal _Hub_default_instance_;
class Sensor;
class SensorDefaultTypeInternal;
extern SensorDefaultTypeInternal _Sensor_default_instance_;
}  // namespace intelliflow
PROTOBUF_NAMESPACE_OPEN
template<> ::intelliflow::Admin* Arena::CreateMaybeMessage<::intelliflow::Admin>(Arena*);
template<> ::intelliflow::Hub* Arena::CreateMaybeMessage<::intelliflow::Hub>(Arena*);
template<> ::intelliflow::Sensor* Arena::CreateMaybeMessage<::intelliflow::Sensor>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace intelliflow {

enum Sensor_units : int {
  Sensor_units_celsius = 0,
  Sensor_units_fahrenheit = 1,
  Sensor_units_bar = 2,
  Sensor_units_psi = 3,
  Sensor_units_ph = 4,
  Sensor_units_ppm = 5,
  Sensor_units_volts = 6,
  Sensor_units_current = 7,
  Sensor_units_cmps = 8,
  Sensor_units_timestamp = 9,
  Sensor_units_Sensor_units_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  Sensor_units_Sensor_units_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool Sensor_units_IsValid(int value);
constexpr Sensor_units Sensor_units_units_MIN = Sensor_units_celsius;
constexpr Sensor_units Sensor_units_units_MAX = Sensor_units_timestamp;
constexpr int Sensor_units_units_ARRAYSIZE = Sensor_units_units_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Sensor_units_descriptor();
template<typename T>
inline const std::string& Sensor_units_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Sensor_units>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Sensor_units_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Sensor_units_descriptor(), enum_t_value);
}
inline bool Sensor_units_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, Sensor_units* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Sensor_units>(
    Sensor_units_descriptor(), name, value);
}
enum Admin_options : int {
  Admin_options_restart = 0,
  Admin_options_init = 1,
  Admin_options_factoryreset = 2,
  Admin_options_cli = 3,
  Admin_options_Admin_options_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  Admin_options_Admin_options_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool Admin_options_IsValid(int value);
constexpr Admin_options Admin_options_options_MIN = Admin_options_restart;
constexpr Admin_options Admin_options_options_MAX = Admin_options_cli;
constexpr int Admin_options_options_ARRAYSIZE = Admin_options_options_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Admin_options_descriptor();
template<typename T>
inline const std::string& Admin_options_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Admin_options>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Admin_options_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Admin_options_descriptor(), enum_t_value);
}
inline bool Admin_options_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, Admin_options* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Admin_options>(
    Admin_options_descriptor(), name, value);
}
// ===================================================================

class Sensor PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:intelliflow.Sensor) */ {
 public:
  inline Sensor() : Sensor(nullptr) {}
  virtual ~Sensor();

  Sensor(const Sensor& from);
  Sensor(Sensor&& from) noexcept
    : Sensor() {
    *this = ::std::move(from);
  }

  inline Sensor& operator=(const Sensor& from) {
    CopyFrom(from);
    return *this;
  }
  inline Sensor& operator=(Sensor&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Sensor& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Sensor* internal_default_instance() {
    return reinterpret_cast<const Sensor*>(
               &_Sensor_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Sensor& a, Sensor& b) {
    a.Swap(&b);
  }
  inline void Swap(Sensor* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Sensor* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Sensor* New() const final {
    return CreateMaybeMessage<Sensor>(nullptr);
  }

  Sensor* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Sensor>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Sensor& from);
  void MergeFrom(const Sensor& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Sensor* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "intelliflow.Sensor";
  }
  protected:
  explicit Sensor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_intelliflow_2eproto);
    return ::descriptor_table_intelliflow_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef Sensor_units units;
  static constexpr units celsius =
    Sensor_units_celsius;
  static constexpr units fahrenheit =
    Sensor_units_fahrenheit;
  static constexpr units bar =
    Sensor_units_bar;
  static constexpr units psi =
    Sensor_units_psi;
  static constexpr units ph =
    Sensor_units_ph;
  static constexpr units ppm =
    Sensor_units_ppm;
  static constexpr units volts =
    Sensor_units_volts;
  static constexpr units current =
    Sensor_units_current;
  static constexpr units cmps =
    Sensor_units_cmps;
  static constexpr units timestamp =
    Sensor_units_timestamp;
  static inline bool units_IsValid(int value) {
    return Sensor_units_IsValid(value);
  }
  static constexpr units units_MIN =
    Sensor_units_units_MIN;
  static constexpr units units_MAX =
    Sensor_units_units_MAX;
  static constexpr int units_ARRAYSIZE =
    Sensor_units_units_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  units_descriptor() {
    return Sensor_units_descriptor();
  }
  template<typename T>
  static inline const std::string& units_Name(T enum_t_value) {
    static_assert(::std::is_same<T, units>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function units_Name.");
    return Sensor_units_Name(enum_t_value);
  }
  static inline bool units_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      units* value) {
    return Sensor_units_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kIdFieldNumber = 1,
    kValueFieldNumber = 2,
    kUnitFieldNumber = 3,
  };
  // string id = 1;
  void clear_id();
  const std::string& id() const;
  void set_id(const std::string& value);
  void set_id(std::string&& value);
  void set_id(const char* value);
  void set_id(const char* value, size_t size);
  std::string* mutable_id();
  std::string* release_id();
  void set_allocated_id(std::string* id);
  private:
  const std::string& _internal_id() const;
  void _internal_set_id(const std::string& value);
  std::string* _internal_mutable_id();
  public:

  // double value = 2;
  void clear_value();
  double value() const;
  void set_value(double value);
  private:
  double _internal_value() const;
  void _internal_set_value(double value);
  public:

  // .intelliflow.Sensor.units unit = 3;
  void clear_unit();
  ::intelliflow::Sensor_units unit() const;
  void set_unit(::intelliflow::Sensor_units value);
  private:
  ::intelliflow::Sensor_units _internal_unit() const;
  void _internal_set_unit(::intelliflow::Sensor_units value);
  public:

  // @@protoc_insertion_point(class_scope:intelliflow.Sensor)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr id_;
  double value_;
  int unit_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_intelliflow_2eproto;
};
// -------------------------------------------------------------------

class Hub PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:intelliflow.Hub) */ {
 public:
  inline Hub() : Hub(nullptr) {}
  virtual ~Hub();

  Hub(const Hub& from);
  Hub(Hub&& from) noexcept
    : Hub() {
    *this = ::std::move(from);
  }

  inline Hub& operator=(const Hub& from) {
    CopyFrom(from);
    return *this;
  }
  inline Hub& operator=(Hub&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Hub& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Hub* internal_default_instance() {
    return reinterpret_cast<const Hub*>(
               &_Hub_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Hub& a, Hub& b) {
    a.Swap(&b);
  }
  inline void Swap(Hub* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Hub* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Hub* New() const final {
    return CreateMaybeMessage<Hub>(nullptr);
  }

  Hub* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Hub>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Hub& from);
  void MergeFrom(const Hub& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Hub* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "intelliflow.Hub";
  }
  protected:
  explicit Hub(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_intelliflow_2eproto);
    return ::descriptor_table_intelliflow_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIdFieldNumber = 1,
    kSensorsFieldNumber = 2,
  };
  // string id = 1;
  void clear_id();
  const std::string& id() const;
  void set_id(const std::string& value);
  void set_id(std::string&& value);
  void set_id(const char* value);
  void set_id(const char* value, size_t size);
  std::string* mutable_id();
  std::string* release_id();
  void set_allocated_id(std::string* id);
  private:
  const std::string& _internal_id() const;
  void _internal_set_id(const std::string& value);
  std::string* _internal_mutable_id();
  public:

  // string sensors = 2;
  void clear_sensors();
  const std::string& sensors() const;
  void set_sensors(const std::string& value);
  void set_sensors(std::string&& value);
  void set_sensors(const char* value);
  void set_sensors(const char* value, size_t size);
  std::string* mutable_sensors();
  std::string* release_sensors();
  void set_allocated_sensors(std::string* sensors);
  private:
  const std::string& _internal_sensors() const;
  void _internal_set_sensors(const std::string& value);
  std::string* _internal_mutable_sensors();
  public:

  // @@protoc_insertion_point(class_scope:intelliflow.Hub)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr id_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr sensors_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_intelliflow_2eproto;
};
// -------------------------------------------------------------------

class Admin PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:intelliflow.Admin) */ {
 public:
  inline Admin() : Admin(nullptr) {}
  virtual ~Admin();

  Admin(const Admin& from);
  Admin(Admin&& from) noexcept
    : Admin() {
    *this = ::std::move(from);
  }

  inline Admin& operator=(const Admin& from) {
    CopyFrom(from);
    return *this;
  }
  inline Admin& operator=(Admin&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Admin& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Admin* internal_default_instance() {
    return reinterpret_cast<const Admin*>(
               &_Admin_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(Admin& a, Admin& b) {
    a.Swap(&b);
  }
  inline void Swap(Admin* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Admin* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Admin* New() const final {
    return CreateMaybeMessage<Admin>(nullptr);
  }

  Admin* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Admin>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Admin& from);
  void MergeFrom(const Admin& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Admin* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "intelliflow.Admin";
  }
  protected:
  explicit Admin(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_intelliflow_2eproto);
    return ::descriptor_table_intelliflow_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef Admin_options options;
  static constexpr options restart =
    Admin_options_restart;
  static constexpr options init =
    Admin_options_init;
  static constexpr options factoryreset =
    Admin_options_factoryreset;
  static constexpr options cli =
    Admin_options_cli;
  static inline bool options_IsValid(int value) {
    return Admin_options_IsValid(value);
  }
  static constexpr options options_MIN =
    Admin_options_options_MIN;
  static constexpr options options_MAX =
    Admin_options_options_MAX;
  static constexpr int options_ARRAYSIZE =
    Admin_options_options_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  options_descriptor() {
    return Admin_options_descriptor();
  }
  template<typename T>
  static inline const std::string& options_Name(T enum_t_value) {
    static_assert(::std::is_same<T, options>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function options_Name.");
    return Admin_options_Name(enum_t_value);
  }
  static inline bool options_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      options* value) {
    return Admin_options_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kIdFieldNumber = 1,
    kCommandFieldNumber = 3,
    kOptionFieldNumber = 2,
  };
  // string id = 1;
  void clear_id();
  const std::string& id() const;
  void set_id(const std::string& value);
  void set_id(std::string&& value);
  void set_id(const char* value);
  void set_id(const char* value, size_t size);
  std::string* mutable_id();
  std::string* release_id();
  void set_allocated_id(std::string* id);
  private:
  const std::string& _internal_id() const;
  void _internal_set_id(const std::string& value);
  std::string* _internal_mutable_id();
  public:

  // string command = 3;
  void clear_command();
  const std::string& command() const;
  void set_command(const std::string& value);
  void set_command(std::string&& value);
  void set_command(const char* value);
  void set_command(const char* value, size_t size);
  std::string* mutable_command();
  std::string* release_command();
  void set_allocated_command(std::string* command);
  private:
  const std::string& _internal_command() const;
  void _internal_set_command(const std::string& value);
  std::string* _internal_mutable_command();
  public:

  // .intelliflow.Admin.options option = 2;
  void clear_option();
  ::intelliflow::Admin_options option() const;
  void set_option(::intelliflow::Admin_options value);
  private:
  ::intelliflow::Admin_options _internal_option() const;
  void _internal_set_option(::intelliflow::Admin_options value);
  public:

  // @@protoc_insertion_point(class_scope:intelliflow.Admin)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr id_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr command_;
  int option_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_intelliflow_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Sensor

// string id = 1;
inline void Sensor::clear_id() {
  id_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& Sensor::id() const {
  // @@protoc_insertion_point(field_get:intelliflow.Sensor.id)
  return _internal_id();
}
inline void Sensor::set_id(const std::string& value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:intelliflow.Sensor.id)
}
inline std::string* Sensor::mutable_id() {
  // @@protoc_insertion_point(field_mutable:intelliflow.Sensor.id)
  return _internal_mutable_id();
}
inline const std::string& Sensor::_internal_id() const {
  return id_.Get();
}
inline void Sensor::_internal_set_id(const std::string& value) {
  
  id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void Sensor::set_id(std::string&& value) {
  
  id_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:intelliflow.Sensor.id)
}
inline void Sensor::set_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:intelliflow.Sensor.id)
}
inline void Sensor::set_id(const char* value,
    size_t size) {
  
  id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:intelliflow.Sensor.id)
}
inline std::string* Sensor::_internal_mutable_id() {
  
  return id_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* Sensor::release_id() {
  // @@protoc_insertion_point(field_release:intelliflow.Sensor.id)
  return id_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Sensor::set_allocated_id(std::string* id) {
  if (id != nullptr) {
    
  } else {
    
  }
  id_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), id,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:intelliflow.Sensor.id)
}

// double value = 2;
inline void Sensor::clear_value() {
  value_ = 0;
}
inline double Sensor::_internal_value() const {
  return value_;
}
inline double Sensor::value() const {
  // @@protoc_insertion_point(field_get:intelliflow.Sensor.value)
  return _internal_value();
}
inline void Sensor::_internal_set_value(double value) {
  
  value_ = value;
}
inline void Sensor::set_value(double value) {
  _internal_set_value(value);
  // @@protoc_insertion_point(field_set:intelliflow.Sensor.value)
}

// .intelliflow.Sensor.units unit = 3;
inline void Sensor::clear_unit() {
  unit_ = 0;
}
inline ::intelliflow::Sensor_units Sensor::_internal_unit() const {
  return static_cast< ::intelliflow::Sensor_units >(unit_);
}
inline ::intelliflow::Sensor_units Sensor::unit() const {
  // @@protoc_insertion_point(field_get:intelliflow.Sensor.unit)
  return _internal_unit();
}
inline void Sensor::_internal_set_unit(::intelliflow::Sensor_units value) {
  
  unit_ = value;
}
inline void Sensor::set_unit(::intelliflow::Sensor_units value) {
  _internal_set_unit(value);
  // @@protoc_insertion_point(field_set:intelliflow.Sensor.unit)
}

// -------------------------------------------------------------------

// Hub

// string id = 1;
inline void Hub::clear_id() {
  id_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& Hub::id() const {
  // @@protoc_insertion_point(field_get:intelliflow.Hub.id)
  return _internal_id();
}
inline void Hub::set_id(const std::string& value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:intelliflow.Hub.id)
}
inline std::string* Hub::mutable_id() {
  // @@protoc_insertion_point(field_mutable:intelliflow.Hub.id)
  return _internal_mutable_id();
}
inline const std::string& Hub::_internal_id() const {
  return id_.Get();
}
inline void Hub::_internal_set_id(const std::string& value) {
  
  id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void Hub::set_id(std::string&& value) {
  
  id_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:intelliflow.Hub.id)
}
inline void Hub::set_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:intelliflow.Hub.id)
}
inline void Hub::set_id(const char* value,
    size_t size) {
  
  id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:intelliflow.Hub.id)
}
inline std::string* Hub::_internal_mutable_id() {
  
  return id_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* Hub::release_id() {
  // @@protoc_insertion_point(field_release:intelliflow.Hub.id)
  return id_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Hub::set_allocated_id(std::string* id) {
  if (id != nullptr) {
    
  } else {
    
  }
  id_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), id,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:intelliflow.Hub.id)
}

// string sensors = 2;
inline void Hub::clear_sensors() {
  sensors_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& Hub::sensors() const {
  // @@protoc_insertion_point(field_get:intelliflow.Hub.sensors)
  return _internal_sensors();
}
inline void Hub::set_sensors(const std::string& value) {
  _internal_set_sensors(value);
  // @@protoc_insertion_point(field_set:intelliflow.Hub.sensors)
}
inline std::string* Hub::mutable_sensors() {
  // @@protoc_insertion_point(field_mutable:intelliflow.Hub.sensors)
  return _internal_mutable_sensors();
}
inline const std::string& Hub::_internal_sensors() const {
  return sensors_.Get();
}
inline void Hub::_internal_set_sensors(const std::string& value) {
  
  sensors_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void Hub::set_sensors(std::string&& value) {
  
  sensors_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:intelliflow.Hub.sensors)
}
inline void Hub::set_sensors(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  sensors_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:intelliflow.Hub.sensors)
}
inline void Hub::set_sensors(const char* value,
    size_t size) {
  
  sensors_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:intelliflow.Hub.sensors)
}
inline std::string* Hub::_internal_mutable_sensors() {
  
  return sensors_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* Hub::release_sensors() {
  // @@protoc_insertion_point(field_release:intelliflow.Hub.sensors)
  return sensors_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Hub::set_allocated_sensors(std::string* sensors) {
  if (sensors != nullptr) {
    
  } else {
    
  }
  sensors_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), sensors,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:intelliflow.Hub.sensors)
}

// -------------------------------------------------------------------

// Admin

// string id = 1;
inline void Admin::clear_id() {
  id_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& Admin::id() const {
  // @@protoc_insertion_point(field_get:intelliflow.Admin.id)
  return _internal_id();
}
inline void Admin::set_id(const std::string& value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:intelliflow.Admin.id)
}
inline std::string* Admin::mutable_id() {
  // @@protoc_insertion_point(field_mutable:intelliflow.Admin.id)
  return _internal_mutable_id();
}
inline const std::string& Admin::_internal_id() const {
  return id_.Get();
}
inline void Admin::_internal_set_id(const std::string& value) {
  
  id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void Admin::set_id(std::string&& value) {
  
  id_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:intelliflow.Admin.id)
}
inline void Admin::set_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:intelliflow.Admin.id)
}
inline void Admin::set_id(const char* value,
    size_t size) {
  
  id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:intelliflow.Admin.id)
}
inline std::string* Admin::_internal_mutable_id() {
  
  return id_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* Admin::release_id() {
  // @@protoc_insertion_point(field_release:intelliflow.Admin.id)
  return id_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Admin::set_allocated_id(std::string* id) {
  if (id != nullptr) {
    
  } else {
    
  }
  id_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), id,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:intelliflow.Admin.id)
}

// .intelliflow.Admin.options option = 2;
inline void Admin::clear_option() {
  option_ = 0;
}
inline ::intelliflow::Admin_options Admin::_internal_option() const {
  return static_cast< ::intelliflow::Admin_options >(option_);
}
inline ::intelliflow::Admin_options Admin::option() const {
  // @@protoc_insertion_point(field_get:intelliflow.Admin.option)
  return _internal_option();
}
inline void Admin::_internal_set_option(::intelliflow::Admin_options value) {
  
  option_ = value;
}
inline void Admin::set_option(::intelliflow::Admin_options value) {
  _internal_set_option(value);
  // @@protoc_insertion_point(field_set:intelliflow.Admin.option)
}

// string command = 3;
inline void Admin::clear_command() {
  command_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& Admin::command() const {
  // @@protoc_insertion_point(field_get:intelliflow.Admin.command)
  return _internal_command();
}
inline void Admin::set_command(const std::string& value) {
  _internal_set_command(value);
  // @@protoc_insertion_point(field_set:intelliflow.Admin.command)
}
inline std::string* Admin::mutable_command() {
  // @@protoc_insertion_point(field_mutable:intelliflow.Admin.command)
  return _internal_mutable_command();
}
inline const std::string& Admin::_internal_command() const {
  return command_.Get();
}
inline void Admin::_internal_set_command(const std::string& value) {
  
  command_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void Admin::set_command(std::string&& value) {
  
  command_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:intelliflow.Admin.command)
}
inline void Admin::set_command(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  command_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:intelliflow.Admin.command)
}
inline void Admin::set_command(const char* value,
    size_t size) {
  
  command_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:intelliflow.Admin.command)
}
inline std::string* Admin::_internal_mutable_command() {
  
  return command_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* Admin::release_command() {
  // @@protoc_insertion_point(field_release:intelliflow.Admin.command)
  return command_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Admin::set_allocated_command(std::string* command) {
  if (command != nullptr) {
    
  } else {
    
  }
  command_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), command,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:intelliflow.Admin.command)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace intelliflow

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::intelliflow::Sensor_units> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::intelliflow::Sensor_units>() {
  return ::intelliflow::Sensor_units_descriptor();
}
template <> struct is_proto_enum< ::intelliflow::Admin_options> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::intelliflow::Admin_options>() {
  return ::intelliflow::Admin_options_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_intelliflow_2eproto
