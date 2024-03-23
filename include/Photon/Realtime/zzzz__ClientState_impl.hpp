#pragma once
#include "Photon/Realtime/zzzz__ClientState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Photon::Realtime::ClientState::ClientState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Realtime::ClientState::ClientState() {}
constexpr ::Photon::Realtime::ClientState Photon::Realtime::ClientState::PeerCreated{ static_cast<int32_t>(0x0) };
constexpr ::Photon::Realtime::ClientState Photon::Realtime::ClientState::Authenticating{ static_cast<int32_t>(0x1) };
constexpr ::Photon::Realtime::ClientState Photon::Realtime::ClientState::Authenticated{ static_cast<int32_t>(0x2) };
constexpr ::Photon::Realtime::ClientState Photon::Realtime::ClientState::JoiningLobby{ static_cast<int32_t>(0x3) };
constexpr ::Photon::Realtime::ClientState Photon::Realtime::ClientState::JoinedLobby{ static_cast<int32_t>(0x4) };
constexpr ::Photon::Realtime::ClientState Photon::Realtime::ClientState::DisconnectingFromMasterServer{ static_cast<int32_t>(0x5) };
constexpr ::Photon::Realtime::ClientState Photon::Realtime::ClientState::DisconnectingFromMasterserver{ static_cast<int32_t>(0x5) };
constexpr ::Photon::Realtime::ClientState Photon::Realtime::ClientState::ConnectingToGameServer{ static_cast<int32_t>(0x6) };
constexpr ::Photon::Realtime::ClientState Photon::Realtime::ClientState::ConnectingToGameserver{ static_cast<int32_t>(0x6) };
constexpr ::Photon::Realtime::ClientState Photon::Realtime::ClientState::ConnectedToGameServer{ static_cast<int32_t>(0x7) };
constexpr ::Photon::Realtime::ClientState Photon::Realtime::ClientState::ConnectedToGameserver{ static_cast<int32_t>(0x7) };
constexpr ::Photon::Realtime::ClientState Photon::Realtime::ClientState::Joining{ static_cast<int32_t>(0x8) };
constexpr ::Photon::Realtime::ClientState Photon::Realtime::ClientState::Joined{ static_cast<int32_t>(0x9) };
constexpr ::Photon::Realtime::ClientState Photon::Realtime::ClientState::Leaving{ static_cast<int32_t>(0xa) };
constexpr ::Photon::Realtime::ClientState Photon::Realtime::ClientState::DisconnectingFromGameServer{ static_cast<int32_t>(0xb) };
constexpr ::Photon::Realtime::ClientState Photon::Realtime::ClientState::DisconnectingFromGameserver{ static_cast<int32_t>(0xb) };
constexpr ::Photon::Realtime::ClientState Photon::Realtime::ClientState::ConnectingToMasterServer{ static_cast<int32_t>(0xc) };
constexpr ::Photon::Realtime::ClientState Photon::Realtime::ClientState::ConnectingToMasterserver{ static_cast<int32_t>(0xc) };
constexpr ::Photon::Realtime::ClientState Photon::Realtime::ClientState::Disconnecting{ static_cast<int32_t>(0xd) };
constexpr ::Photon::Realtime::ClientState Photon::Realtime::ClientState::Disconnected{ static_cast<int32_t>(0xe) };
constexpr ::Photon::Realtime::ClientState Photon::Realtime::ClientState::ConnectedToMasterServer{ static_cast<int32_t>(0xf) };
constexpr ::Photon::Realtime::ClientState Photon::Realtime::ClientState::ConnectedToMasterserver{ static_cast<int32_t>(0xf) };
constexpr ::Photon::Realtime::ClientState Photon::Realtime::ClientState::ConnectedToMaster{ static_cast<int32_t>(0xf) };
constexpr ::Photon::Realtime::ClientState Photon::Realtime::ClientState::ConnectingToNameServer{ static_cast<int32_t>(0x10) };
constexpr ::Photon::Realtime::ClientState Photon::Realtime::ClientState::ConnectedToNameServer{ static_cast<int32_t>(0x11) };
constexpr ::Photon::Realtime::ClientState Photon::Realtime::ClientState::DisconnectingFromNameServer{ static_cast<int32_t>(0x12) };
constexpr ::Photon::Realtime::ClientState Photon::Realtime::ClientState::ConnectWithFallbackProtocol{ static_cast<int32_t>(0x13) };
