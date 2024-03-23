#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/DataModel/zzzz__DynamoDBAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DynamoDBRenamableAttribute)
// Forward declare root types
namespace Amazon::DynamoDBv2::DataModel {
class DynamoDBRenamableAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute);
// Type: Amazon.DynamoDBv2.DataModel::DynamoDBRenamableAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DataModel::DynamoDBRenamableAttribute*
class CORDL_TYPE DynamoDBRenamableAttribute : public ::Amazon::DynamoDBv2::DataModel::DynamoDBAttribute {
public:
  // Declarations
  __declspec(property(get = get_AttributeName, put = set_AttributeName))::StringW AttributeName;

  /// @brief Field <AttributeName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__AttributeName_k__BackingField, put = __cordl_internal_set__AttributeName_k__BackingField))::StringW _AttributeName_k__BackingField;

  static inline ::Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute* New_ctor();

  static inline ::Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute* New_ctor(::StringW attributeName);

  constexpr ::StringW const& __cordl_internal_get__AttributeName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__AttributeName_k__BackingField();

  constexpr void __cordl_internal_set__AttributeName_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x1420bc0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1420bc8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW attributeName);

  /// @brief Method get_AttributeName, addr 0x1420bf0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AttributeName();

  /// @brief Method set_AttributeName, addr 0x1420bf8, size 0x8, virtual false, abstract: false, final false
  inline void set_AttributeName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamoDBRenamableAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamoDBRenamableAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamoDBRenamableAttribute(DynamoDBRenamableAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamoDBRenamableAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamoDBRenamableAttribute(DynamoDBRenamableAttribute const&) = delete;

  /// @brief Field <AttributeName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____AttributeName_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute, ____AttributeName_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute*, "Amazon.DynamoDBv2.DataModel", "DynamoDBRenamableAttribute");
