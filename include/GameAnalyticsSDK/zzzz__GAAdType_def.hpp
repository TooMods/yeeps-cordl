#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GAAdType)
// Forward declare root types
namespace GameAnalyticsSDK {
struct GAAdType;
}
// Write type traits
MARK_VAL_T(::GameAnalyticsSDK::GAAdType);
// Type: GameAnalyticsSDK::GAAdType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GameAnalyticsSDK {
// Is value type: true
// CS Name: ::GameAnalyticsSDK::GAAdType
struct CORDL_TYPE GAAdType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GAAdType_Unwrapped
  enum struct __GAAdType_Unwrapped : int32_t {
    __E_Undefined = static_cast<int32_t>(0x0),
    __E_Video = static_cast<int32_t>(0x1),
    __E_RewardedVideo = static_cast<int32_t>(0x2),
    __E_Playable = static_cast<int32_t>(0x3),
    __E_Interstitial = static_cast<int32_t>(0x4),
    __E_OfferWall = static_cast<int32_t>(0x5),
    __E_Banner = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GAAdType_Unwrapped() const noexcept {
    return static_cast<__GAAdType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GAAdType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GAAdType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Banner value: static_cast<int32_t>(0x6)
  static ::GameAnalyticsSDK::GAAdType const Banner;

  /// @brief Field Interstitial value: static_cast<int32_t>(0x4)
  static ::GameAnalyticsSDK::GAAdType const Interstitial;

  /// @brief Field OfferWall value: static_cast<int32_t>(0x5)
  static ::GameAnalyticsSDK::GAAdType const OfferWall;

  /// @brief Field Playable value: static_cast<int32_t>(0x3)
  static ::GameAnalyticsSDK::GAAdType const Playable;

  /// @brief Field RewardedVideo value: static_cast<int32_t>(0x2)
  static ::GameAnalyticsSDK::GAAdType const RewardedVideo;

  /// @brief Field Undefined value: static_cast<int32_t>(0x0)
  static ::GameAnalyticsSDK::GAAdType const Undefined;

  /// @brief Field Video value: static_cast<int32_t>(0x1)
  static ::GameAnalyticsSDK::GAAdType const Video;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GameAnalyticsSDK::GAAdType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::GAAdType, value__) == 0x0, "Offset mismatch!");

} // namespace GameAnalyticsSDK
DEFINE_IL2CPP_ARG_TYPE(::GameAnalyticsSDK::GAAdType, "GameAnalyticsSDK", "GAAdType");
