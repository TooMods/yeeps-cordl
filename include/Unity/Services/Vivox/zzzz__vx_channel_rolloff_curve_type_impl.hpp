#pragma once
#include "Unity/Services/Vivox/zzzz__vx_channel_rolloff_curve_type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_channel_rolloff_curve_type::vx_channel_rolloff_curve_type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_channel_rolloff_curve_type::vx_channel_rolloff_curve_type() {}
constexpr ::Unity::Services::Vivox::vx_channel_rolloff_curve_type Unity::Services::Vivox::vx_channel_rolloff_curve_type::channel_rolloff_curve_type_none{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_channel_rolloff_curve_type Unity::Services::Vivox::vx_channel_rolloff_curve_type::channel_rolloff_curve_type_inverse_distance_clamped{ static_cast<int32_t>(
    0x1) };
constexpr ::Unity::Services::Vivox::vx_channel_rolloff_curve_type Unity::Services::Vivox::vx_channel_rolloff_curve_type::channel_rolloff_curve_type_linear_distance_clamped{ static_cast<int32_t>(
    0x2) };
constexpr ::Unity::Services::Vivox::vx_channel_rolloff_curve_type Unity::Services::Vivox::vx_channel_rolloff_curve_type::channel_rolloff_curve_type_exponential_distance_clamped{ static_cast<int32_t>(
    0x3) };
