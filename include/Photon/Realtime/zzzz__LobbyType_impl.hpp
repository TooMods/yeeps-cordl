#pragma once
#include "Photon/Realtime/zzzz__LobbyType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Photon::Realtime::LobbyType::LobbyType(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Realtime::LobbyType::LobbyType() {}
constexpr ::Photon::Realtime::LobbyType Photon::Realtime::LobbyType::Default{ static_cast<uint8_t>(0x0u) };
constexpr ::Photon::Realtime::LobbyType Photon::Realtime::LobbyType::SqlLobby{ static_cast<uint8_t>(0x2u) };
constexpr ::Photon::Realtime::LobbyType Photon::Realtime::LobbyType::AsyncRandomLobby{ static_cast<uint8_t>(0x3u) };
