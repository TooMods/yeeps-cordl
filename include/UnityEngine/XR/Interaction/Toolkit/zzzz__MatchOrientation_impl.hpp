#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__MatchOrientation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::MatchOrientation::MatchOrientation(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::MatchOrientation::MatchOrientation() {}
constexpr ::UnityEngine::XR::Interaction::Toolkit::MatchOrientation UnityEngine::XR::Interaction::Toolkit::MatchOrientation::WorldSpaceUp{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::MatchOrientation UnityEngine::XR::Interaction::Toolkit::MatchOrientation::TargetUp{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::MatchOrientation UnityEngine::XR::Interaction::Toolkit::MatchOrientation::TargetUpAndForward{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::MatchOrientation UnityEngine::XR::Interaction::Toolkit::MatchOrientation::None{ static_cast<int32_t>(0x3) };
