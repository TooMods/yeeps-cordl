#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__TargetPriorityMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode::TargetPriorityMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode::TargetPriorityMode() {}
constexpr ::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode::HighestPriorityOnly{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode::All{ static_cast<int32_t>(0x2) };
