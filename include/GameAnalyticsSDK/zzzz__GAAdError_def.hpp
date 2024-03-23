#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GAAdError)
// Forward declare root types
namespace GameAnalyticsSDK {
struct GAAdError;
}
// Write type traits
MARK_VAL_T(::GameAnalyticsSDK::GAAdError);
// Type: GameAnalyticsSDK::GAAdError
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GameAnalyticsSDK {
// Is value type: true
// CS Name: ::GameAnalyticsSDK::GAAdError
struct CORDL_TYPE GAAdError {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GAAdError_Unwrapped
  enum struct __GAAdError_Unwrapped : int32_t {
    __E_Undefined = static_cast<int32_t>(0x0),
    __E_Unknown = static_cast<int32_t>(0x1),
    __E_Offline = static_cast<int32_t>(0x2),
    __E_NoFill = static_cast<int32_t>(0x3),
    __E_InternalError = static_cast<int32_t>(0x4),
    __E_InvalidRequest = static_cast<int32_t>(0x5),
    __E_UnableToPrecache = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GAAdError_Unwrapped() const noexcept {
    return static_cast<__GAAdError_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GAAdError();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GAAdError(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field InternalError value: static_cast<int32_t>(0x4)
  static ::GameAnalyticsSDK::GAAdError const InternalError;

  /// @brief Field InvalidRequest value: static_cast<int32_t>(0x5)
  static ::GameAnalyticsSDK::GAAdError const InvalidRequest;

  /// @brief Field NoFill value: static_cast<int32_t>(0x3)
  static ::GameAnalyticsSDK::GAAdError const NoFill;

  /// @brief Field Offline value: static_cast<int32_t>(0x2)
  static ::GameAnalyticsSDK::GAAdError const Offline;

  /// @brief Field UnableToPrecache value: static_cast<int32_t>(0x6)
  static ::GameAnalyticsSDK::GAAdError const UnableToPrecache;

  /// @brief Field Undefined value: static_cast<int32_t>(0x0)
  static ::GameAnalyticsSDK::GAAdError const Undefined;

  /// @brief Field Unknown value: static_cast<int32_t>(0x1)
  static ::GameAnalyticsSDK::GAAdError const Unknown;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GameAnalyticsSDK::GAAdError, 0x4>, "Size mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::GAAdError, value__) == 0x0, "Offset mismatch!");

} // namespace GameAnalyticsSDK
DEFINE_IL2CPP_ARG_TYPE(::GameAnalyticsSDK::GAAdError, "GameAnalyticsSDK", "GAAdError");
