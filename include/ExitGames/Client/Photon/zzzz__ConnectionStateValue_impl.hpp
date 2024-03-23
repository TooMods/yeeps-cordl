#pragma once
#include "ExitGames/Client/Photon/zzzz__ConnectionStateValue_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::ExitGames::Client::Photon::ConnectionStateValue::ConnectionStateValue(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::ConnectionStateValue::ConnectionStateValue() {}
constexpr ::ExitGames::Client::Photon::ConnectionStateValue ExitGames::Client::Photon::ConnectionStateValue::Disconnected{ static_cast<uint8_t>(0x0u) };
constexpr ::ExitGames::Client::Photon::ConnectionStateValue ExitGames::Client::Photon::ConnectionStateValue::Connecting{ static_cast<uint8_t>(0x1u) };
constexpr ::ExitGames::Client::Photon::ConnectionStateValue ExitGames::Client::Photon::ConnectionStateValue::Connected{ static_cast<uint8_t>(0x3u) };
constexpr ::ExitGames::Client::Photon::ConnectionStateValue ExitGames::Client::Photon::ConnectionStateValue::Disconnecting{ static_cast<uint8_t>(0x4u) };
constexpr ::ExitGames::Client::Photon::ConnectionStateValue ExitGames::Client::Photon::ConnectionStateValue::AcknowledgingDisconnect{ static_cast<uint8_t>(0x5u) };
constexpr ::ExitGames::Client::Photon::ConnectionStateValue ExitGames::Client::Photon::ConnectionStateValue::Zombie{ static_cast<uint8_t>(0x6u) };
