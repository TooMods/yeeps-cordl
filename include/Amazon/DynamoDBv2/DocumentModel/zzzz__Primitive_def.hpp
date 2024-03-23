#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBEntryType_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBEntry_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Primitive)
namespace Amazon::DynamoDBv2::DocumentModel {
struct DynamoDBEntryType;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class __DynamoDBEntry__AttributeConversionConfig;
}
namespace Amazon::DynamoDBv2::Model {
class AttributeValue;
}
namespace Amazon::DynamoDBv2 {
class DynamoDBEntryConversion;
}
namespace System::IO {
class MemoryStream;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
struct Guid;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DocumentModel {
class Primitive;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::Primitive);
// Type: Amazon.DynamoDBv2.DocumentModel::Primitive
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::Primitive*
class CORDL_TYPE Primitive : public ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry {
public:
  // Declarations
  __declspec(property(get = get_StringValue))::StringW StringValue;

  __declspec(property(get = get_Type, put = set_Type))::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType Type;

  /// @brief Field V1Conversion, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_V1Conversion, put = setStaticF_V1Conversion))::Amazon::DynamoDBv2::DynamoDBEntryConversion* V1Conversion;

  __declspec(property(get = get_Value, put = set_Value))::System::Object* Value;

  /// @brief Field <Type>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__Type_k__BackingField, put = __cordl_internal_set__Type_k__BackingField))::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType _Type_k__BackingField;

  /// @brief Field <Value>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Value_k__BackingField, put = __cordl_internal_set__Value_k__BackingField))::System::Object* _Value_k__BackingField;

  /// @brief Convert operator to "::System::IEquatable_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>"
  constexpr operator ::System::IEquatable_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*() noexcept;

  /// @brief Method AsBoolean, addr 0x1657ef8, size 0x80, virtual true, abstract: false, final false
  inline bool AsBoolean();

  /// @brief Method AsByte, addr 0x165801c, size 0x80, virtual true, abstract: false, final false
  inline uint8_t AsByte();

  /// @brief Method AsByteArray, addr 0x165918c, size 0x80, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> AsByteArray();

  /// @brief Method AsChar, addr 0x1658cdc, size 0x80, virtual true, abstract: false, final false
  inline char16_t AsChar();

  /// @brief Method AsDateTime, addr 0x1658f2c, size 0x80, virtual true, abstract: false, final false
  inline ::System::DateTime AsDateTime();

  /// @brief Method AsDecimal, addr 0x1658ba4, size 0x80, virtual true, abstract: false, final false
  inline ::System::Decimal AsDecimal();

  /// @brief Method AsDouble, addr 0x1658a74, size 0x80, virtual true, abstract: false, final false
  inline double_t AsDouble();

  /// @brief Method AsGuid, addr 0x1659054, size 0x80, virtual true, abstract: false, final false
  inline ::System::Guid AsGuid();

  /// @brief Method AsInt, addr 0x16585d0, size 0x80, virtual true, abstract: false, final false
  inline int32_t AsInt();

  /// @brief Method AsLong, addr 0x165881c, size 0x80, virtual true, abstract: false, final false
  inline int64_t AsLong();

  /// @brief Method AsMemoryStream, addr 0x16592b4, size 0x80, virtual true, abstract: false, final false
  inline ::System::IO::MemoryStream* AsMemoryStream();

  /// @brief Method AsSByte, addr 0x1658140, size 0x80, virtual true, abstract: false, final false
  inline int8_t AsSByte();

  /// @brief Method AsShort, addr 0x1658388, size 0x80, virtual true, abstract: false, final false
  inline int16_t AsShort();

  /// @brief Method AsSingle, addr 0x1658944, size 0x80, virtual true, abstract: false, final false
  inline float_t AsSingle();

  /// @brief Method AsString, addr 0x1658e04, size 0x80, virtual true, abstract: false, final false
  inline ::StringW AsString();

  /// @brief Method AsUInt, addr 0x16584ac, size 0x80, virtual true, abstract: false, final false
  inline uint32_t AsUInt();

  /// @brief Method AsULong, addr 0x16586f4, size 0x80, virtual true, abstract: false, final false
  inline uint64_t AsULong();

  /// @brief Method AsUShort, addr 0x1658264, size 0x80, virtual true, abstract: false, final false
  inline uint16_t AsUShort();

  /// @brief Method Clone, addr 0x1659444, size 0x78, virtual true, abstract: false, final false
  inline ::System::Object* Clone();

  /// @brief Method ConvertToAttributeValue, addr 0x1657d20, size 0x16c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::AttributeValue* ConvertToAttributeValue(::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig* conversionConfig);

  /// @brief Method Equals, addr 0x1659650, size 0x178, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x16597c8, size 0xc, virtual true, abstract: false, final true
  inline bool Equals(::Amazon::DynamoDBv2::DocumentModel::Primitive* other);

  /// @brief Method GetHashCode, addr 0x16594bc, size 0x194, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Amazon::DynamoDBv2::DocumentModel::Primitive* New_ctor();

  static inline ::Amazon::DynamoDBv2::DocumentModel::Primitive* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::Amazon::DynamoDBv2::DocumentModel::Primitive* New_ctor(::StringW value);

  static inline ::Amazon::DynamoDBv2::DocumentModel::Primitive* New_ctor(::StringW value, bool saveAsNumeric);

  static inline ::Amazon::DynamoDBv2::DocumentModel::Primitive* New_ctor(::System::IO::MemoryStream* value);

  static inline ::Amazon::DynamoDBv2::DocumentModel::Primitive* New_ctor(::System::Object* value, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType type);

  /// @brief Method ToString, addr 0x16593dc, size 0x68, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType const& __cordl_internal_get__Type_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType& __cordl_internal_get__Type_k__BackingField();

  constexpr ::System::Object*& __cordl_internal_get__Value_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__Value_k__BackingField() const;

  constexpr void __cordl_internal_set__Type_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType value);

  constexpr void __cordl_internal_set__Value_k__BackingField(::System::Object* value);

  /// @brief Method .ctor, addr 0x164f4e0, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1657918, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x1657c50, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  /// @brief Method .ctor, addr 0x1657c7c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW value, bool saveAsNumeric);

  /// @brief Method .ctor, addr 0x1657cac, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::MemoryStream* value);

  /// @brief Method .ctor, addr 0x1657c20, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* value, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType type);

  static inline ::Amazon::DynamoDBv2::DynamoDBEntryConversion* getStaticF_V1Conversion();

  /// @brief Method get_StringValue, addr 0x1657e8c, size 0x6c, virtual false, abstract: false, final false
  inline ::StringW get_StringValue();

  /// @brief Method get_Type, addr 0x1657d10, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType get_Type();

  /// @brief Method get_Value, addr 0x1657d00, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Value();

  /// @brief Convert to "::System::IEquatable_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>"
  constexpr ::System::IEquatable_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* i___System__IEquatable_1___Amazon__DynamoDBv2__DocumentModel__Primitive__() noexcept;

  /// @brief Method op_Explicit, addr 0x1659294, size 0x20, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> op_Explicit___ArrayW_uint8_t___Array_uint8_t___(::Amazon::DynamoDBv2::DocumentModel::Primitive* p);

  /// @brief Method op_Explicit, addr 0x1659034, size 0x20, virtual false, abstract: false, final false
  static inline ::System::DateTime op_Explicit___System__DateTime(::Amazon::DynamoDBv2::DocumentModel::Primitive* p);

  /// @brief Method op_Explicit, addr 0x1658cbc, size 0x20, virtual false, abstract: false, final false
  static inline ::System::Decimal op_Explicit___System__Decimal(::Amazon::DynamoDBv2::DocumentModel::Primitive* p);

  /// @brief Method op_Explicit, addr 0x165916c, size 0x20, virtual false, abstract: false, final false
  static inline ::System::Guid op_Explicit___System__Guid(::Amazon::DynamoDBv2::DocumentModel::Primitive* p);

  /// @brief Method op_Explicit, addr 0x16593bc, size 0x20, virtual false, abstract: false, final false
  static inline ::System::IO::MemoryStream* op_Explicit___System__IO__MemoryStream_(::Amazon::DynamoDBv2::DocumentModel::Primitive* p);

  /// @brief Method op_Explicit, addr 0x1658000, size 0x1c, virtual false, abstract: false, final false
  static inline bool op_Explicit_bool(::Amazon::DynamoDBv2::DocumentModel::Primitive* p);

  /// @brief Method op_Explicit, addr 0x1658de4, size 0x20, virtual false, abstract: false, final false
  static inline char16_t op_Explicit_char16_t(::Amazon::DynamoDBv2::DocumentModel::Primitive* p);

  /// @brief Method op_Explicit, addr 0x1658b84, size 0x20, virtual false, abstract: false, final false
  static inline double_t op_Explicit_double_t(::Amazon::DynamoDBv2::DocumentModel::Primitive* p);

  /// @brief Method op_Explicit, addr 0x1658a54, size 0x20, virtual false, abstract: false, final false
  static inline float_t op_Explicit_float_t(::Amazon::DynamoDBv2::DocumentModel::Primitive* p);

  /// @brief Method op_Explicit, addr 0x1658490, size 0x1c, virtual false, abstract: false, final false
  static inline int16_t op_Explicit_int16_t(::Amazon::DynamoDBv2::DocumentModel::Primitive* p);

  /// @brief Method op_Explicit, addr 0x16586d8, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t op_Explicit_int32_t(::Amazon::DynamoDBv2::DocumentModel::Primitive* p);

  /// @brief Method op_Explicit, addr 0x1658924, size 0x20, virtual false, abstract: false, final false
  static inline int64_t op_Explicit_int64_t(::Amazon::DynamoDBv2::DocumentModel::Primitive* p);

  /// @brief Method op_Explicit, addr 0x1658248, size 0x1c, virtual false, abstract: false, final false
  static inline int8_t op_Explicit_int8_t(::Amazon::DynamoDBv2::DocumentModel::Primitive* p);

  /// @brief Method op_Explicit, addr 0x165836c, size 0x1c, virtual false, abstract: false, final false
  static inline uint16_t op_Explicit_uint16_t(::Amazon::DynamoDBv2::DocumentModel::Primitive* p);

  /// @brief Method op_Explicit, addr 0x16585b4, size 0x1c, virtual false, abstract: false, final false
  static inline uint32_t op_Explicit_uint32_t(::Amazon::DynamoDBv2::DocumentModel::Primitive* p);

  /// @brief Method op_Explicit, addr 0x16587fc, size 0x20, virtual false, abstract: false, final false
  static inline uint64_t op_Explicit_uint64_t(::Amazon::DynamoDBv2::DocumentModel::Primitive* p);

  /// @brief Method op_Explicit, addr 0x1658124, size 0x1c, virtual false, abstract: false, final false
  static inline uint8_t op_Explicit_uint8_t(::Amazon::DynamoDBv2::DocumentModel::Primitive* p);

  /// @brief Method op_Implicit, addr 0x165920c, size 0x88, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::Primitive* op_Implicit___Amazon__DynamoDBv2__DocumentModel__Primitive_(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method op_Implicit, addr 0x1658e84, size 0x88, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::Primitive* op_Implicit___Amazon__DynamoDBv2__DocumentModel__Primitive_(::StringW data);

  /// @brief Method op_Implicit, addr 0x1658fac, size 0x88, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::Primitive* op_Implicit___Amazon__DynamoDBv2__DocumentModel__Primitive_(::System::DateTime data);

  /// @brief Method op_Implicit, addr 0x1658c24, size 0x98, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::Primitive* op_Implicit___Amazon__DynamoDBv2__DocumentModel__Primitive_(::System::Decimal data);

  /// @brief Method op_Implicit, addr 0x16590d4, size 0x98, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::Primitive* op_Implicit___Amazon__DynamoDBv2__DocumentModel__Primitive_(::System::Guid data);

  /// @brief Method op_Implicit, addr 0x1659334, size 0x88, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::Primitive* op_Implicit___Amazon__DynamoDBv2__DocumentModel__Primitive_(::System::IO::MemoryStream* data);

  /// @brief Method op_Implicit, addr 0x1657f78, size 0x88, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::Primitive* op_Implicit___Amazon__DynamoDBv2__DocumentModel__Primitive_(bool data);

  /// @brief Method op_Implicit, addr 0x1658d5c, size 0x88, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::Primitive* op_Implicit___Amazon__DynamoDBv2__DocumentModel__Primitive_(char16_t data);

  /// @brief Method op_Implicit, addr 0x1658af4, size 0x90, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::Primitive* op_Implicit___Amazon__DynamoDBv2__DocumentModel__Primitive_(double_t data);

  /// @brief Method op_Implicit, addr 0x16589c4, size 0x90, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::Primitive* op_Implicit___Amazon__DynamoDBv2__DocumentModel__Primitive_(float_t data);

  /// @brief Method op_Implicit, addr 0x1658408, size 0x88, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::Primitive* op_Implicit___Amazon__DynamoDBv2__DocumentModel__Primitive_(int16_t data);

  /// @brief Method op_Implicit, addr 0x1658650, size 0x88, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::Primitive* op_Implicit___Amazon__DynamoDBv2__DocumentModel__Primitive_(int32_t data);

  /// @brief Method op_Implicit, addr 0x165889c, size 0x88, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::Primitive* op_Implicit___Amazon__DynamoDBv2__DocumentModel__Primitive_(int64_t data);

  /// @brief Method op_Implicit, addr 0x16581c0, size 0x88, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::Primitive* op_Implicit___Amazon__DynamoDBv2__DocumentModel__Primitive_(int8_t data);

  /// @brief Method op_Implicit, addr 0x16582e4, size 0x88, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::Primitive* op_Implicit___Amazon__DynamoDBv2__DocumentModel__Primitive_(uint16_t data);

  /// @brief Method op_Implicit, addr 0x165852c, size 0x88, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::Primitive* op_Implicit___Amazon__DynamoDBv2__DocumentModel__Primitive_(uint32_t data);

  /// @brief Method op_Implicit, addr 0x1658774, size 0x88, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::Primitive* op_Implicit___Amazon__DynamoDBv2__DocumentModel__Primitive_(uint64_t data);

  /// @brief Method op_Implicit, addr 0x165809c, size 0x88, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::Primitive* op_Implicit___Amazon__DynamoDBv2__DocumentModel__Primitive_(uint8_t data);

  /// @brief Method op_Implicit, addr 0x1658f0c, size 0x20, virtual false, abstract: false, final false
  static inline ::StringW op_Implicit___StringW(::Amazon::DynamoDBv2::DocumentModel::Primitive* p);

  static inline void setStaticF_V1Conversion(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value);

  /// @brief Method set_Type, addr 0x1657d18, size 0x8, virtual false, abstract: false, final false
  inline void set_Type(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType value);

  /// @brief Method set_Value, addr 0x1657d08, size 0x8, virtual false, abstract: false, final false
  inline void set_Value(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Primitive();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Primitive", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Primitive(Primitive&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Primitive", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Primitive(Primitive const&) = delete;

  /// @brief Field <Value>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ____Value_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType ____Type_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::Primitive, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::Primitive, ____Value_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::Primitive, ____Type_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::Primitive);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::Primitive*, "Amazon.DynamoDBv2.DocumentModel", "Primitive");
