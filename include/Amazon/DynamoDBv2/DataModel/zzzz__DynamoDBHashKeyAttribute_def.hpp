#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/DataModel/zzzz__DynamoDBPropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DynamoDBHashKeyAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DataModel {
class DynamoDBHashKeyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::DynamoDBHashKeyAttribute);
// Type: Amazon.DynamoDBv2.DataModel::DynamoDBHashKeyAttribute
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DataModel::DynamoDBHashKeyAttribute*
class CORDL_TYPE DynamoDBHashKeyAttribute : public ::Amazon::DynamoDBv2::DataModel::DynamoDBPropertyAttribute {
public:
  // Declarations
  static inline ::Amazon::DynamoDBv2::DataModel::DynamoDBHashKeyAttribute* New_ctor();

  static inline ::Amazon::DynamoDBv2::DataModel::DynamoDBHashKeyAttribute* New_ctor(::StringW attributeName);

  static inline ::Amazon::DynamoDBv2::DataModel::DynamoDBHashKeyAttribute* New_ctor(::StringW attributeName, ::System::Type* converter);

  static inline ::Amazon::DynamoDBv2::DataModel::DynamoDBHashKeyAttribute* New_ctor(::System::Type* converter);

  /// @brief Method .ctor, addr 0x1420d10, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1420d18, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW attributeName);

  /// @brief Method .ctor, addr 0x1420d68, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW attributeName, ::System::Type* converter);

  /// @brief Method .ctor, addr 0x1420d40, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* converter);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamoDBHashKeyAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamoDBHashKeyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamoDBHashKeyAttribute(DynamoDBHashKeyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamoDBHashKeyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamoDBHashKeyAttribute(DynamoDBHashKeyAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::DynamoDBHashKeyAttribute, 0x28>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::DynamoDBHashKeyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::DynamoDBHashKeyAttribute*, "Amazon.DynamoDBv2.DataModel", "DynamoDBHashKeyAttribute");
