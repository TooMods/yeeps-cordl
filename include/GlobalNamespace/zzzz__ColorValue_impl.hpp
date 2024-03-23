#pragma once
#include "GlobalNamespace/zzzz__ColorValue_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ColorValue::ColorValue(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorValue::ColorValue() {}
constexpr ::GlobalNamespace::ColorValue GlobalNamespace::ColorValue::Darkest{ static_cast<int32_t>(0xfffffffe) };
constexpr ::GlobalNamespace::ColorValue GlobalNamespace::ColorValue::Dark{ static_cast<int32_t>(0xffffffff) };
constexpr ::GlobalNamespace::ColorValue GlobalNamespace::ColorValue::Normal{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::ColorValue GlobalNamespace::ColorValue::Light{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::ColorValue GlobalNamespace::ColorValue::Lightest{ static_cast<int32_t>(0x2) };
