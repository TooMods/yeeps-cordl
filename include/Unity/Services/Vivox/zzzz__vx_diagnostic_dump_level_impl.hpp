#pragma once
#include "Unity/Services/Vivox/zzzz__vx_diagnostic_dump_level_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_diagnostic_dump_level::vx_diagnostic_dump_level(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_diagnostic_dump_level::vx_diagnostic_dump_level() {}
constexpr ::Unity::Services::Vivox::vx_diagnostic_dump_level Unity::Services::Vivox::vx_diagnostic_dump_level::diagnostic_dump_level_all{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_diagnostic_dump_level Unity::Services::Vivox::vx_diagnostic_dump_level::diagnostic_dump_level_sessions{ static_cast<int32_t>(0x1) };
