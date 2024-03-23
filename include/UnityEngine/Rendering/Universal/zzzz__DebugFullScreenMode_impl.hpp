#pragma once
#include "UnityEngine/Rendering/Universal/zzzz__DebugFullScreenMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::DebugFullScreenMode::DebugFullScreenMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DebugFullScreenMode::DebugFullScreenMode() {}
constexpr ::UnityEngine::Rendering::Universal::DebugFullScreenMode UnityEngine::Rendering::Universal::DebugFullScreenMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::DebugFullScreenMode UnityEngine::Rendering::Universal::DebugFullScreenMode::Depth{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::DebugFullScreenMode UnityEngine::Rendering::Universal::DebugFullScreenMode::AdditionalLightsShadowMap{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Universal::DebugFullScreenMode UnityEngine::Rendering::Universal::DebugFullScreenMode::MainLightShadowMap{ static_cast<int32_t>(0x3) };
