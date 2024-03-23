#pragma once
#include "UnityEngine/Rendering/zzzz__OpenGLESVersion_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::OpenGLESVersion::OpenGLESVersion(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OpenGLESVersion::OpenGLESVersion() {}
constexpr ::UnityEngine::Rendering::OpenGLESVersion UnityEngine::Rendering::OpenGLESVersion::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::OpenGLESVersion UnityEngine::Rendering::OpenGLESVersion::OpenGLES20{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::OpenGLESVersion UnityEngine::Rendering::OpenGLESVersion::OpenGLES30{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::OpenGLESVersion UnityEngine::Rendering::OpenGLESVersion::OpenGLES31{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Rendering::OpenGLESVersion UnityEngine::Rendering::OpenGLESVersion::OpenGLES31AEP{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::OpenGLESVersion UnityEngine::Rendering::OpenGLESVersion::OpenGLES32{ static_cast<int32_t>(0x5) };
