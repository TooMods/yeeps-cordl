#pragma once
#include "Photon/Realtime/zzzz__MatchmakingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Photon::Realtime::MatchmakingMode::MatchmakingMode(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Realtime::MatchmakingMode::MatchmakingMode() {}
constexpr ::Photon::Realtime::MatchmakingMode Photon::Realtime::MatchmakingMode::FillRoom{ static_cast<uint8_t>(0x0u) };
constexpr ::Photon::Realtime::MatchmakingMode Photon::Realtime::MatchmakingMode::SerialMatching{ static_cast<uint8_t>(0x1u) };
constexpr ::Photon::Realtime::MatchmakingMode Photon::Realtime::MatchmakingMode::RandomMatching{ static_cast<uint8_t>(0x2u) };
