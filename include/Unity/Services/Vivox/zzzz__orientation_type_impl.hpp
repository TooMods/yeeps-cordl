#pragma once
#include "Unity/Services/Vivox/zzzz__orientation_type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::orientation_type::orientation_type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::orientation_type::orientation_type() {}
constexpr ::Unity::Services::Vivox::orientation_type Unity::Services::Vivox::orientation_type::orientation_default{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::orientation_type Unity::Services::Vivox::orientation_type::orientation_legacy{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::orientation_type Unity::Services::Vivox::orientation_type::orientation_vivox{ static_cast<int32_t>(0x2) };
