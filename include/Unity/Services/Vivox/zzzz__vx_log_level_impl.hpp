#pragma once
#include "Unity/Services/Vivox/zzzz__vx_log_level_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_log_level::vx_log_level(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_log_level::vx_log_level() {}
constexpr ::Unity::Services::Vivox::vx_log_level Unity::Services::Vivox::vx_log_level::log_none{ static_cast<int32_t>(0xffffffff) };
constexpr ::Unity::Services::Vivox::vx_log_level Unity::Services::Vivox::vx_log_level::log_error{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_log_level Unity::Services::Vivox::vx_log_level::log_warning{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::vx_log_level Unity::Services::Vivox::vx_log_level::log_info{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Services::Vivox::vx_log_level Unity::Services::Vivox::vx_log_level::log_debug{ static_cast<int32_t>(0x3) };
constexpr ::Unity::Services::Vivox::vx_log_level Unity::Services::Vivox::vx_log_level::log_trace{ static_cast<int32_t>(0x4) };
constexpr ::Unity::Services::Vivox::vx_log_level Unity::Services::Vivox::vx_log_level::log_all{ static_cast<int32_t>(0x5) };
