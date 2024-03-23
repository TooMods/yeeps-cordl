#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DynamoDBEntry)
namespace Amazon::DynamoDBv2::DocumentModel {
class Document;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class DynamoDBBool;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class DynamoDBList;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class DynamoDBNull;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class PrimitiveList;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Primitive;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class __DynamoDBEntry__AttributeConversionConfig;
}
namespace Amazon::DynamoDBv2::Model {
class AttributeValueUpdate;
}
namespace Amazon::DynamoDBv2::Model {
class AttributeValue;
}
namespace Amazon::DynamoDBv2::Model {
class ExpectedAttributeValue;
}
namespace Amazon::DynamoDBv2 {
class DynamoDBEntryConversion;
}
namespace Amazon::Util {
class CircularReferenceTracking;
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
class ICloneable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DocumentModel {
class DynamoDBEntry;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class __DynamoDBEntry__AttributeConversionConfig;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry);
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig);
// Type: ::AttributeConversionConfig
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::DynamoDBEntry::AttributeConversionConfig*
class CORDL_TYPE __DynamoDBEntry__AttributeConversionConfig : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CRT, put = set_CRT))::Amazon::Util::CircularReferenceTracking* CRT;

  __declspec(property(get = get_Conversion, put = set_Conversion))::Amazon::DynamoDBv2::DynamoDBEntryConversion* Conversion;

  __declspec(property(get = get_IsEmptyStringValueEnabled, put = set_IsEmptyStringValueEnabled)) bool IsEmptyStringValueEnabled;

  /// @brief Field <CRT>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__CRT_k__BackingField, put = __cordl_internal_set__CRT_k__BackingField))::Amazon::Util::CircularReferenceTracking* _CRT_k__BackingField;

  /// @brief Field <Conversion>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Conversion_k__BackingField,
                      put = __cordl_internal_set__Conversion_k__BackingField))::Amazon::DynamoDBv2::DynamoDBEntryConversion* _Conversion_k__BackingField;

  /// @brief Field <IsEmptyStringValueEnabled>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsEmptyStringValueEnabled_k__BackingField,
                      put = __cordl_internal_set__IsEmptyStringValueEnabled_k__BackingField)) bool _IsEmptyStringValueEnabled_k__BackingField;

  static inline ::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig* New_ctor(::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion, bool isEmptyStringValueEnabled);

  constexpr ::Amazon::Util::CircularReferenceTracking*& __cordl_internal_get__CRT_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Util::CircularReferenceTracking*> const& __cordl_internal_get__CRT_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::DynamoDBEntryConversion*& __cordl_internal_get__Conversion_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DynamoDBEntryConversion*> const& __cordl_internal_get__Conversion_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__IsEmptyStringValueEnabled_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsEmptyStringValueEnabled_k__BackingField();

  constexpr void __cordl_internal_set__CRT_k__BackingField(::Amazon::Util::CircularReferenceTracking* value);

  constexpr void __cordl_internal_set__Conversion_k__BackingField(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value);

  constexpr void __cordl_internal_set__IsEmptyStringValueEnabled_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x1650278, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion, bool isEmptyStringValueEnabled);

  /// @brief Method get_CRT, addr 0x1650244, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Util::CircularReferenceTracking* get_CRT();

  /// @brief Method get_Conversion, addr 0x1650254, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DynamoDBEntryConversion* get_Conversion();

  /// @brief Method get_IsEmptyStringValueEnabled, addr 0x1650264, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsEmptyStringValueEnabled();

  /// @brief Method set_CRT, addr 0x165024c, size 0x8, virtual false, abstract: false, final false
  inline void set_CRT(::Amazon::Util::CircularReferenceTracking* value);

  /// @brief Method set_Conversion, addr 0x165025c, size 0x8, virtual false, abstract: false, final false
  inline void set_Conversion(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value);

  /// @brief Method set_IsEmptyStringValueEnabled, addr 0x165026c, size 0xc, virtual false, abstract: false, final false
  inline void set_IsEmptyStringValueEnabled(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DynamoDBEntry__AttributeConversionConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DynamoDBEntry__AttributeConversionConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DynamoDBEntry__AttributeConversionConfig(__DynamoDBEntry__AttributeConversionConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DynamoDBEntry__AttributeConversionConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DynamoDBEntry__AttributeConversionConfig(__DynamoDBEntry__AttributeConversionConfig const&) = delete;

  /// @brief Field <CRT>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Util::CircularReferenceTracking* ____CRT_k__BackingField;

  /// @brief Field <Conversion>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DynamoDBEntryConversion* ____Conversion_k__BackingField;

  /// @brief Field <IsEmptyStringValueEnabled>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsEmptyStringValueEnabled_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig, ____CRT_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig, ____Conversion_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig, ____IsEmptyStringValueEnabled_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
// Type: Amazon.DynamoDBv2.DocumentModel::DynamoDBEntry
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::DynamoDBEntry*
class CORDL_TYPE DynamoDBEntry : public ::System::Object {
public:
  // Declarations
  using AttributeConversionConfig = ::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method AsArrayOfDynamoDBEntry, addr 0x164f894, size 0x60, virtual true, abstract: false, final false
  inline ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, ::Array<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*> AsArrayOfDynamoDBEntry();

  /// @brief Method AsArrayOfPrimitive, addr 0x164f974, size 0x40, virtual true, abstract: false, final false
  inline ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Array<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*> AsArrayOfPrimitive();

  /// @brief Method AsArrayOfString, addr 0x164fd04, size 0x40, virtual true, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> AsArrayOfString();

  /// @brief Method AsBoolean, addr 0x164e700, size 0x40, virtual true, abstract: false, final false
  inline bool AsBoolean();

  /// @brief Method AsByte, addr 0x164e878, size 0x40, virtual true, abstract: false, final false
  inline uint8_t AsByte();

  /// @brief Method AsByteArray, addr 0x164f714, size 0x40, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> AsByteArray();

  /// @brief Method AsChar, addr 0x164f310, size 0x40, virtual true, abstract: false, final false
  inline char16_t AsChar();

  /// @brief Method AsDateTime, addr 0x164f520, size 0x40, virtual true, abstract: false, final false
  inline ::System::DateTime AsDateTime();

  /// @brief Method AsDecimal, addr 0x164f1e8, size 0x40, virtual true, abstract: false, final false
  inline ::System::Decimal AsDecimal();

  /// @brief Method AsDocument, addr 0x164e3d8, size 0x78, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Document* AsDocument();

  /// @brief Method AsDouble, addr 0x164f0f4, size 0x40, virtual true, abstract: false, final false
  inline double_t AsDouble();

  /// @brief Method AsDynamoDBBool, addr 0x164e2e8, size 0x78, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBBool* AsDynamoDBBool();

  /// @brief Method AsDynamoDBList, addr 0x164e270, size 0x78, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* AsDynamoDBList();

  /// @brief Method AsDynamoDBNull, addr 0x164e360, size 0x78, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBNull* AsDynamoDBNull();

  /// @brief Method AsGuid, addr 0x164f614, size 0x40, virtual true, abstract: false, final false
  inline ::System::Guid AsGuid();

  /// @brief Method AsHashSetOfByteArray, addr 0x1650004, size 0x40, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* AsHashSetOfByteArray();

  /// @brief Method AsHashSetOfDynamoDBEntry, addr 0x164f934, size 0x40, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* AsHashSetOfDynamoDBEntry();

  /// @brief Method AsHashSetOfMemoryStream, addr 0x1650184, size 0x40, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<::System::IO::MemoryStream*>* AsHashSetOfMemoryStream();

  /// @brief Method AsHashSetOfPrimitive, addr 0x164faf4, size 0x40, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* AsHashSetOfPrimitive();

  /// @brief Method AsHashSetOfString, addr 0x164fe84, size 0x40, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<::StringW>* AsHashSetOfString();

  /// @brief Method AsInt, addr 0x164ed28, size 0x40, virtual true, abstract: false, final false
  inline int32_t AsInt();

  /// @brief Method AsListOfByteArray, addr 0x164ff44, size 0x40, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* AsListOfByteArray();

  /// @brief Method AsListOfDocument, addr 0x164fbb4, size 0x40, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* AsListOfDocument();

  /// @brief Method AsListOfDynamoDBEntry, addr 0x164f8f4, size 0x40, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* AsListOfDynamoDBEntry();

  /// @brief Method AsListOfMemoryStream, addr 0x16500c4, size 0x40, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::System::IO::MemoryStream*>* AsListOfMemoryStream();

  /// @brief Method AsListOfPrimitive, addr 0x164fa34, size 0x40, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* AsListOfPrimitive();

  /// @brief Method AsListOfString, addr 0x164fdc4, size 0x40, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* AsListOfString();

  /// @brief Method AsLong, addr 0x164ef0c, size 0x40, virtual true, abstract: false, final false
  inline int64_t AsLong();

  /// @brief Method AsMemoryStream, addr 0x164f7d4, size 0x40, virtual true, abstract: false, final false
  inline ::System::IO::MemoryStream* AsMemoryStream();

  /// @brief Method AsPrimitive, addr 0x164e180, size 0x78, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Primitive* AsPrimitive();

  /// @brief Method AsPrimitiveList, addr 0x164e1f8, size 0x78, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* AsPrimitiveList();

  /// @brief Method AsSByte, addr 0x164e968, size 0x40, virtual true, abstract: false, final false
  inline int8_t AsSByte();

  /// @brief Method AsShort, addr 0x164eb48, size 0x40, virtual true, abstract: false, final false
  inline int16_t AsShort();

  /// @brief Method AsSingle, addr 0x164f000, size 0x40, virtual true, abstract: false, final false
  inline float_t AsSingle();

  /// @brief Method AsString, addr 0x164f404, size 0x40, virtual true, abstract: false, final false
  inline ::StringW AsString();

  /// @brief Method AsUInt, addr 0x164ec38, size 0x40, virtual true, abstract: false, final false
  inline uint32_t AsUInt();

  /// @brief Method AsULong, addr 0x164ee18, size 0x40, virtual true, abstract: false, final false
  inline uint64_t AsULong();

  /// @brief Method AsUShort, addr 0x164ea58, size 0x40, virtual true, abstract: false, final false
  inline uint16_t AsUShort();

  /// @brief Method Clone, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* Clone();

  /// @brief Method ConvertToAttributeUpdateValue, addr 0x164e080, size 0x100, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::AttributeValueUpdate* ConvertToAttributeUpdateValue(::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig* conversionConfig);

  /// @brief Method ConvertToAttributeValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::DynamoDBv2::Model::AttributeValue* ConvertToAttributeValue(::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig* conversionConfig);

  /// @brief Method ConvertToExpectedAttributeValue, addr 0x164dfcc, size 0xb4, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue* ConvertToExpectedAttributeValue(::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig* conversionConfig);

  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* New_ctor();

  /// @brief Method ToConvertedEntry, addr 0x164e450, size 0x94, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* ToConvertedEntry(::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion);

  /// @brief Method ToDocument, addr 0x164e6ac, size 0x54, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Document* ToDocument();

  /// @brief Method ToDynamoDBBool, addr 0x164e604, size 0x54, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBBool* ToDynamoDBBool();

  /// @brief Method ToDynamoDBList, addr 0x164e5b0, size 0x54, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* ToDynamoDBList();

  /// @brief Method ToDynamoDBNull, addr 0x164e658, size 0x54, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBNull* ToDynamoDBNull();

  /// @brief Method ToPrimitive, addr 0x164e508, size 0x54, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Primitive* ToPrimitive();

  /// @brief Method ToPrimitiveList, addr 0x164e55c, size 0x54, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* ToPrimitiveList();

  /// @brief Method Validate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T Validate(T item);

  /// @brief Method .ctor, addr 0x164dcf4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Method op_Explicit, addr 0x164fa14, size 0x20, virtual false, abstract: false, final false
  static inline ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Array<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>
  op_Explicit___ArrayW___Amazon__DynamoDBv2__DocumentModel__Primitive____Array___Amazon__DynamoDBv2__DocumentModel__Primitive____(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p);

  /// @brief Method op_Explicit, addr 0x164fda4, size 0x20, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> op_Explicit___ArrayW___StringW___Array___StringW___(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p);

  /// @brief Method op_Explicit, addr 0x164f7b4, size 0x20, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> op_Explicit___ArrayW_uint8_t___Array_uint8_t___(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p);

  /// @brief Method op_Explicit, addr 0x164fb94, size 0x20, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::HashSet_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*
  op_Explicit___System__Collections__Generic__HashSet_1___Amazon__DynamoDBv2__DocumentModel__Primitive___(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p);

  /// @brief Method op_Explicit, addr 0x16500a4, size 0x20, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*
  op_Explicit___System__Collections__Generic__HashSet_1___ArrayW_uint8_t___Array_uint8_t_____(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p);

  /// @brief Method op_Explicit, addr 0x164ff24, size 0x20, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::HashSet_1<::StringW>* op_Explicit___System__Collections__Generic__HashSet_1___StringW__(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p);

  /// @brief Method op_Explicit, addr 0x1650224, size 0x20, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::HashSet_1<::System::IO::MemoryStream*>*
  op_Explicit___System__Collections__Generic__HashSet_1___System__IO__MemoryStream___(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p);

  /// @brief Method op_Explicit, addr 0x164fce4, size 0x20, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*
  op_Explicit___System__Collections__Generic__List_1___Amazon__DynamoDBv2__DocumentModel__Document___(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p);

  /// @brief Method op_Explicit, addr 0x164fad4, size 0x20, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*
  op_Explicit___System__Collections__Generic__List_1___Amazon__DynamoDBv2__DocumentModel__Primitive___(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p);

  /// @brief Method op_Explicit, addr 0x164ffe4, size 0x20, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*
  op_Explicit___System__Collections__Generic__List_1___ArrayW_uint8_t___Array_uint8_t_____(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p);

  /// @brief Method op_Explicit, addr 0x164fe64, size 0x20, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::StringW>* op_Explicit___System__Collections__Generic__List_1___StringW__(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p);

  /// @brief Method op_Explicit, addr 0x1650164, size 0x20, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::System::IO::MemoryStream*>*
  op_Explicit___System__Collections__Generic__List_1___System__IO__MemoryStream___(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p);

  /// @brief Method op_Explicit, addr 0x164f5f4, size 0x20, virtual false, abstract: false, final false
  static inline ::System::DateTime op_Explicit___System__DateTime(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p);

  /// @brief Method op_Explicit, addr 0x164f2f0, size 0x20, virtual false, abstract: false, final false
  static inline ::System::Decimal op_Explicit___System__Decimal(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p);

  /// @brief Method op_Explicit, addr 0x164f6f4, size 0x20, virtual false, abstract: false, final false
  static inline ::System::Guid op_Explicit___System__Guid(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p);

  /// @brief Method op_Explicit, addr 0x164f874, size 0x20, virtual false, abstract: false, final false
  static inline ::System::IO::MemoryStream* op_Explicit___System__IO__MemoryStream_(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p);

  /// @brief Method op_Explicit, addr 0x164e85c, size 0x1c, virtual false, abstract: false, final false
  static inline bool op_Explicit_bool(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p);

  /// @brief Method op_Explicit, addr 0x164f3e4, size 0x20, virtual false, abstract: false, final false
  static inline char16_t op_Explicit_char16_t(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p);

  /// @brief Method op_Explicit, addr 0x164f1c8, size 0x20, virtual false, abstract: false, final false
  static inline double_t op_Explicit_double_t(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p);

  /// @brief Method op_Explicit, addr 0x164f0d4, size 0x20, virtual false, abstract: false, final false
  static inline float_t op_Explicit_float_t(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p);

  /// @brief Method op_Explicit, addr 0x164ec1c, size 0x1c, virtual false, abstract: false, final false
  static inline int16_t op_Explicit_int16_t(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p);

  /// @brief Method op_Explicit, addr 0x164edfc, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t op_Explicit_int32_t(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p);

  /// @brief Method op_Explicit, addr 0x164efe0, size 0x20, virtual false, abstract: false, final false
  static inline int64_t op_Explicit_int64_t(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p);

  /// @brief Method op_Explicit, addr 0x164ea3c, size 0x1c, virtual false, abstract: false, final false
  static inline int8_t op_Explicit_int8_t(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p);

  /// @brief Method op_Explicit, addr 0x164eb2c, size 0x1c, virtual false, abstract: false, final false
  static inline uint16_t op_Explicit_uint16_t(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p);

  /// @brief Method op_Explicit, addr 0x164ed0c, size 0x1c, virtual false, abstract: false, final false
  static inline uint32_t op_Explicit_uint32_t(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p);

  /// @brief Method op_Explicit, addr 0x164eeec, size 0x20, virtual false, abstract: false, final false
  static inline uint64_t op_Explicit_uint64_t(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p);

  /// @brief Method op_Explicit, addr 0x164e94c, size 0x1c, virtual false, abstract: false, final false
  static inline uint8_t op_Explicit_uint8_t(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p);

  /// @brief Method op_Implicit, addr 0x164f9b4, size 0x60, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*
  op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(::ArrayW<::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Array<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*> data);

  /// @brief Method op_Implicit, addr 0x164fd44, size 0x60, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(::ArrayW<::StringW, ::Array<::StringW>*> data);

  /// @brief Method op_Implicit, addr 0x164f754, size 0x60, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method op_Implicit, addr 0x164f444, size 0x9c, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(::StringW data);

  /// @brief Method op_Implicit, addr 0x164fb34, size 0x60, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*
  op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(::System::Collections::Generic::HashSet_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* data);

  /// @brief Method op_Implicit, addr 0x1650044, size 0x60, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*
  op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* data);

  /// @brief Method op_Implicit, addr 0x164fec4, size 0x60, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(::System::Collections::Generic::HashSet_1<::StringW>* data);

  /// @brief Method op_Implicit, addr 0x16501c4, size 0x60, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*
  op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(::System::Collections::Generic::HashSet_1<::System::IO::MemoryStream*>* data);

  /// @brief Method op_Implicit, addr 0x164fbf4, size 0x90, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*
  op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* data);

  /// @brief Method op_Implicit, addr 0x164fa74, size 0x60, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*
  op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* data);

  /// @brief Method op_Implicit, addr 0x164ff84, size 0x60, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*
  op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* data);

  /// @brief Method op_Implicit, addr 0x164fe04, size 0x60, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(::System::Collections::Generic::List_1<::StringW>* data);

  /// @brief Method op_Implicit, addr 0x1650104, size 0x60, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*
  op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(::System::Collections::Generic::List_1<::System::IO::MemoryStream*>* data);

  /// @brief Method op_Implicit, addr 0x164f560, size 0x94, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(::System::DateTime data);

  /// @brief Method op_Implicit, addr 0x164f228, size 0xc8, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(::System::Decimal data);

  /// @brief Method op_Implicit, addr 0x164f654, size 0xa0, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(::System::Guid data);

  /// @brief Method op_Implicit, addr 0x164f814, size 0x60, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(::System::IO::MemoryStream* data);

  /// @brief Method op_Implicit, addr 0x164e740, size 0x94, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(bool data);

  /// @brief Method op_Implicit, addr 0x164f350, size 0x94, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(char16_t data);

  /// @brief Method op_Implicit, addr 0x164f134, size 0x94, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(double_t data);

  /// @brief Method op_Implicit, addr 0x164f040, size 0x94, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(float_t data);

  /// @brief Method op_Implicit, addr 0x164eb88, size 0x94, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(int16_t data);

  /// @brief Method op_Implicit, addr 0x164ed68, size 0x94, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(int32_t data);

  /// @brief Method op_Implicit, addr 0x164ef4c, size 0x94, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(int64_t data);

  /// @brief Method op_Implicit, addr 0x164e9a8, size 0x94, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(int8_t data);

  /// @brief Method op_Implicit, addr 0x164ea98, size 0x94, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(uint16_t data);

  /// @brief Method op_Implicit, addr 0x164ec78, size 0x94, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(uint32_t data);

  /// @brief Method op_Implicit, addr 0x164ee58, size 0x94, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(uint64_t data);

  /// @brief Method op_Implicit, addr 0x164e8b8, size 0x94, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(uint8_t data);

  /// @brief Method op_Implicit, addr 0x164f500, size 0x20, virtual false, abstract: false, final false
  static inline ::StringW op_Implicit___StringW(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamoDBEntry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamoDBEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamoDBEntry(DynamoDBEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamoDBEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamoDBEntry(DynamoDBEntry const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry, 0x10>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, "Amazon.DynamoDBv2.DocumentModel", "DynamoDBEntry");
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig*, "Amazon.DynamoDBv2.DocumentModel", "DynamoDBEntry/AttributeConversionConfig");
