#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__RequestResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::RequestResult::RequestResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::RequestResult::RequestResult() {}
constexpr ::UnityEngine::XR::Interaction::Toolkit::RequestResult UnityEngine::XR::Interaction::Toolkit::RequestResult::Success{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::RequestResult UnityEngine::XR::Interaction::Toolkit::RequestResult::Busy{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::RequestResult UnityEngine::XR::Interaction::Toolkit::RequestResult::Error{ static_cast<int32_t>(0x2) };
