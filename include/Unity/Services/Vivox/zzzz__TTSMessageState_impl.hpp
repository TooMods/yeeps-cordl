#pragma once
#include "Unity/Services/Vivox/zzzz__TTSMessageState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::TTSMessageState::TTSMessageState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::TTSMessageState::TTSMessageState() {}
constexpr ::Unity::Services::Vivox::TTSMessageState Unity::Services::Vivox::TTSMessageState::NotEnqueued{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::TTSMessageState Unity::Services::Vivox::TTSMessageState::Enqueued{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::TTSMessageState Unity::Services::Vivox::TTSMessageState::Playing{ static_cast<int32_t>(0x2) };
