#pragma once
#include "Unity/Services/Vivox/zzzz__vx_termination_status_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_termination_status::vx_termination_status(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_termination_status::vx_termination_status() {}
constexpr ::Unity::Services::Vivox::vx_termination_status Unity::Services::Vivox::vx_termination_status::termination_status_none{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_termination_status Unity::Services::Vivox::vx_termination_status::termination_status_busy{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::vx_termination_status Unity::Services::Vivox::vx_termination_status::termination_status_decline{ static_cast<int32_t>(0x2) };
