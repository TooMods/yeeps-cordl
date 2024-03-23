#pragma once
#include "Photon/Realtime/zzzz__CustomAuthenticationType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Photon::Realtime::CustomAuthenticationType::CustomAuthenticationType(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Realtime::CustomAuthenticationType::CustomAuthenticationType() {}
constexpr ::Photon::Realtime::CustomAuthenticationType Photon::Realtime::CustomAuthenticationType::Custom{ static_cast<uint8_t>(0x0u) };
constexpr ::Photon::Realtime::CustomAuthenticationType Photon::Realtime::CustomAuthenticationType::Steam{ static_cast<uint8_t>(0x1u) };
constexpr ::Photon::Realtime::CustomAuthenticationType Photon::Realtime::CustomAuthenticationType::Facebook{ static_cast<uint8_t>(0x2u) };
constexpr ::Photon::Realtime::CustomAuthenticationType Photon::Realtime::CustomAuthenticationType::Oculus{ static_cast<uint8_t>(0x3u) };
constexpr ::Photon::Realtime::CustomAuthenticationType Photon::Realtime::CustomAuthenticationType::PlayStation4{ static_cast<uint8_t>(0x4u) };
constexpr ::Photon::Realtime::CustomAuthenticationType Photon::Realtime::CustomAuthenticationType::PlayStation{ static_cast<uint8_t>(0x4u) };
constexpr ::Photon::Realtime::CustomAuthenticationType Photon::Realtime::CustomAuthenticationType::Xbox{ static_cast<uint8_t>(0x5u) };
constexpr ::Photon::Realtime::CustomAuthenticationType Photon::Realtime::CustomAuthenticationType::Viveport{ static_cast<uint8_t>(0xau) };
constexpr ::Photon::Realtime::CustomAuthenticationType Photon::Realtime::CustomAuthenticationType::NintendoSwitch{ static_cast<uint8_t>(0xbu) };
constexpr ::Photon::Realtime::CustomAuthenticationType Photon::Realtime::CustomAuthenticationType::PlayStation5{ static_cast<uint8_t>(0xcu) };
constexpr ::Photon::Realtime::CustomAuthenticationType Photon::Realtime::CustomAuthenticationType::Playstation5{ static_cast<uint8_t>(0xcu) };
constexpr ::Photon::Realtime::CustomAuthenticationType Photon::Realtime::CustomAuthenticationType::Epic{ static_cast<uint8_t>(0xdu) };
constexpr ::Photon::Realtime::CustomAuthenticationType Photon::Realtime::CustomAuthenticationType::FacebookGaming{ static_cast<uint8_t>(0xfu) };
constexpr ::Photon::Realtime::CustomAuthenticationType Photon::Realtime::CustomAuthenticationType::None{ static_cast<uint8_t>(0xffu) };
