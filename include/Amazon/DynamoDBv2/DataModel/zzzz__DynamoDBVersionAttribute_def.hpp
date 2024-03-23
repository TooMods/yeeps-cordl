#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/DataModel/zzzz__DynamoDBRenamableAttribute_def.hpp"
CORDL_MODULE_EXPORT(DynamoDBVersionAttribute)
// Forward declare root types
namespace Amazon::DynamoDBv2::DataModel {
class DynamoDBVersionAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::DynamoDBVersionAttribute);
// Type: Amazon.DynamoDBv2.DataModel::DynamoDBVersionAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DataModel::DynamoDBVersionAttribute*
class CORDL_TYPE DynamoDBVersionAttribute : public ::Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute {
public:
  // Declarations
  static inline ::Amazon::DynamoDBv2::DataModel::DynamoDBVersionAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x1420c00, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamoDBVersionAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamoDBVersionAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamoDBVersionAttribute(DynamoDBVersionAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamoDBVersionAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamoDBVersionAttribute(DynamoDBVersionAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::DynamoDBVersionAttribute, 0x18>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::DynamoDBVersionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::DynamoDBVersionAttribute*, "Amazon.DynamoDBv2.DataModel", "DynamoDBVersionAttribute");
