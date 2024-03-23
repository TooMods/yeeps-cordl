#pragma once
#include "Unity/Services/Vivox/zzzz__vx_notification_type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_notification_type::vx_notification_type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_notification_type::vx_notification_type() {}
constexpr ::Unity::Services::Vivox::vx_notification_type Unity::Services::Vivox::vx_notification_type::notification_not_typing{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_notification_type Unity::Services::Vivox::vx_notification_type::notification_typing{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::vx_notification_type Unity::Services::Vivox::vx_notification_type::notification_hand_lowered{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Services::Vivox::vx_notification_type Unity::Services::Vivox::vx_notification_type::notification_hand_raised{ static_cast<int32_t>(0x3) };
constexpr ::Unity::Services::Vivox::vx_notification_type Unity::Services::Vivox::vx_notification_type::notification_min{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_notification_type Unity::Services::Vivox::vx_notification_type::notification_max{ static_cast<int32_t>(0x3) };
