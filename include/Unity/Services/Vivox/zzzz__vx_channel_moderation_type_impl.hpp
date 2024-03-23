#pragma once
#include "Unity/Services/Vivox/zzzz__vx_channel_moderation_type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_channel_moderation_type::vx_channel_moderation_type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_channel_moderation_type::vx_channel_moderation_type() {}
constexpr ::Unity::Services::Vivox::vx_channel_moderation_type Unity::Services::Vivox::vx_channel_moderation_type::channel_moderation_type_all{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_channel_moderation_type Unity::Services::Vivox::vx_channel_moderation_type::channel_moderation_type_current_user{ static_cast<int32_t>(0x1) };
