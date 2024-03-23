#pragma once
#include "Unity/Services/Vivox/zzzz__ParticipantPropertyUpdateFrequency_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency::ParticipantPropertyUpdateFrequency(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency::ParticipantPropertyUpdateFrequency() {}
constexpr ::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency Unity::Services::Vivox::ParticipantPropertyUpdateFrequency::StateChange{ static_cast<int32_t>(0x64) };
constexpr ::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency Unity::Services::Vivox::ParticipantPropertyUpdateFrequency::Never{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency Unity::Services::Vivox::ParticipantPropertyUpdateFrequency::OnePerSecond{ static_cast<int32_t>(0x32) };
constexpr ::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency Unity::Services::Vivox::ParticipantPropertyUpdateFrequency::FivePerSecond{ static_cast<int32_t>(0xa) };
constexpr ::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency Unity::Services::Vivox::ParticipantPropertyUpdateFrequency::TenPerSecond{ static_cast<int32_t>(0x5) };
