#pragma once
#include "Unity/Services/Vivox/zzzz__TextToSpeechMessageType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::TextToSpeechMessageType::TextToSpeechMessageType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::TextToSpeechMessageType::TextToSpeechMessageType() {}
constexpr ::Unity::Services::Vivox::TextToSpeechMessageType Unity::Services::Vivox::TextToSpeechMessageType::RemoteTransmission{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::TextToSpeechMessageType Unity::Services::Vivox::TextToSpeechMessageType::LocalPlayback{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::TextToSpeechMessageType Unity::Services::Vivox::TextToSpeechMessageType::RemoteTransmissionWithLocalPlayback{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Services::Vivox::TextToSpeechMessageType Unity::Services::Vivox::TextToSpeechMessageType::QueuedRemoteTransmission{ static_cast<int32_t>(0x3) };
constexpr ::Unity::Services::Vivox::TextToSpeechMessageType Unity::Services::Vivox::TextToSpeechMessageType::QueuedLocalPlayback{ static_cast<int32_t>(0x4) };
constexpr ::Unity::Services::Vivox::TextToSpeechMessageType Unity::Services::Vivox::TextToSpeechMessageType::QueuedRemoteTransmissionWithLocalPlayback{ static_cast<int32_t>(0x5) };
constexpr ::Unity::Services::Vivox::TextToSpeechMessageType Unity::Services::Vivox::TextToSpeechMessageType::ScreenReader{ static_cast<int32_t>(0x6) };
