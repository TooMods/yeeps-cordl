#pragma once
#include "Unity/Services/Vivox/zzzz__vx_media_type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_media_type::vx_media_type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_media_type::vx_media_type() {}
constexpr ::Unity::Services::Vivox::vx_media_type Unity::Services::Vivox::vx_media_type::media_type_none{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_media_type Unity::Services::Vivox::vx_media_type::media_type_text{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::vx_media_type Unity::Services::Vivox::vx_media_type::media_type_audio{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Services::Vivox::vx_media_type Unity::Services::Vivox::vx_media_type::media_type_video{ static_cast<int32_t>(0x3) };
constexpr ::Unity::Services::Vivox::vx_media_type Unity::Services::Vivox::vx_media_type::media_type_audiovideo{ static_cast<int32_t>(0x4) };
