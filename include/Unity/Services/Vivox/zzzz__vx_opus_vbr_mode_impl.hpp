#pragma once
#include "Unity/Services/Vivox/zzzz__vx_opus_vbr_mode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_opus_vbr_mode::vx_opus_vbr_mode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_opus_vbr_mode::vx_opus_vbr_mode() {}
constexpr ::Unity::Services::Vivox::vx_opus_vbr_mode Unity::Services::Vivox::vx_opus_vbr_mode::opus_mode_cbr{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_opus_vbr_mode Unity::Services::Vivox::vx_opus_vbr_mode::opus_mode_lvbr{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::vx_opus_vbr_mode Unity::Services::Vivox::vx_opus_vbr_mode::opus_mode_vbr{ static_cast<int32_t>(0x2) };
