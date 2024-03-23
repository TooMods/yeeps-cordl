#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReturnItemCollectionMetricsValues)
// Forward declare root types
namespace Amazon::DynamoDBv2::DocumentModel {
struct ReturnItemCollectionMetricsValues;
}
// Write type traits
MARK_VAL_T(::Amazon::DynamoDBv2::DocumentModel::ReturnItemCollectionMetricsValues);
// Type: Amazon.DynamoDBv2.DocumentModel::ReturnItemCollectionMetricsValues
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: true
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::ReturnItemCollectionMetricsValues
struct CORDL_TYPE ReturnItemCollectionMetricsValues {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ReturnItemCollectionMetricsValues_Unwrapped
  enum struct __ReturnItemCollectionMetricsValues_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_All = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ReturnItemCollectionMetricsValues_Unwrapped() const noexcept {
    return static_cast<__ReturnItemCollectionMetricsValues_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ReturnItemCollectionMetricsValues();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ReturnItemCollectionMetricsValues(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field All value: static_cast<int32_t>(0x1)
  static ::Amazon::DynamoDBv2::DocumentModel::ReturnItemCollectionMetricsValues const All;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::Amazon::DynamoDBv2::DocumentModel::ReturnItemCollectionMetricsValues const None;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::ReturnItemCollectionMetricsValues, 0x4>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::ReturnItemCollectionMetricsValues, value__) == 0x0, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::ReturnItemCollectionMetricsValues, "Amazon.DynamoDBv2.DocumentModel", "ReturnItemCollectionMetricsValues");
