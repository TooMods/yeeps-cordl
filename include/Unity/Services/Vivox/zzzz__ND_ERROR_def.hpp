#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ND_ERROR)
// Forward declare root types
namespace Unity::Services::Vivox {
struct ND_ERROR;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Vivox::ND_ERROR);
// Type: Unity.Services.Vivox::ND_ERROR
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::Unity.Services.Vivox::ND_ERROR
struct CORDL_TYPE ND_ERROR {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ND_ERROR_Unwrapped
  enum struct __ND_ERROR_Unwrapped : int32_t {
    __E_ND_E_NO_ERROR = static_cast<int32_t>(0x0),
    __E_ND_E_TEST_NOT_RUN = static_cast<int32_t>(0x1),
    __E_ND_E_NO_INTERFACE = static_cast<int32_t>(0x2),
    __E_ND_E_NO_INTERFACE_WITH_GATEWAY = static_cast<int32_t>(0x3),
    __E_ND_E_NO_INTERFACE_WITH_ROUTE = static_cast<int32_t>(0x4),
    __E_ND_E_TIMEOUT = static_cast<int32_t>(0x5),
    __E_ND_E_CANT_ICMP = static_cast<int32_t>(0x6),
    __E_ND_E_CANT_RESOLVE_VIVOX_UDP_SERVER = static_cast<int32_t>(0x7),
    __E_ND_E_CANT_RESOLVE_ROOT_DNS_SERVER = static_cast<int32_t>(0x8),
    __E_ND_E_CANT_CONVERT_LOCAL_IP_ADDRESS = static_cast<int32_t>(0x9),
    __E_ND_E_CANT_CONTACT_STUN_SERVER_ON_UDP_PORT_3478 = static_cast<int32_t>(0xa),
    __E_ND_E_CANT_CREATE_TCP_SOCKET = static_cast<int32_t>(0xb),
    __E_ND_E_CANT_LOAD_ICMP_LIBRARY = static_cast<int32_t>(0xc),
    __E_ND_E_CANT_FIND_SENDECHO2_PROCADDR = static_cast<int32_t>(0xd),
    __E_ND_E_CANT_CONNECT_TO_ECHO_SERVER = static_cast<int32_t>(0xe),
    __E_ND_E_ECHO_SERVER_LOGIN_SEND_FAILED = static_cast<int32_t>(0xf),
    __E_ND_E_ECHO_SERVER_LOGIN_RECV_FAILED = static_cast<int32_t>(0x10),
    __E_ND_E_ECHO_SERVER_LOGIN_RESPONSE_MISSING_STATUS = static_cast<int32_t>(0x11),
    __E_ND_E_ECHO_SERVER_LOGIN_RESPONSE_FAILED_STATUS = static_cast<int32_t>(0x12),
    __E_ND_E_ECHO_SERVER_LOGIN_RESPONSE_MISSING_SESSIONID = static_cast<int32_t>(0x13),
    __E_ND_E_ECHO_SERVER_LOGIN_RESPONSE_MISSING_SIPPORT = static_cast<int32_t>(0x14),
    __E_ND_E_ECHO_SERVER_LOGIN_RESPONSE_MISSING_AUDIORTP = static_cast<int32_t>(0x15),
    __E_ND_E_ECHO_SERVER_LOGIN_RESPONSE_MISSING_AUDIORTCP = static_cast<int32_t>(0x16),
    __E_ND_E_ECHO_SERVER_LOGIN_RESPONSE_MISSING_VIDEORTP = static_cast<int32_t>(0x17),
    __E_ND_E_ECHO_SERVER_LOGIN_RESPONSE_MISSING_VIDEORTCP = static_cast<int32_t>(0x18),
    __E_ND_E_ECHO_SERVER_CANT_ALLOCATE_SIP_SOCKET = static_cast<int32_t>(0x19),
    __E_ND_E_ECHO_SERVER_CANT_ALLOCATE_MEDIA_SOCKET = static_cast<int32_t>(0x1a),
    __E_ND_E_ECHO_SERVER_SIP_UDP_SEND_FAILED = static_cast<int32_t>(0x1b),
    __E_ND_E_ECHO_SERVER_SIP_UDP_RECV_FAILED = static_cast<int32_t>(0x1c),
    __E_ND_E_ECHO_SERVER_SIP_TCP_SEND_FAILED = static_cast<int32_t>(0x1d),
    __E_ND_E_ECHO_SERVER_SIP_TCP_RECV_FAILED = static_cast<int32_t>(0x1e),
    __E_ND_E_ECHO_SERVER_SIP_NO_UDP_OR_TCP = static_cast<int32_t>(0x1f),
    __E_ND_E_ECHO_SERVER_SIP_NO_UDP = static_cast<int32_t>(0x20),
    __E_ND_E_ECHO_SERVER_SIP_NO_TCP = static_cast<int32_t>(0x21),
    __E_ND_E_ECHO_SERVER_SIP_MALFORMED_TCP_PACKET = static_cast<int32_t>(0x22),
    __E_ND_E_ECHO_SERVER_SIP_UDP_DIFFERENT_LENGTH = static_cast<int32_t>(0x23),
    __E_ND_E_ECHO_SERVER_SIP_UDP_DATA_DIFFERENT = static_cast<int32_t>(0x24),
    __E_ND_E_ECHO_SERVER_SIP_TCP_PACKETS_DIFFERENT = static_cast<int32_t>(0x25),
    __E_ND_E_ECHO_SERVER_SIP_TCP_PACKETS_DIFFERENT_SIZE = static_cast<int32_t>(0x26),
    __E_ND_E_ECHO_SERVER_LOGIN_RECV_FAILED_TIMEOUT = static_cast<int32_t>(0x27),
    __E_ND_E_ECHO_SERVER_TCP_SET_ASYNC_FAILED = static_cast<int32_t>(0x28),
    __E_ND_E_ECHO_SERVER_UDP_SET_ASYNC_FAILED = static_cast<int32_t>(0x29),
    __E_ND_E_ECHO_SERVER_CANT_RESOLVE_NAME = static_cast<int32_t>(0x2a),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ND_ERROR_Unwrapped() const noexcept {
    return static_cast<__ND_ERROR_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ND_ERROR();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ND_ERROR(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ND_E_CANT_CONNECT_TO_ECHO_SERVER value: static_cast<int32_t>(0xe)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_CANT_CONNECT_TO_ECHO_SERVER;

  /// @brief Field ND_E_CANT_CONTACT_STUN_SERVER_ON_UDP_PORT_3478 value: static_cast<int32_t>(0xa)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_CANT_CONTACT_STUN_SERVER_ON_UDP_PORT_3478;

  /// @brief Field ND_E_CANT_CONVERT_LOCAL_IP_ADDRESS value: static_cast<int32_t>(0x9)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_CANT_CONVERT_LOCAL_IP_ADDRESS;

  /// @brief Field ND_E_CANT_CREATE_TCP_SOCKET value: static_cast<int32_t>(0xb)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_CANT_CREATE_TCP_SOCKET;

  /// @brief Field ND_E_CANT_FIND_SENDECHO2_PROCADDR value: static_cast<int32_t>(0xd)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_CANT_FIND_SENDECHO2_PROCADDR;

  /// @brief Field ND_E_CANT_ICMP value: static_cast<int32_t>(0x6)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_CANT_ICMP;

  /// @brief Field ND_E_CANT_LOAD_ICMP_LIBRARY value: static_cast<int32_t>(0xc)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_CANT_LOAD_ICMP_LIBRARY;

  /// @brief Field ND_E_CANT_RESOLVE_ROOT_DNS_SERVER value: static_cast<int32_t>(0x8)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_CANT_RESOLVE_ROOT_DNS_SERVER;

  /// @brief Field ND_E_CANT_RESOLVE_VIVOX_UDP_SERVER value: static_cast<int32_t>(0x7)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_CANT_RESOLVE_VIVOX_UDP_SERVER;

  /// @brief Field ND_E_ECHO_SERVER_CANT_ALLOCATE_MEDIA_SOCKET value: static_cast<int32_t>(0x1a)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_ECHO_SERVER_CANT_ALLOCATE_MEDIA_SOCKET;

  /// @brief Field ND_E_ECHO_SERVER_CANT_ALLOCATE_SIP_SOCKET value: static_cast<int32_t>(0x19)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_ECHO_SERVER_CANT_ALLOCATE_SIP_SOCKET;

  /// @brief Field ND_E_ECHO_SERVER_CANT_RESOLVE_NAME value: static_cast<int32_t>(0x2a)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_ECHO_SERVER_CANT_RESOLVE_NAME;

  /// @brief Field ND_E_ECHO_SERVER_LOGIN_RECV_FAILED value: static_cast<int32_t>(0x10)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_ECHO_SERVER_LOGIN_RECV_FAILED;

  /// @brief Field ND_E_ECHO_SERVER_LOGIN_RECV_FAILED_TIMEOUT value: static_cast<int32_t>(0x27)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_ECHO_SERVER_LOGIN_RECV_FAILED_TIMEOUT;

  /// @brief Field ND_E_ECHO_SERVER_LOGIN_RESPONSE_FAILED_STATUS value: static_cast<int32_t>(0x12)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_ECHO_SERVER_LOGIN_RESPONSE_FAILED_STATUS;

  /// @brief Field ND_E_ECHO_SERVER_LOGIN_RESPONSE_MISSING_AUDIORTCP value: static_cast<int32_t>(0x16)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_ECHO_SERVER_LOGIN_RESPONSE_MISSING_AUDIORTCP;

  /// @brief Field ND_E_ECHO_SERVER_LOGIN_RESPONSE_MISSING_AUDIORTP value: static_cast<int32_t>(0x15)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_ECHO_SERVER_LOGIN_RESPONSE_MISSING_AUDIORTP;

  /// @brief Field ND_E_ECHO_SERVER_LOGIN_RESPONSE_MISSING_SESSIONID value: static_cast<int32_t>(0x13)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_ECHO_SERVER_LOGIN_RESPONSE_MISSING_SESSIONID;

  /// @brief Field ND_E_ECHO_SERVER_LOGIN_RESPONSE_MISSING_SIPPORT value: static_cast<int32_t>(0x14)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_ECHO_SERVER_LOGIN_RESPONSE_MISSING_SIPPORT;

  /// @brief Field ND_E_ECHO_SERVER_LOGIN_RESPONSE_MISSING_STATUS value: static_cast<int32_t>(0x11)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_ECHO_SERVER_LOGIN_RESPONSE_MISSING_STATUS;

  /// @brief Field ND_E_ECHO_SERVER_LOGIN_RESPONSE_MISSING_VIDEORTCP value: static_cast<int32_t>(0x18)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_ECHO_SERVER_LOGIN_RESPONSE_MISSING_VIDEORTCP;

  /// @brief Field ND_E_ECHO_SERVER_LOGIN_RESPONSE_MISSING_VIDEORTP value: static_cast<int32_t>(0x17)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_ECHO_SERVER_LOGIN_RESPONSE_MISSING_VIDEORTP;

  /// @brief Field ND_E_ECHO_SERVER_LOGIN_SEND_FAILED value: static_cast<int32_t>(0xf)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_ECHO_SERVER_LOGIN_SEND_FAILED;

  /// @brief Field ND_E_ECHO_SERVER_SIP_MALFORMED_TCP_PACKET value: static_cast<int32_t>(0x22)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_ECHO_SERVER_SIP_MALFORMED_TCP_PACKET;

  /// @brief Field ND_E_ECHO_SERVER_SIP_NO_TCP value: static_cast<int32_t>(0x21)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_ECHO_SERVER_SIP_NO_TCP;

  /// @brief Field ND_E_ECHO_SERVER_SIP_NO_UDP value: static_cast<int32_t>(0x20)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_ECHO_SERVER_SIP_NO_UDP;

  /// @brief Field ND_E_ECHO_SERVER_SIP_NO_UDP_OR_TCP value: static_cast<int32_t>(0x1f)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_ECHO_SERVER_SIP_NO_UDP_OR_TCP;

  /// @brief Field ND_E_ECHO_SERVER_SIP_TCP_PACKETS_DIFFERENT value: static_cast<int32_t>(0x25)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_ECHO_SERVER_SIP_TCP_PACKETS_DIFFERENT;

  /// @brief Field ND_E_ECHO_SERVER_SIP_TCP_PACKETS_DIFFERENT_SIZE value: static_cast<int32_t>(0x26)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_ECHO_SERVER_SIP_TCP_PACKETS_DIFFERENT_SIZE;

  /// @brief Field ND_E_ECHO_SERVER_SIP_TCP_RECV_FAILED value: static_cast<int32_t>(0x1e)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_ECHO_SERVER_SIP_TCP_RECV_FAILED;

  /// @brief Field ND_E_ECHO_SERVER_SIP_TCP_SEND_FAILED value: static_cast<int32_t>(0x1d)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_ECHO_SERVER_SIP_TCP_SEND_FAILED;

  /// @brief Field ND_E_ECHO_SERVER_SIP_UDP_DATA_DIFFERENT value: static_cast<int32_t>(0x24)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_ECHO_SERVER_SIP_UDP_DATA_DIFFERENT;

  /// @brief Field ND_E_ECHO_SERVER_SIP_UDP_DIFFERENT_LENGTH value: static_cast<int32_t>(0x23)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_ECHO_SERVER_SIP_UDP_DIFFERENT_LENGTH;

  /// @brief Field ND_E_ECHO_SERVER_SIP_UDP_RECV_FAILED value: static_cast<int32_t>(0x1c)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_ECHO_SERVER_SIP_UDP_RECV_FAILED;

  /// @brief Field ND_E_ECHO_SERVER_SIP_UDP_SEND_FAILED value: static_cast<int32_t>(0x1b)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_ECHO_SERVER_SIP_UDP_SEND_FAILED;

  /// @brief Field ND_E_ECHO_SERVER_TCP_SET_ASYNC_FAILED value: static_cast<int32_t>(0x28)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_ECHO_SERVER_TCP_SET_ASYNC_FAILED;

  /// @brief Field ND_E_ECHO_SERVER_UDP_SET_ASYNC_FAILED value: static_cast<int32_t>(0x29)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_ECHO_SERVER_UDP_SET_ASYNC_FAILED;

  /// @brief Field ND_E_NO_ERROR value: static_cast<int32_t>(0x0)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_NO_ERROR;

  /// @brief Field ND_E_NO_INTERFACE value: static_cast<int32_t>(0x2)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_NO_INTERFACE;

  /// @brief Field ND_E_NO_INTERFACE_WITH_GATEWAY value: static_cast<int32_t>(0x3)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_NO_INTERFACE_WITH_GATEWAY;

  /// @brief Field ND_E_NO_INTERFACE_WITH_ROUTE value: static_cast<int32_t>(0x4)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_NO_INTERFACE_WITH_ROUTE;

  /// @brief Field ND_E_TEST_NOT_RUN value: static_cast<int32_t>(0x1)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_TEST_NOT_RUN;

  /// @brief Field ND_E_TIMEOUT value: static_cast<int32_t>(0x5)
  static ::Unity::Services::Vivox::ND_ERROR const ND_E_TIMEOUT;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::ND_ERROR, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ND_ERROR, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Services::Vivox
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::ND_ERROR, "Unity.Services.Vivox", "ND_ERROR");
