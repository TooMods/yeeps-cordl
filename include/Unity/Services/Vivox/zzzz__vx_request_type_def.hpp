#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(vx_request_type)
// Forward declare root types
namespace Unity::Services::Vivox {
struct vx_request_type;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Vivox::vx_request_type);
// Type: Unity.Services.Vivox::vx_request_type
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::Unity.Services.Vivox::vx_request_type
struct CORDL_TYPE vx_request_type {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __vx_request_type_Unwrapped
  enum struct __vx_request_type_Unwrapped : int32_t {
    __E_req_none = static_cast<int32_t>(0x0),
    __E_req_connector_create = static_cast<int32_t>(0x1),
    __E_req_connector_initiate_shutdown = static_cast<int32_t>(0x2),
    __E_req_account_login = static_cast<int32_t>(0x3),
    __E_req_account_logout = static_cast<int32_t>(0x4),
    __E_req_account_set_login_properties = static_cast<int32_t>(0x5),
    __E_req_sessiongroup_create = static_cast<int32_t>(0x6),
    __E_req_sessiongroup_terminate = static_cast<int32_t>(0x7),
    __E_req_sessiongroup_add_session = static_cast<int32_t>(0x8),
    __E_req_sessiongroup_remove_session = static_cast<int32_t>(0x9),
    __E_req_sessiongroup_set_focus = static_cast<int32_t>(0xa),
    __E_req_sessiongroup_unset_focus = static_cast<int32_t>(0xb),
    __E_req_sessiongroup_reset_focus = static_cast<int32_t>(0xc),
    __E_req_sessiongroup_set_tx_session = static_cast<int32_t>(0xd),
    __E_req_sessiongroup_set_tx_all_sessions = static_cast<int32_t>(0xe),
    __E_req_sessiongroup_set_tx_no_session = static_cast<int32_t>(0xf),
    __E_req_session_create = static_cast<int32_t>(0x10),
    __E_req_session_media_connect = static_cast<int32_t>(0x12),
    __E_req_session_media_disconnect = static_cast<int32_t>(0x13),
    __E_req_session_terminate = static_cast<int32_t>(0x15),
    __E_req_session_mute_local_speaker = static_cast<int32_t>(0x16),
    __E_req_session_set_local_speaker_volume = static_cast<int32_t>(0x17),
    __E_req_session_set_local_render_volume = static_cast<int32_t>(0x18),
    __E_req_session_channel_invite_user = static_cast<int32_t>(0x19),
    __E_req_session_set_participant_volume_for_me = static_cast<int32_t>(0x1a),
    __E_req_session_set_participant_mute_for_me = static_cast<int32_t>(0x1b),
    __E_req_session_set_3d_position = static_cast<int32_t>(0x1c),
    __E_req_session_set_voice_font = static_cast<int32_t>(0x1d),
    __E_req_account_channel_add_acl = static_cast<int32_t>(0x35),
    __E_req_account_channel_remove_acl = static_cast<int32_t>(0x36),
    __E_req_account_channel_get_acl = static_cast<int32_t>(0x37),
    __E_req_channel_mute_user = static_cast<int32_t>(0x38),
    __E_req_channel_ban_user = static_cast<int32_t>(0x39),
    __E_req_channel_get_banned_users = static_cast<int32_t>(0x3a),
    __E_req_channel_kick_user = static_cast<int32_t>(0x3b),
    __E_req_channel_mute_all_users = static_cast<int32_t>(0x3c),
    __E_req_connector_mute_local_mic = static_cast<int32_t>(0x3d),
    __E_req_connector_mute_local_speaker = static_cast<int32_t>(0x3e),
    __E_req_connector_set_local_mic_volume = static_cast<int32_t>(0x3f),
    __E_req_connector_set_local_speaker_volume = static_cast<int32_t>(0x40),
    __E_req_connector_get_local_audio_info = static_cast<int32_t>(0x41),
    __E_req_account_buddy_set = static_cast<int32_t>(0x43),
    __E_req_account_buddy_delete = static_cast<int32_t>(0x44),
    __E_req_account_list_buddies_and_groups = static_cast<int32_t>(0x47),
    __E_req_session_send_message = static_cast<int32_t>(0x48),
    __E_req_account_set_presence = static_cast<int32_t>(0x49),
    __E_req_account_send_subscription_reply = static_cast<int32_t>(0x4a),
    __E_req_session_send_notification = static_cast<int32_t>(0x4b),
    __E_req_account_create_block_rule = static_cast<int32_t>(0x4c),
    __E_req_account_delete_block_rule = static_cast<int32_t>(0x4d),
    __E_req_account_list_block_rules = static_cast<int32_t>(0x4e),
    __E_req_account_create_auto_accept_rule = static_cast<int32_t>(0x4f),
    __E_req_account_delete_auto_accept_rule = static_cast<int32_t>(0x50),
    __E_req_account_list_auto_accept_rules = static_cast<int32_t>(0x51),
    __E_req_account_update_account = static_cast<int32_t>(0x52),
    __E_req_account_get_account = static_cast<int32_t>(0x53),
    __E_req_account_send_sms = static_cast<int32_t>(0x54),
    __E_req_aux_connectivity_info = static_cast<int32_t>(0x56),
    __E_req_aux_get_render_devices = static_cast<int32_t>(0x57),
    __E_req_aux_get_capture_devices = static_cast<int32_t>(0x58),
    __E_req_aux_set_render_device = static_cast<int32_t>(0x59),
    __E_req_aux_set_capture_device = static_cast<int32_t>(0x5a),
    __E_req_aux_get_mic_level = static_cast<int32_t>(0x5b),
    __E_req_aux_get_speaker_level = static_cast<int32_t>(0x5c),
    __E_req_aux_set_mic_level = static_cast<int32_t>(0x5d),
    __E_req_aux_set_speaker_level = static_cast<int32_t>(0x5e),
    __E_req_aux_render_audio_start = static_cast<int32_t>(0x5f),
    __E_req_aux_render_audio_stop = static_cast<int32_t>(0x60),
    __E_req_aux_capture_audio_start = static_cast<int32_t>(0x61),
    __E_req_aux_capture_audio_stop = static_cast<int32_t>(0x62),
    __E_req_aux_global_monitor_keyboard_mouse = static_cast<int32_t>(0x63),
    __E_req_aux_set_idle_timeout = static_cast<int32_t>(0x64),
    __E_req_aux_create_account = static_cast<int32_t>(0x65),
    __E_req_aux_reactivate_account = static_cast<int32_t>(0x66),
    __E_req_aux_deactivate_account = static_cast<int32_t>(0x67),
    __E_req_account_post_crash_dump = static_cast<int32_t>(0x68),
    __E_req_aux_reset_password = static_cast<int32_t>(0x69),
    __E_req_sessiongroup_set_session_3d_position = static_cast<int32_t>(0x6a),
    __E_req_account_get_session_fonts = static_cast<int32_t>(0x6b),
    __E_req_account_get_template_fonts = static_cast<int32_t>(0x6c),
    __E_req_aux_start_buffer_capture = static_cast<int32_t>(0x6d),
    __E_req_aux_play_audio_buffer = static_cast<int32_t>(0x6e),
    __E_req_sessiongroup_control_recording = static_cast<int32_t>(0x6f),
    __E_req_sessiongroup_control_playback = static_cast<int32_t>(0x70),
    __E_req_sessiongroup_set_playback_options = static_cast<int32_t>(0x71),
    __E_req_session_text_connect = static_cast<int32_t>(0x72),
    __E_req_session_text_disconnect = static_cast<int32_t>(0x73),
    __E_req_channel_set_lock_mode = static_cast<int32_t>(0x74),
    __E_req_aux_render_audio_modify = static_cast<int32_t>(0x75),
    __E_req_session_send_dtmf = static_cast<int32_t>(0x76),
    __E_req_aux_set_vad_properties = static_cast<int32_t>(0x78),
    __E_req_aux_get_vad_properties = static_cast<int32_t>(0x79),
    __E_req_sessiongroup_control_audio_injection = static_cast<int32_t>(0x7c),
    __E_req_account_channel_change_owner = static_cast<int32_t>(0x7d),
    __E_req_account_send_user_app_data = static_cast<int32_t>(0x80),
    __E_req_aux_diagnostic_state_dump = static_cast<int32_t>(0x81),
    __E_req_account_web_call = static_cast<int32_t>(0x82),
    __E_req_account_anonymous_login = static_cast<int32_t>(0x83),
    __E_req_account_authtoken_login = static_cast<int32_t>(0x84),
    __E_req_sessiongroup_get_stats = static_cast<int32_t>(0x85),
    __E_req_account_send_message = static_cast<int32_t>(0x86),
    __E_req_aux_notify_application_state_change = static_cast<int32_t>(0x87),
    __E_req_account_control_communications = static_cast<int32_t>(0x88),
    __E_req_session_archive_query = static_cast<int32_t>(0x89),
    __E_req_account_archive_query = static_cast<int32_t>(0x8a),
    __E_req_session_transcription_control = static_cast<int32_t>(0x8b),
    __E_req_aux_get_derumbler_properties = static_cast<int32_t>(0x8c),
    __E_req_aux_set_derumbler_properties = static_cast<int32_t>(0x8d),
    __E_req_session_chat_history_query = static_cast<int32_t>(0x8e),
    __E_req_account_chat_history_query = static_cast<int32_t>(0x8f),
    __E_req_account_chat_history_get_last_read = static_cast<int32_t>(0x90),
    __E_req_session_edit_message = static_cast<int32_t>(0x91),
    __E_req_account_edit_message = static_cast<int32_t>(0x92),
    __E_req_session_delete_message = static_cast<int32_t>(0x93),
    __E_req_account_delete_message = static_cast<int32_t>(0x94),
    __E_req_account_get_conversations = static_cast<int32_t>(0x95),
    __E_req_account_chat_history_set_marker = static_cast<int32_t>(0x96),
    __E_req_max = static_cast<int32_t>(0x97),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __vx_request_type_Unwrapped() const noexcept {
    return static_cast<__vx_request_type_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_request_type();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr vx_request_type(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field req_account_anonymous_login value: static_cast<int32_t>(0x83)
  static ::Unity::Services::Vivox::vx_request_type const req_account_anonymous_login;

  /// @brief Field req_account_archive_query value: static_cast<int32_t>(0x8a)
  static ::Unity::Services::Vivox::vx_request_type const req_account_archive_query;

  /// @brief Field req_account_authtoken_login value: static_cast<int32_t>(0x84)
  static ::Unity::Services::Vivox::vx_request_type const req_account_authtoken_login;

  /// @brief Field req_account_buddy_delete value: static_cast<int32_t>(0x44)
  static ::Unity::Services::Vivox::vx_request_type const req_account_buddy_delete;

  /// @brief Field req_account_buddy_set value: static_cast<int32_t>(0x43)
  static ::Unity::Services::Vivox::vx_request_type const req_account_buddy_set;

  /// @brief Field req_account_channel_add_acl value: static_cast<int32_t>(0x35)
  static ::Unity::Services::Vivox::vx_request_type const req_account_channel_add_acl;

  /// @brief Field req_account_channel_change_owner value: static_cast<int32_t>(0x7d)
  static ::Unity::Services::Vivox::vx_request_type const req_account_channel_change_owner;

  /// @brief Field req_account_channel_get_acl value: static_cast<int32_t>(0x37)
  static ::Unity::Services::Vivox::vx_request_type const req_account_channel_get_acl;

  /// @brief Field req_account_channel_remove_acl value: static_cast<int32_t>(0x36)
  static ::Unity::Services::Vivox::vx_request_type const req_account_channel_remove_acl;

  /// @brief Field req_account_chat_history_get_last_read value: static_cast<int32_t>(0x90)
  static ::Unity::Services::Vivox::vx_request_type const req_account_chat_history_get_last_read;

  /// @brief Field req_account_chat_history_query value: static_cast<int32_t>(0x8f)
  static ::Unity::Services::Vivox::vx_request_type const req_account_chat_history_query;

  /// @brief Field req_account_chat_history_set_marker value: static_cast<int32_t>(0x96)
  static ::Unity::Services::Vivox::vx_request_type const req_account_chat_history_set_marker;

  /// @brief Field req_account_control_communications value: static_cast<int32_t>(0x88)
  static ::Unity::Services::Vivox::vx_request_type const req_account_control_communications;

  /// @brief Field req_account_create_auto_accept_rule value: static_cast<int32_t>(0x4f)
  static ::Unity::Services::Vivox::vx_request_type const req_account_create_auto_accept_rule;

  /// @brief Field req_account_create_block_rule value: static_cast<int32_t>(0x4c)
  static ::Unity::Services::Vivox::vx_request_type const req_account_create_block_rule;

  /// @brief Field req_account_delete_auto_accept_rule value: static_cast<int32_t>(0x50)
  static ::Unity::Services::Vivox::vx_request_type const req_account_delete_auto_accept_rule;

  /// @brief Field req_account_delete_block_rule value: static_cast<int32_t>(0x4d)
  static ::Unity::Services::Vivox::vx_request_type const req_account_delete_block_rule;

  /// @brief Field req_account_delete_message value: static_cast<int32_t>(0x94)
  static ::Unity::Services::Vivox::vx_request_type const req_account_delete_message;

  /// @brief Field req_account_edit_message value: static_cast<int32_t>(0x92)
  static ::Unity::Services::Vivox::vx_request_type const req_account_edit_message;

  /// @brief Field req_account_get_account value: static_cast<int32_t>(0x53)
  static ::Unity::Services::Vivox::vx_request_type const req_account_get_account;

  /// @brief Field req_account_get_conversations value: static_cast<int32_t>(0x95)
  static ::Unity::Services::Vivox::vx_request_type const req_account_get_conversations;

  /// @brief Field req_account_get_session_fonts value: static_cast<int32_t>(0x6b)
  static ::Unity::Services::Vivox::vx_request_type const req_account_get_session_fonts;

  /// @brief Field req_account_get_template_fonts value: static_cast<int32_t>(0x6c)
  static ::Unity::Services::Vivox::vx_request_type const req_account_get_template_fonts;

  /// @brief Field req_account_list_auto_accept_rules value: static_cast<int32_t>(0x51)
  static ::Unity::Services::Vivox::vx_request_type const req_account_list_auto_accept_rules;

  /// @brief Field req_account_list_block_rules value: static_cast<int32_t>(0x4e)
  static ::Unity::Services::Vivox::vx_request_type const req_account_list_block_rules;

  /// @brief Field req_account_list_buddies_and_groups value: static_cast<int32_t>(0x47)
  static ::Unity::Services::Vivox::vx_request_type const req_account_list_buddies_and_groups;

  /// @brief Field req_account_login value: static_cast<int32_t>(0x3)
  static ::Unity::Services::Vivox::vx_request_type const req_account_login;

  /// @brief Field req_account_logout value: static_cast<int32_t>(0x4)
  static ::Unity::Services::Vivox::vx_request_type const req_account_logout;

  /// @brief Field req_account_post_crash_dump value: static_cast<int32_t>(0x68)
  static ::Unity::Services::Vivox::vx_request_type const req_account_post_crash_dump;

  /// @brief Field req_account_send_message value: static_cast<int32_t>(0x86)
  static ::Unity::Services::Vivox::vx_request_type const req_account_send_message;

  /// @brief Field req_account_send_sms value: static_cast<int32_t>(0x54)
  static ::Unity::Services::Vivox::vx_request_type const req_account_send_sms;

  /// @brief Field req_account_send_subscription_reply value: static_cast<int32_t>(0x4a)
  static ::Unity::Services::Vivox::vx_request_type const req_account_send_subscription_reply;

  /// @brief Field req_account_send_user_app_data value: static_cast<int32_t>(0x80)
  static ::Unity::Services::Vivox::vx_request_type const req_account_send_user_app_data;

  /// @brief Field req_account_set_login_properties value: static_cast<int32_t>(0x5)
  static ::Unity::Services::Vivox::vx_request_type const req_account_set_login_properties;

  /// @brief Field req_account_set_presence value: static_cast<int32_t>(0x49)
  static ::Unity::Services::Vivox::vx_request_type const req_account_set_presence;

  /// @brief Field req_account_update_account value: static_cast<int32_t>(0x52)
  static ::Unity::Services::Vivox::vx_request_type const req_account_update_account;

  /// @brief Field req_account_web_call value: static_cast<int32_t>(0x82)
  static ::Unity::Services::Vivox::vx_request_type const req_account_web_call;

  /// @brief Field req_aux_capture_audio_start value: static_cast<int32_t>(0x61)
  static ::Unity::Services::Vivox::vx_request_type const req_aux_capture_audio_start;

  /// @brief Field req_aux_capture_audio_stop value: static_cast<int32_t>(0x62)
  static ::Unity::Services::Vivox::vx_request_type const req_aux_capture_audio_stop;

  /// @brief Field req_aux_connectivity_info value: static_cast<int32_t>(0x56)
  static ::Unity::Services::Vivox::vx_request_type const req_aux_connectivity_info;

  /// @brief Field req_aux_create_account value: static_cast<int32_t>(0x65)
  static ::Unity::Services::Vivox::vx_request_type const req_aux_create_account;

  /// @brief Field req_aux_deactivate_account value: static_cast<int32_t>(0x67)
  static ::Unity::Services::Vivox::vx_request_type const req_aux_deactivate_account;

  /// @brief Field req_aux_diagnostic_state_dump value: static_cast<int32_t>(0x81)
  static ::Unity::Services::Vivox::vx_request_type const req_aux_diagnostic_state_dump;

  /// @brief Field req_aux_get_capture_devices value: static_cast<int32_t>(0x58)
  static ::Unity::Services::Vivox::vx_request_type const req_aux_get_capture_devices;

  /// @brief Field req_aux_get_derumbler_properties value: static_cast<int32_t>(0x8c)
  static ::Unity::Services::Vivox::vx_request_type const req_aux_get_derumbler_properties;

  /// @brief Field req_aux_get_mic_level value: static_cast<int32_t>(0x5b)
  static ::Unity::Services::Vivox::vx_request_type const req_aux_get_mic_level;

  /// @brief Field req_aux_get_render_devices value: static_cast<int32_t>(0x57)
  static ::Unity::Services::Vivox::vx_request_type const req_aux_get_render_devices;

  /// @brief Field req_aux_get_speaker_level value: static_cast<int32_t>(0x5c)
  static ::Unity::Services::Vivox::vx_request_type const req_aux_get_speaker_level;

  /// @brief Field req_aux_get_vad_properties value: static_cast<int32_t>(0x79)
  static ::Unity::Services::Vivox::vx_request_type const req_aux_get_vad_properties;

  /// @brief Field req_aux_global_monitor_keyboard_mouse value: static_cast<int32_t>(0x63)
  static ::Unity::Services::Vivox::vx_request_type const req_aux_global_monitor_keyboard_mouse;

  /// @brief Field req_aux_notify_application_state_change value: static_cast<int32_t>(0x87)
  static ::Unity::Services::Vivox::vx_request_type const req_aux_notify_application_state_change;

  /// @brief Field req_aux_play_audio_buffer value: static_cast<int32_t>(0x6e)
  static ::Unity::Services::Vivox::vx_request_type const req_aux_play_audio_buffer;

  /// @brief Field req_aux_reactivate_account value: static_cast<int32_t>(0x66)
  static ::Unity::Services::Vivox::vx_request_type const req_aux_reactivate_account;

  /// @brief Field req_aux_render_audio_modify value: static_cast<int32_t>(0x75)
  static ::Unity::Services::Vivox::vx_request_type const req_aux_render_audio_modify;

  /// @brief Field req_aux_render_audio_start value: static_cast<int32_t>(0x5f)
  static ::Unity::Services::Vivox::vx_request_type const req_aux_render_audio_start;

  /// @brief Field req_aux_render_audio_stop value: static_cast<int32_t>(0x60)
  static ::Unity::Services::Vivox::vx_request_type const req_aux_render_audio_stop;

  /// @brief Field req_aux_reset_password value: static_cast<int32_t>(0x69)
  static ::Unity::Services::Vivox::vx_request_type const req_aux_reset_password;

  /// @brief Field req_aux_set_capture_device value: static_cast<int32_t>(0x5a)
  static ::Unity::Services::Vivox::vx_request_type const req_aux_set_capture_device;

  /// @brief Field req_aux_set_derumbler_properties value: static_cast<int32_t>(0x8d)
  static ::Unity::Services::Vivox::vx_request_type const req_aux_set_derumbler_properties;

  /// @brief Field req_aux_set_idle_timeout value: static_cast<int32_t>(0x64)
  static ::Unity::Services::Vivox::vx_request_type const req_aux_set_idle_timeout;

  /// @brief Field req_aux_set_mic_level value: static_cast<int32_t>(0x5d)
  static ::Unity::Services::Vivox::vx_request_type const req_aux_set_mic_level;

  /// @brief Field req_aux_set_render_device value: static_cast<int32_t>(0x59)
  static ::Unity::Services::Vivox::vx_request_type const req_aux_set_render_device;

  /// @brief Field req_aux_set_speaker_level value: static_cast<int32_t>(0x5e)
  static ::Unity::Services::Vivox::vx_request_type const req_aux_set_speaker_level;

  /// @brief Field req_aux_set_vad_properties value: static_cast<int32_t>(0x78)
  static ::Unity::Services::Vivox::vx_request_type const req_aux_set_vad_properties;

  /// @brief Field req_aux_start_buffer_capture value: static_cast<int32_t>(0x6d)
  static ::Unity::Services::Vivox::vx_request_type const req_aux_start_buffer_capture;

  /// @brief Field req_channel_ban_user value: static_cast<int32_t>(0x39)
  static ::Unity::Services::Vivox::vx_request_type const req_channel_ban_user;

  /// @brief Field req_channel_get_banned_users value: static_cast<int32_t>(0x3a)
  static ::Unity::Services::Vivox::vx_request_type const req_channel_get_banned_users;

  /// @brief Field req_channel_kick_user value: static_cast<int32_t>(0x3b)
  static ::Unity::Services::Vivox::vx_request_type const req_channel_kick_user;

  /// @brief Field req_channel_mute_all_users value: static_cast<int32_t>(0x3c)
  static ::Unity::Services::Vivox::vx_request_type const req_channel_mute_all_users;

  /// @brief Field req_channel_mute_user value: static_cast<int32_t>(0x38)
  static ::Unity::Services::Vivox::vx_request_type const req_channel_mute_user;

  /// @brief Field req_channel_set_lock_mode value: static_cast<int32_t>(0x74)
  static ::Unity::Services::Vivox::vx_request_type const req_channel_set_lock_mode;

  /// @brief Field req_connector_create value: static_cast<int32_t>(0x1)
  static ::Unity::Services::Vivox::vx_request_type const req_connector_create;

  /// @brief Field req_connector_get_local_audio_info value: static_cast<int32_t>(0x41)
  static ::Unity::Services::Vivox::vx_request_type const req_connector_get_local_audio_info;

  /// @brief Field req_connector_initiate_shutdown value: static_cast<int32_t>(0x2)
  static ::Unity::Services::Vivox::vx_request_type const req_connector_initiate_shutdown;

  /// @brief Field req_connector_mute_local_mic value: static_cast<int32_t>(0x3d)
  static ::Unity::Services::Vivox::vx_request_type const req_connector_mute_local_mic;

  /// @brief Field req_connector_mute_local_speaker value: static_cast<int32_t>(0x3e)
  static ::Unity::Services::Vivox::vx_request_type const req_connector_mute_local_speaker;

  /// @brief Field req_connector_set_local_mic_volume value: static_cast<int32_t>(0x3f)
  static ::Unity::Services::Vivox::vx_request_type const req_connector_set_local_mic_volume;

  /// @brief Field req_connector_set_local_speaker_volume value: static_cast<int32_t>(0x40)
  static ::Unity::Services::Vivox::vx_request_type const req_connector_set_local_speaker_volume;

  /// @brief Field req_max value: static_cast<int32_t>(0x97)
  static ::Unity::Services::Vivox::vx_request_type const req_max;

  /// @brief Field req_none value: static_cast<int32_t>(0x0)
  static ::Unity::Services::Vivox::vx_request_type const req_none;

  /// @brief Field req_session_archive_query value: static_cast<int32_t>(0x89)
  static ::Unity::Services::Vivox::vx_request_type const req_session_archive_query;

  /// @brief Field req_session_channel_invite_user value: static_cast<int32_t>(0x19)
  static ::Unity::Services::Vivox::vx_request_type const req_session_channel_invite_user;

  /// @brief Field req_session_chat_history_query value: static_cast<int32_t>(0x8e)
  static ::Unity::Services::Vivox::vx_request_type const req_session_chat_history_query;

  /// @brief Field req_session_create value: static_cast<int32_t>(0x10)
  static ::Unity::Services::Vivox::vx_request_type const req_session_create;

  /// @brief Field req_session_delete_message value: static_cast<int32_t>(0x93)
  static ::Unity::Services::Vivox::vx_request_type const req_session_delete_message;

  /// @brief Field req_session_edit_message value: static_cast<int32_t>(0x91)
  static ::Unity::Services::Vivox::vx_request_type const req_session_edit_message;

  /// @brief Field req_session_media_connect value: static_cast<int32_t>(0x12)
  static ::Unity::Services::Vivox::vx_request_type const req_session_media_connect;

  /// @brief Field req_session_media_disconnect value: static_cast<int32_t>(0x13)
  static ::Unity::Services::Vivox::vx_request_type const req_session_media_disconnect;

  /// @brief Field req_session_mute_local_speaker value: static_cast<int32_t>(0x16)
  static ::Unity::Services::Vivox::vx_request_type const req_session_mute_local_speaker;

  /// @brief Field req_session_send_dtmf value: static_cast<int32_t>(0x76)
  static ::Unity::Services::Vivox::vx_request_type const req_session_send_dtmf;

  /// @brief Field req_session_send_message value: static_cast<int32_t>(0x48)
  static ::Unity::Services::Vivox::vx_request_type const req_session_send_message;

  /// @brief Field req_session_send_notification value: static_cast<int32_t>(0x4b)
  static ::Unity::Services::Vivox::vx_request_type const req_session_send_notification;

  /// @brief Field req_session_set_3d_position value: static_cast<int32_t>(0x1c)
  static ::Unity::Services::Vivox::vx_request_type const req_session_set_3d_position;

  /// @brief Field req_session_set_local_render_volume value: static_cast<int32_t>(0x18)
  static ::Unity::Services::Vivox::vx_request_type const req_session_set_local_render_volume;

  /// @brief Field req_session_set_local_speaker_volume value: static_cast<int32_t>(0x17)
  static ::Unity::Services::Vivox::vx_request_type const req_session_set_local_speaker_volume;

  /// @brief Field req_session_set_participant_mute_for_me value: static_cast<int32_t>(0x1b)
  static ::Unity::Services::Vivox::vx_request_type const req_session_set_participant_mute_for_me;

  /// @brief Field req_session_set_participant_volume_for_me value: static_cast<int32_t>(0x1a)
  static ::Unity::Services::Vivox::vx_request_type const req_session_set_participant_volume_for_me;

  /// @brief Field req_session_set_voice_font value: static_cast<int32_t>(0x1d)
  static ::Unity::Services::Vivox::vx_request_type const req_session_set_voice_font;

  /// @brief Field req_session_terminate value: static_cast<int32_t>(0x15)
  static ::Unity::Services::Vivox::vx_request_type const req_session_terminate;

  /// @brief Field req_session_text_connect value: static_cast<int32_t>(0x72)
  static ::Unity::Services::Vivox::vx_request_type const req_session_text_connect;

  /// @brief Field req_session_text_disconnect value: static_cast<int32_t>(0x73)
  static ::Unity::Services::Vivox::vx_request_type const req_session_text_disconnect;

  /// @brief Field req_session_transcription_control value: static_cast<int32_t>(0x8b)
  static ::Unity::Services::Vivox::vx_request_type const req_session_transcription_control;

  /// @brief Field req_sessiongroup_add_session value: static_cast<int32_t>(0x8)
  static ::Unity::Services::Vivox::vx_request_type const req_sessiongroup_add_session;

  /// @brief Field req_sessiongroup_control_audio_injection value: static_cast<int32_t>(0x7c)
  static ::Unity::Services::Vivox::vx_request_type const req_sessiongroup_control_audio_injection;

  /// @brief Field req_sessiongroup_control_playback value: static_cast<int32_t>(0x70)
  static ::Unity::Services::Vivox::vx_request_type const req_sessiongroup_control_playback;

  /// @brief Field req_sessiongroup_control_recording value: static_cast<int32_t>(0x6f)
  static ::Unity::Services::Vivox::vx_request_type const req_sessiongroup_control_recording;

  /// @brief Field req_sessiongroup_create value: static_cast<int32_t>(0x6)
  static ::Unity::Services::Vivox::vx_request_type const req_sessiongroup_create;

  /// @brief Field req_sessiongroup_get_stats value: static_cast<int32_t>(0x85)
  static ::Unity::Services::Vivox::vx_request_type const req_sessiongroup_get_stats;

  /// @brief Field req_sessiongroup_remove_session value: static_cast<int32_t>(0x9)
  static ::Unity::Services::Vivox::vx_request_type const req_sessiongroup_remove_session;

  /// @brief Field req_sessiongroup_reset_focus value: static_cast<int32_t>(0xc)
  static ::Unity::Services::Vivox::vx_request_type const req_sessiongroup_reset_focus;

  /// @brief Field req_sessiongroup_set_focus value: static_cast<int32_t>(0xa)
  static ::Unity::Services::Vivox::vx_request_type const req_sessiongroup_set_focus;

  /// @brief Field req_sessiongroup_set_playback_options value: static_cast<int32_t>(0x71)
  static ::Unity::Services::Vivox::vx_request_type const req_sessiongroup_set_playback_options;

  /// @brief Field req_sessiongroup_set_session_3d_position value: static_cast<int32_t>(0x6a)
  static ::Unity::Services::Vivox::vx_request_type const req_sessiongroup_set_session_3d_position;

  /// @brief Field req_sessiongroup_set_tx_all_sessions value: static_cast<int32_t>(0xe)
  static ::Unity::Services::Vivox::vx_request_type const req_sessiongroup_set_tx_all_sessions;

  /// @brief Field req_sessiongroup_set_tx_no_session value: static_cast<int32_t>(0xf)
  static ::Unity::Services::Vivox::vx_request_type const req_sessiongroup_set_tx_no_session;

  /// @brief Field req_sessiongroup_set_tx_session value: static_cast<int32_t>(0xd)
  static ::Unity::Services::Vivox::vx_request_type const req_sessiongroup_set_tx_session;

  /// @brief Field req_sessiongroup_terminate value: static_cast<int32_t>(0x7)
  static ::Unity::Services::Vivox::vx_request_type const req_sessiongroup_terminate;

  /// @brief Field req_sessiongroup_unset_focus value: static_cast<int32_t>(0xb)
  static ::Unity::Services::Vivox::vx_request_type const req_sessiongroup_unset_focus;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_request_type, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_request_type, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Services::Vivox
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_request_type, "Unity.Services.Vivox", "vx_request_type");
