#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__EaseState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::EaseState::EaseState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::EaseState::EaseState() {}
constexpr ::UnityEngine::XR::Interaction::Toolkit::EaseState UnityEngine::XR::Interaction::Toolkit::EaseState::NotEasing{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::EaseState UnityEngine::XR::Interaction::Toolkit::EaseState::EasingIn{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::EaseState UnityEngine::XR::Interaction::Toolkit::EaseState::EasingInHoldBeforeEasingOut{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::EaseState UnityEngine::XR::Interaction::Toolkit::EaseState::EasingOutDelay{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::EaseState UnityEngine::XR::Interaction::Toolkit::EaseState::EasingOut{ static_cast<int32_t>(0x4) };
