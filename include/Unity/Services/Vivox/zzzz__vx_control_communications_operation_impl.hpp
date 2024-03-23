#pragma once
#include "Unity/Services/Vivox/zzzz__vx_control_communications_operation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_control_communications_operation::vx_control_communications_operation(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_control_communications_operation::vx_control_communications_operation() {}
constexpr ::Unity::Services::Vivox::vx_control_communications_operation Unity::Services::Vivox::vx_control_communications_operation::vx_control_communications_operation_block{ static_cast<int32_t>(
    0x0) };
constexpr ::Unity::Services::Vivox::vx_control_communications_operation Unity::Services::Vivox::vx_control_communications_operation::vx_control_communications_operation_unblock{ static_cast<int32_t>(
    0x1) };
constexpr ::Unity::Services::Vivox::vx_control_communications_operation Unity::Services::Vivox::vx_control_communications_operation::vx_control_communications_operation_list{ static_cast<int32_t>(
    0x2) };
constexpr ::Unity::Services::Vivox::vx_control_communications_operation Unity::Services::Vivox::vx_control_communications_operation::vx_control_communications_operation_block_list{
  static_cast<int32_t>(0x2)
};
constexpr ::Unity::Services::Vivox::vx_control_communications_operation Unity::Services::Vivox::vx_control_communications_operation::vx_control_communications_operation_clear{ static_cast<int32_t>(
    0x3) };
constexpr ::Unity::Services::Vivox::vx_control_communications_operation Unity::Services::Vivox::vx_control_communications_operation::vx_control_communications_operation_clear_block_list{
  static_cast<int32_t>(0x3)
};
constexpr ::Unity::Services::Vivox::vx_control_communications_operation Unity::Services::Vivox::vx_control_communications_operation::vx_control_communications_operation_mute{ static_cast<int32_t>(
    0x4) };
constexpr ::Unity::Services::Vivox::vx_control_communications_operation Unity::Services::Vivox::vx_control_communications_operation::vx_control_communications_operation_unmute{ static_cast<int32_t>(
    0x5) };
constexpr ::Unity::Services::Vivox::vx_control_communications_operation Unity::Services::Vivox::vx_control_communications_operation::vx_control_communications_operation_mute_list{
  static_cast<int32_t>(0x6)
};
constexpr ::Unity::Services::Vivox::vx_control_communications_operation Unity::Services::Vivox::vx_control_communications_operation::vx_control_communications_operation_clear_mute_list{
  static_cast<int32_t>(0x7)
};
