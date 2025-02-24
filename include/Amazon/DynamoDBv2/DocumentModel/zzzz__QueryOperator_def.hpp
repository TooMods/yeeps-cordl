#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QueryOperator)
// Forward declare root types
namespace Amazon::DynamoDBv2::DocumentModel {
struct QueryOperator;
}
// Write type traits
MARK_VAL_T(::Amazon::DynamoDBv2::DocumentModel::QueryOperator);
// Type: Amazon.DynamoDBv2.DocumentModel::QueryOperator
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: true
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::QueryOperator
struct CORDL_TYPE QueryOperator {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __QueryOperator_Unwrapped
  enum struct __QueryOperator_Unwrapped : int32_t {
    __E_Equal = static_cast<int32_t>(0x0),
    __E_LessThanOrEqual = static_cast<int32_t>(0x1),
    __E_LessThan = static_cast<int32_t>(0x2),
    __E_GreaterThanOrEqual = static_cast<int32_t>(0x3),
    __E_GreaterThan = static_cast<int32_t>(0x4),
    __E_BeginsWith = static_cast<int32_t>(0x5),
    __E_Between = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __QueryOperator_Unwrapped() const noexcept {
    return static_cast<__QueryOperator_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr QueryOperator();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr QueryOperator(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BeginsWith value: static_cast<int32_t>(0x5)
  static ::Amazon::DynamoDBv2::DocumentModel::QueryOperator const BeginsWith;

  /// @brief Field Between value: static_cast<int32_t>(0x6)
  static ::Amazon::DynamoDBv2::DocumentModel::QueryOperator const Between;

  /// @brief Field Equal value: static_cast<int32_t>(0x0)
  static ::Amazon::DynamoDBv2::DocumentModel::QueryOperator const Equal;

  /// @brief Field GreaterThan value: static_cast<int32_t>(0x4)
  static ::Amazon::DynamoDBv2::DocumentModel::QueryOperator const GreaterThan;

  /// @brief Field GreaterThanOrEqual value: static_cast<int32_t>(0x3)
  static ::Amazon::DynamoDBv2::DocumentModel::QueryOperator const GreaterThanOrEqual;

  /// @brief Field LessThan value: static_cast<int32_t>(0x2)
  static ::Amazon::DynamoDBv2::DocumentModel::QueryOperator const LessThan;

  /// @brief Field LessThanOrEqual value: static_cast<int32_t>(0x1)
  static ::Amazon::DynamoDBv2::DocumentModel::QueryOperator const LessThanOrEqual;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::QueryOperator, 0x4>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::QueryOperator, value__) == 0x0, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::QueryOperator, "Amazon.DynamoDBv2.DocumentModel", "QueryOperator");
