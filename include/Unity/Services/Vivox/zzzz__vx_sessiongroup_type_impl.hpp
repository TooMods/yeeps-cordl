#pragma once
#include "Unity/Services/Vivox/zzzz__vx_sessiongroup_type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_sessiongroup_type::vx_sessiongroup_type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_sessiongroup_type::vx_sessiongroup_type() {}
constexpr ::Unity::Services::Vivox::vx_sessiongroup_type Unity::Services::Vivox::vx_sessiongroup_type::sessiongroup_type_normal{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_sessiongroup_type Unity::Services::Vivox::vx_sessiongroup_type::sessiongroup_type_playback{ static_cast<int32_t>(0x1) };
