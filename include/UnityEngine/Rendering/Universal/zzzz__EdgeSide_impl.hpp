#pragma once
#include "UnityEngine/Rendering/Universal/zzzz__EdgeSide_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::EdgeSide::EdgeSide(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::EdgeSide::EdgeSide() {}
constexpr ::UnityEngine::Rendering::Universal::EdgeSide UnityEngine::Rendering::Universal::EdgeSide::esLeft{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::EdgeSide UnityEngine::Rendering::Universal::EdgeSide::esRight{ static_cast<int32_t>(0x1) };
