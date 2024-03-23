#pragma once
#include "ExitGames/Client/Photon/zzzz__StatusCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::ExitGames::Client::Photon::StatusCode::StatusCode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::StatusCode::StatusCode() {}
constexpr ::ExitGames::Client::Photon::StatusCode ExitGames::Client::Photon::StatusCode::Connect{ static_cast<int32_t>(0x400) };
constexpr ::ExitGames::Client::Photon::StatusCode ExitGames::Client::Photon::StatusCode::Disconnect{ static_cast<int32_t>(0x401) };
constexpr ::ExitGames::Client::Photon::StatusCode ExitGames::Client::Photon::StatusCode::Exception{ static_cast<int32_t>(0x402) };
constexpr ::ExitGames::Client::Photon::StatusCode ExitGames::Client::Photon::StatusCode::ExceptionOnConnect{ static_cast<int32_t>(0x3ff) };
constexpr ::ExitGames::Client::Photon::StatusCode ExitGames::Client::Photon::StatusCode::ServerAddressInvalid{ static_cast<int32_t>(0x41a) };
constexpr ::ExitGames::Client::Photon::StatusCode ExitGames::Client::Photon::StatusCode::DnsExceptionOnConnect{ static_cast<int32_t>(0x41b) };
constexpr ::ExitGames::Client::Photon::StatusCode ExitGames::Client::Photon::StatusCode::SecurityExceptionOnConnect{ static_cast<int32_t>(0x3fe) };
constexpr ::ExitGames::Client::Photon::StatusCode ExitGames::Client::Photon::StatusCode::SendError{ static_cast<int32_t>(0x406) };
constexpr ::ExitGames::Client::Photon::StatusCode ExitGames::Client::Photon::StatusCode::ExceptionOnReceive{ static_cast<int32_t>(0x40f) };
constexpr ::ExitGames::Client::Photon::StatusCode ExitGames::Client::Photon::StatusCode::TimeoutDisconnect{ static_cast<int32_t>(0x410) };
constexpr ::ExitGames::Client::Photon::StatusCode ExitGames::Client::Photon::StatusCode::DisconnectByServerTimeout{ static_cast<int32_t>(0x411) };
constexpr ::ExitGames::Client::Photon::StatusCode ExitGames::Client::Photon::StatusCode::DisconnectByServerUserLimit{ static_cast<int32_t>(0x412) };
constexpr ::ExitGames::Client::Photon::StatusCode ExitGames::Client::Photon::StatusCode::DisconnectByServerLogic{ static_cast<int32_t>(0x413) };
constexpr ::ExitGames::Client::Photon::StatusCode ExitGames::Client::Photon::StatusCode::DisconnectByServerReasonUnknown{ static_cast<int32_t>(0x414) };
constexpr ::ExitGames::Client::Photon::StatusCode ExitGames::Client::Photon::StatusCode::EncryptionEstablished{ static_cast<int32_t>(0x418) };
constexpr ::ExitGames::Client::Photon::StatusCode ExitGames::Client::Photon::StatusCode::EncryptionFailedToEstablish{ static_cast<int32_t>(0x419) };
