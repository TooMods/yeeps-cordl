#pragma once
#include "Unity/Services/Vivox/zzzz__vx_udp_frame_type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_udp_frame_type::vx_udp_frame_type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_udp_frame_type::vx_udp_frame_type() {}
constexpr ::Unity::Services::Vivox::vx_udp_frame_type Unity::Services::Vivox::vx_udp_frame_type::vx_frame_type_rtp{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_udp_frame_type Unity::Services::Vivox::vx_udp_frame_type::vx_frame_type_rtcp{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::vx_udp_frame_type Unity::Services::Vivox::vx_udp_frame_type::vx_frame_type_sip_message{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Services::Vivox::vx_udp_frame_type Unity::Services::Vivox::vx_udp_frame_type::vx_frame_type_sip_keepalive{ static_cast<int32_t>(0x3) };
