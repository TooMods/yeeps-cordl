#pragma once
#include "Unity/Services/Vivox/zzzz__vx_attempt_stun_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_attempt_stun::vx_attempt_stun(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_attempt_stun::vx_attempt_stun() {}
constexpr ::Unity::Services::Vivox::vx_attempt_stun Unity::Services::Vivox::vx_attempt_stun::attempt_stun_unspecified{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_attempt_stun Unity::Services::Vivox::vx_attempt_stun::attempt_stun_on{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::vx_attempt_stun Unity::Services::Vivox::vx_attempt_stun::attempt_stun_off{ static_cast<int32_t>(0x2) };
