#pragma once
#include "Unity/Services/Vivox/zzzz__vx_evt_network_message_type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_evt_network_message_type::vx_evt_network_message_type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_evt_network_message_type::vx_evt_network_message_type() {}
constexpr ::Unity::Services::Vivox::vx_evt_network_message_type Unity::Services::Vivox::vx_evt_network_message_type::vx_evt_network_message_type_offline_message{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::vx_evt_network_message_type Unity::Services::Vivox::vx_evt_network_message_type::vx_evt_network_message_type_admin_message{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Services::Vivox::vx_evt_network_message_type Unity::Services::Vivox::vx_evt_network_message_type::vx_evt_network_message_type_sessionless_message{ static_cast<int32_t>(0x3) };
