#pragma once
#include "Unity/Services/Vivox/zzzz__vx_participant_type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_participant_type::vx_participant_type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_participant_type::vx_participant_type() {}
constexpr ::Unity::Services::Vivox::vx_participant_type Unity::Services::Vivox::vx_participant_type::participant_user{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_participant_type Unity::Services::Vivox::vx_participant_type::part_user{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_participant_type Unity::Services::Vivox::vx_participant_type::participant_moderator{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::vx_participant_type Unity::Services::Vivox::vx_participant_type::part_moderator{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::vx_participant_type Unity::Services::Vivox::vx_participant_type::participant_owner{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Services::Vivox::vx_participant_type Unity::Services::Vivox::vx_participant_type::part_focus{ static_cast<int32_t>(0x2) };
