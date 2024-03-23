#pragma once
#include "Unity/Services/Vivox/zzzz__vx_opus_bandwidth_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_opus_bandwidth::vx_opus_bandwidth(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_opus_bandwidth::vx_opus_bandwidth() {}
constexpr ::Unity::Services::Vivox::vx_opus_bandwidth Unity::Services::Vivox::vx_opus_bandwidth::opus_bandwidth_auto{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_opus_bandwidth Unity::Services::Vivox::vx_opus_bandwidth::opus_bandwidth_nb{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::vx_opus_bandwidth Unity::Services::Vivox::vx_opus_bandwidth::opus_bandwidth_mb{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Services::Vivox::vx_opus_bandwidth Unity::Services::Vivox::vx_opus_bandwidth::opus_bandwidth_wb{ static_cast<int32_t>(0x3) };
constexpr ::Unity::Services::Vivox::vx_opus_bandwidth Unity::Services::Vivox::vx_opus_bandwidth::opus_bandwidth_swb{ static_cast<int32_t>(0x4) };
constexpr ::Unity::Services::Vivox::vx_opus_bandwidth Unity::Services::Vivox::vx_opus_bandwidth::opus_bandwidth_fb{ static_cast<int32_t>(0x5) };
