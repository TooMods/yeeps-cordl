#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectionRecoveryState)
// Forward declare root types
namespace Unity::Services::Vivox {
struct ConnectionRecoveryState;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Vivox::ConnectionRecoveryState);
// Type: Unity.Services.Vivox::ConnectionRecoveryState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::Unity.Services.Vivox::ConnectionRecoveryState
struct CORDL_TYPE ConnectionRecoveryState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ConnectionRecoveryState_Unwrapped
  enum struct __ConnectionRecoveryState_Unwrapped : int32_t {
    __E_Disconnected = static_cast<int32_t>(0x0),
    __E_Connected = static_cast<int32_t>(0x1),
    __E_Recovering = static_cast<int32_t>(0x3),
    __E_FailedToRecover = static_cast<int32_t>(0x4),
    __E_Recovered = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ConnectionRecoveryState_Unwrapped() const noexcept {
    return static_cast<__ConnectionRecoveryState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectionRecoveryState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ConnectionRecoveryState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Connected value: static_cast<int32_t>(0x1)
  static ::Unity::Services::Vivox::ConnectionRecoveryState const Connected;

  /// @brief Field Disconnected value: static_cast<int32_t>(0x0)
  static ::Unity::Services::Vivox::ConnectionRecoveryState const Disconnected;

  /// @brief Field FailedToRecover value: static_cast<int32_t>(0x4)
  static ::Unity::Services::Vivox::ConnectionRecoveryState const FailedToRecover;

  /// @brief Field Recovered value: static_cast<int32_t>(0x5)
  static ::Unity::Services::Vivox::ConnectionRecoveryState const Recovered;

  /// @brief Field Recovering value: static_cast<int32_t>(0x3)
  static ::Unity::Services::Vivox::ConnectionRecoveryState const Recovering;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::ConnectionRecoveryState, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ConnectionRecoveryState, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Services::Vivox
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::ConnectionRecoveryState, "Unity.Services.Vivox", "ConnectionRecoveryState");
