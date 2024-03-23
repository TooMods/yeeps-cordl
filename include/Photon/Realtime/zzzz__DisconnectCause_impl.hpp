#pragma once
#include "Photon/Realtime/zzzz__DisconnectCause_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Photon::Realtime::DisconnectCause::DisconnectCause(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Realtime::DisconnectCause::DisconnectCause() {}
constexpr ::Photon::Realtime::DisconnectCause Photon::Realtime::DisconnectCause::None{ static_cast<int32_t>(0x0) };
constexpr ::Photon::Realtime::DisconnectCause Photon::Realtime::DisconnectCause::ExceptionOnConnect{ static_cast<int32_t>(0x1) };
constexpr ::Photon::Realtime::DisconnectCause Photon::Realtime::DisconnectCause::DnsExceptionOnConnect{ static_cast<int32_t>(0x2) };
constexpr ::Photon::Realtime::DisconnectCause Photon::Realtime::DisconnectCause::ServerAddressInvalid{ static_cast<int32_t>(0x3) };
constexpr ::Photon::Realtime::DisconnectCause Photon::Realtime::DisconnectCause::Exception{ static_cast<int32_t>(0x4) };
constexpr ::Photon::Realtime::DisconnectCause Photon::Realtime::DisconnectCause::ServerTimeout{ static_cast<int32_t>(0x5) };
constexpr ::Photon::Realtime::DisconnectCause Photon::Realtime::DisconnectCause::ClientTimeout{ static_cast<int32_t>(0x6) };
constexpr ::Photon::Realtime::DisconnectCause Photon::Realtime::DisconnectCause::DisconnectByServerLogic{ static_cast<int32_t>(0x7) };
constexpr ::Photon::Realtime::DisconnectCause Photon::Realtime::DisconnectCause::DisconnectByServerReasonUnknown{ static_cast<int32_t>(0x8) };
constexpr ::Photon::Realtime::DisconnectCause Photon::Realtime::DisconnectCause::InvalidAuthentication{ static_cast<int32_t>(0x9) };
constexpr ::Photon::Realtime::DisconnectCause Photon::Realtime::DisconnectCause::CustomAuthenticationFailed{ static_cast<int32_t>(0xa) };
constexpr ::Photon::Realtime::DisconnectCause Photon::Realtime::DisconnectCause::AuthenticationTicketExpired{ static_cast<int32_t>(0xb) };
constexpr ::Photon::Realtime::DisconnectCause Photon::Realtime::DisconnectCause::MaxCcuReached{ static_cast<int32_t>(0xc) };
constexpr ::Photon::Realtime::DisconnectCause Photon::Realtime::DisconnectCause::InvalidRegion{ static_cast<int32_t>(0xd) };
constexpr ::Photon::Realtime::DisconnectCause Photon::Realtime::DisconnectCause::OperationNotAllowedInCurrentState{ static_cast<int32_t>(0xe) };
constexpr ::Photon::Realtime::DisconnectCause Photon::Realtime::DisconnectCause::DisconnectByClientLogic{ static_cast<int32_t>(0xf) };
constexpr ::Photon::Realtime::DisconnectCause Photon::Realtime::DisconnectCause::DisconnectByOperationLimit{ static_cast<int32_t>(0x10) };
constexpr ::Photon::Realtime::DisconnectCause Photon::Realtime::DisconnectCause::DisconnectByDisconnectMessage{ static_cast<int32_t>(0x11) };
constexpr ::Photon::Realtime::DisconnectCause Photon::Realtime::DisconnectCause::ApplicationQuit{ static_cast<int32_t>(0x12) };
