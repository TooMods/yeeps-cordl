#pragma once
#include "Unity/Services/Vivox/zzzz__vx_tts_status_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_tts_status::vx_tts_status(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_tts_status::vx_tts_status() {}
constexpr ::Unity::Services::Vivox::vx_tts_status Unity::Services::Vivox::vx_tts_status::tts_status_success{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_tts_status Unity::Services::Vivox::vx_tts_status::tts_error_invalid_engine_type{ static_cast<int32_t>(0xfffffc17) };
constexpr ::Unity::Services::Vivox::vx_tts_status Unity::Services::Vivox::vx_tts_status::tts_error_engine_allocation_failed{ static_cast<int32_t>(0xfffffc16) };
constexpr ::Unity::Services::Vivox::vx_tts_status Unity::Services::Vivox::vx_tts_status::tts_error_not_supported{ static_cast<int32_t>(0xfffffc15) };
constexpr ::Unity::Services::Vivox::vx_tts_status Unity::Services::Vivox::vx_tts_status::tts_error_max_characters_exceeded{ static_cast<int32_t>(0xfffffc14) };
constexpr ::Unity::Services::Vivox::vx_tts_status Unity::Services::Vivox::vx_tts_status::tts_error_utterance_below_min_duration{ static_cast<int32_t>(0xfffffc13) };
constexpr ::Unity::Services::Vivox::vx_tts_status Unity::Services::Vivox::vx_tts_status::tts_status_input_text_was_enqueued{ static_cast<int32_t>(0xfffffc12) };
constexpr ::Unity::Services::Vivox::vx_tts_status Unity::Services::Vivox::vx_tts_status::tts_error_sdk_not_initialized{ static_cast<int32_t>(0xfffffc11) };
constexpr ::Unity::Services::Vivox::vx_tts_status Unity::Services::Vivox::vx_tts_status::tts_error_destination_queue_is_full{ static_cast<int32_t>(0xfffffc10) };
constexpr ::Unity::Services::Vivox::vx_tts_status Unity::Services::Vivox::vx_tts_status::tts_status_enqueue_not_necessary{ static_cast<int32_t>(0xfffffc0f) };
constexpr ::Unity::Services::Vivox::vx_tts_status Unity::Services::Vivox::vx_tts_status::tts_error_utterance_not_found{ static_cast<int32_t>(0xfffffc0e) };
constexpr ::Unity::Services::Vivox::vx_tts_status Unity::Services::Vivox::vx_tts_status::tts_error_manager_not_found{ static_cast<int32_t>(0xfffffc0d) };
constexpr ::Unity::Services::Vivox::vx_tts_status Unity::Services::Vivox::vx_tts_status::tts_error_invalid_argument{ static_cast<int32_t>(0xfffffc0c) };
constexpr ::Unity::Services::Vivox::vx_tts_status Unity::Services::Vivox::vx_tts_status::tts_error_internal{ static_cast<int32_t>(0xfffffc0b) };
