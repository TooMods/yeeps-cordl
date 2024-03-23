#pragma once
#include "Unity/Services/Vivox/zzzz__vx_password_hash_algorithm_t_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_password_hash_algorithm_t::vx_password_hash_algorithm_t(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_password_hash_algorithm_t::vx_password_hash_algorithm_t() {}
constexpr ::Unity::Services::Vivox::vx_password_hash_algorithm_t Unity::Services::Vivox::vx_password_hash_algorithm_t::password_hash_algorithm_cleartext{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_password_hash_algorithm_t Unity::Services::Vivox::vx_password_hash_algorithm_t::password_hash_algorithm_sha1_username_hash{ static_cast<int32_t>(0x1) };
