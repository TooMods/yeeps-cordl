#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Theme/Primitives/zzzz__ColorBlendMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode::ColorBlendMode(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode::ColorBlendMode() {}
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode
    UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode::Solid{ static_cast<uint8_t>(0x0u) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode::Add{
  static_cast<uint8_t>(0x1u)
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode::Mix{
  static_cast<uint8_t>(0x2u)
};
