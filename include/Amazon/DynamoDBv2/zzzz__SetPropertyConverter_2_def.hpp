#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SetPropertyConverter_2)
namespace Amazon::DynamoDBv2::DataModel {
class IPropertyConverter;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class DynamoDBEntry;
}
namespace Amazon::DynamoDBv2 {
class DynamoDBEntryConversion;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Amazon::DynamoDBv2 {
template <typename TCollection, typename TElement> class SetPropertyConverter_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::DynamoDBv2::SetPropertyConverter_2);
// Type: Amazon.DynamoDBv2::SetPropertyConverter`2
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// cpp template
template <typename TCollection, typename TElement>
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::SetPropertyConverter`2<TCollection,TElement>*
class CORDL_TYPE SetPropertyConverter_2 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Conversion, put = set_Conversion))::Amazon::DynamoDBv2::DynamoDBEntryConversion* Conversion;

  /// @brief Field <Conversion>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Conversion_k__BackingField,
                      put = __cordl_internal_set__Conversion_k__BackingField))::Amazon::DynamoDBv2::DynamoDBEntryConversion* _Conversion_k__BackingField;

  /// @brief Field collectionType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_collectionType, put = setStaticF_collectionType))::System::Type* collectionType;

  /// @brief Field elementType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_elementType, put = setStaticF_elementType))::System::Type* elementType;

  /// @brief Convert operator to "::Amazon::DynamoDBv2::DataModel::IPropertyConverter"
  constexpr operator ::Amazon::DynamoDBv2::DataModel::IPropertyConverter*() noexcept;

  /// @brief Method FromEntry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* FromEntry(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* entry);

  static inline ::Amazon::DynamoDBv2::SetPropertyConverter_2<TCollection, TElement>* New_ctor();

  /// @brief Method ToEntry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* ToEntry(::System::Object* value);

  constexpr ::Amazon::DynamoDBv2::DynamoDBEntryConversion*& __cordl_internal_get__Conversion_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DynamoDBEntryConversion*> const& __cordl_internal_get__Conversion_k__BackingField() const;

  constexpr void __cordl_internal_set__Conversion_k__BackingField(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Type* getStaticF_collectionType();

  static inline ::System::Type* getStaticF_elementType();

  /// @brief Method get_Conversion, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DynamoDBEntryConversion* get_Conversion();

  /// @brief Convert to "::Amazon::DynamoDBv2::DataModel::IPropertyConverter"
  constexpr ::Amazon::DynamoDBv2::DataModel::IPropertyConverter* i___Amazon__DynamoDBv2__DataModel__IPropertyConverter() noexcept;

  static inline void setStaticF_collectionType(::System::Type* value);

  static inline void setStaticF_elementType(::System::Type* value);

  /// @brief Method set_Conversion, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Conversion(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetPropertyConverter_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SetPropertyConverter_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetPropertyConverter_2(SetPropertyConverter_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetPropertyConverter_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetPropertyConverter_2(SetPropertyConverter_2 const&) = delete;

  /// @brief Field <Conversion>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DynamoDBEntryConversion* ____Conversion_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::DynamoDBv2
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::DynamoDBv2::SetPropertyConverter_2, "Amazon.DynamoDBv2", "SetPropertyConverter`2");
