#pragma once
#include "Unity/Services/Vivox/zzzz__vx_log_type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_log_type::vx_log_type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_log_type::vx_log_type() {}
constexpr ::Unity::Services::Vivox::vx_log_type Unity::Services::Vivox::vx_log_type::log_to_none{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_log_type Unity::Services::Vivox::vx_log_type::log_to_file{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::vx_log_type Unity::Services::Vivox::vx_log_type::log_to_callback{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Services::Vivox::vx_log_type Unity::Services::Vivox::vx_log_type::log_to_file_and_callback{ static_cast<int32_t>(0x3) };
