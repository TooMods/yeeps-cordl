#pragma once
#include "ExitGames/Client/Photon/zzzz__PhotonSocketState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::ExitGames::Client::Photon::PhotonSocketState::PhotonSocketState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::PhotonSocketState::PhotonSocketState() {}
constexpr ::ExitGames::Client::Photon::PhotonSocketState ExitGames::Client::Photon::PhotonSocketState::Disconnected{ static_cast<int32_t>(0x0) };
constexpr ::ExitGames::Client::Photon::PhotonSocketState ExitGames::Client::Photon::PhotonSocketState::Connecting{ static_cast<int32_t>(0x1) };
constexpr ::ExitGames::Client::Photon::PhotonSocketState ExitGames::Client::Photon::PhotonSocketState::Connected{ static_cast<int32_t>(0x2) };
constexpr ::ExitGames::Client::Photon::PhotonSocketState ExitGames::Client::Photon::PhotonSocketState::Disconnecting{ static_cast<int32_t>(0x3) };
