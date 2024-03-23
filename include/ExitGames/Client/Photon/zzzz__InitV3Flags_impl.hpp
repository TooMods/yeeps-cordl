#pragma once
#include "ExitGames/Client/Photon/zzzz__InitV3Flags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::ExitGames::Client::Photon::InitV3Flags::InitV3Flags(int16_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::InitV3Flags::InitV3Flags() {}
constexpr ::ExitGames::Client::Photon::InitV3Flags ExitGames::Client::Photon::InitV3Flags::NoFlags{ static_cast<int16_t>(0x0) };
constexpr ::ExitGames::Client::Photon::InitV3Flags ExitGames::Client::Photon::InitV3Flags::EncryptionFlag{ static_cast<int16_t>(0x1) };
constexpr ::ExitGames::Client::Photon::InitV3Flags ExitGames::Client::Photon::InitV3Flags::IPv6Flag{ static_cast<int16_t>(0x2) };
constexpr ::ExitGames::Client::Photon::InitV3Flags ExitGames::Client::Photon::InitV3Flags::ReleaseSdkFlag{ static_cast<int16_t>(0x4) };
