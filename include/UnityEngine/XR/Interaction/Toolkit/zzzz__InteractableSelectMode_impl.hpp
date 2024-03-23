#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractableSelectMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractableSelectMode::InteractableSelectMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractableSelectMode::InteractableSelectMode() {}
constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractableSelectMode UnityEngine::XR::Interaction::Toolkit::InteractableSelectMode::Single{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractableSelectMode UnityEngine::XR::Interaction::Toolkit::InteractableSelectMode::Multiple{ static_cast<int32_t>(0x1) };
