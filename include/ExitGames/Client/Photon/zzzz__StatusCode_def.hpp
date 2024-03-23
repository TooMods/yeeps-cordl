#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StatusCode)
// Forward declare root types
namespace ExitGames::Client::Photon {
struct StatusCode;
}
// Write type traits
MARK_VAL_T(::ExitGames::Client::Photon::StatusCode);
// Type: ExitGames.Client.Photon::StatusCode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: true
// CS Name: ::ExitGames.Client.Photon::StatusCode
struct CORDL_TYPE StatusCode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __StatusCode_Unwrapped
  enum struct __StatusCode_Unwrapped : int32_t {
    __E_Connect = static_cast<int32_t>(0x400),
    __E_Disconnect = static_cast<int32_t>(0x401),
    __E_Exception = static_cast<int32_t>(0x402),
    __E_ExceptionOnConnect = static_cast<int32_t>(0x3ff),
    __E_ServerAddressInvalid = static_cast<int32_t>(0x41a),
    __E_DnsExceptionOnConnect = static_cast<int32_t>(0x41b),
    __E_SecurityExceptionOnConnect = static_cast<int32_t>(0x3fe),
    __E_SendError = static_cast<int32_t>(0x406),
    __E_ExceptionOnReceive = static_cast<int32_t>(0x40f),
    __E_TimeoutDisconnect = static_cast<int32_t>(0x410),
    __E_DisconnectByServerTimeout = static_cast<int32_t>(0x411),
    __E_DisconnectByServerUserLimit = static_cast<int32_t>(0x412),
    __E_DisconnectByServerLogic = static_cast<int32_t>(0x413),
    __E_DisconnectByServerReasonUnknown = static_cast<int32_t>(0x414),
    __E_EncryptionEstablished = static_cast<int32_t>(0x418),
    __E_EncryptionFailedToEstablish = static_cast<int32_t>(0x419),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __StatusCode_Unwrapped() const noexcept {
    return static_cast<__StatusCode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr StatusCode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StatusCode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Connect value: static_cast<int32_t>(0x400)
  static ::ExitGames::Client::Photon::StatusCode const Connect;

  /// @brief Field Disconnect value: static_cast<int32_t>(0x401)
  static ::ExitGames::Client::Photon::StatusCode const Disconnect;

  /// @brief Field DisconnectByServerLogic value: static_cast<int32_t>(0x413)
  static ::ExitGames::Client::Photon::StatusCode const DisconnectByServerLogic;

  /// @brief Field DisconnectByServerReasonUnknown value: static_cast<int32_t>(0x414)
  static ::ExitGames::Client::Photon::StatusCode const DisconnectByServerReasonUnknown;

  /// @brief Field DisconnectByServerTimeout value: static_cast<int32_t>(0x411)
  static ::ExitGames::Client::Photon::StatusCode const DisconnectByServerTimeout;

  /// @brief Field DisconnectByServerUserLimit value: static_cast<int32_t>(0x412)
  static ::ExitGames::Client::Photon::StatusCode const DisconnectByServerUserLimit;

  /// @brief Field DnsExceptionOnConnect value: static_cast<int32_t>(0x41b)
  static ::ExitGames::Client::Photon::StatusCode const DnsExceptionOnConnect;

  /// @brief Field EncryptionEstablished value: static_cast<int32_t>(0x418)
  static ::ExitGames::Client::Photon::StatusCode const EncryptionEstablished;

  /// @brief Field EncryptionFailedToEstablish value: static_cast<int32_t>(0x419)
  static ::ExitGames::Client::Photon::StatusCode const EncryptionFailedToEstablish;

  /// @brief Field Exception value: static_cast<int32_t>(0x402)
  static ::ExitGames::Client::Photon::StatusCode const Exception;

  /// @brief Field ExceptionOnConnect value: static_cast<int32_t>(0x3ff)
  static ::ExitGames::Client::Photon::StatusCode const ExceptionOnConnect;

  /// @brief Field ExceptionOnReceive value: static_cast<int32_t>(0x40f)
  static ::ExitGames::Client::Photon::StatusCode const ExceptionOnReceive;

  /// @brief Field SecurityExceptionOnConnect value: static_cast<int32_t>(0x3fe)
  static ::ExitGames::Client::Photon::StatusCode const SecurityExceptionOnConnect;

  /// @brief Field SendError value: static_cast<int32_t>(0x406)
  static ::ExitGames::Client::Photon::StatusCode const SendError;

  /// @brief Field ServerAddressInvalid value: static_cast<int32_t>(0x41a)
  static ::ExitGames::Client::Photon::StatusCode const ServerAddressInvalid;

  /// @brief Field TimeoutDisconnect value: static_cast<int32_t>(0x410)
  static ::ExitGames::Client::Photon::StatusCode const TimeoutDisconnect;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::StatusCode, 0x4>, "Size mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::StatusCode, value__) == 0x0, "Offset mismatch!");

} // namespace ExitGames::Client::Photon
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::StatusCode, "ExitGames.Client.Photon", "StatusCode");
