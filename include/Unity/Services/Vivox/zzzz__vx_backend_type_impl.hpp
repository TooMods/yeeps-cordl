#pragma once
#include "Unity/Services/Vivox/zzzz__vx_backend_type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_backend_type::vx_backend_type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_backend_type::vx_backend_type() {}
constexpr ::Unity::Services::Vivox::vx_backend_type Unity::Services::Vivox::vx_backend_type::backend_type_unknown{ static_cast<int32_t>(0xffffffff) };
constexpr ::Unity::Services::Vivox::vx_backend_type Unity::Services::Vivox::vx_backend_type::backend_type_sip{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_backend_type Unity::Services::Vivox::vx_backend_type::backend_type_xmpp{ static_cast<int32_t>(0x1) };
