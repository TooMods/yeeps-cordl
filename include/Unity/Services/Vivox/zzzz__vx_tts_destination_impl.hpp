#pragma once
#include "Unity/Services/Vivox/zzzz__vx_tts_destination_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_tts_destination::vx_tts_destination(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_tts_destination::vx_tts_destination() {}
constexpr ::Unity::Services::Vivox::vx_tts_destination Unity::Services::Vivox::vx_tts_destination::tts_dest_remote_transmission{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_tts_destination Unity::Services::Vivox::vx_tts_destination::tts_dest_local_playback{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::vx_tts_destination Unity::Services::Vivox::vx_tts_destination::tts_dest_remote_transmission_with_local_playback{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Services::Vivox::vx_tts_destination Unity::Services::Vivox::vx_tts_destination::tts_dest_queued_remote_transmission{ static_cast<int32_t>(0x3) };
constexpr ::Unity::Services::Vivox::vx_tts_destination Unity::Services::Vivox::vx_tts_destination::tts_dest_queued_local_playback{ static_cast<int32_t>(0x4) };
constexpr ::Unity::Services::Vivox::vx_tts_destination Unity::Services::Vivox::vx_tts_destination::tts_dest_queued_remote_transmission_with_local_playback{ static_cast<int32_t>(0x5) };
constexpr ::Unity::Services::Vivox::vx_tts_destination Unity::Services::Vivox::vx_tts_destination::tts_dest_screen_reader{ static_cast<int32_t>(0x6) };
