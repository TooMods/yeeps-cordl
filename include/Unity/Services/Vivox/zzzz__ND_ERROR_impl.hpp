#pragma once
#include "Unity/Services/Vivox/zzzz__ND_ERROR_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::ND_ERROR::ND_ERROR(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::ND_ERROR::ND_ERROR() {}
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_NO_ERROR{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_TEST_NOT_RUN{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_NO_INTERFACE{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_NO_INTERFACE_WITH_GATEWAY{ static_cast<int32_t>(0x3) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_NO_INTERFACE_WITH_ROUTE{ static_cast<int32_t>(0x4) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_TIMEOUT{ static_cast<int32_t>(0x5) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_CANT_ICMP{ static_cast<int32_t>(0x6) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_CANT_RESOLVE_VIVOX_UDP_SERVER{ static_cast<int32_t>(0x7) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_CANT_RESOLVE_ROOT_DNS_SERVER{ static_cast<int32_t>(0x8) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_CANT_CONVERT_LOCAL_IP_ADDRESS{ static_cast<int32_t>(0x9) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_CANT_CONTACT_STUN_SERVER_ON_UDP_PORT_3478{ static_cast<int32_t>(0xa) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_CANT_CREATE_TCP_SOCKET{ static_cast<int32_t>(0xb) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_CANT_LOAD_ICMP_LIBRARY{ static_cast<int32_t>(0xc) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_CANT_FIND_SENDECHO2_PROCADDR{ static_cast<int32_t>(0xd) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_CANT_CONNECT_TO_ECHO_SERVER{ static_cast<int32_t>(0xe) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_ECHO_SERVER_LOGIN_SEND_FAILED{ static_cast<int32_t>(0xf) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_ECHO_SERVER_LOGIN_RECV_FAILED{ static_cast<int32_t>(0x10) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_ECHO_SERVER_LOGIN_RESPONSE_MISSING_STATUS{ static_cast<int32_t>(0x11) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_ECHO_SERVER_LOGIN_RESPONSE_FAILED_STATUS{ static_cast<int32_t>(0x12) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_ECHO_SERVER_LOGIN_RESPONSE_MISSING_SESSIONID{ static_cast<int32_t>(0x13) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_ECHO_SERVER_LOGIN_RESPONSE_MISSING_SIPPORT{ static_cast<int32_t>(0x14) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_ECHO_SERVER_LOGIN_RESPONSE_MISSING_AUDIORTP{ static_cast<int32_t>(0x15) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_ECHO_SERVER_LOGIN_RESPONSE_MISSING_AUDIORTCP{ static_cast<int32_t>(0x16) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_ECHO_SERVER_LOGIN_RESPONSE_MISSING_VIDEORTP{ static_cast<int32_t>(0x17) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_ECHO_SERVER_LOGIN_RESPONSE_MISSING_VIDEORTCP{ static_cast<int32_t>(0x18) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_ECHO_SERVER_CANT_ALLOCATE_SIP_SOCKET{ static_cast<int32_t>(0x19) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_ECHO_SERVER_CANT_ALLOCATE_MEDIA_SOCKET{ static_cast<int32_t>(0x1a) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_ECHO_SERVER_SIP_UDP_SEND_FAILED{ static_cast<int32_t>(0x1b) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_ECHO_SERVER_SIP_UDP_RECV_FAILED{ static_cast<int32_t>(0x1c) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_ECHO_SERVER_SIP_TCP_SEND_FAILED{ static_cast<int32_t>(0x1d) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_ECHO_SERVER_SIP_TCP_RECV_FAILED{ static_cast<int32_t>(0x1e) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_ECHO_SERVER_SIP_NO_UDP_OR_TCP{ static_cast<int32_t>(0x1f) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_ECHO_SERVER_SIP_NO_UDP{ static_cast<int32_t>(0x20) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_ECHO_SERVER_SIP_NO_TCP{ static_cast<int32_t>(0x21) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_ECHO_SERVER_SIP_MALFORMED_TCP_PACKET{ static_cast<int32_t>(0x22) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_ECHO_SERVER_SIP_UDP_DIFFERENT_LENGTH{ static_cast<int32_t>(0x23) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_ECHO_SERVER_SIP_UDP_DATA_DIFFERENT{ static_cast<int32_t>(0x24) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_ECHO_SERVER_SIP_TCP_PACKETS_DIFFERENT{ static_cast<int32_t>(0x25) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_ECHO_SERVER_SIP_TCP_PACKETS_DIFFERENT_SIZE{ static_cast<int32_t>(0x26) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_ECHO_SERVER_LOGIN_RECV_FAILED_TIMEOUT{ static_cast<int32_t>(0x27) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_ECHO_SERVER_TCP_SET_ASYNC_FAILED{ static_cast<int32_t>(0x28) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_ECHO_SERVER_UDP_SET_ASYNC_FAILED{ static_cast<int32_t>(0x29) };
constexpr ::Unity::Services::Vivox::ND_ERROR Unity::Services::Vivox::ND_ERROR::ND_E_ECHO_SERVER_CANT_RESOLVE_NAME{ static_cast<int32_t>(0x2a) };
