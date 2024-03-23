#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/DataModel/zzzz__DynamoDBHashKeyAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DynamoDBGlobalSecondaryIndexHashKeyAttribute)
// Forward declare root types
namespace Amazon::DynamoDBv2::DataModel {
class DynamoDBGlobalSecondaryIndexHashKeyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute);
// Type: Amazon.DynamoDBv2.DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute*
class CORDL_TYPE DynamoDBGlobalSecondaryIndexHashKeyAttribute : public ::Amazon::DynamoDBv2::DataModel::DynamoDBHashKeyAttribute {
public:
  // Declarations
  __declspec(property(get = get_IndexNames, put = set_IndexNames))::ArrayW<::StringW, ::Array<::StringW>*> IndexNames;

  /// @brief Field <IndexNames>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__IndexNames_k__BackingField,
                      put = __cordl_internal_set__IndexNames_k__BackingField))::ArrayW<::StringW, ::Array<::StringW>*> _IndexNames_k__BackingField;

  static inline ::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute* New_ctor(::StringW indexName);

  static inline ::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute* New_ctor(::ArrayW<::StringW, ::Array<::StringW>*> indexNames);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__IndexNames_k__BackingField() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__IndexNames_k__BackingField();

  constexpr void __cordl_internal_set__IndexNames_k__BackingField(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method .ctor, addr 0x1420e28, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::StringW indexName);

  /// @brief Method .ctor, addr 0x1420ed0, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::StringW, ::Array<::StringW>*> indexNames);

  /// @brief Method get_IndexNames, addr 0x1420e18, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_IndexNames();

  /// @brief Method set_IndexNames, addr 0x1420e20, size 0x8, virtual false, abstract: false, final false
  inline void set_IndexNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamoDBGlobalSecondaryIndexHashKeyAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamoDBGlobalSecondaryIndexHashKeyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamoDBGlobalSecondaryIndexHashKeyAttribute(DynamoDBGlobalSecondaryIndexHashKeyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamoDBGlobalSecondaryIndexHashKeyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamoDBGlobalSecondaryIndexHashKeyAttribute(DynamoDBGlobalSecondaryIndexHashKeyAttribute const&) = delete;

  /// @brief Field <IndexNames>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____IndexNames_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute, ____IndexNames_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute*, "Amazon.DynamoDBv2.DataModel", "DynamoDBGlobalSecondaryIndexHashKeyAttribute");
