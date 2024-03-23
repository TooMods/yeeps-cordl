#pragma once
#include "GlobalNamespace/zzzz__RandomColorType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::RandomColorType::RandomColorType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RandomColorType::RandomColorType() {}
constexpr ::GlobalNamespace::RandomColorType GlobalNamespace::RandomColorType::none{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::RandomColorType GlobalNamespace::RandomColorType::groundBlock{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::RandomColorType GlobalNamespace::RandomColorType::structural{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::RandomColorType GlobalNamespace::RandomColorType::stuffing{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::RandomColorType GlobalNamespace::RandomColorType::ground{ static_cast<int32_t>(0x4) };
