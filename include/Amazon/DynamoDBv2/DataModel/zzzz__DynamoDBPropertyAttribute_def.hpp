#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/DataModel/zzzz__DynamoDBRenamableAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DynamoDBPropertyAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DataModel {
class DynamoDBPropertyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::DynamoDBPropertyAttribute);
// Type: Amazon.DynamoDBv2.DataModel::DynamoDBPropertyAttribute
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DataModel::DynamoDBPropertyAttribute*
class CORDL_TYPE DynamoDBPropertyAttribute : public ::Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute {
public:
  // Declarations
  __declspec(property(get = get_Converter, put = set_Converter))::System::Type* Converter;

  __declspec(property(get = get_StoreAsEpoch, put = set_StoreAsEpoch)) bool StoreAsEpoch;

  /// @brief Field <Converter>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Converter_k__BackingField, put = __cordl_internal_set__Converter_k__BackingField))::System::Type* _Converter_k__BackingField;

  /// @brief Field <StoreAsEpoch>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__StoreAsEpoch_k__BackingField, put = __cordl_internal_set__StoreAsEpoch_k__BackingField)) bool _StoreAsEpoch_k__BackingField;

  static inline ::Amazon::DynamoDBv2::DataModel::DynamoDBPropertyAttribute* New_ctor();

  static inline ::Amazon::DynamoDBv2::DataModel::DynamoDBPropertyAttribute* New_ctor(::StringW attributeName);

  static inline ::Amazon::DynamoDBv2::DataModel::DynamoDBPropertyAttribute* New_ctor(::StringW attributeName, ::System::Type* converter);

  static inline ::Amazon::DynamoDBv2::DataModel::DynamoDBPropertyAttribute* New_ctor(::StringW attributeName, bool storeAsEpoch);

  static inline ::Amazon::DynamoDBv2::DataModel::DynamoDBPropertyAttribute* New_ctor(::System::Type* converter);

  static inline ::Amazon::DynamoDBv2::DataModel::DynamoDBPropertyAttribute* New_ctor(bool storeAsEpoch);

  constexpr ::System::Type*& __cordl_internal_get__Converter_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__Converter_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__StoreAsEpoch_k__BackingField() const;

  constexpr bool& __cordl_internal_get__StoreAsEpoch_k__BackingField();

  constexpr void __cordl_internal_set__Converter_k__BackingField(::System::Type* value);

  constexpr void __cordl_internal_set__StoreAsEpoch_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x1420c08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1420c10, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW attributeName);

  /// @brief Method .ctor, addr 0x1420c8c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW attributeName, ::System::Type* converter);

  /// @brief Method .ctor, addr 0x1420cb8, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::StringW attributeName, bool storeAsEpoch);

  /// @brief Method .ctor, addr 0x1420c38, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* converter);

  /// @brief Method .ctor, addr 0x1420c60, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(bool storeAsEpoch);

  /// @brief Method get_Converter, addr 0x1420cec, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_Converter();

  /// @brief Method get_StoreAsEpoch, addr 0x1420cfc, size 0x8, virtual false, abstract: false, final false
  inline bool get_StoreAsEpoch();

  /// @brief Method set_Converter, addr 0x1420cf4, size 0x8, virtual false, abstract: false, final false
  inline void set_Converter(::System::Type* value);

  /// @brief Method set_StoreAsEpoch, addr 0x1420d04, size 0xc, virtual false, abstract: false, final false
  inline void set_StoreAsEpoch(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamoDBPropertyAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamoDBPropertyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamoDBPropertyAttribute(DynamoDBPropertyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamoDBPropertyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamoDBPropertyAttribute(DynamoDBPropertyAttribute const&) = delete;

  /// @brief Field <Converter>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ____Converter_k__BackingField;

  /// @brief Field <StoreAsEpoch>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____StoreAsEpoch_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::DynamoDBPropertyAttribute, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::DynamoDBPropertyAttribute, ____Converter_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::DynamoDBPropertyAttribute, ____StoreAsEpoch_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::DynamoDBPropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::DynamoDBPropertyAttribute*, "Amazon.DynamoDBv2.DataModel", "DynamoDBPropertyAttribute");
