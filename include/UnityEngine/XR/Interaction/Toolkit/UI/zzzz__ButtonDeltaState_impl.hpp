#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__ButtonDeltaState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState::ButtonDeltaState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState::ButtonDeltaState() {}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState::NoChange{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState::Pressed{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState::Released{ static_cast<int32_t>(0x2) };
