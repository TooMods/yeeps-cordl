#pragma once
#include "UnityEngine/zzzz__ForceMode2D_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ForceMode2D::ForceMode2D(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ForceMode2D::ForceMode2D() {}
constexpr ::UnityEngine::ForceMode2D UnityEngine::ForceMode2D::Force{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ForceMode2D UnityEngine::ForceMode2D::Impulse{ static_cast<int32_t>(0x1) };
