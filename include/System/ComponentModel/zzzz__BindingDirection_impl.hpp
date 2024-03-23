#pragma once
#include "System/ComponentModel/zzzz__BindingDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ComponentModel::BindingDirection::BindingDirection(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::ComponentModel::BindingDirection::BindingDirection() {}
constexpr ::System::ComponentModel::BindingDirection System::ComponentModel::BindingDirection::OneWay{ static_cast<int32_t>(0x0) };
constexpr ::System::ComponentModel::BindingDirection System::ComponentModel::BindingDirection::TwoWay{ static_cast<int32_t>(0x1) };
