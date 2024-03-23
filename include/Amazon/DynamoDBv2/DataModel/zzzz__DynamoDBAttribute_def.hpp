#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(DynamoDBAttribute)
// Forward declare root types
namespace Amazon::DynamoDBv2::DataModel {
class DynamoDBAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::DynamoDBAttribute);
// Type: Amazon.DynamoDBv2.DataModel::DynamoDBAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DataModel::DynamoDBAttribute*
class CORDL_TYPE DynamoDBAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::Amazon::DynamoDBv2::DataModel::DynamoDBAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x1420b2c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamoDBAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamoDBAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamoDBAttribute(DynamoDBAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamoDBAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamoDBAttribute(DynamoDBAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::DynamoDBAttribute, 0x10>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::DynamoDBAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::DynamoDBAttribute*, "Amazon.DynamoDBv2.DataModel", "DynamoDBAttribute");
