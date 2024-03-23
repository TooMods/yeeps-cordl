#pragma once
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__WindingRule_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule::WindingRule(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule::WindingRule() {}
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule::EvenOdd{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule::NonZero{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule::Positive{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule::Negative{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule::AbsGeqTwo{ static_cast<int32_t>(0x4) };
