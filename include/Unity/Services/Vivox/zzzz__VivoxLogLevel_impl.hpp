#pragma once
#include "Unity/Services/Vivox/zzzz__VivoxLogLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::VivoxLogLevel::VivoxLogLevel(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::VivoxLogLevel::VivoxLogLevel() {}
constexpr ::Unity::Services::Vivox::VivoxLogLevel Unity::Services::Vivox::VivoxLogLevel::None{ static_cast<int32_t>(0xffffffff) };
constexpr ::Unity::Services::Vivox::VivoxLogLevel Unity::Services::Vivox::VivoxLogLevel::Error{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::VivoxLogLevel Unity::Services::Vivox::VivoxLogLevel::Warning{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::VivoxLogLevel Unity::Services::Vivox::VivoxLogLevel::Info{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Services::Vivox::VivoxLogLevel Unity::Services::Vivox::VivoxLogLevel::Debug{ static_cast<int32_t>(0x3) };
constexpr ::Unity::Services::Vivox::VivoxLogLevel Unity::Services::Vivox::VivoxLogLevel::Trace{ static_cast<int32_t>(0x4) };
constexpr ::Unity::Services::Vivox::VivoxLogLevel Unity::Services::Vivox::VivoxLogLevel::All{ static_cast<int32_t>(0x5) };
