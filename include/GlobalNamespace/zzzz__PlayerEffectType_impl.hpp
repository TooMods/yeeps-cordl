#pragma once
#include "GlobalNamespace/zzzz__PlayerEffectType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerEffectType::PlayerEffectType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerEffectType::PlayerEffectType() {}
constexpr ::GlobalNamespace::PlayerEffectType GlobalNamespace::PlayerEffectType::kill{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::PlayerEffectType GlobalNamespace::PlayerEffectType::win{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::PlayerEffectType GlobalNamespace::PlayerEffectType::convert{ static_cast<int32_t>(0x2) };
