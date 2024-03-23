#pragma once
#include "Photon/Realtime/zzzz__ClientAppType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Photon::Realtime::ClientAppType::ClientAppType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Realtime::ClientAppType::ClientAppType() {}
constexpr ::Photon::Realtime::ClientAppType Photon::Realtime::ClientAppType::Realtime{ static_cast<int32_t>(0x0) };
constexpr ::Photon::Realtime::ClientAppType Photon::Realtime::ClientAppType::Voice{ static_cast<int32_t>(0x1) };
constexpr ::Photon::Realtime::ClientAppType Photon::Realtime::ClientAppType::Fusion{ static_cast<int32_t>(0x2) };
