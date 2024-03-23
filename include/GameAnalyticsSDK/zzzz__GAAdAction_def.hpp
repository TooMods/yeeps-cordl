#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GAAdAction)
// Forward declare root types
namespace GameAnalyticsSDK {
struct GAAdAction;
}
// Write type traits
MARK_VAL_T(::GameAnalyticsSDK::GAAdAction);
// Type: GameAnalyticsSDK::GAAdAction
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GameAnalyticsSDK {
// Is value type: true
// CS Name: ::GameAnalyticsSDK::GAAdAction
struct CORDL_TYPE GAAdAction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GAAdAction_Unwrapped
  enum struct __GAAdAction_Unwrapped : int32_t {
    __E_Undefined = static_cast<int32_t>(0x0),
    __E_Clicked = static_cast<int32_t>(0x1),
    __E_Show = static_cast<int32_t>(0x2),
    __E_FailedShow = static_cast<int32_t>(0x3),
    __E_RewardReceived = static_cast<int32_t>(0x4),
    __E_Request = static_cast<int32_t>(0x5),
    __E_Loaded = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GAAdAction_Unwrapped() const noexcept {
    return static_cast<__GAAdAction_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GAAdAction();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GAAdAction(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Clicked value: static_cast<int32_t>(0x1)
  static ::GameAnalyticsSDK::GAAdAction const Clicked;

  /// @brief Field FailedShow value: static_cast<int32_t>(0x3)
  static ::GameAnalyticsSDK::GAAdAction const FailedShow;

  /// @brief Field Loaded value: static_cast<int32_t>(0x6)
  static ::GameAnalyticsSDK::GAAdAction const Loaded;

  /// @brief Field Request value: static_cast<int32_t>(0x5)
  static ::GameAnalyticsSDK::GAAdAction const Request;

  /// @brief Field RewardReceived value: static_cast<int32_t>(0x4)
  static ::GameAnalyticsSDK::GAAdAction const RewardReceived;

  /// @brief Field Show value: static_cast<int32_t>(0x2)
  static ::GameAnalyticsSDK::GAAdAction const Show;

  /// @brief Field Undefined value: static_cast<int32_t>(0x0)
  static ::GameAnalyticsSDK::GAAdAction const Undefined;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GameAnalyticsSDK::GAAdAction, 0x4>, "Size mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::GAAdAction, value__) == 0x0, "Offset mismatch!");

} // namespace GameAnalyticsSDK
DEFINE_IL2CPP_ARG_TYPE(::GameAnalyticsSDK::GAAdAction, "GameAnalyticsSDK", "GAAdAction");
