#pragma once
#include "UnityEngine/Rendering/Universal/zzzz__DebugMipInfoMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::DebugMipInfoMode::DebugMipInfoMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DebugMipInfoMode::DebugMipInfoMode() {}
constexpr ::UnityEngine::Rendering::Universal::DebugMipInfoMode UnityEngine::Rendering::Universal::DebugMipInfoMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::DebugMipInfoMode UnityEngine::Rendering::Universal::DebugMipInfoMode::Level{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::DebugMipInfoMode UnityEngine::Rendering::Universal::DebugMipInfoMode::Count{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Universal::DebugMipInfoMode UnityEngine::Rendering::Universal::DebugMipInfoMode::Ratio{ static_cast<int32_t>(0x3) };
