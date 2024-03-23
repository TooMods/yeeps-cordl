#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConditionalOperatorValues)
// Forward declare root types
namespace Amazon::DynamoDBv2::DocumentModel {
struct ConditionalOperatorValues;
}
// Write type traits
MARK_VAL_T(::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues);
// Type: Amazon.DynamoDBv2.DocumentModel::ConditionalOperatorValues
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: true
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::ConditionalOperatorValues
struct CORDL_TYPE ConditionalOperatorValues {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ConditionalOperatorValues_Unwrapped
  enum struct __ConditionalOperatorValues_Unwrapped : int32_t {
    __E_And = static_cast<int32_t>(0x0),
    __E_Or = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ConditionalOperatorValues_Unwrapped() const noexcept {
    return static_cast<__ConditionalOperatorValues_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ConditionalOperatorValues();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ConditionalOperatorValues(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field And value: static_cast<int32_t>(0x0)
  static ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues const And;

  /// @brief Field Or value: static_cast<int32_t>(0x1)
  static ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues const Or;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues, 0x4>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues, value__) == 0x0, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues, "Amazon.DynamoDBv2.DocumentModel", "ConditionalOperatorValues");
