#pragma once
#include "ExitGames/Client/Photon/zzzz__DebugLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::ExitGames::Client::Photon::DebugLevel::DebugLevel(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::DebugLevel::DebugLevel() {}
constexpr ::ExitGames::Client::Photon::DebugLevel ExitGames::Client::Photon::DebugLevel::OFF{ static_cast<uint8_t>(0x0u) };
constexpr ::ExitGames::Client::Photon::DebugLevel ExitGames::Client::Photon::DebugLevel::ERROR{ static_cast<uint8_t>(0x1u) };
constexpr ::ExitGames::Client::Photon::DebugLevel ExitGames::Client::Photon::DebugLevel::WARNING{ static_cast<uint8_t>(0x2u) };
constexpr ::ExitGames::Client::Photon::DebugLevel ExitGames::Client::Photon::DebugLevel::INFO{ static_cast<uint8_t>(0x3u) };
constexpr ::ExitGames::Client::Photon::DebugLevel ExitGames::Client::Photon::DebugLevel::ALL{ static_cast<uint8_t>(0x5u) };
