#pragma once
#include "Unity/Services/Vivox/zzzz__vx_rule_type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_rule_type::vx_rule_type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_rule_type::vx_rule_type() {}
constexpr ::Unity::Services::Vivox::vx_rule_type Unity::Services::Vivox::vx_rule_type::rule_none{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_rule_type Unity::Services::Vivox::vx_rule_type::rule_allow{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::vx_rule_type Unity::Services::Vivox::vx_rule_type::rule_block{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Services::Vivox::vx_rule_type Unity::Services::Vivox::vx_rule_type::rule_hide{ static_cast<int32_t>(0x3) };
