#pragma once
#include "ExitGames/Client/Photon/zzzz__PeerStateValue_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::ExitGames::Client::Photon::PeerStateValue::PeerStateValue(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::PeerStateValue::PeerStateValue() {}
constexpr ::ExitGames::Client::Photon::PeerStateValue ExitGames::Client::Photon::PeerStateValue::Disconnected{ static_cast<uint8_t>(0x0u) };
constexpr ::ExitGames::Client::Photon::PeerStateValue ExitGames::Client::Photon::PeerStateValue::Connecting{ static_cast<uint8_t>(0x1u) };
constexpr ::ExitGames::Client::Photon::PeerStateValue ExitGames::Client::Photon::PeerStateValue::InitializingApplication{ static_cast<uint8_t>(0xau) };
constexpr ::ExitGames::Client::Photon::PeerStateValue ExitGames::Client::Photon::PeerStateValue::Connected{ static_cast<uint8_t>(0x3u) };
constexpr ::ExitGames::Client::Photon::PeerStateValue ExitGames::Client::Photon::PeerStateValue::Disconnecting{ static_cast<uint8_t>(0x4u) };
