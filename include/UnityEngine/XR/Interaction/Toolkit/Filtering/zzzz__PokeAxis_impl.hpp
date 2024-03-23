#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__PokeAxis_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis::PokeAxis(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis::PokeAxis() {}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis::X{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis::Y{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis::Z{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis::NegativeX{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis::NegativeY{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis::NegativeZ{ static_cast<int32_t>(0x6) };
