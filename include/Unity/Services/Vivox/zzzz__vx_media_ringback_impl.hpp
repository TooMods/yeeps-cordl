#pragma once
#include "Unity/Services/Vivox/zzzz__vx_media_ringback_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_media_ringback::vx_media_ringback(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_media_ringback::vx_media_ringback() {}
constexpr ::Unity::Services::Vivox::vx_media_ringback Unity::Services::Vivox::vx_media_ringback::media_ringback_none{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_media_ringback Unity::Services::Vivox::vx_media_ringback::media_ringback_ringing{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::vx_media_ringback Unity::Services::Vivox::vx_media_ringback::media_ringback_busy{ static_cast<int32_t>(0x3) };
