#pragma once
#include "UnityEngine/Rendering/Universal/zzzz__PolyFillType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::PolyFillType::PolyFillType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PolyFillType::PolyFillType() {}
constexpr ::UnityEngine::Rendering::Universal::PolyFillType UnityEngine::Rendering::Universal::PolyFillType::pftEvenOdd{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::PolyFillType UnityEngine::Rendering::Universal::PolyFillType::pftNonZero{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::PolyFillType UnityEngine::Rendering::Universal::PolyFillType::pftPositive{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Universal::PolyFillType UnityEngine::Rendering::Universal::PolyFillType::pftNegative{ static_cast<int32_t>(0x3) };
