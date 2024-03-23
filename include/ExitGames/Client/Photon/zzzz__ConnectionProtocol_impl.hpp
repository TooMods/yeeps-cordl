#pragma once
#include "ExitGames/Client/Photon/zzzz__ConnectionProtocol_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::ExitGames::Client::Photon::ConnectionProtocol::ConnectionProtocol(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::ConnectionProtocol::ConnectionProtocol() {}
constexpr ::ExitGames::Client::Photon::ConnectionProtocol ExitGames::Client::Photon::ConnectionProtocol::Udp{ static_cast<uint8_t>(0x0u) };
constexpr ::ExitGames::Client::Photon::ConnectionProtocol ExitGames::Client::Photon::ConnectionProtocol::Tcp{ static_cast<uint8_t>(0x1u) };
constexpr ::ExitGames::Client::Photon::ConnectionProtocol ExitGames::Client::Photon::ConnectionProtocol::WebSocket{ static_cast<uint8_t>(0x4u) };
constexpr ::ExitGames::Client::Photon::ConnectionProtocol ExitGames::Client::Photon::ConnectionProtocol::WebSocketSecure{ static_cast<uint8_t>(0x5u) };
