#pragma once
#include "Unity/Services/Vivox/zzzz__vx_subscription_type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_subscription_type::vx_subscription_type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_subscription_type::vx_subscription_type() {}
constexpr ::Unity::Services::Vivox::vx_subscription_type Unity::Services::Vivox::vx_subscription_type::subscription_presence{ static_cast<int32_t>(0x0) };
