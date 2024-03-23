#pragma once
#include "Photon/Realtime/zzzz__PropertyTypeFlag_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Photon::Realtime::PropertyTypeFlag::PropertyTypeFlag(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Realtime::PropertyTypeFlag::PropertyTypeFlag() {}
constexpr ::Photon::Realtime::PropertyTypeFlag Photon::Realtime::PropertyTypeFlag::None{ static_cast<uint8_t>(0x0u) };
constexpr ::Photon::Realtime::PropertyTypeFlag Photon::Realtime::PropertyTypeFlag::Game{ static_cast<uint8_t>(0x1u) };
constexpr ::Photon::Realtime::PropertyTypeFlag Photon::Realtime::PropertyTypeFlag::Actor{ static_cast<uint8_t>(0x2u) };
constexpr ::Photon::Realtime::PropertyTypeFlag Photon::Realtime::PropertyTypeFlag::GameAndActor{ static_cast<uint8_t>(0x3u) };
