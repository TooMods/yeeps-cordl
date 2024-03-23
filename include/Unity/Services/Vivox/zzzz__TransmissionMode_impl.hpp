#pragma once
#include "Unity/Services/Vivox/zzzz__TransmissionMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::TransmissionMode::TransmissionMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::TransmissionMode::TransmissionMode() {}
constexpr ::Unity::Services::Vivox::TransmissionMode Unity::Services::Vivox::TransmissionMode::None{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::TransmissionMode Unity::Services::Vivox::TransmissionMode::Single{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::TransmissionMode Unity::Services::Vivox::TransmissionMode::All{ static_cast<int32_t>(0x2) };
