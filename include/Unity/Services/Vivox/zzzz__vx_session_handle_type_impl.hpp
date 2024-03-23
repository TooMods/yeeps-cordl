#pragma once
#include "Unity/Services/Vivox/zzzz__vx_session_handle_type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_session_handle_type::vx_session_handle_type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_session_handle_type::vx_session_handle_type() {}
constexpr ::Unity::Services::Vivox::vx_session_handle_type Unity::Services::Vivox::vx_session_handle_type::session_handle_type_unique{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_session_handle_type Unity::Services::Vivox::vx_session_handle_type::session_handle_type_legacy{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::vx_session_handle_type Unity::Services::Vivox::vx_session_handle_type::session_handle_type_heirarchical_numeric{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Services::Vivox::vx_session_handle_type Unity::Services::Vivox::vx_session_handle_type::session_handle_type_heirarchical_unique{ static_cast<int32_t>(0x3) };
