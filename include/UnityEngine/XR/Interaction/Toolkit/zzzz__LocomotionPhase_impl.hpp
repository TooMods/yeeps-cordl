#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__LocomotionPhase_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase::LocomotionPhase(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase::LocomotionPhase() {}
constexpr ::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase UnityEngine::XR::Interaction::Toolkit::LocomotionPhase::Idle{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase UnityEngine::XR::Interaction::Toolkit::LocomotionPhase::Started{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase UnityEngine::XR::Interaction::Toolkit::LocomotionPhase::Moving{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase UnityEngine::XR::Interaction::Toolkit::LocomotionPhase::Done{ static_cast<int32_t>(0x3) };
