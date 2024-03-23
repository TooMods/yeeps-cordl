#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/zzzz__Cardinal_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Cardinal::Cardinal(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Cardinal::Cardinal() {}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Cardinal UnityEngine::XR::Interaction::Toolkit::Inputs::Cardinal::North{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Cardinal UnityEngine::XR::Interaction::Toolkit::Inputs::Cardinal::South{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Cardinal UnityEngine::XR::Interaction::Toolkit::Inputs::Cardinal::East{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Cardinal UnityEngine::XR::Interaction::Toolkit::Inputs::Cardinal::West{ static_cast<int32_t>(0x3) };
