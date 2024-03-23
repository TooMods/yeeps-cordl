#pragma once
#include "Unity/Services/Vivox/zzzz__vx_buddy_management_mode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_buddy_management_mode::vx_buddy_management_mode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_buddy_management_mode::vx_buddy_management_mode() {}
constexpr ::Unity::Services::Vivox::vx_buddy_management_mode Unity::Services::Vivox::vx_buddy_management_mode::mode_auto_accept{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_buddy_management_mode Unity::Services::Vivox::vx_buddy_management_mode::mode_auto_add{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::vx_buddy_management_mode Unity::Services::Vivox::vx_buddy_management_mode::mode_block{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Services::Vivox::vx_buddy_management_mode Unity::Services::Vivox::vx_buddy_management_mode::mode_hide{ static_cast<int32_t>(0x3) };
constexpr ::Unity::Services::Vivox::vx_buddy_management_mode Unity::Services::Vivox::vx_buddy_management_mode::mode_application{ static_cast<int32_t>(0x4) };
