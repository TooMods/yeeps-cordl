#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBEntry_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DynamoDBList)
namespace Amazon::DynamoDBv2::DocumentModel {
class Document;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class DynamoDBEntry;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class __DynamoDBEntry__AttributeConversionConfig;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class __DynamoDBList____c;
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
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::IO {
class MemoryStream;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DocumentModel {
class DynamoDBList;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class __DynamoDBList____c;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::DynamoDBList);
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::__DynamoDBList____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::DynamoDBList::<>c*
class CORDL_TYPE __DynamoDBList____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Amazon::DynamoDBv2::DocumentModel::__DynamoDBList____c* __9;

  /// @brief Field <>9__24_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__24_0,
                             put = setStaticF___9__24_0))::System::Func_2<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, ::Amazon::DynamoDBv2::DocumentModel::Document*>* __9__24_0;

  static inline ::Amazon::DynamoDBv2::DocumentModel::__DynamoDBList____c* New_ctor();

  /// @brief Method <AsListOfDocument>b__24_0, addr 0x1653758, size 0x14, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Document* _AsListOfDocument_b__24_0(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* e);

  /// @brief Method .ctor, addr 0x1653750, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::DynamoDBv2::DocumentModel::__DynamoDBList____c* getStaticF___9();

  static inline ::System::Func_2<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, ::Amazon::DynamoDBv2::DocumentModel::Document*>* getStaticF___9__24_0();

  static inline void setStaticF___9(::Amazon::DynamoDBv2::DocumentModel::__DynamoDBList____c* value);

  static inline void setStaticF___9__24_0(::System::Func_2<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, ::Amazon::DynamoDBv2::DocumentModel::Document*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DynamoDBList____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DynamoDBList____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DynamoDBList____c(__DynamoDBList____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DynamoDBList____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DynamoDBList____c(__DynamoDBList____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::__DynamoDBList____c, 0x10>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
// Type: Amazon.DynamoDBv2.DocumentModel::DynamoDBList
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::DynamoDBList*
class CORDL_TYPE DynamoDBList : public ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry {
public:
  // Declarations
  using __c = ::Amazon::DynamoDBv2::DocumentModel::__DynamoDBList____c;

  __declspec(property(get = get_Entries, put = set_Entries))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* Entries;

  __declspec(property(get = get_Item, put = set_Item))::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* Item[];

  /// @brief Field <Entries>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Entries_k__BackingField,
                      put = __cordl_internal_set__Entries_k__BackingField))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* _Entries_k__BackingField;

  /// @brief Field conversion, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_conversion, put = setStaticF_conversion))::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion;

  /// @brief Method Add, addr 0x16520b0, size 0xa8, virtual false, abstract: false, final false
  inline void Add(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* value);

  /// @brief Method AsArrayOfDynamoDBEntry, addr 0x1652c40, size 0x60, virtual true, abstract: false, final false
  inline ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, ::Array<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*> AsArrayOfDynamoDBEntry();

  /// @brief Method AsArrayOfString, addr 0x1652f70, size 0x60, virtual true, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> AsArrayOfString();

  /// @brief Method AsHashSetOfByteArray, addr 0x16533f0, size 0x80, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* AsHashSetOfByteArray();

  /// @brief Method AsHashSetOfString, addr 0x16531a0, size 0x80, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<::StringW>* AsHashSetOfString();

  /// @brief Method AsListOfByteArray, addr 0x16532c8, size 0x80, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* AsListOfByteArray();

  /// @brief Method AsListOfDocument, addr 0x1652da8, size 0x118, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* AsListOfDocument();

  /// @brief Method AsListOfDynamoDBEntry, addr 0x1652d20, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* AsListOfDynamoDBEntry();

  /// @brief Method AsListOfMemoryStream, addr 0x1653578, size 0x80, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::System::IO::MemoryStream*>* AsListOfMemoryStream();

  /// @brief Method AsListOfString, addr 0x1653078, size 0x80, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* AsListOfString();

  /// @brief Method Clone, addr 0x1652738, size 0x1d4, virtual true, abstract: false, final false
  inline ::System::Object* Clone();

  /// @brief Method ConvertToAttributeValue, addr 0x1652318, size 0x420, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::AttributeValue* ConvertToAttributeValue(::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig* conversionConfig);

  /// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* Create(::System::Collections::Generic::IEnumerable_1<T>* items);

  /// @brief Method CreateConversion, addr 0x1651ccc, size 0x22c, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DynamoDBEntryConversion* CreateConversion();

  /// @brief Method Equals, addr 0x165290c, size 0x158, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method ForceConversion, addr 0x1652158, size 0x1c0, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* ForceConversion(::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion);

  /// @brief Method GetHashCode, addr 0x1652a64, size 0x1dc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* New_ctor();

  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* New_ctor(::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* entries);

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*& __cordl_internal_get__Entries_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*> const&
  __cordl_internal_get__Entries_k__BackingField() const;

  constexpr void __cordl_internal_set__Entries_k__BackingField(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* value);

  /// @brief Method .ctor, addr 0x1651ef8, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x164fc84, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* entries);

  static inline ::Amazon::DynamoDBv2::DynamoDBEntryConversion* getStaticF_conversion();

  /// @brief Method get_Entries, addr 0x1651f78, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* get_Entries();

  /// @brief Method get_Item, addr 0x1651f88, size 0x58, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* get_Item(int32_t i);

  /// @brief Method op_Explicit, addr 0x1652d00, size 0x20, virtual false, abstract: false, final false
  static inline ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, ::Array<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*>
  op_Explicit___ArrayW___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry____Array___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry____(::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* p);

  /// @brief Method op_Explicit, addr 0x1653058, size 0x20, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> op_Explicit___ArrayW___StringW___Array___StringW___(::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* p);

  /// @brief Method op_Explicit, addr 0x16534f8, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*
  op_Explicit___System__Collections__Generic__HashSet_1___ArrayW_uint8_t___Array_uint8_t_____(::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* p);

  /// @brief Method op_Explicit, addr 0x16532a8, size 0x20, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::HashSet_1<::StringW>* op_Explicit___System__Collections__Generic__HashSet_1___StringW__(::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* p);

  /// @brief Method op_Explicit, addr 0x1652f50, size 0x20, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*
  op_Explicit___System__Collections__Generic__List_1___Amazon__DynamoDBv2__DocumentModel__Document___(::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* p);

  /// @brief Method op_Explicit, addr 0x1652d88, size 0x20, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*
  op_Explicit___System__Collections__Generic__List_1___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry___(::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* p);

  /// @brief Method op_Explicit, addr 0x16533d0, size 0x20, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*
  op_Explicit___System__Collections__Generic__List_1___ArrayW_uint8_t___Array_uint8_t_____(::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* p);

  /// @brief Method op_Explicit, addr 0x1653180, size 0x20, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::StringW>* op_Explicit___System__Collections__Generic__List_1___StringW__(::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* p);

  /// @brief Method op_Explicit, addr 0x1653680, size 0x20, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::System::IO::MemoryStream*>*
  op_Explicit___System__Collections__Generic__List_1___System__IO__MemoryStream___(::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* p);

  /// @brief Method op_Implicit, addr 0x1652ca0, size 0x60, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*
  op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBList_(::ArrayW<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, ::Array<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*> data);

  /// @brief Method op_Implicit, addr 0x1652fd0, size 0x88, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBList_(::ArrayW<::StringW, ::Array<::StringW>*> data);

  /// @brief Method op_Implicit, addr 0x1653470, size 0x88, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*
  op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBList_(::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* data);

  /// @brief Method op_Implicit, addr 0x1653220, size 0x88, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBList_(::System::Collections::Generic::HashSet_1<::StringW>* data);

  /// @brief Method op_Implicit, addr 0x1652ec0, size 0x90, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*
  op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBList_(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* data);

  /// @brief Method op_Implicit, addr 0x1652d28, size 0x60, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*
  op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBList_(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* data);

  /// @brief Method op_Implicit, addr 0x1653348, size 0x88, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*
  op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBList_(::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* data);

  /// @brief Method op_Implicit, addr 0x16530f8, size 0x88, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBList_(::System::Collections::Generic::List_1<::StringW>* data);

  /// @brief Method op_Implicit, addr 0x16535f8, size 0x88, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*
  op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBList_(::System::Collections::Generic::List_1<::System::IO::MemoryStream*>* data);

  static inline void setStaticF_conversion(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value);

  /// @brief Method set_Entries, addr 0x1651f80, size 0x8, virtual false, abstract: false, final false
  inline void set_Entries(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* value);

  /// @brief Method set_Item, addr 0x1651fe0, size 0xd0, virtual false, abstract: false, final false
  inline void set_Item(int32_t i, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamoDBList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamoDBList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamoDBList(DynamoDBList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamoDBList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamoDBList(DynamoDBList const&) = delete;

  /// @brief Field <Entries>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* ____Entries_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::DynamoDBList, ____Entries_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::DynamoDBList);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*, "Amazon.DynamoDBv2.DocumentModel", "DynamoDBList");
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::__DynamoDBList____c);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::__DynamoDBList____c*, "Amazon.DynamoDBv2.DocumentModel", "DynamoDBList/<>c");
