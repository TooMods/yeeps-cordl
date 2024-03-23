#pragma once
#include "Photon/Chat/zzzz__ChatDisconnectCause_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Photon::Chat::ChatDisconnectCause::ChatDisconnectCause(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Chat::ChatDisconnectCause::ChatDisconnectCause() {}
constexpr ::Photon::Chat::ChatDisconnectCause Photon::Chat::ChatDisconnectCause::None{ static_cast<int32_t>(0x0) };
constexpr ::Photon::Chat::ChatDisconnectCause Photon::Chat::ChatDisconnectCause::ExceptionOnConnect{ static_cast<int32_t>(0x1) };
constexpr ::Photon::Chat::ChatDisconnectCause Photon::Chat::ChatDisconnectCause::DisconnectByServerLogic{ static_cast<int32_t>(0x2) };
constexpr ::Photon::Chat::ChatDisconnectCause Photon::Chat::ChatDisconnectCause::DisconnectByServerReasonUnknown{ static_cast<int32_t>(0x3) };
constexpr ::Photon::Chat::ChatDisconnectCause Photon::Chat::ChatDisconnectCause::ServerTimeout{ static_cast<int32_t>(0x4) };
constexpr ::Photon::Chat::ChatDisconnectCause Photon::Chat::ChatDisconnectCause::ClientTimeout{ static_cast<int32_t>(0x5) };
constexpr ::Photon::Chat::ChatDisconnectCause Photon::Chat::ChatDisconnectCause::Exception{ static_cast<int32_t>(0x6) };
constexpr ::Photon::Chat::ChatDisconnectCause Photon::Chat::ChatDisconnectCause::InvalidAuthentication{ static_cast<int32_t>(0x7) };
constexpr ::Photon::Chat::ChatDisconnectCause Photon::Chat::ChatDisconnectCause::MaxCcuReached{ static_cast<int32_t>(0x8) };
constexpr ::Photon::Chat::ChatDisconnectCause Photon::Chat::ChatDisconnectCause::InvalidRegion{ static_cast<int32_t>(0x9) };
constexpr ::Photon::Chat::ChatDisconnectCause Photon::Chat::ChatDisconnectCause::OperationNotAllowedInCurrentState{ static_cast<int32_t>(0xa) };
constexpr ::Photon::Chat::ChatDisconnectCause Photon::Chat::ChatDisconnectCause::CustomAuthenticationFailed{ static_cast<int32_t>(0xb) };
constexpr ::Photon::Chat::ChatDisconnectCause Photon::Chat::ChatDisconnectCause::AuthenticationTicketExpired{ static_cast<int32_t>(0xc) };
constexpr ::Photon::Chat::ChatDisconnectCause Photon::Chat::ChatDisconnectCause::DisconnectByClientLogic{ static_cast<int32_t>(0xd) };
