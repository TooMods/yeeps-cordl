#pragma once
#include "Photon/Realtime/zzzz__JoinMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Photon::Realtime::JoinMode::JoinMode(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Realtime::JoinMode::JoinMode() {}
constexpr ::Photon::Realtime::JoinMode Photon::Realtime::JoinMode::Default{ static_cast<uint8_t>(0x0u) };
constexpr ::Photon::Realtime::JoinMode Photon::Realtime::JoinMode::CreateIfNotExists{ static_cast<uint8_t>(0x1u) };
constexpr ::Photon::Realtime::JoinMode Photon::Realtime::JoinMode::JoinOrRejoin{ static_cast<uint8_t>(0x2u) };
constexpr ::Photon::Realtime::JoinMode Photon::Realtime::JoinMode::RejoinOnly{ static_cast<uint8_t>(0x3u) };
