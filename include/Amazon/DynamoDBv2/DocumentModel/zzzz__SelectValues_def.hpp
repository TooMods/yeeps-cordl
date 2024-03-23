#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SelectValues)
// Forward declare root types
namespace Amazon::DynamoDBv2::DocumentModel {
struct SelectValues;
}
// Write type traits
MARK_VAL_T(::Amazon::DynamoDBv2::DocumentModel::SelectValues);
// Type: Amazon.DynamoDBv2.DocumentModel::SelectValues
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: true
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::SelectValues
struct CORDL_TYPE SelectValues {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SelectValues_Unwrapped
  enum struct __SelectValues_Unwrapped : int32_t {
    __E_Count = static_cast<int32_t>(0x0),
    __E_SpecificAttributes = static_cast<int32_t>(0x1),
    __E_AllAttributes = static_cast<int32_t>(0x2),
    __E_AllProjectedAttributes = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SelectValues_Unwrapped() const noexcept {
    return static_cast<__SelectValues_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectValues();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SelectValues(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AllAttributes value: static_cast<int32_t>(0x2)
  static ::Amazon::DynamoDBv2::DocumentModel::SelectValues const AllAttributes;

  /// @brief Field AllProjectedAttributes value: static_cast<int32_t>(0x3)
  static ::Amazon::DynamoDBv2::DocumentModel::SelectValues const AllProjectedAttributes;

  /// @brief Field Count value: static_cast<int32_t>(0x0)
  static ::Amazon::DynamoDBv2::DocumentModel::SelectValues const Count;

  /// @brief Field SpecificAttributes value: static_cast<int32_t>(0x1)
  static ::Amazon::DynamoDBv2::DocumentModel::SelectValues const SpecificAttributes;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::SelectValues, 0x4>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::SelectValues, value__) == 0x0, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::SelectValues, "Amazon.DynamoDBv2.DocumentModel", "SelectValues");
