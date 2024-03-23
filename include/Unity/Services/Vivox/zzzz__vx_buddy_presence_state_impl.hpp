#pragma once
#include "Unity/Services/Vivox/zzzz__vx_buddy_presence_state_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_buddy_presence_state::vx_buddy_presence_state(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_buddy_presence_state::vx_buddy_presence_state() {}
constexpr ::Unity::Services::Vivox::vx_buddy_presence_state Unity::Services::Vivox::vx_buddy_presence_state::buddy_presence_unknown{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_buddy_presence_state Unity::Services::Vivox::vx_buddy_presence_state::buddy_presence_pending{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::vx_buddy_presence_state Unity::Services::Vivox::vx_buddy_presence_state::buddy_presence_online{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Services::Vivox::vx_buddy_presence_state Unity::Services::Vivox::vx_buddy_presence_state::buddy_presence_busy{ static_cast<int32_t>(0x3) };
constexpr ::Unity::Services::Vivox::vx_buddy_presence_state Unity::Services::Vivox::vx_buddy_presence_state::buddy_presence_brb{ static_cast<int32_t>(0x4) };
constexpr ::Unity::Services::Vivox::vx_buddy_presence_state Unity::Services::Vivox::vx_buddy_presence_state::buddy_presence_away{ static_cast<int32_t>(0x5) };
constexpr ::Unity::Services::Vivox::vx_buddy_presence_state Unity::Services::Vivox::vx_buddy_presence_state::buddy_presence_onthephone{ static_cast<int32_t>(0x6) };
constexpr ::Unity::Services::Vivox::vx_buddy_presence_state Unity::Services::Vivox::vx_buddy_presence_state::buddy_presence_outtolunch{ static_cast<int32_t>(0x7) };
constexpr ::Unity::Services::Vivox::vx_buddy_presence_state Unity::Services::Vivox::vx_buddy_presence_state::buddy_presence_custom{ static_cast<int32_t>(0x8) };
constexpr ::Unity::Services::Vivox::vx_buddy_presence_state Unity::Services::Vivox::vx_buddy_presence_state::buddy_presence_online_slc{ static_cast<int32_t>(0x9) };
constexpr ::Unity::Services::Vivox::vx_buddy_presence_state Unity::Services::Vivox::vx_buddy_presence_state::buddy_presence_closed{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_buddy_presence_state Unity::Services::Vivox::vx_buddy_presence_state::buddy_presence_offline{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_buddy_presence_state Unity::Services::Vivox::vx_buddy_presence_state::buddy_presence_chat{ static_cast<int32_t>(0xa) };
constexpr ::Unity::Services::Vivox::vx_buddy_presence_state Unity::Services::Vivox::vx_buddy_presence_state::buddy_presence_extended_away{ static_cast<int32_t>(0xb) };
constexpr ::Unity::Services::Vivox::vx_buddy_presence_state Unity::Services::Vivox::vx_buddy_presence_state::buddy_presence_min{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_buddy_presence_state Unity::Services::Vivox::vx_buddy_presence_state::buddy_presence_max{ static_cast<int32_t>(0xb) };
