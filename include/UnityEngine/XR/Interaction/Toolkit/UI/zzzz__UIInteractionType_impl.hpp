#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__UIInteractionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::UIInteractionType::UIInteractionType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::UIInteractionType::UIInteractionType() {}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::UIInteractionType UnityEngine::XR::Interaction::Toolkit::UI::UIInteractionType::Ray{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::UIInteractionType UnityEngine::XR::Interaction::Toolkit::UI::UIInteractionType::Poke{ static_cast<int32_t>(0x1) };
