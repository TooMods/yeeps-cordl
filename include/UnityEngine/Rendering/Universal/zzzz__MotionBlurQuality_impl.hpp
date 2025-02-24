#pragma once
#include "UnityEngine/Rendering/Universal/zzzz__MotionBlurQuality_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::MotionBlurQuality::MotionBlurQuality(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::MotionBlurQuality::MotionBlurQuality() {}
constexpr ::UnityEngine::Rendering::Universal::MotionBlurQuality UnityEngine::Rendering::Universal::MotionBlurQuality::Low{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::MotionBlurQuality UnityEngine::Rendering::Universal::MotionBlurQuality::Medium{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::MotionBlurQuality UnityEngine::Rendering::Universal::MotionBlurQuality::High{ static_cast<int32_t>(0x2) };
