#pragma once
#include "UnityEngine/Rendering/zzzz__PackingRules_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::PackingRules::PackingRules(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PackingRules::PackingRules() {}
constexpr ::UnityEngine::Rendering::PackingRules UnityEngine::Rendering::PackingRules::Exact{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::PackingRules UnityEngine::Rendering::PackingRules::Aggressive{ static_cast<int32_t>(0x1) };
