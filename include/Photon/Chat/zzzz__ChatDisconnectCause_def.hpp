#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ChatDisconnectCause)
// Forward declare root types
namespace Photon::Chat {
struct ChatDisconnectCause;
}
// Write type traits
MARK_VAL_T(::Photon::Chat::ChatDisconnectCause);
// Type: Photon.Chat::ChatDisconnectCause
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Photon::Chat {
// Is value type: true
// CS Name: ::Photon.Chat::ChatDisconnectCause
struct CORDL_TYPE ChatDisconnectCause {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ChatDisconnectCause_Unwrapped
  enum struct __ChatDisconnectCause_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_ExceptionOnConnect = static_cast<int32_t>(0x1),
    __E_DisconnectByServerLogic = static_cast<int32_t>(0x2),
    __E_DisconnectByServerReasonUnknown = static_cast<int32_t>(0x3),
    __E_ServerTimeout = static_cast<int32_t>(0x4),
    __E_ClientTimeout = static_cast<int32_t>(0x5),
    __E_Exception = static_cast<int32_t>(0x6),
    __E_InvalidAuthentication = static_cast<int32_t>(0x7),
    __E_MaxCcuReached = static_cast<int32_t>(0x8),
    __E_InvalidRegion = static_cast<int32_t>(0x9),
    __E_OperationNotAllowedInCurrentState = static_cast<int32_t>(0xa),
    __E_CustomAuthenticationFailed = static_cast<int32_t>(0xb),
    __E_AuthenticationTicketExpired = static_cast<int32_t>(0xc),
    __E_DisconnectByClientLogic = static_cast<int32_t>(0xd),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ChatDisconnectCause_Unwrapped() const noexcept {
    return static_cast<__ChatDisconnectCause_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ChatDisconnectCause();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ChatDisconnectCause(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AuthenticationTicketExpired value: static_cast<int32_t>(0xc)
  static ::Photon::Chat::ChatDisconnectCause const AuthenticationTicketExpired;

  /// @brief Field ClientTimeout value: static_cast<int32_t>(0x5)
  static ::Photon::Chat::ChatDisconnectCause const ClientTimeout;

  /// @brief Field CustomAuthenticationFailed value: static_cast<int32_t>(0xb)
  static ::Photon::Chat::ChatDisconnectCause const CustomAuthenticationFailed;

  /// @brief Field DisconnectByClientLogic value: static_cast<int32_t>(0xd)
  static ::Photon::Chat::ChatDisconnectCause const DisconnectByClientLogic;

  /// @brief Field DisconnectByServerLogic value: static_cast<int32_t>(0x2)
  static ::Photon::Chat::ChatDisconnectCause const DisconnectByServerLogic;

  /// @brief Field DisconnectByServerReasonUnknown value: static_cast<int32_t>(0x3)
  static ::Photon::Chat::ChatDisconnectCause const DisconnectByServerReasonUnknown;

  /// @brief Field Exception value: static_cast<int32_t>(0x6)
  static ::Photon::Chat::ChatDisconnectCause const Exception;

  /// @brief Field ExceptionOnConnect value: static_cast<int32_t>(0x1)
  static ::Photon::Chat::ChatDisconnectCause const ExceptionOnConnect;

  /// @brief Field InvalidAuthentication value: static_cast<int32_t>(0x7)
  static ::Photon::Chat::ChatDisconnectCause const InvalidAuthentication;

  /// @brief Field InvalidRegion value: static_cast<int32_t>(0x9)
  static ::Photon::Chat::ChatDisconnectCause const InvalidRegion;

  /// @brief Field MaxCcuReached value: static_cast<int32_t>(0x8)
  static ::Photon::Chat::ChatDisconnectCause const MaxCcuReached;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::Photon::Chat::ChatDisconnectCause const None;

  /// @brief Field OperationNotAllowedInCurrentState value: static_cast<int32_t>(0xa)
  static ::Photon::Chat::ChatDisconnectCause const OperationNotAllowedInCurrentState;

  /// @brief Field ServerTimeout value: static_cast<int32_t>(0x4)
  static ::Photon::Chat::ChatDisconnectCause const ServerTimeout;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Chat::ChatDisconnectCause, 0x4>, "Size mismatch!");

static_assert(offsetof(::Photon::Chat::ChatDisconnectCause, value__) == 0x0, "Offset mismatch!");

} // namespace Photon::Chat
DEFINE_IL2CPP_ARG_TYPE(::Photon::Chat::ChatDisconnectCause, "Photon.Chat", "ChatDisconnectCause");
