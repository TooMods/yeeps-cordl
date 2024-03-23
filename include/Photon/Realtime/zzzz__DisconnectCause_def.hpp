#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DisconnectCause)
// Forward declare root types
namespace Photon::Realtime {
struct DisconnectCause;
}
// Write type traits
MARK_VAL_T(::Photon::Realtime::DisconnectCause);
// Type: Photon.Realtime::DisconnectCause
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: true
// CS Name: ::Photon.Realtime::DisconnectCause
struct CORDL_TYPE DisconnectCause {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DisconnectCause_Unwrapped
  enum struct __DisconnectCause_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_ExceptionOnConnect = static_cast<int32_t>(0x1),
    __E_DnsExceptionOnConnect = static_cast<int32_t>(0x2),
    __E_ServerAddressInvalid = static_cast<int32_t>(0x3),
    __E_Exception = static_cast<int32_t>(0x4),
    __E_ServerTimeout = static_cast<int32_t>(0x5),
    __E_ClientTimeout = static_cast<int32_t>(0x6),
    __E_DisconnectByServerLogic = static_cast<int32_t>(0x7),
    __E_DisconnectByServerReasonUnknown = static_cast<int32_t>(0x8),
    __E_InvalidAuthentication = static_cast<int32_t>(0x9),
    __E_CustomAuthenticationFailed = static_cast<int32_t>(0xa),
    __E_AuthenticationTicketExpired = static_cast<int32_t>(0xb),
    __E_MaxCcuReached = static_cast<int32_t>(0xc),
    __E_InvalidRegion = static_cast<int32_t>(0xd),
    __E_OperationNotAllowedInCurrentState = static_cast<int32_t>(0xe),
    __E_DisconnectByClientLogic = static_cast<int32_t>(0xf),
    __E_DisconnectByOperationLimit = static_cast<int32_t>(0x10),
    __E_DisconnectByDisconnectMessage = static_cast<int32_t>(0x11),
    __E_ApplicationQuit = static_cast<int32_t>(0x12),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DisconnectCause_Unwrapped() const noexcept {
    return static_cast<__DisconnectCause_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DisconnectCause();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DisconnectCause(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ApplicationQuit value: static_cast<int32_t>(0x12)
  static ::Photon::Realtime::DisconnectCause const ApplicationQuit;

  /// @brief Field AuthenticationTicketExpired value: static_cast<int32_t>(0xb)
  static ::Photon::Realtime::DisconnectCause const AuthenticationTicketExpired;

  /// @brief Field ClientTimeout value: static_cast<int32_t>(0x6)
  static ::Photon::Realtime::DisconnectCause const ClientTimeout;

  /// @brief Field CustomAuthenticationFailed value: static_cast<int32_t>(0xa)
  static ::Photon::Realtime::DisconnectCause const CustomAuthenticationFailed;

  /// @brief Field DisconnectByClientLogic value: static_cast<int32_t>(0xf)
  static ::Photon::Realtime::DisconnectCause const DisconnectByClientLogic;

  /// @brief Field DisconnectByDisconnectMessage value: static_cast<int32_t>(0x11)
  static ::Photon::Realtime::DisconnectCause const DisconnectByDisconnectMessage;

  /// @brief Field DisconnectByOperationLimit value: static_cast<int32_t>(0x10)
  static ::Photon::Realtime::DisconnectCause const DisconnectByOperationLimit;

  /// @brief Field DisconnectByServerLogic value: static_cast<int32_t>(0x7)
  static ::Photon::Realtime::DisconnectCause const DisconnectByServerLogic;

  /// @brief Field DisconnectByServerReasonUnknown value: static_cast<int32_t>(0x8)
  static ::Photon::Realtime::DisconnectCause const DisconnectByServerReasonUnknown;

  /// @brief Field DnsExceptionOnConnect value: static_cast<int32_t>(0x2)
  static ::Photon::Realtime::DisconnectCause const DnsExceptionOnConnect;

  /// @brief Field Exception value: static_cast<int32_t>(0x4)
  static ::Photon::Realtime::DisconnectCause const Exception;

  /// @brief Field ExceptionOnConnect value: static_cast<int32_t>(0x1)
  static ::Photon::Realtime::DisconnectCause const ExceptionOnConnect;

  /// @brief Field InvalidAuthentication value: static_cast<int32_t>(0x9)
  static ::Photon::Realtime::DisconnectCause const InvalidAuthentication;

  /// @brief Field InvalidRegion value: static_cast<int32_t>(0xd)
  static ::Photon::Realtime::DisconnectCause const InvalidRegion;

  /// @brief Field MaxCcuReached value: static_cast<int32_t>(0xc)
  static ::Photon::Realtime::DisconnectCause const MaxCcuReached;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::Photon::Realtime::DisconnectCause const None;

  /// @brief Field OperationNotAllowedInCurrentState value: static_cast<int32_t>(0xe)
  static ::Photon::Realtime::DisconnectCause const OperationNotAllowedInCurrentState;

  /// @brief Field ServerAddressInvalid value: static_cast<int32_t>(0x3)
  static ::Photon::Realtime::DisconnectCause const ServerAddressInvalid;

  /// @brief Field ServerTimeout value: static_cast<int32_t>(0x5)
  static ::Photon::Realtime::DisconnectCause const ServerTimeout;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::DisconnectCause, 0x4>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::DisconnectCause, value__) == 0x0, "Offset mismatch!");

} // namespace Photon::Realtime
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::DisconnectCause, "Photon.Realtime", "DisconnectCause");
