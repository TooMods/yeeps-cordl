#pragma once
#include "UnityEngine/Rendering/Universal/zzzz__ClipType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::ClipType::ClipType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ClipType::ClipType() {}
constexpr ::UnityEngine::Rendering::Universal::ClipType UnityEngine::Rendering::Universal::ClipType::ctIntersection{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::ClipType UnityEngine::Rendering::Universal::ClipType::ctUnion{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::ClipType UnityEngine::Rendering::Universal::ClipType::ctDifference{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Universal::ClipType UnityEngine::Rendering::Universal::ClipType::ctXor{ static_cast<int32_t>(0x3) };
