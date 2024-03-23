#pragma once
#include "Unity/Services/Vivox/zzzz__vx_participant_diagnostic_state_t_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_participant_diagnostic_state_t::vx_participant_diagnostic_state_t(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_participant_diagnostic_state_t::vx_participant_diagnostic_state_t() {}
constexpr ::Unity::Services::Vivox::vx_participant_diagnostic_state_t Unity::Services::Vivox::vx_participant_diagnostic_state_t::participant_diagnostic_state_speaking_while_mic_muted{
  static_cast<int32_t>(0x1)
};
constexpr ::Unity::Services::Vivox::vx_participant_diagnostic_state_t Unity::Services::Vivox::vx_participant_diagnostic_state_t::participant_diagnostic_state_speaking_while_mic_volume_zero{
  static_cast<int32_t>(0x2)
};
constexpr ::Unity::Services::Vivox::vx_participant_diagnostic_state_t Unity::Services::Vivox::vx_participant_diagnostic_state_t::participant_diagnostic_state_no_capture_device{ static_cast<int32_t>(
    0x3) };
constexpr ::Unity::Services::Vivox::vx_participant_diagnostic_state_t Unity::Services::Vivox::vx_participant_diagnostic_state_t::participant_diagnostic_state_no_render_device{ static_cast<int32_t>(
    0x4) };
constexpr ::Unity::Services::Vivox::vx_participant_diagnostic_state_t Unity::Services::Vivox::vx_participant_diagnostic_state_t::participant_diagnostic_state_capture_device_read_errors{
  static_cast<int32_t>(0x5)
};
constexpr ::Unity::Services::Vivox::vx_participant_diagnostic_state_t Unity::Services::Vivox::vx_participant_diagnostic_state_t::participant_diagnostic_state_render_device_write_errors{
  static_cast<int32_t>(0x6)
};
