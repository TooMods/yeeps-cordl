#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBEntryType_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBEntry_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PrimitiveList)
namespace Amazon::DynamoDBv2::DocumentModel {
struct DynamoDBEntryType;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Primitive;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class __DynamoDBEntry__AttributeConversionConfig;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class __PrimitiveList__PrimitiveComparer;
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
template <typename T> class IComparer_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::IO {
class MemoryStream;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DocumentModel {
class PrimitiveList;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class __PrimitiveList__PrimitiveComparer;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::PrimitiveList);
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::__PrimitiveList__PrimitiveComparer);
// Type: ::PrimitiveComparer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::PrimitiveList::PrimitiveComparer*
class CORDL_TYPE __PrimitiveList__PrimitiveComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Field Comparer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Comparer, put = setStaticF_Comparer))::Amazon::DynamoDBv2::DocumentModel::__PrimitiveList__PrimitiveComparer* Comparer;

  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>"
  constexpr operator ::System::Collections::Generic::IComparer_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*() noexcept;

  /// @brief Method Compare, addr 0x165b63c, size 0x230, virtual true, abstract: false, final true
  inline int32_t Compare(::Amazon::DynamoDBv2::DocumentModel::Primitive* x, ::Amazon::DynamoDBv2::DocumentModel::Primitive* y);

  static inline ::Amazon::DynamoDBv2::DocumentModel::__PrimitiveList__PrimitiveComparer* New_ctor();

  /// @brief Method .ctor, addr 0x165b86c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::DynamoDBv2::DocumentModel::__PrimitiveList__PrimitiveComparer* getStaticF_Comparer();

  /// @brief Convert to "::System::Collections::Generic::IComparer_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>"
  constexpr ::System::Collections::Generic::IComparer_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*
  i___System__Collections__Generic__IComparer_1___Amazon__DynamoDBv2__DocumentModel__Primitive__() noexcept;

  static inline void setStaticF_Comparer(::Amazon::DynamoDBv2::DocumentModel::__PrimitiveList__PrimitiveComparer* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PrimitiveList__PrimitiveComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PrimitiveList__PrimitiveComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PrimitiveList__PrimitiveComparer(__PrimitiveList__PrimitiveComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PrimitiveList__PrimitiveComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PrimitiveList__PrimitiveComparer(__PrimitiveList__PrimitiveComparer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::__PrimitiveList__PrimitiveComparer, 0x10>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
// Type: Amazon.DynamoDBv2.DocumentModel::PrimitiveList
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::PrimitiveList*
class CORDL_TYPE PrimitiveList : public ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry {
public:
  // Declarations
  using PrimitiveComparer = ::Amazon::DynamoDBv2::DocumentModel::__PrimitiveList__PrimitiveComparer;

  __declspec(property(get = get_Entries, put = set_Entries))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* Entries;

  __declspec(property(get = get_Item, put = set_Item))::Amazon::DynamoDBv2::DocumentModel::Primitive* Item[];

  __declspec(property(get = get_Type, put = set_Type))::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType Type;

  /// @brief Field V1Conversion, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_V1Conversion, put = setStaticF_V1Conversion))::Amazon::DynamoDBv2::DynamoDBEntryConversion* V1Conversion;

  /// @brief Field <Entries>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Entries_k__BackingField,
                      put = __cordl_internal_set__Entries_k__BackingField))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* _Entries_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__Type_k__BackingField, put = __cordl_internal_set__Type_k__BackingField))::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType _Type_k__BackingField;

  /// @brief Convert operator to "::System::IEquatable_1<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>"
  constexpr operator ::System::IEquatable_1<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>*() noexcept;

  /// @brief Method Add, addr 0x16579d8, size 0xa8, virtual false, abstract: false, final false
  inline void Add(::Amazon::DynamoDBv2::DocumentModel::Primitive* value);

  /// @brief Method AsArrayOfPrimitive, addr 0x165a67c, size 0x60, virtual true, abstract: false, final false
  inline ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Array<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*> AsArrayOfPrimitive();

  /// @brief Method AsArrayOfString, addr 0x165a938, size 0x60, virtual true, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> AsArrayOfString();

  /// @brief Method AsHashSetOfByteArray, addr 0x165adb8, size 0x80, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* AsHashSetOfByteArray();

  /// @brief Method AsHashSetOfPrimitive, addr 0x165a808, size 0xb0, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* AsHashSetOfPrimitive();

  /// @brief Method AsHashSetOfString, addr 0x165ab68, size 0x80, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<::StringW>* AsHashSetOfString();

  /// @brief Method AsListOfByteArray, addr 0x165ac90, size 0x80, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* AsListOfByteArray();

  /// @brief Method AsListOfMemoryStream, addr 0x165af40, size 0x80, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::System::IO::MemoryStream*>* AsListOfMemoryStream();

  /// @brief Method AsListOfPrimitive, addr 0x165a7e0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* AsListOfPrimitive();

  /// @brief Method AsListOfString, addr 0x165aa40, size 0x80, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* AsListOfString();

  /// @brief Method Clone, addr 0x165b068, size 0x1dc, virtual true, abstract: false, final false
  inline ::System::Object* Clone();

  /// @brief Method ConvertToAttributeValue, addr 0x165a0fc, size 0x4ac, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::AttributeValue* ConvertToAttributeValue(::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig* conversionConfig);

  /// @brief Method Equals, addr 0x165b408, size 0x180, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x165b588, size 0xc, virtual true, abstract: false, final true
  inline bool Equals(::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* other);

  /// @brief Method GetHashCode, addr 0x165b244, size 0x1c4, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetSortedEntries, addr 0x165a5a8, size 0xd4, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* GetSortedEntries();

  static inline ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* New_ctor();

  static inline ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* New_ctor(::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* primitives);

  static inline ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* New_ctor(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType type);

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*& __cordl_internal_get__Entries_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*> const& __cordl_internal_get__Entries_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType const& __cordl_internal_get__Type_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType& __cordl_internal_get__Type_k__BackingField();

  constexpr void __cordl_internal_set__Entries_k__BackingField(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* value);

  constexpr void __cordl_internal_set__Type_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType value);

  /// @brief Method .ctor, addr 0x1659bd0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1659bd8, size 0x3dc, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* primitives);

  /// @brief Method .ctor, addr 0x1657948, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType type);

  static inline ::Amazon::DynamoDBv2::DynamoDBEntryConversion* getStaticF_V1Conversion();

  /// @brief Method get_Entries, addr 0x1659fb4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* get_Entries();

  /// @brief Method get_Item, addr 0x1659fd4, size 0x58, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Primitive* get_Item(int32_t i);

  /// @brief Method get_Type, addr 0x1659fc4, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType get_Type();

  /// @brief Convert to "::System::IEquatable_1<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>"
  constexpr ::System::IEquatable_1<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>* i___System__IEquatable_1___Amazon__DynamoDBv2__DocumentModel__PrimitiveList__() noexcept;

  /// @brief Method op_Explicit, addr 0x165a7c0, size 0x20, virtual false, abstract: false, final false
  static inline ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Array<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>
  op_Explicit___ArrayW___Amazon__DynamoDBv2__DocumentModel__Primitive____Array___Amazon__DynamoDBv2__DocumentModel__Primitive____(::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* p);

  /// @brief Method op_Explicit, addr 0x165aa20, size 0x20, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> op_Explicit___ArrayW___StringW___Array___StringW___(::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* p);

  /// @brief Method op_Explicit, addr 0x165a918, size 0x20, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::HashSet_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*
  op_Explicit___System__Collections__Generic__HashSet_1___Amazon__DynamoDBv2__DocumentModel__Primitive___(::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* p);

  /// @brief Method op_Explicit, addr 0x165aec0, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*
  op_Explicit___System__Collections__Generic__HashSet_1___ArrayW_uint8_t___Array_uint8_t_____(::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* p);

  /// @brief Method op_Explicit, addr 0x165ac70, size 0x20, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::HashSet_1<::StringW>* op_Explicit___System__Collections__Generic__HashSet_1___StringW__(::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* p);

  /// @brief Method op_Explicit, addr 0x165a7e8, size 0x20, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*
  op_Explicit___System__Collections__Generic__List_1___Amazon__DynamoDBv2__DocumentModel__Primitive___(::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* p);

  /// @brief Method op_Explicit, addr 0x165ad98, size 0x20, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*
  op_Explicit___System__Collections__Generic__List_1___ArrayW_uint8_t___Array_uint8_t_____(::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* p);

  /// @brief Method op_Explicit, addr 0x165ab48, size 0x20, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::StringW>* op_Explicit___System__Collections__Generic__List_1___StringW__(::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* p);

  /// @brief Method op_Explicit, addr 0x165b048, size 0x20, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::System::IO::MemoryStream*>*
  op_Explicit___System__Collections__Generic__List_1___System__IO__MemoryStream___(::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* p);

  /// @brief Method op_Implicit, addr 0x165a6dc, size 0x84, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*
  op_Implicit___Amazon__DynamoDBv2__DocumentModel__PrimitiveList_(::ArrayW<::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Array<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*> data);

  /// @brief Method op_Implicit, addr 0x165a998, size 0x88, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* op_Implicit___Amazon__DynamoDBv2__DocumentModel__PrimitiveList_(::ArrayW<::StringW, ::Array<::StringW>*> data);

  /// @brief Method op_Implicit, addr 0x165a8b8, size 0x60, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*
  op_Implicit___Amazon__DynamoDBv2__DocumentModel__PrimitiveList_(::System::Collections::Generic::HashSet_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* data);

  /// @brief Method op_Implicit, addr 0x165ae38, size 0x88, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*
  op_Implicit___Amazon__DynamoDBv2__DocumentModel__PrimitiveList_(::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* data);

  /// @brief Method op_Implicit, addr 0x165abe8, size 0x88, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* op_Implicit___Amazon__DynamoDBv2__DocumentModel__PrimitiveList_(::System::Collections::Generic::HashSet_1<::StringW>* data);

  /// @brief Method op_Implicit, addr 0x165a760, size 0x60, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*
  op_Implicit___Amazon__DynamoDBv2__DocumentModel__PrimitiveList_(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* data);

  /// @brief Method op_Implicit, addr 0x165ad10, size 0x88, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*
  op_Implicit___Amazon__DynamoDBv2__DocumentModel__PrimitiveList_(::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* data);

  /// @brief Method op_Implicit, addr 0x165aac0, size 0x88, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* op_Implicit___Amazon__DynamoDBv2__DocumentModel__PrimitiveList_(::System::Collections::Generic::List_1<::StringW>* data);

  /// @brief Method op_Implicit, addr 0x165afc0, size 0x88, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*
  op_Implicit___Amazon__DynamoDBv2__DocumentModel__PrimitiveList_(::System::Collections::Generic::List_1<::System::IO::MemoryStream*>* data);

  static inline void setStaticF_V1Conversion(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value);

  /// @brief Method set_Entries, addr 0x1659fbc, size 0x8, virtual false, abstract: false, final false
  inline void set_Entries(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* value);

  /// @brief Method set_Item, addr 0x165a02c, size 0xd0, virtual false, abstract: false, final false
  inline void set_Item(int32_t i, ::Amazon::DynamoDBv2::DocumentModel::Primitive* value);

  /// @brief Method set_Type, addr 0x1659fcc, size 0x8, virtual false, abstract: false, final false
  inline void set_Type(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrimitiveList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrimitiveList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrimitiveList(PrimitiveList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrimitiveList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrimitiveList(PrimitiveList const&) = delete;

  /// @brief Field <Entries>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* ____Entries_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType ____Type_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::PrimitiveList, ____Entries_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::PrimitiveList, ____Type_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::PrimitiveList);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*, "Amazon.DynamoDBv2.DocumentModel", "PrimitiveList");
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::__PrimitiveList__PrimitiveComparer);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::__PrimitiveList__PrimitiveComparer*, "Amazon.DynamoDBv2.DocumentModel", "PrimitiveList/PrimitiveComparer");
