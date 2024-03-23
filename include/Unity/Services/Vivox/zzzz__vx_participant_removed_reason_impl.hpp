#pragma once
#include "Unity/Services/Vivox/zzzz__vx_participant_removed_reason_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_participant_removed_reason::vx_participant_removed_reason(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_participant_removed_reason::vx_participant_removed_reason() {}
constexpr ::Unity::Services::Vivox::vx_participant_removed_reason Unity::Services::Vivox::vx_participant_removed_reason::participant_left{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_participant_removed_reason Unity::Services::Vivox::vx_participant_removed_reason::participant_timeout{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::vx_participant_removed_reason Unity::Services::Vivox::vx_participant_removed_reason::participant_kicked{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Services::Vivox::vx_participant_removed_reason Unity::Services::Vivox::vx_participant_removed_reason::participant_banned{ static_cast<int32_t>(0x3) };
