#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PeerStateValue)
// Forward declare root types
namespace ExitGames::Client::Photon {
struct PeerStateValue;
}
// Write type traits
MARK_VAL_T(::ExitGames::Client::Photon::PeerStateValue);
// Type: ExitGames.Client.Photon::PeerStateValue
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: true
// CS Name: ::ExitGames.Client.Photon::PeerStateValue
struct CORDL_TYPE PeerStateValue {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __PeerStateValue_Unwrapped
  enum struct __PeerStateValue_Unwrapped : uint8_t {
    __E_Disconnected = static_cast<uint8_t>(0x0u),
    __E_Connecting = static_cast<uint8_t>(0x1u),
    __E_InitializingApplication = static_cast<uint8_t>(0xau),
    __E_Connected = static_cast<uint8_t>(0x3u),
    __E_Disconnecting = static_cast<uint8_t>(0x4u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PeerStateValue_Unwrapped() const noexcept {
    return static_cast<__PeerStateValue_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PeerStateValue();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr PeerStateValue(uint8_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief Field Connected value: static_cast<uint8_t>(0x3u)
  static ::ExitGames::Client::Photon::PeerStateValue const Connected;

  /// @brief Field Connecting value: static_cast<uint8_t>(0x1u)
  static ::ExitGames::Client::Photon::PeerStateValue const Connecting;

  /// @brief Field Disconnected value: static_cast<uint8_t>(0x0u)
  static ::ExitGames::Client::Photon::PeerStateValue const Disconnected;

  /// @brief Field Disconnecting value: static_cast<uint8_t>(0x4u)
  static ::ExitGames::Client::Photon::PeerStateValue const Disconnecting;

  /// @brief Field InitializingApplication value: static_cast<uint8_t>(0xau)
  static ::ExitGames::Client::Photon::PeerStateValue const InitializingApplication;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::PeerStateValue, 0x1>, "Size mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerStateValue, value__) == 0x0, "Offset mismatch!");

} // namespace ExitGames::Client::Photon
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::PeerStateValue, "ExitGames.Client.Photon", "PeerStateValue");
