#pragma once
#include "Unity/Services/Vivox/zzzz__vx_mute_scope_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_mute_scope::vx_mute_scope(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_mute_scope::vx_mute_scope() {}
constexpr ::Unity::Services::Vivox::vx_mute_scope Unity::Services::Vivox::vx_mute_scope::mute_scope_all{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_mute_scope Unity::Services::Vivox::vx_mute_scope::mute_scope_audio{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::vx_mute_scope Unity::Services::Vivox::vx_mute_scope::mute_scope_text{ static_cast<int32_t>(0x2) };
