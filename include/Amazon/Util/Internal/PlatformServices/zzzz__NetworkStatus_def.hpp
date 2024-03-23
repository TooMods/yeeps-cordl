#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkStatus)
// Forward declare root types
namespace Amazon::Util::Internal::PlatformServices {
struct NetworkStatus;
}
// Write type traits
MARK_VAL_T(::Amazon::Util::Internal::PlatformServices::NetworkStatus);
// Type: Amazon.Util.Internal.PlatformServices::NetworkStatus
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon::Util::Internal::PlatformServices {
// Is value type: true
// CS Name: ::Amazon.Util.Internal.PlatformServices::NetworkStatus
struct CORDL_TYPE NetworkStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __NetworkStatus_Unwrapped
  enum struct __NetworkStatus_Unwrapped : int32_t {
    __E_NotReachable = static_cast<int32_t>(0x0),
    __E_ReachableViaCarrierDataNetwork = static_cast<int32_t>(0x1),
    __E_ReachableViaWiFiNetwork = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NetworkStatus_Unwrapped() const noexcept {
    return static_cast<__NetworkStatus_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkStatus();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NetworkStatus(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field NotReachable value: static_cast<int32_t>(0x0)
  static ::Amazon::Util::Internal::PlatformServices::NetworkStatus const NotReachable;

  /// @brief Field ReachableViaCarrierDataNetwork value: static_cast<int32_t>(0x1)
  static ::Amazon::Util::Internal::PlatformServices::NetworkStatus const ReachableViaCarrierDataNetwork;

  /// @brief Field ReachableViaWiFiNetwork value: static_cast<int32_t>(0x2)
  static ::Amazon::Util::Internal::PlatformServices::NetworkStatus const ReachableViaWiFiNetwork;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::Internal::PlatformServices::NetworkStatus, 0x4>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::PlatformServices::NetworkStatus, value__) == 0x0, "Offset mismatch!");

} // namespace Amazon::Util::Internal::PlatformServices
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::Internal::PlatformServices::NetworkStatus, "Amazon.Util.Internal.PlatformServices", "NetworkStatus");
