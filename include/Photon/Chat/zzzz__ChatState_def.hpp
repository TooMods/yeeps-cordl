#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ChatState)
// Forward declare root types
namespace Photon::Chat {
struct ChatState;
}
// Write type traits
MARK_VAL_T(::Photon::Chat::ChatState);
// Type: Photon.Chat::ChatState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Photon::Chat {
// Is value type: true
// CS Name: ::Photon.Chat::ChatState
struct CORDL_TYPE ChatState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ChatState_Unwrapped
  enum struct __ChatState_Unwrapped : int32_t {
    __E_Uninitialized = static_cast<int32_t>(0x0),
    __E_ConnectingToNameServer = static_cast<int32_t>(0x1),
    __E_ConnectedToNameServer = static_cast<int32_t>(0x2),
    __E_Authenticating = static_cast<int32_t>(0x3),
    __E_Authenticated = static_cast<int32_t>(0x4),
    __E_DisconnectingFromNameServer = static_cast<int32_t>(0x5),
    __E_ConnectingToFrontEnd = static_cast<int32_t>(0x6),
    __E_ConnectedToFrontEnd = static_cast<int32_t>(0x7),
    __E_DisconnectingFromFrontEnd = static_cast<int32_t>(0x8),
    __E_QueuedComingFromFrontEnd = static_cast<int32_t>(0x9),
    __E_Disconnecting = static_cast<int32_t>(0xa),
    __E_Disconnected = static_cast<int32_t>(0xb),
    __E_ConnectWithFallbackProtocol = static_cast<int32_t>(0xc),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ChatState_Unwrapped() const noexcept {
    return static_cast<__ChatState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ChatState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ChatState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Authenticated value: static_cast<int32_t>(0x4)
  static ::Photon::Chat::ChatState const Authenticated;

  /// @brief Field Authenticating value: static_cast<int32_t>(0x3)
  static ::Photon::Chat::ChatState const Authenticating;

  /// @brief Field ConnectWithFallbackProtocol value: static_cast<int32_t>(0xc)
  static ::Photon::Chat::ChatState const ConnectWithFallbackProtocol;

  /// @brief Field ConnectedToFrontEnd value: static_cast<int32_t>(0x7)
  static ::Photon::Chat::ChatState const ConnectedToFrontEnd;

  /// @brief Field ConnectedToNameServer value: static_cast<int32_t>(0x2)
  static ::Photon::Chat::ChatState const ConnectedToNameServer;

  /// @brief Field ConnectingToFrontEnd value: static_cast<int32_t>(0x6)
  static ::Photon::Chat::ChatState const ConnectingToFrontEnd;

  /// @brief Field ConnectingToNameServer value: static_cast<int32_t>(0x1)
  static ::Photon::Chat::ChatState const ConnectingToNameServer;

  /// @brief Field Disconnected value: static_cast<int32_t>(0xb)
  static ::Photon::Chat::ChatState const Disconnected;

  /// @brief Field Disconnecting value: static_cast<int32_t>(0xa)
  static ::Photon::Chat::ChatState const Disconnecting;

  /// @brief Field DisconnectingFromFrontEnd value: static_cast<int32_t>(0x8)
  static ::Photon::Chat::ChatState const DisconnectingFromFrontEnd;

  /// @brief Field DisconnectingFromNameServer value: static_cast<int32_t>(0x5)
  static ::Photon::Chat::ChatState const DisconnectingFromNameServer;

  /// @brief Field QueuedComingFromFrontEnd value: static_cast<int32_t>(0x9)
  static ::Photon::Chat::ChatState const QueuedComingFromFrontEnd;

  /// @brief Field Uninitialized value: static_cast<int32_t>(0x0)
  static ::Photon::Chat::ChatState const Uninitialized;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Chat::ChatState, 0x4>, "Size mismatch!");

static_assert(offsetof(::Photon::Chat::ChatState, value__) == 0x0, "Offset mismatch!");

} // namespace Photon::Chat
DEFINE_IL2CPP_ARG_TYPE(::Photon::Chat::ChatState, "Photon.Chat", "ChatState");
