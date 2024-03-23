#pragma once
#include "Unity/Services/Vivox/zzzz__vx_recording_frame_type_t_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_recording_frame_type_t::vx_recording_frame_type_t(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_recording_frame_type_t::vx_recording_frame_type_t() {}
constexpr ::Unity::Services::Vivox::vx_recording_frame_type_t Unity::Services::Vivox::vx_recording_frame_type_t::VX_RECORDING_FRAME_TYPE_DELTA{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_recording_frame_type_t Unity::Services::Vivox::vx_recording_frame_type_t::VX_RECORDING_FRAME_TYPE_CONTROL{ static_cast<int32_t>(0x1) };
