#pragma once
#include "Unity/Services/Vivox/zzzz__vx_media_completion_type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_media_completion_type::vx_media_completion_type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_media_completion_type::vx_media_completion_type() {}
constexpr ::Unity::Services::Vivox::vx_media_completion_type Unity::Services::Vivox::vx_media_completion_type::media_completion_type_none{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_media_completion_type Unity::Services::Vivox::vx_media_completion_type::aux_buffer_audio_capture{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::vx_media_completion_type Unity::Services::Vivox::vx_media_completion_type::aux_buffer_audio_render{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Services::Vivox::vx_media_completion_type Unity::Services::Vivox::vx_media_completion_type::sessiongroup_audio_injection{ static_cast<int32_t>(0x3) };
