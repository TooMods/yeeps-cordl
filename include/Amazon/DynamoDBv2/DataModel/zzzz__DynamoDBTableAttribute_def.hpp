#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/DataModel/zzzz__DynamoDBAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DynamoDBTableAttribute)
// Forward declare root types
namespace Amazon::DynamoDBv2::DataModel {
class DynamoDBTableAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::DynamoDBTableAttribute);
// Type: Amazon.DynamoDBv2.DataModel::DynamoDBTableAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DataModel::DynamoDBTableAttribute*
class CORDL_TYPE DynamoDBTableAttribute : public ::Amazon::DynamoDBv2::DataModel::DynamoDBAttribute {
public:
  // Declarations
  __declspec(property(get = get_LowerCamelCaseProperties, put = set_LowerCamelCaseProperties)) bool LowerCamelCaseProperties;

  __declspec(property(get = get_TableName, put = set_TableName))::StringW TableName;

  /// @brief Field <LowerCamelCaseProperties>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__LowerCamelCaseProperties_k__BackingField,
                      put = __cordl_internal_set__LowerCamelCaseProperties_k__BackingField)) bool _LowerCamelCaseProperties_k__BackingField;

  /// @brief Field <TableName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__TableName_k__BackingField, put = __cordl_internal_set__TableName_k__BackingField))::StringW _TableName_k__BackingField;

  static inline ::Amazon::DynamoDBv2::DataModel::DynamoDBTableAttribute* New_ctor(::StringW tableName);

  static inline ::Amazon::DynamoDBv2::DataModel::DynamoDBTableAttribute* New_ctor(::StringW tableName, bool lowerCamelCaseProperties);

  constexpr bool const& __cordl_internal_get__LowerCamelCaseProperties_k__BackingField() const;

  constexpr bool& __cordl_internal_get__LowerCamelCaseProperties_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__TableName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__TableName_k__BackingField();

  constexpr void __cordl_internal_set__LowerCamelCaseProperties_k__BackingField(bool value);

  constexpr void __cordl_internal_set__TableName_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x1420b58, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW tableName);

  /// @brief Method .ctor, addr 0x1420b84, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::StringW tableName, bool lowerCamelCaseProperties);

  /// @brief Method get_LowerCamelCaseProperties, addr 0x1420b44, size 0x8, virtual false, abstract: false, final false
  inline bool get_LowerCamelCaseProperties();

  /// @brief Method get_TableName, addr 0x1420b34, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableName();

  /// @brief Method set_LowerCamelCaseProperties, addr 0x1420b4c, size 0xc, virtual false, abstract: false, final false
  inline void set_LowerCamelCaseProperties(bool value);

  /// @brief Method set_TableName, addr 0x1420b3c, size 0x8, virtual false, abstract: false, final false
  inline void set_TableName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamoDBTableAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamoDBTableAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamoDBTableAttribute(DynamoDBTableAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamoDBTableAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamoDBTableAttribute(DynamoDBTableAttribute const&) = delete;

  /// @brief Field <TableName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____TableName_k__BackingField;

  /// @brief Field <LowerCamelCaseProperties>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____LowerCamelCaseProperties_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::DynamoDBTableAttribute, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::DynamoDBTableAttribute, ____TableName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::DynamoDBTableAttribute, ____LowerCamelCaseProperties_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::DynamoDBTableAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::DynamoDBTableAttribute*, "Amazon.DynamoDBv2.DataModel", "DynamoDBTableAttribute");
