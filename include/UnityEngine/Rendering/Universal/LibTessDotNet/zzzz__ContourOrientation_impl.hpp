#pragma once
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__ContourOrientation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::ContourOrientation::ContourOrientation(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::ContourOrientation::ContourOrientation() {}
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::ContourOrientation UnityEngine::Rendering::Universal::LibTessDotNet::ContourOrientation::Original{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::ContourOrientation UnityEngine::Rendering::Universal::LibTessDotNet::ContourOrientation::Clockwise{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::ContourOrientation UnityEngine::Rendering::Universal::LibTessDotNet::ContourOrientation::CounterClockwise{ static_cast<int32_t>(0x2) };
