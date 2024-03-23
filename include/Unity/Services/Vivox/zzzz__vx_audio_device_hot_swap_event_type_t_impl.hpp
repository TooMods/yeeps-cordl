#pragma once
#include "Unity/Services/Vivox/zzzz__vx_audio_device_hot_swap_event_type_t_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_audio_device_hot_swap_event_type_t::vx_audio_device_hot_swap_event_type_t(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_audio_device_hot_swap_event_type_t::vx_audio_device_hot_swap_event_type_t() {}
constexpr ::Unity::Services::Vivox::vx_audio_device_hot_swap_event_type_t
    Unity::Services::Vivox::vx_audio_device_hot_swap_event_type_t::vx_audio_device_hot_swap_event_type_disabled_due_to_platform_constraints{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_audio_device_hot_swap_event_type_t
    Unity::Services::Vivox::vx_audio_device_hot_swap_event_type_t::vx_audio_device_hot_swap_event_type_active_render_device_changed{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::vx_audio_device_hot_swap_event_type_t
    Unity::Services::Vivox::vx_audio_device_hot_swap_event_type_t::vx_audio_device_hot_swap_event_type_active_capture_device_changed{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Services::Vivox::vx_audio_device_hot_swap_event_type_t Unity::Services::Vivox::vx_audio_device_hot_swap_event_type_t::vx_audio_device_hot_swap_event_type_audio_device_added{
  static_cast<int32_t>(0x3)
};
constexpr ::Unity::Services::Vivox::vx_audio_device_hot_swap_event_type_t Unity::Services::Vivox::vx_audio_device_hot_swap_event_type_t::vx_audio_device_hot_swap_event_type_audio_device_removed{
  static_cast<int32_t>(0x4)
};
