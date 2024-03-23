#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GAResourceFlowType)
// Forward declare root types
namespace GameAnalyticsSDK {
struct GAResourceFlowType;
}
// Write type traits
MARK_VAL_T(::GameAnalyticsSDK::GAResourceFlowType);
// Type: GameAnalyticsSDK::GAResourceFlowType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GameAnalyticsSDK {
// Is value type: true
// CS Name: ::GameAnalyticsSDK::GAResourceFlowType
struct CORDL_TYPE GAResourceFlowType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GAResourceFlowType_Unwrapped
  enum struct __GAResourceFlowType_Unwrapped : int32_t {
    __E_Undefined = static_cast<int32_t>(0x0),
    __E_Source = static_cast<int32_t>(0x1),
    __E_Sink = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GAResourceFlowType_Unwrapped() const noexcept {
    return static_cast<__GAResourceFlowType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GAResourceFlowType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GAResourceFlowType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Sink value: static_cast<int32_t>(0x2)
  static ::GameAnalyticsSDK::GAResourceFlowType const Sink;

  /// @brief Field Source value: static_cast<int32_t>(0x1)
  static ::GameAnalyticsSDK::GAResourceFlowType const Source;

  /// @brief Field Undefined value: static_cast<int32_t>(0x0)
  static ::GameAnalyticsSDK::GAResourceFlowType const Undefined;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GameAnalyticsSDK::GAResourceFlowType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::GAResourceFlowType, value__) == 0x0, "Offset mismatch!");

} // namespace GameAnalyticsSDK
DEFINE_IL2CPP_ARG_TYPE(::GameAnalyticsSDK::GAResourceFlowType, "GameAnalyticsSDK", "GAResourceFlowType");
