#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionUpdateOrder_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionUpdateOrder_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase::__XRInteractionUpdateOrder__UpdatePhase(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase::__XRInteractionUpdateOrder__UpdatePhase() {}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase::Fixed{ static_cast<int32_t>(
    0x0) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase::Dynamic{
  static_cast<int32_t>(0x1)
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase::Late{ static_cast<int32_t>(
    0x2) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase::OnBeforeRender{
  static_cast<int32_t>(0x3)
};
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRInteractionUpdateOrder::XRInteractionUpdateOrder() {}
