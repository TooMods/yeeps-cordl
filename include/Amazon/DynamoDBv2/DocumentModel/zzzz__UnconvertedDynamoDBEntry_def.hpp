#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBEntry_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UnconvertedDynamoDBEntry)
namespace Amazon::DynamoDBv2::DocumentModel {
class DynamoDBEntry;
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
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
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
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DocumentModel {
class UnconvertedDynamoDBEntry;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry);
// Type: Amazon.DynamoDBv2.DocumentModel::UnconvertedDynamoDBEntry
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::UnconvertedDynamoDBEntry*
class CORDL_TYPE UnconvertedDynamoDBEntry : public ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry {
public:
  // Declarations
  /// @brief Field Value, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Value, put = __cordl_internal_set_Value))::System::Object* Value;

  /// @brief Field ValueType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ValueType, put = __cordl_internal_set_ValueType))::System::Type* ValueType;

  /// @brief Method AsArrayOfString, addr 0x1651714, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> AsArrayOfString();

  /// @brief Method AsBoolean, addr 0x165051c, size 0x134, virtual true, abstract: false, final false
  inline bool AsBoolean();

  /// @brief Method AsByte, addr 0x1650650, size 0x134, virtual true, abstract: false, final false
  inline uint8_t AsByte();

  /// @brief Method AsByteArray, addr 0x165171c, size 0x6c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> AsByteArray();

  /// @brief Method AsChar, addr 0x16508a0, size 0x134, virtual true, abstract: false, final false
  inline char16_t AsChar();

  /// @brief Method AsDateTime, addr 0x16509d4, size 0x134, virtual true, abstract: false, final false
  inline ::System::DateTime AsDateTime();

  /// @brief Method AsDecimal, addr 0x1650b08, size 0x138, virtual true, abstract: false, final false
  inline ::System::Decimal AsDecimal();

  /// @brief Method AsDouble, addr 0x1650c40, size 0x134, virtual true, abstract: false, final false
  inline double_t AsDouble();

  /// @brief Method AsGuid, addr 0x1651788, size 0x74, virtual true, abstract: false, final false
  inline ::System::Guid AsGuid();

  /// @brief Method AsHashSetOfByteArray, addr 0x16518ec, size 0x78, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* AsHashSetOfByteArray();

  /// @brief Method AsHashSetOfMemoryStream, addr 0x1651964, size 0x78, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<::System::IO::MemoryStream*>* AsHashSetOfMemoryStream();

  /// @brief Method AsHashSetOfString, addr 0x16519dc, size 0x78, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<::StringW>* AsHashSetOfString();

  /// @brief Method AsInt, addr 0x1650d74, size 0x134, virtual true, abstract: false, final false
  inline int32_t AsInt();

  /// @brief Method AsListOfByteArray, addr 0x1651a54, size 0x78, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* AsListOfByteArray();

  /// @brief Method AsListOfMemoryStream, addr 0x1651acc, size 0x78, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::System::IO::MemoryStream*>* AsListOfMemoryStream();

  /// @brief Method AsListOfString, addr 0x1651874, size 0x78, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* AsListOfString();

  /// @brief Method AsLong, addr 0x1650ea8, size 0x134, virtual true, abstract: false, final false
  inline int64_t AsLong();

  /// @brief Method AsMemoryStream, addr 0x16517fc, size 0x78, virtual true, abstract: false, final false
  inline ::System::IO::MemoryStream* AsMemoryStream();

  /// @brief Method AsSByte, addr 0x1650fdc, size 0x134, virtual true, abstract: false, final false
  inline int8_t AsSByte();

  /// @brief Method AsShort, addr 0x1651110, size 0x134, virtual true, abstract: false, final false
  inline int16_t AsShort();

  /// @brief Method AsSingle, addr 0x1651244, size 0x134, virtual true, abstract: false, final false
  inline float_t AsSingle();

  /// @brief Method AsString, addr 0x1650784, size 0x11c, virtual true, abstract: false, final false
  inline ::StringW AsString();

  /// @brief Method AsUInt, addr 0x1651378, size 0x134, virtual true, abstract: false, final false
  inline uint32_t AsUInt();

  /// @brief Method AsULong, addr 0x16514ac, size 0x134, virtual true, abstract: false, final false
  inline uint64_t AsULong();

  /// @brief Method AsUShort, addr 0x16515e0, size 0x134, virtual true, abstract: false, final false
  inline uint16_t AsUShort();

  /// @brief Method Clone, addr 0x16504b8, size 0x64, virtual true, abstract: false, final false
  inline ::System::Object* Clone();

  /// @brief Method Convert, addr 0x164e4e4, size 0x24, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* Convert(::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion);

  /// @brief Method ConvertToAttributeValue, addr 0x1650300, size 0x1b8, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::AttributeValue* ConvertToAttributeValue(::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig* conversionConfig);

  /// @brief Method Equals, addr 0x1651c08, size 0xc4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x1651b44, size 0xc4, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry* New_ctor(::System::Object* value);

  constexpr ::System::Object*& __cordl_internal_get_Value();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_Value() const;

  constexpr ::System::Type*& __cordl_internal_get_ValueType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_ValueType() const;

  constexpr void __cordl_internal_set_Value(::System::Object* value);

  constexpr void __cordl_internal_set_ValueType(::System::Type* value);

  /// @brief Method .ctor, addr 0x164e7d4, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnconvertedDynamoDBEntry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnconvertedDynamoDBEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnconvertedDynamoDBEntry(UnconvertedDynamoDBEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnconvertedDynamoDBEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnconvertedDynamoDBEntry(UnconvertedDynamoDBEntry const&) = delete;

  /// @brief Field Value, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___Value;

  /// @brief Field ValueType, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___ValueType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry, ___Value) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry, ___ValueType) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*, "Amazon.DynamoDBv2.DocumentModel", "UnconvertedDynamoDBEntry");
