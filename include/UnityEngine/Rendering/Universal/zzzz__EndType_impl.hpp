#pragma once
#include "UnityEngine/Rendering/Universal/zzzz__EndType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::EndType::EndType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::EndType::EndType() {}
constexpr ::UnityEngine::Rendering::Universal::EndType UnityEngine::Rendering::Universal::EndType::etClosedPolygon{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::EndType UnityEngine::Rendering::Universal::EndType::etClosedLine{ static_cast<int32_t>(0x1) };
