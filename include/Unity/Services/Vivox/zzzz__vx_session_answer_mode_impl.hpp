#pragma once
#include "Unity/Services/Vivox/zzzz__vx_session_answer_mode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_session_answer_mode::vx_session_answer_mode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_session_answer_mode::vx_session_answer_mode() {}
constexpr ::Unity::Services::Vivox::vx_session_answer_mode Unity::Services::Vivox::vx_session_answer_mode::mode_none{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_session_answer_mode Unity::Services::Vivox::vx_session_answer_mode::mode_auto_answer{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::vx_session_answer_mode Unity::Services::Vivox::vx_session_answer_mode::mode_verify_answer{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Services::Vivox::vx_session_answer_mode Unity::Services::Vivox::vx_session_answer_mode::mode_busy_answer{ static_cast<int32_t>(0x3) };
