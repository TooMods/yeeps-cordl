#pragma once
#include "Unity/Services/Vivox/zzzz__vx_audiosource_operation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_audiosource_operation::vx_audiosource_operation(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_audiosource_operation::vx_audiosource_operation() {}
constexpr ::Unity::Services::Vivox::vx_audiosource_operation Unity::Services::Vivox::vx_audiosource_operation::op_none{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_audiosource_operation Unity::Services::Vivox::vx_audiosource_operation::op_safeupdate{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::vx_audiosource_operation Unity::Services::Vivox::vx_audiosource_operation::op_delete{ static_cast<int32_t>(0x2) };
