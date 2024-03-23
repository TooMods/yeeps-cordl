#pragma once
#include "GlobalNamespace/zzzz__ExplosionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ExplosionType::ExplosionType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ExplosionType::ExplosionType() {}
constexpr ::GlobalNamespace::ExplosionType GlobalNamespace::ExplosionType::basic{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::ExplosionType GlobalNamespace::ExplosionType::impulse{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::ExplosionType GlobalNamespace::ExplosionType::freeze{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::ExplosionType GlobalNamespace::ExplosionType::smoke{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::ExplosionType GlobalNamespace::ExplosionType::teleport{ static_cast<int32_t>(0x4) };
