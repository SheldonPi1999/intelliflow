// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: intelliflow.proto

#include "intelliflow.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace intelliflow {
class SensorDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Sensor> _instance;
} _Sensor_default_instance_;
class HubDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Hub> _instance;
} _Hub_default_instance_;
class AdminDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Admin> _instance;
} _Admin_default_instance_;
}  // namespace intelliflow
static void InitDefaultsscc_info_Admin_intelliflow_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::intelliflow::_Admin_default_instance_;
    new (ptr) ::intelliflow::Admin();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::intelliflow::Admin::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Admin_intelliflow_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Admin_intelliflow_2eproto}, {}};

static void InitDefaultsscc_info_Hub_intelliflow_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::intelliflow::_Hub_default_instance_;
    new (ptr) ::intelliflow::Hub();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::intelliflow::Hub::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Hub_intelliflow_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Hub_intelliflow_2eproto}, {}};

static void InitDefaultsscc_info_Sensor_intelliflow_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::intelliflow::_Sensor_default_instance_;
    new (ptr) ::intelliflow::Sensor();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::intelliflow::Sensor::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Sensor_intelliflow_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Sensor_intelliflow_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_intelliflow_2eproto[3];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_intelliflow_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_intelliflow_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_intelliflow_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::intelliflow::Sensor, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::intelliflow::Sensor, id_),
  PROTOBUF_FIELD_OFFSET(::intelliflow::Sensor, value_),
  PROTOBUF_FIELD_OFFSET(::intelliflow::Sensor, unit_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::intelliflow::Hub, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::intelliflow::Hub, id_),
  PROTOBUF_FIELD_OFFSET(::intelliflow::Hub, sensors_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::intelliflow::Admin, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::intelliflow::Admin, id_),
  PROTOBUF_FIELD_OFFSET(::intelliflow::Admin, option_),
  PROTOBUF_FIELD_OFFSET(::intelliflow::Admin, command_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::intelliflow::Sensor)},
  { 8, -1, sizeof(::intelliflow::Hub)},
  { 15, -1, sizeof(::intelliflow::Admin)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::intelliflow::_Sensor_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::intelliflow::_Hub_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::intelliflow::_Admin_default_instance_),
};

const char descriptor_table_protodef_intelliflow_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\021intelliflow.proto\022\013intelliflow\"\306\001\n\006Sen"
  "sor\022\n\n\002id\030\001 \001(\t\022\r\n\005value\030\002 \001(\001\022\'\n\004unit\030\003"
  " \001(\0162\031.intelliflow.Sensor.units\"x\n\005units"
  "\022\013\n\007celsius\020\000\022\016\n\nfahrenheit\020\001\022\007\n\003bar\020\002\022\007"
  "\n\003psi\020\003\022\006\n\002ph\020\004\022\007\n\003ppm\020\005\022\t\n\005volts\020\006\022\013\n\007c"
  "urrent\020\007\022\010\n\004cmps\020\010\022\r\n\ttimestamp\020\t\"\"\n\003Hub"
  "\022\n\n\002id\030\001 \001(\t\022\017\n\007sensors\030\002 \001(\t\"\215\001\n\005Admin\022"
  "\n\n\002id\030\001 \001(\t\022*\n\006option\030\002 \001(\0162\032.intelliflo"
  "w.Admin.options\022\017\n\007command\030\003 \001(\t\";\n\007opti"
  "ons\022\013\n\007restart\020\000\022\010\n\004init\020\001\022\020\n\014factoryres"
  "et\020\002\022\007\n\003cli\020\003b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_intelliflow_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_intelliflow_2eproto_sccs[3] = {
  &scc_info_Admin_intelliflow_2eproto.base,
  &scc_info_Hub_intelliflow_2eproto.base,
  &scc_info_Sensor_intelliflow_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_intelliflow_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_intelliflow_2eproto = {
  false, false, descriptor_table_protodef_intelliflow_2eproto, "intelliflow.proto", 421,
  &descriptor_table_intelliflow_2eproto_once, descriptor_table_intelliflow_2eproto_sccs, descriptor_table_intelliflow_2eproto_deps, 3, 0,
  schemas, file_default_instances, TableStruct_intelliflow_2eproto::offsets,
  file_level_metadata_intelliflow_2eproto, 3, file_level_enum_descriptors_intelliflow_2eproto, file_level_service_descriptors_intelliflow_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_intelliflow_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_intelliflow_2eproto)), true);
namespace intelliflow {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Sensor_units_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_intelliflow_2eproto);
  return file_level_enum_descriptors_intelliflow_2eproto[0];
}
bool Sensor_units_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr Sensor_units Sensor::celsius;
constexpr Sensor_units Sensor::fahrenheit;
constexpr Sensor_units Sensor::bar;
constexpr Sensor_units Sensor::psi;
constexpr Sensor_units Sensor::ph;
constexpr Sensor_units Sensor::ppm;
constexpr Sensor_units Sensor::volts;
constexpr Sensor_units Sensor::current;
constexpr Sensor_units Sensor::cmps;
constexpr Sensor_units Sensor::timestamp;
constexpr Sensor_units Sensor::units_MIN;
constexpr Sensor_units Sensor::units_MAX;
constexpr int Sensor::units_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Admin_options_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_intelliflow_2eproto);
  return file_level_enum_descriptors_intelliflow_2eproto[1];
}
bool Admin_options_IsValid(int value) {
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

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr Admin_options Admin::restart;
constexpr Admin_options Admin::init;
constexpr Admin_options Admin::factoryreset;
constexpr Admin_options Admin::cli;
constexpr Admin_options Admin::options_MIN;
constexpr Admin_options Admin::options_MAX;
constexpr int Admin::options_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

void Sensor::InitAsDefaultInstance() {
}
class Sensor::_Internal {
 public:
};

Sensor::Sensor(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:intelliflow.Sensor)
}
Sensor::Sensor(const Sensor& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_id().empty()) {
    id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_id(),
      GetArena());
  }
  ::memcpy(&value_, &from.value_,
    static_cast<size_t>(reinterpret_cast<char*>(&unit_) -
    reinterpret_cast<char*>(&value_)) + sizeof(unit_));
  // @@protoc_insertion_point(copy_constructor:intelliflow.Sensor)
}

void Sensor::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Sensor_intelliflow_2eproto.base);
  id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&value_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&unit_) -
      reinterpret_cast<char*>(&value_)) + sizeof(unit_));
}

Sensor::~Sensor() {
  // @@protoc_insertion_point(destructor:intelliflow.Sensor)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Sensor::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Sensor::ArenaDtor(void* object) {
  Sensor* _this = reinterpret_cast< Sensor* >(object);
  (void)_this;
}
void Sensor::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Sensor::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Sensor& Sensor::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Sensor_intelliflow_2eproto.base);
  return *internal_default_instance();
}


void Sensor::Clear() {
// @@protoc_insertion_point(message_clear_start:intelliflow.Sensor)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  id_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::memset(&value_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&unit_) -
      reinterpret_cast<char*>(&value_)) + sizeof(unit_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Sensor::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_id();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "intelliflow.Sensor.id"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // double value = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 17)) {
          value_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // .intelliflow.Sensor.units unit = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_unit(static_cast<::intelliflow::Sensor_units>(val));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Sensor::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:intelliflow.Sensor)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string id = 1;
  if (this->id().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_id().data(), static_cast<int>(this->_internal_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "intelliflow.Sensor.id");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_id(), target);
  }

  // double value = 2;
  if (!(this->value() <= 0 && this->value() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(2, this->_internal_value(), target);
  }

  // .intelliflow.Sensor.units unit = 3;
  if (this->unit() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      3, this->_internal_unit(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:intelliflow.Sensor)
  return target;
}

size_t Sensor::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:intelliflow.Sensor)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string id = 1;
  if (this->id().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_id());
  }

  // double value = 2;
  if (!(this->value() <= 0 && this->value() >= 0)) {
    total_size += 1 + 8;
  }

  // .intelliflow.Sensor.units unit = 3;
  if (this->unit() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_unit());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Sensor::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:intelliflow.Sensor)
  GOOGLE_DCHECK_NE(&from, this);
  const Sensor* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Sensor>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:intelliflow.Sensor)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:intelliflow.Sensor)
    MergeFrom(*source);
  }
}

void Sensor::MergeFrom(const Sensor& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:intelliflow.Sensor)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.id().size() > 0) {
    _internal_set_id(from._internal_id());
  }
  if (!(from.value() <= 0 && from.value() >= 0)) {
    _internal_set_value(from._internal_value());
  }
  if (from.unit() != 0) {
    _internal_set_unit(from._internal_unit());
  }
}

void Sensor::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:intelliflow.Sensor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Sensor::CopyFrom(const Sensor& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:intelliflow.Sensor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Sensor::IsInitialized() const {
  return true;
}

void Sensor::InternalSwap(Sensor* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  id_.Swap(&other->id_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Sensor, unit_)
      + sizeof(Sensor::unit_)
      - PROTOBUF_FIELD_OFFSET(Sensor, value_)>(
          reinterpret_cast<char*>(&value_),
          reinterpret_cast<char*>(&other->value_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Sensor::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void Hub::InitAsDefaultInstance() {
}
class Hub::_Internal {
 public:
};

Hub::Hub(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:intelliflow.Hub)
}
Hub::Hub(const Hub& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_id().empty()) {
    id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_id(),
      GetArena());
  }
  sensors_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_sensors().empty()) {
    sensors_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_sensors(),
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:intelliflow.Hub)
}

void Hub::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Hub_intelliflow_2eproto.base);
  id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  sensors_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

Hub::~Hub() {
  // @@protoc_insertion_point(destructor:intelliflow.Hub)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Hub::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  sensors_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Hub::ArenaDtor(void* object) {
  Hub* _this = reinterpret_cast< Hub* >(object);
  (void)_this;
}
void Hub::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Hub::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Hub& Hub::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Hub_intelliflow_2eproto.base);
  return *internal_default_instance();
}


void Hub::Clear() {
// @@protoc_insertion_point(message_clear_start:intelliflow.Hub)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  id_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  sensors_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Hub::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_id();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "intelliflow.Hub.id"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string sensors = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_sensors();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "intelliflow.Hub.sensors"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Hub::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:intelliflow.Hub)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string id = 1;
  if (this->id().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_id().data(), static_cast<int>(this->_internal_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "intelliflow.Hub.id");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_id(), target);
  }

  // string sensors = 2;
  if (this->sensors().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_sensors().data(), static_cast<int>(this->_internal_sensors().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "intelliflow.Hub.sensors");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_sensors(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:intelliflow.Hub)
  return target;
}

size_t Hub::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:intelliflow.Hub)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string id = 1;
  if (this->id().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_id());
  }

  // string sensors = 2;
  if (this->sensors().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_sensors());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Hub::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:intelliflow.Hub)
  GOOGLE_DCHECK_NE(&from, this);
  const Hub* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Hub>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:intelliflow.Hub)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:intelliflow.Hub)
    MergeFrom(*source);
  }
}

void Hub::MergeFrom(const Hub& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:intelliflow.Hub)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.id().size() > 0) {
    _internal_set_id(from._internal_id());
  }
  if (from.sensors().size() > 0) {
    _internal_set_sensors(from._internal_sensors());
  }
}

void Hub::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:intelliflow.Hub)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Hub::CopyFrom(const Hub& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:intelliflow.Hub)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Hub::IsInitialized() const {
  return true;
}

void Hub::InternalSwap(Hub* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  id_.Swap(&other->id_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  sensors_.Swap(&other->sensors_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata Hub::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void Admin::InitAsDefaultInstance() {
}
class Admin::_Internal {
 public:
};

Admin::Admin(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:intelliflow.Admin)
}
Admin::Admin(const Admin& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_id().empty()) {
    id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_id(),
      GetArena());
  }
  command_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_command().empty()) {
    command_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_command(),
      GetArena());
  }
  option_ = from.option_;
  // @@protoc_insertion_point(copy_constructor:intelliflow.Admin)
}

void Admin::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Admin_intelliflow_2eproto.base);
  id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  command_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  option_ = 0;
}

Admin::~Admin() {
  // @@protoc_insertion_point(destructor:intelliflow.Admin)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Admin::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  command_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Admin::ArenaDtor(void* object) {
  Admin* _this = reinterpret_cast< Admin* >(object);
  (void)_this;
}
void Admin::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Admin::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Admin& Admin::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Admin_intelliflow_2eproto.base);
  return *internal_default_instance();
}


void Admin::Clear() {
// @@protoc_insertion_point(message_clear_start:intelliflow.Admin)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  id_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  command_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  option_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Admin::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_id();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "intelliflow.Admin.id"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .intelliflow.Admin.options option = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_option(static_cast<::intelliflow::Admin_options>(val));
        } else goto handle_unusual;
        continue;
      // string command = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_command();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "intelliflow.Admin.command"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Admin::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:intelliflow.Admin)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string id = 1;
  if (this->id().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_id().data(), static_cast<int>(this->_internal_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "intelliflow.Admin.id");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_id(), target);
  }

  // .intelliflow.Admin.options option = 2;
  if (this->option() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      2, this->_internal_option(), target);
  }

  // string command = 3;
  if (this->command().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_command().data(), static_cast<int>(this->_internal_command().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "intelliflow.Admin.command");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_command(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:intelliflow.Admin)
  return target;
}

size_t Admin::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:intelliflow.Admin)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string id = 1;
  if (this->id().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_id());
  }

  // string command = 3;
  if (this->command().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_command());
  }

  // .intelliflow.Admin.options option = 2;
  if (this->option() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_option());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Admin::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:intelliflow.Admin)
  GOOGLE_DCHECK_NE(&from, this);
  const Admin* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Admin>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:intelliflow.Admin)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:intelliflow.Admin)
    MergeFrom(*source);
  }
}

void Admin::MergeFrom(const Admin& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:intelliflow.Admin)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.id().size() > 0) {
    _internal_set_id(from._internal_id());
  }
  if (from.command().size() > 0) {
    _internal_set_command(from._internal_command());
  }
  if (from.option() != 0) {
    _internal_set_option(from._internal_option());
  }
}

void Admin::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:intelliflow.Admin)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Admin::CopyFrom(const Admin& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:intelliflow.Admin)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Admin::IsInitialized() const {
  return true;
}

void Admin::InternalSwap(Admin* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  id_.Swap(&other->id_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  command_.Swap(&other->command_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(option_, other->option_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Admin::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace intelliflow
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::intelliflow::Sensor* Arena::CreateMaybeMessage< ::intelliflow::Sensor >(Arena* arena) {
  return Arena::CreateMessageInternal< ::intelliflow::Sensor >(arena);
}
template<> PROTOBUF_NOINLINE ::intelliflow::Hub* Arena::CreateMaybeMessage< ::intelliflow::Hub >(Arena* arena) {
  return Arena::CreateMessageInternal< ::intelliflow::Hub >(arena);
}
template<> PROTOBUF_NOINLINE ::intelliflow::Admin* Arena::CreateMaybeMessage< ::intelliflow::Admin >(Arena* arena) {
  return Arena::CreateMessageInternal< ::intelliflow::Admin >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
