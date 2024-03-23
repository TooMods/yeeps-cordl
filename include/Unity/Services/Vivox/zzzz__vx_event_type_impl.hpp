#pragma once
#include "Unity/Services/Vivox/zzzz__vx_event_type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_event_type::vx_event_type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_event_type::vx_event_type() {}
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_none{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_account_login_state_change{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_buddy_presence{ static_cast<int32_t>(0x7) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_subscription{ static_cast<int32_t>(0x8) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_session_notification{ static_cast<int32_t>(0x9) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_message{ static_cast<int32_t>(0xa) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_aux_audio_properties{ static_cast<int32_t>(0xb) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_buddy_changed{ static_cast<int32_t>(0xf) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_buddy_group_changed{ static_cast<int32_t>(0x10) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_buddy_and_group_list_changed{ static_cast<int32_t>(0x11) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_keyboard_mouse{ static_cast<int32_t>(0x12) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_idle_state_changed{ static_cast<int32_t>(0x13) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_media_stream_updated{ static_cast<int32_t>(0x14) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_text_stream_updated{ static_cast<int32_t>(0x15) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_sessiongroup_added{ static_cast<int32_t>(0x16) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_sessiongroup_removed{ static_cast<int32_t>(0x17) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_session_added{ static_cast<int32_t>(0x18) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_session_removed{ static_cast<int32_t>(0x19) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_participant_added{ static_cast<int32_t>(0x1a) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_participant_removed{ static_cast<int32_t>(0x1b) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_participant_updated{ static_cast<int32_t>(0x1c) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_sessiongroup_playback_frame_played{ static_cast<int32_t>(0x1e) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_session_updated{ static_cast<int32_t>(0x1f) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_sessiongroup_updated{ static_cast<int32_t>(0x20) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_media_completion{ static_cast<int32_t>(0x21) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_server_app_data{ static_cast<int32_t>(0x23) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_user_app_data{ static_cast<int32_t>(0x24) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_network_message{ static_cast<int32_t>(0x26) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_voice_service_connection_state_changed{ static_cast<int32_t>(0x27) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_publication_state_changed{ static_cast<int32_t>(0x28) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_audio_device_hot_swap{ static_cast<int32_t>(0x29) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_user_to_user_message{ static_cast<int32_t>(0x2a) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_session_archive_message{ static_cast<int32_t>(0x2b) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_session_archive_query_end{ static_cast<int32_t>(0x2c) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_account_archive_message{ static_cast<int32_t>(0x2d) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_account_archive_query_end{ static_cast<int32_t>(0x2e) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_account_send_message_failed{ static_cast<int32_t>(0x2f) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_transcribed_message{ static_cast<int32_t>(0x30) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_tts_injection_started{ static_cast<int32_t>(0x31) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_tts_injection_ended{ static_cast<int32_t>(0x32) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_tts_injection_failed{ static_cast<int32_t>(0x33) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_stt_failed{ static_cast<int32_t>(0x34) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_connection_state_changed{ static_cast<int32_t>(0x35) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_presence_updated{ static_cast<int32_t>(0x36) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_session_edit_message{ static_cast<int32_t>(0x37) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_account_edit_message{ static_cast<int32_t>(0x38) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_session_delete_message{ static_cast<int32_t>(0x39) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_account_delete_message{ static_cast<int32_t>(0x3a) };
constexpr ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_event_type::evt_max{ static_cast<int32_t>(0x3b) };
