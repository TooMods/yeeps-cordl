#pragma once
#include "System/ComponentModel/zzzz__BindableSupport_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ComponentModel::BindableSupport::BindableSupport(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::ComponentModel::BindableSupport::BindableSupport() {}
constexpr ::System::ComponentModel::BindableSupport System::ComponentModel::BindableSupport::No{ static_cast<int32_t>(0x0) };
constexpr ::System::ComponentModel::BindableSupport System::ComponentModel::BindableSupport::Yes{ static_cast<int32_t>(0x1) };
constexpr ::System::ComponentModel::BindableSupport System::ComponentModel::BindableSupport::Default{ static_cast<int32_t>(0x2) };
