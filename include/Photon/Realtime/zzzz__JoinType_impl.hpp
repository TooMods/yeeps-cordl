#pragma once
#include "Photon/Realtime/zzzz__JoinType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Photon::Realtime::JoinType::JoinType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Realtime::JoinType::JoinType() {}
constexpr ::Photon::Realtime::JoinType Photon::Realtime::JoinType::CreateRoom{ static_cast<int32_t>(0x0) };
constexpr ::Photon::Realtime::JoinType Photon::Realtime::JoinType::JoinRoom{ static_cast<int32_t>(0x1) };
constexpr ::Photon::Realtime::JoinType Photon::Realtime::JoinType::JoinRandomRoom{ static_cast<int32_t>(0x2) };
constexpr ::Photon::Realtime::JoinType Photon::Realtime::JoinType::JoinRandomOrCreateRoom{ static_cast<int32_t>(0x3) };
constexpr ::Photon::Realtime::JoinType Photon::Realtime::JoinType::JoinOrCreateRoom{ static_cast<int32_t>(0x4) };
