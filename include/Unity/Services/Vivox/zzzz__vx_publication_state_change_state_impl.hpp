#pragma once
#include "Unity/Services/Vivox/zzzz__vx_publication_state_change_state_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_publication_state_change_state::vx_publication_state_change_state(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_publication_state_change_state::vx_publication_state_change_state() {}
constexpr ::Unity::Services::Vivox::vx_publication_state_change_state Unity::Services::Vivox::vx_publication_state_change_state::publication_state_success{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_publication_state_change_state Unity::Services::Vivox::vx_publication_state_change_state::publication_state_transient_error{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::vx_publication_state_change_state Unity::Services::Vivox::vx_publication_state_change_state::publication_state_permanent_error{ static_cast<int32_t>(0x2) };
