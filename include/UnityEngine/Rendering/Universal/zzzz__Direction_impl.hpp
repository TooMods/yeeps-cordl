#pragma once
#include "UnityEngine/Rendering/Universal/zzzz__Direction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::Direction::Direction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Direction::Direction() {}
constexpr ::UnityEngine::Rendering::Universal::Direction UnityEngine::Rendering::Universal::Direction::dRightToLeft{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::Direction UnityEngine::Rendering::Universal::Direction::dLeftToRight{ static_cast<int32_t>(0x1) };
