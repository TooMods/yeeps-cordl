#pragma once
#include "Photon/Chat/zzzz__CustomAuthenticationType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Photon::Chat::CustomAuthenticationType::CustomAuthenticationType(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Chat::CustomAuthenticationType::CustomAuthenticationType() {}
constexpr ::Photon::Chat::CustomAuthenticationType Photon::Chat::CustomAuthenticationType::Custom{ static_cast<uint8_t>(0x0u) };
constexpr ::Photon::Chat::CustomAuthenticationType Photon::Chat::CustomAuthenticationType::Steam{ static_cast<uint8_t>(0x1u) };
constexpr ::Photon::Chat::CustomAuthenticationType Photon::Chat::CustomAuthenticationType::Facebook{ static_cast<uint8_t>(0x2u) };
constexpr ::Photon::Chat::CustomAuthenticationType Photon::Chat::CustomAuthenticationType::Oculus{ static_cast<uint8_t>(0x3u) };
constexpr ::Photon::Chat::CustomAuthenticationType Photon::Chat::CustomAuthenticationType::PlayStation4{ static_cast<uint8_t>(0x4u) };
constexpr ::Photon::Chat::CustomAuthenticationType Photon::Chat::CustomAuthenticationType::PlayStation{ static_cast<uint8_t>(0x4u) };
constexpr ::Photon::Chat::CustomAuthenticationType Photon::Chat::CustomAuthenticationType::Xbox{ static_cast<uint8_t>(0x5u) };
constexpr ::Photon::Chat::CustomAuthenticationType Photon::Chat::CustomAuthenticationType::Viveport{ static_cast<uint8_t>(0xau) };
constexpr ::Photon::Chat::CustomAuthenticationType Photon::Chat::CustomAuthenticationType::NintendoSwitch{ static_cast<uint8_t>(0xbu) };
constexpr ::Photon::Chat::CustomAuthenticationType Photon::Chat::CustomAuthenticationType::PlayStation5{ static_cast<uint8_t>(0xcu) };
constexpr ::Photon::Chat::CustomAuthenticationType Photon::Chat::CustomAuthenticationType::Playstation5{ static_cast<uint8_t>(0xcu) };
constexpr ::Photon::Chat::CustomAuthenticationType Photon::Chat::CustomAuthenticationType::Epic{ static_cast<uint8_t>(0xdu) };
constexpr ::Photon::Chat::CustomAuthenticationType Photon::Chat::CustomAuthenticationType::FacebookGaming{ static_cast<uint8_t>(0xfu) };
constexpr ::Photon::Chat::CustomAuthenticationType Photon::Chat::CustomAuthenticationType::None{ static_cast<uint8_t>(0xffu) };
