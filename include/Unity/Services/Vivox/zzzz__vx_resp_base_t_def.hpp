#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(vx_resp_base_t)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
namespace Unity::Services::Vivox {
class vx_message_base_t;
}
namespace Unity::Services::Vivox {
class vx_req_base_t;
}
namespace Unity::Services::Vivox {
class vx_resp_account_anonymous_login_t;
}
namespace Unity::Services::Vivox {
class vx_resp_account_archive_query_t;
}
namespace Unity::Services::Vivox {
class vx_resp_account_authtoken_login_t;
}
namespace Unity::Services::Vivox {
class vx_resp_account_buddy_delete_t;
}
namespace Unity::Services::Vivox {
class vx_resp_account_buddy_set_t;
}
namespace Unity::Services::Vivox {
class vx_resp_account_channel_add_acl_t;
}
namespace Unity::Services::Vivox {
class vx_resp_account_channel_change_owner_t;
}
namespace Unity::Services::Vivox {
class vx_resp_account_channel_get_acl_t;
}
namespace Unity::Services::Vivox {
class vx_resp_account_channel_remove_acl_t;
}
namespace Unity::Services::Vivox {
class vx_resp_account_chat_history_get_last_read_t;
}
namespace Unity::Services::Vivox {
class vx_resp_account_chat_history_query_t;
}
namespace Unity::Services::Vivox {
class vx_resp_account_chat_history_set_marker_t;
}
namespace Unity::Services::Vivox {
class vx_resp_account_control_communications_t;
}
namespace Unity::Services::Vivox {
class vx_resp_account_create_auto_accept_rule_t;
}
namespace Unity::Services::Vivox {
class vx_resp_account_create_block_rule_t;
}
namespace Unity::Services::Vivox {
class vx_resp_account_delete_auto_accept_rule_t;
}
namespace Unity::Services::Vivox {
class vx_resp_account_delete_block_rule_t;
}
namespace Unity::Services::Vivox {
class vx_resp_account_delete_message_t;
}
namespace Unity::Services::Vivox {
class vx_resp_account_edit_message_t;
}
namespace Unity::Services::Vivox {
class vx_resp_account_get_account_t;
}
namespace Unity::Services::Vivox {
class vx_resp_account_get_conversations_t;
}
namespace Unity::Services::Vivox {
class vx_resp_account_get_session_fonts_t;
}
namespace Unity::Services::Vivox {
class vx_resp_account_get_template_fonts_t;
}
namespace Unity::Services::Vivox {
class vx_resp_account_list_auto_accept_rules_t;
}
namespace Unity::Services::Vivox {
class vx_resp_account_list_block_rules_t;
}
namespace Unity::Services::Vivox {
class vx_resp_account_list_buddies_and_groups_t;
}
namespace Unity::Services::Vivox {
class vx_resp_account_login_t;
}
namespace Unity::Services::Vivox {
class vx_resp_account_logout_t;
}
namespace Unity::Services::Vivox {
class vx_resp_account_post_crash_dump_t;
}
namespace Unity::Services::Vivox {
class vx_resp_account_send_message_t;
}
namespace Unity::Services::Vivox {
class vx_resp_account_send_sms_t;
}
namespace Unity::Services::Vivox {
class vx_resp_account_send_subscription_reply_t;
}
namespace Unity::Services::Vivox {
class vx_resp_account_send_user_app_data_t;
}
namespace Unity::Services::Vivox {
class vx_resp_account_set_login_properties_t;
}
namespace Unity::Services::Vivox {
class vx_resp_account_set_presence_t;
}
namespace Unity::Services::Vivox {
class vx_resp_account_update_account_t;
}
namespace Unity::Services::Vivox {
class vx_resp_account_web_call_t;
}
namespace Unity::Services::Vivox {
class vx_resp_aux_capture_audio_start_t;
}
namespace Unity::Services::Vivox {
class vx_resp_aux_capture_audio_stop_t;
}
namespace Unity::Services::Vivox {
class vx_resp_aux_connectivity_info_t;
}
namespace Unity::Services::Vivox {
class vx_resp_aux_create_account_t;
}
namespace Unity::Services::Vivox {
class vx_resp_aux_deactivate_account_t;
}
namespace Unity::Services::Vivox {
class vx_resp_aux_diagnostic_state_dump_t;
}
namespace Unity::Services::Vivox {
class vx_resp_aux_get_capture_devices_t;
}
namespace Unity::Services::Vivox {
class vx_resp_aux_get_derumbler_properties_t;
}
namespace Unity::Services::Vivox {
class vx_resp_aux_get_mic_level_t;
}
namespace Unity::Services::Vivox {
class vx_resp_aux_get_render_devices_t;
}
namespace Unity::Services::Vivox {
class vx_resp_aux_get_speaker_level_t;
}
namespace Unity::Services::Vivox {
class vx_resp_aux_get_vad_properties_t;
}
namespace Unity::Services::Vivox {
class vx_resp_aux_global_monitor_keyboard_mouse_t;
}
namespace Unity::Services::Vivox {
class vx_resp_aux_notify_application_state_change_t;
}
namespace Unity::Services::Vivox {
class vx_resp_aux_play_audio_buffer_t;
}
namespace Unity::Services::Vivox {
class vx_resp_aux_reactivate_account_t;
}
namespace Unity::Services::Vivox {
class vx_resp_aux_render_audio_modify_t;
}
namespace Unity::Services::Vivox {
class vx_resp_aux_render_audio_start_t;
}
namespace Unity::Services::Vivox {
class vx_resp_aux_render_audio_stop_t;
}
namespace Unity::Services::Vivox {
class vx_resp_aux_reset_password_t;
}
namespace Unity::Services::Vivox {
class vx_resp_aux_set_capture_device_t;
}
namespace Unity::Services::Vivox {
class vx_resp_aux_set_derumbler_properties_t;
}
namespace Unity::Services::Vivox {
class vx_resp_aux_set_idle_timeout_t;
}
namespace Unity::Services::Vivox {
class vx_resp_aux_set_mic_level_t;
}
namespace Unity::Services::Vivox {
class vx_resp_aux_set_render_device_t;
}
namespace Unity::Services::Vivox {
class vx_resp_aux_set_speaker_level_t;
}
namespace Unity::Services::Vivox {
class vx_resp_aux_set_vad_properties_t;
}
namespace Unity::Services::Vivox {
class vx_resp_aux_start_buffer_capture_t;
}
namespace Unity::Services::Vivox {
class vx_resp_channel_ban_user_t;
}
namespace Unity::Services::Vivox {
class vx_resp_channel_get_banned_users_t;
}
namespace Unity::Services::Vivox {
class vx_resp_channel_kick_user_t;
}
namespace Unity::Services::Vivox {
class vx_resp_channel_mute_all_users_t;
}
namespace Unity::Services::Vivox {
class vx_resp_channel_mute_user_t;
}
namespace Unity::Services::Vivox {
class vx_resp_channel_set_lock_mode_t;
}
namespace Unity::Services::Vivox {
class vx_resp_connector_create_t;
}
namespace Unity::Services::Vivox {
class vx_resp_connector_get_local_audio_info_t;
}
namespace Unity::Services::Vivox {
class vx_resp_connector_initiate_shutdown_t;
}
namespace Unity::Services::Vivox {
class vx_resp_connector_mute_local_mic_t;
}
namespace Unity::Services::Vivox {
class vx_resp_connector_mute_local_speaker_t;
}
namespace Unity::Services::Vivox {
class vx_resp_connector_set_local_mic_volume_t;
}
namespace Unity::Services::Vivox {
class vx_resp_connector_set_local_speaker_volume_t;
}
namespace Unity::Services::Vivox {
class vx_resp_session_archive_query_t;
}
namespace Unity::Services::Vivox {
class vx_resp_session_channel_invite_user_t;
}
namespace Unity::Services::Vivox {
class vx_resp_session_chat_history_query_t;
}
namespace Unity::Services::Vivox {
class vx_resp_session_create_t;
}
namespace Unity::Services::Vivox {
class vx_resp_session_delete_message_t;
}
namespace Unity::Services::Vivox {
class vx_resp_session_edit_message_t;
}
namespace Unity::Services::Vivox {
class vx_resp_session_media_connect_t;
}
namespace Unity::Services::Vivox {
class vx_resp_session_media_disconnect_t;
}
namespace Unity::Services::Vivox {
class vx_resp_session_mute_local_speaker_t;
}
namespace Unity::Services::Vivox {
class vx_resp_session_send_dtmf_t;
}
namespace Unity::Services::Vivox {
class vx_resp_session_send_message_t;
}
namespace Unity::Services::Vivox {
class vx_resp_session_send_notification_t;
}
namespace Unity::Services::Vivox {
class vx_resp_session_set_3d_position_t;
}
namespace Unity::Services::Vivox {
class vx_resp_session_set_local_render_volume_t;
}
namespace Unity::Services::Vivox {
class vx_resp_session_set_local_speaker_volume_t;
}
namespace Unity::Services::Vivox {
class vx_resp_session_set_participant_mute_for_me_t;
}
namespace Unity::Services::Vivox {
class vx_resp_session_set_participant_volume_for_me_t;
}
namespace Unity::Services::Vivox {
class vx_resp_session_set_voice_font_t;
}
namespace Unity::Services::Vivox {
class vx_resp_session_terminate_t;
}
namespace Unity::Services::Vivox {
class vx_resp_session_text_connect_t;
}
namespace Unity::Services::Vivox {
class vx_resp_session_text_disconnect_t;
}
namespace Unity::Services::Vivox {
class vx_resp_session_transcription_control_t;
}
namespace Unity::Services::Vivox {
class vx_resp_sessiongroup_add_session_t;
}
namespace Unity::Services::Vivox {
class vx_resp_sessiongroup_control_audio_injection_t;
}
namespace Unity::Services::Vivox {
class vx_resp_sessiongroup_create_t;
}
namespace Unity::Services::Vivox {
class vx_resp_sessiongroup_get_stats_t;
}
namespace Unity::Services::Vivox {
class vx_resp_sessiongroup_remove_session_t;
}
namespace Unity::Services::Vivox {
class vx_resp_sessiongroup_reset_focus_t;
}
namespace Unity::Services::Vivox {
class vx_resp_sessiongroup_set_focus_t;
}
namespace Unity::Services::Vivox {
class vx_resp_sessiongroup_set_session_3d_position_t;
}
namespace Unity::Services::Vivox {
class vx_resp_sessiongroup_set_tx_all_sessions_t;
}
namespace Unity::Services::Vivox {
class vx_resp_sessiongroup_set_tx_no_session_t;
}
namespace Unity::Services::Vivox {
class vx_resp_sessiongroup_set_tx_session_t;
}
namespace Unity::Services::Vivox {
class vx_resp_sessiongroup_terminate_t;
}
namespace Unity::Services::Vivox {
class vx_resp_sessiongroup_unset_focus_t;
}
namespace Unity::Services::Vivox {
struct vx_response_type;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class vx_resp_base_t;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::vx_resp_base_t);
// Type: Unity.Services.Vivox::vx_resp_base_t
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::vx_resp_base_t*
class CORDL_TYPE vx_resp_base_t : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_extended_status_info, put = set_extended_status_info))::StringW extended_status_info;

  __declspec(property(get = get_message, put = set_message))::Unity::Services::Vivox::vx_message_base_t* message;

  __declspec(property(get = get_request, put = set_request))::Unity::Services::Vivox::vx_req_base_t* request;

  __declspec(property(get = get_return_code, put = set_return_code)) int32_t return_code;

  __declspec(property(get = get_status_code, put = set_status_code)) int32_t status_code;

  __declspec(property(get = get_status_string, put = set_status_string))::StringW status_string;

  /// @brief Field swigCMemOwn, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_swigCMemOwn, put = __cordl_internal_set_swigCMemOwn)) bool swigCMemOwn;

  /// @brief Field swigCPtr, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_swigCPtr, put = __cordl_internal_set_swigCPtr))::System::Runtime::InteropServices::HandleRef swigCPtr;

  __declspec(property(get = get_type, put = set_type))::Unity::Services::Vivox::vx_response_type type;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x2a052a8, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x2a053b4, size 0x180, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x2a05314, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Unity::Services::Vivox::vx_resp_base_t* New_ctor();

  static inline ::Unity::Services::Vivox::vx_resp_base_t* New_ctor(void* cPtr, bool cMemoryOwn);

  constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

  constexpr bool& __cordl_internal_get_swigCMemOwn();

  constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

  constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr();

  constexpr void __cordl_internal_set_swigCMemOwn(bool value);

  constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef value);

  /// @brief Method .ctor, addr 0x2a0c9c4, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x29e60f0, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(void* cPtr, bool cMemoryOwn);

  /// @brief Method as_vx_resp_account_anonymous_login, addr 0x2a0591c, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_account_anonymous_login_t* as_vx_resp_account_anonymous_login();

  /// @brief Method as_vx_resp_account_archive_query, addr 0x2a0bd00, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_account_archive_query_t* as_vx_resp_account_archive_query();

  /// @brief Method as_vx_resp_account_authtoken_login, addr 0x2a05814, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_account_authtoken_login_t* as_vx_resp_account_authtoken_login();

  /// @brief Method as_vx_resp_account_buddy_delete, addr 0x2a08358, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_account_buddy_delete_t* as_vx_resp_account_buddy_delete();

  /// @brief Method as_vx_resp_account_buddy_set, addr 0x2a08250, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_account_buddy_set_t* as_vx_resp_account_buddy_set();

  /// @brief Method as_vx_resp_account_channel_add_acl, addr 0x2a0756c, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_account_channel_add_acl_t* as_vx_resp_account_channel_add_acl();

  /// @brief Method as_vx_resp_account_channel_change_owner, addr 0x2a0735c, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_account_channel_change_owner_t* as_vx_resp_account_channel_change_owner();

  /// @brief Method as_vx_resp_account_channel_get_acl, addr 0x2a0777c, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_account_channel_get_acl_t* as_vx_resp_account_channel_get_acl();

  /// @brief Method as_vx_resp_account_channel_remove_acl, addr 0x2a07674, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_account_channel_remove_acl_t* as_vx_resp_account_channel_remove_acl();

  /// @brief Method as_vx_resp_account_chat_history_get_last_read, addr 0x2a08ae4, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_account_chat_history_get_last_read_t* as_vx_resp_account_chat_history_get_last_read();

  /// @brief Method as_vx_resp_account_chat_history_query, addr 0x2a0be08, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_account_chat_history_query_t* as_vx_resp_account_chat_history_query();

  /// @brief Method as_vx_resp_account_chat_history_set_marker, addr 0x2a089dc, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_account_chat_history_set_marker_t* as_vx_resp_account_chat_history_set_marker();

  /// @brief Method as_vx_resp_account_control_communications, addr 0x2a0c120, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_account_control_communications_t* as_vx_resp_account_control_communications();

  /// @brief Method as_vx_resp_account_create_auto_accept_rule, addr 0x2a092dc, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_account_create_auto_accept_rule_t* as_vx_resp_account_create_auto_accept_rule();

  /// @brief Method as_vx_resp_account_create_block_rule, addr 0x2a08fc4, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_account_create_block_rule_t* as_vx_resp_account_create_block_rule();

  /// @brief Method as_vx_resp_account_delete_auto_accept_rule, addr 0x2a093e4, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_account_delete_auto_accept_rule_t* as_vx_resp_account_delete_auto_accept_rule();

  /// @brief Method as_vx_resp_account_delete_block_rule, addr 0x2a090cc, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_account_delete_block_rule_t* as_vx_resp_account_delete_block_rule();

  /// @brief Method as_vx_resp_account_delete_message, addr 0x2a0baf0, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_account_delete_message_t* as_vx_resp_account_delete_message();

  /// @brief Method as_vx_resp_account_edit_message, addr 0x2a0bbf8, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_account_edit_message_t* as_vx_resp_account_edit_message();

  /// @brief Method as_vx_resp_account_get_account, addr 0x2a096fc, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_account_get_account_t* as_vx_resp_account_get_account();

  /// @brief Method as_vx_resp_account_get_conversations, addr 0x2a0bf10, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_account_get_conversations_t* as_vx_resp_account_get_conversations();

  /// @brief Method as_vx_resp_account_get_session_fonts, addr 0x2a0b2d4, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_account_get_session_fonts_t* as_vx_resp_account_get_session_fonts();

  /// @brief Method as_vx_resp_account_get_template_fonts, addr 0x2a0b3dc, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_account_get_template_fonts_t* as_vx_resp_account_get_template_fonts();

  /// @brief Method as_vx_resp_account_list_auto_accept_rules, addr 0x2a094ec, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_account_list_auto_accept_rules_t* as_vx_resp_account_list_auto_accept_rules();

  /// @brief Method as_vx_resp_account_list_block_rules, addr 0x2a091d4, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_account_list_block_rules_t* as_vx_resp_account_list_block_rules();

  /// @brief Method as_vx_resp_account_list_buddies_and_groups, addr 0x2a08460, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_account_list_buddies_and_groups_t* as_vx_resp_account_list_buddies_and_groups();

  /// @brief Method as_vx_resp_account_login, addr 0x2a0570c, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_account_login_t* as_vx_resp_account_login();

  /// @brief Method as_vx_resp_account_logout, addr 0x2a05a24, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_account_logout_t* as_vx_resp_account_logout();

  /// @brief Method as_vx_resp_account_post_crash_dump, addr 0x2a0b0c4, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_account_post_crash_dump_t* as_vx_resp_account_post_crash_dump();

  /// @brief Method as_vx_resp_account_send_message, addr 0x2a0b9e8, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_account_send_message_t* as_vx_resp_account_send_message();

  /// @brief Method as_vx_resp_account_send_sms, addr 0x2a09804, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_account_send_sms_t* as_vx_resp_account_send_sms();

  /// @brief Method as_vx_resp_account_send_subscription_reply, addr 0x2a08cf4, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_account_send_subscription_reply_t* as_vx_resp_account_send_subscription_reply();

  /// @brief Method as_vx_resp_account_send_user_app_data, addr 0x2a07464, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_account_send_user_app_data_t* as_vx_resp_account_send_user_app_data();

  /// @brief Method as_vx_resp_account_set_login_properties, addr 0x2a05b2c, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_account_set_login_properties_t* as_vx_resp_account_set_login_properties();

  /// @brief Method as_vx_resp_account_set_presence, addr 0x2a08bec, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_account_set_presence_t* as_vx_resp_account_set_presence();

  /// @brief Method as_vx_resp_account_update_account, addr 0x2a095f4, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_account_update_account_t* as_vx_resp_account_update_account();

  /// @brief Method as_vx_resp_account_web_call, addr 0x2a0b7fc, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_account_web_call_t* as_vx_resp_account_web_call();

  /// @brief Method as_vx_resp_aux_capture_audio_start, addr 0x2a0a98c, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_aux_capture_audio_start_t* as_vx_resp_aux_capture_audio_start();

  /// @brief Method as_vx_resp_aux_capture_audio_stop, addr 0x2a0aa94, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_aux_capture_audio_stop_t* as_vx_resp_aux_capture_audio_stop();

  /// @brief Method as_vx_resp_aux_connectivity_info, addr 0x2a0990c, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_aux_connectivity_info_t* as_vx_resp_aux_connectivity_info();

  /// @brief Method as_vx_resp_aux_create_account, addr 0x2a0adac, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_aux_create_account_t* as_vx_resp_aux_create_account();

  /// @brief Method as_vx_resp_aux_deactivate_account, addr 0x2a0afbc, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_aux_deactivate_account_t* as_vx_resp_aux_deactivate_account();

  /// @brief Method as_vx_resp_aux_diagnostic_state_dump, addr 0x2a0b6f4, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_aux_diagnostic_state_dump_t* as_vx_resp_aux_diagnostic_state_dump();

  /// @brief Method as_vx_resp_aux_get_capture_devices, addr 0x2a09b1c, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_aux_get_capture_devices_t* as_vx_resp_aux_get_capture_devices();

  /// @brief Method as_vx_resp_aux_get_derumbler_properties, addr 0x2a0a674, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_aux_get_derumbler_properties_t* as_vx_resp_aux_get_derumbler_properties();

  /// @brief Method as_vx_resp_aux_get_mic_level, addr 0x2a09e34, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_aux_get_mic_level_t* as_vx_resp_aux_get_mic_level();

  /// @brief Method as_vx_resp_aux_get_render_devices, addr 0x2a09a14, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_aux_get_render_devices_t* as_vx_resp_aux_get_render_devices();

  /// @brief Method as_vx_resp_aux_get_speaker_level, addr 0x2a09f3c, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_aux_get_speaker_level_t* as_vx_resp_aux_get_speaker_level();

  /// @brief Method as_vx_resp_aux_get_vad_properties, addr 0x2a0a464, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_aux_get_vad_properties_t* as_vx_resp_aux_get_vad_properties();

  /// @brief Method as_vx_resp_aux_global_monitor_keyboard_mouse, addr 0x2a0ab9c, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_aux_global_monitor_keyboard_mouse_t* as_vx_resp_aux_global_monitor_keyboard_mouse();

  /// @brief Method as_vx_resp_aux_notify_application_state_change, addr 0x2a0c018, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_aux_notify_application_state_change_t* as_vx_resp_aux_notify_application_state_change();

  /// @brief Method as_vx_resp_aux_play_audio_buffer, addr 0x2a0b5ec, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_aux_play_audio_buffer_t* as_vx_resp_aux_play_audio_buffer();

  /// @brief Method as_vx_resp_aux_reactivate_account, addr 0x2a0aeb4, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_aux_reactivate_account_t* as_vx_resp_aux_reactivate_account();

  /// @brief Method as_vx_resp_aux_render_audio_modify, addr 0x2a0a35c, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_aux_render_audio_modify_t* as_vx_resp_aux_render_audio_modify();

  /// @brief Method as_vx_resp_aux_render_audio_start, addr 0x2a0a254, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_aux_render_audio_start_t* as_vx_resp_aux_render_audio_start();

  /// @brief Method as_vx_resp_aux_render_audio_stop, addr 0x2a0a884, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_aux_render_audio_stop_t* as_vx_resp_aux_render_audio_stop();

  /// @brief Method as_vx_resp_aux_reset_password, addr 0x2a0b1cc, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_aux_reset_password_t* as_vx_resp_aux_reset_password();

  /// @brief Method as_vx_resp_aux_set_capture_device, addr 0x2a09d2c, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_aux_set_capture_device_t* as_vx_resp_aux_set_capture_device();

  /// @brief Method as_vx_resp_aux_set_derumbler_properties, addr 0x2a0a77c, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_aux_set_derumbler_properties_t* as_vx_resp_aux_set_derumbler_properties();

  /// @brief Method as_vx_resp_aux_set_idle_timeout, addr 0x2a0aca4, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_aux_set_idle_timeout_t* as_vx_resp_aux_set_idle_timeout();

  /// @brief Method as_vx_resp_aux_set_mic_level, addr 0x2a0a044, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_aux_set_mic_level_t* as_vx_resp_aux_set_mic_level();

  /// @brief Method as_vx_resp_aux_set_render_device, addr 0x2a09c24, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_aux_set_render_device_t* as_vx_resp_aux_set_render_device();

  /// @brief Method as_vx_resp_aux_set_speaker_level, addr 0x2a0a14c, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_aux_set_speaker_level_t* as_vx_resp_aux_set_speaker_level();

  /// @brief Method as_vx_resp_aux_set_vad_properties, addr 0x2a0a56c, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_aux_set_vad_properties_t* as_vx_resp_aux_set_vad_properties();

  /// @brief Method as_vx_resp_aux_start_buffer_capture, addr 0x2a0b4e4, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_aux_start_buffer_capture_t* as_vx_resp_aux_start_buffer_capture();

  /// @brief Method as_vx_resp_channel_ban_user, addr 0x2a07968, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_channel_ban_user_t* as_vx_resp_channel_ban_user();

  /// @brief Method as_vx_resp_channel_get_banned_users, addr 0x2a07a4c, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_channel_get_banned_users_t* as_vx_resp_channel_get_banned_users();

  /// @brief Method as_vx_resp_channel_kick_user, addr 0x2a07b30, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_channel_kick_user_t* as_vx_resp_channel_kick_user();

  /// @brief Method as_vx_resp_channel_mute_all_users, addr 0x2a07c14, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_channel_mute_all_users_t* as_vx_resp_channel_mute_all_users();

  /// @brief Method as_vx_resp_channel_mute_user, addr 0x2a07884, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_channel_mute_user_t* as_vx_resp_channel_mute_user();

  /// @brief Method as_vx_resp_channel_set_lock_mode, addr 0x2a07cf8, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_channel_set_lock_mode_t* as_vx_resp_channel_set_lock_mode();

  /// @brief Method as_vx_resp_connector_create, addr 0x2a05544, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_connector_create_t* as_vx_resp_connector_create();

  /// @brief Method as_vx_resp_connector_get_local_audio_info, addr 0x2a0816c, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_connector_get_local_audio_info_t* as_vx_resp_connector_get_local_audio_info();

  /// @brief Method as_vx_resp_connector_initiate_shutdown, addr 0x2a05628, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_connector_initiate_shutdown_t* as_vx_resp_connector_initiate_shutdown();

  /// @brief Method as_vx_resp_connector_mute_local_mic, addr 0x2a07ddc, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_connector_mute_local_mic_t* as_vx_resp_connector_mute_local_mic();

  /// @brief Method as_vx_resp_connector_mute_local_speaker, addr 0x2a07ec0, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_connector_mute_local_speaker_t* as_vx_resp_connector_mute_local_speaker();

  /// @brief Method as_vx_resp_connector_set_local_mic_volume, addr 0x2a07fa4, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_connector_set_local_mic_volume_t* as_vx_resp_connector_set_local_mic_volume();

  /// @brief Method as_vx_resp_connector_set_local_speaker_volume, addr 0x2a08088, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_connector_set_local_speaker_volume_t* as_vx_resp_connector_set_local_speaker_volume();

  /// @brief Method as_vx_resp_session_archive_query, addr 0x2a08814, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_session_archive_query_t* as_vx_resp_session_archive_query();

  /// @brief Method as_vx_resp_session_channel_invite_user, addr 0x2a06ee8, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_session_channel_invite_user_t* as_vx_resp_session_channel_invite_user();

  /// @brief Method as_vx_resp_session_chat_history_query, addr 0x2a088f8, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_session_chat_history_query_t* as_vx_resp_session_chat_history_query();

  /// @brief Method as_vx_resp_session_create, addr 0x2a066e4, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_session_create_t* as_vx_resp_session_create();

  /// @brief Method as_vx_resp_session_delete_message, addr 0x2a0864c, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_session_delete_message_t* as_vx_resp_session_delete_message();

  /// @brief Method as_vx_resp_session_edit_message, addr 0x2a08730, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_session_edit_message_t* as_vx_resp_session_edit_message();

  /// @brief Method as_vx_resp_session_media_connect, addr 0x2a067c8, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_session_media_connect_t* as_vx_resp_session_media_connect();

  /// @brief Method as_vx_resp_session_media_disconnect, addr 0x2a068ac, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_session_media_disconnect_t* as_vx_resp_session_media_disconnect();

  /// @brief Method as_vx_resp_session_mute_local_speaker, addr 0x2a06c3c, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_session_mute_local_speaker_t* as_vx_resp_session_mute_local_speaker();

  /// @brief Method as_vx_resp_session_send_dtmf, addr 0x2a08ee0, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_session_send_dtmf_t* as_vx_resp_session_send_dtmf();

  /// @brief Method as_vx_resp_session_send_message, addr 0x2a08568, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_session_send_message_t* as_vx_resp_session_send_message();

  /// @brief Method as_vx_resp_session_send_notification, addr 0x2a08dfc, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_session_send_notification_t* as_vx_resp_session_send_notification();

  /// @brief Method as_vx_resp_session_set_3d_position, addr 0x2a07194, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_session_set_3d_position_t* as_vx_resp_session_set_3d_position();

  /// @brief Method as_vx_resp_session_set_local_render_volume, addr 0x2a06e04, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_session_set_local_render_volume_t* as_vx_resp_session_set_local_render_volume();

  /// @brief Method as_vx_resp_session_set_local_speaker_volume, addr 0x2a06d20, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_session_set_local_speaker_volume_t* as_vx_resp_session_set_local_speaker_volume();

  /// @brief Method as_vx_resp_session_set_participant_mute_for_me, addr 0x2a070b0, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_session_set_participant_mute_for_me_t* as_vx_resp_session_set_participant_mute_for_me();

  /// @brief Method as_vx_resp_session_set_participant_volume_for_me, addr 0x2a06fcc, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_session_set_participant_volume_for_me_t* as_vx_resp_session_set_participant_volume_for_me();

  /// @brief Method as_vx_resp_session_set_voice_font, addr 0x2a07278, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_session_set_voice_font_t* as_vx_resp_session_set_voice_font();

  /// @brief Method as_vx_resp_session_terminate, addr 0x2a06b58, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_session_terminate_t* as_vx_resp_session_terminate();

  /// @brief Method as_vx_resp_session_text_connect, addr 0x2a06990, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_session_text_connect_t* as_vx_resp_session_text_connect();

  /// @brief Method as_vx_resp_session_text_disconnect, addr 0x2a06a74, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_session_text_disconnect_t* as_vx_resp_session_text_disconnect();

  /// @brief Method as_vx_resp_session_transcription_control, addr 0x2a0c228, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_session_transcription_control_t* as_vx_resp_session_transcription_control();

  /// @brief Method as_vx_resp_sessiongroup_add_session, addr 0x2a05dfc, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_sessiongroup_add_session_t* as_vx_resp_sessiongroup_add_session();

  /// @brief Method as_vx_resp_sessiongroup_control_audio_injection, addr 0x2a06600, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_sessiongroup_control_audio_injection_t* as_vx_resp_sessiongroup_control_audio_injection();

  /// @brief Method as_vx_resp_sessiongroup_create, addr 0x2a05c34, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_sessiongroup_create_t* as_vx_resp_sessiongroup_create();

  /// @brief Method as_vx_resp_sessiongroup_get_stats, addr 0x2a0b904, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_sessiongroup_get_stats_t* as_vx_resp_sessiongroup_get_stats();

  /// @brief Method as_vx_resp_sessiongroup_remove_session, addr 0x2a05ee0, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_sessiongroup_remove_session_t* as_vx_resp_sessiongroup_remove_session();

  /// @brief Method as_vx_resp_sessiongroup_reset_focus, addr 0x2a0618c, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_sessiongroup_reset_focus_t* as_vx_resp_sessiongroup_reset_focus();

  /// @brief Method as_vx_resp_sessiongroup_set_focus, addr 0x2a05fc4, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_sessiongroup_set_focus_t* as_vx_resp_sessiongroup_set_focus();

  /// @brief Method as_vx_resp_sessiongroup_set_session_3d_position, addr 0x2a0651c, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_sessiongroup_set_session_3d_position_t* as_vx_resp_sessiongroup_set_session_3d_position();

  /// @brief Method as_vx_resp_sessiongroup_set_tx_all_sessions, addr 0x2a06354, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_sessiongroup_set_tx_all_sessions_t* as_vx_resp_sessiongroup_set_tx_all_sessions();

  /// @brief Method as_vx_resp_sessiongroup_set_tx_no_session, addr 0x2a06438, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_sessiongroup_set_tx_no_session_t* as_vx_resp_sessiongroup_set_tx_no_session();

  /// @brief Method as_vx_resp_sessiongroup_set_tx_session, addr 0x2a06270, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_sessiongroup_set_tx_session_t* as_vx_resp_sessiongroup_set_tx_session();

  /// @brief Method as_vx_resp_sessiongroup_terminate, addr 0x2a05d18, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_sessiongroup_terminate_t* as_vx_resp_sessiongroup_terminate();

  /// @brief Method as_vx_resp_sessiongroup_unset_focus, addr 0x2a060a8, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_sessiongroup_unset_focus_t* as_vx_resp_sessiongroup_unset_focus();

  /// @brief Method getCPtr, addr 0x29e5f7c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Unity::Services::Vivox::vx_resp_base_t* obj);

  /// @brief Method get_extended_status_info, addr 0x2a0c964, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_extended_status_info();

  /// @brief Method get_message, addr 0x2a0c384, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_message_base_t* get_message();

  /// @brief Method get_request, addr 0x2a0c820, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_req_base_t* get_request();

  /// @brief Method get_return_code, addr 0x2a0c598, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_return_code();

  /// @brief Method get_status_code, addr 0x2a0c668, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_status_code();

  /// @brief Method get_status_string, addr 0x2a0c738, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_status_string();

  /// @brief Method get_type, addr 0x2a0c4c8, size 0x60, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_response_type get_type();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method op_Implicit, addr 0x2a0590c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_account_anonymous_login_t* op_Implicit___Unity__Services__Vivox__vx_resp_account_anonymous_login_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0bcf0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_account_archive_query_t* op_Implicit___Unity__Services__Vivox__vx_resp_account_archive_query_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a05804, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_account_authtoken_login_t* op_Implicit___Unity__Services__Vivox__vx_resp_account_authtoken_login_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a08348, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_account_buddy_delete_t* op_Implicit___Unity__Services__Vivox__vx_resp_account_buddy_delete_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a08240, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_account_buddy_set_t* op_Implicit___Unity__Services__Vivox__vx_resp_account_buddy_set_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0755c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_account_channel_add_acl_t* op_Implicit___Unity__Services__Vivox__vx_resp_account_channel_add_acl_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0734c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_account_channel_change_owner_t*
  op_Implicit___Unity__Services__Vivox__vx_resp_account_channel_change_owner_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0776c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_account_channel_get_acl_t* op_Implicit___Unity__Services__Vivox__vx_resp_account_channel_get_acl_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a07664, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_account_channel_remove_acl_t*
  op_Implicit___Unity__Services__Vivox__vx_resp_account_channel_remove_acl_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a08ad4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_account_chat_history_get_last_read_t*
  op_Implicit___Unity__Services__Vivox__vx_resp_account_chat_history_get_last_read_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0bdf8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_account_chat_history_query_t*
  op_Implicit___Unity__Services__Vivox__vx_resp_account_chat_history_query_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a089cc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_account_chat_history_set_marker_t*
  op_Implicit___Unity__Services__Vivox__vx_resp_account_chat_history_set_marker_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0c110, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_account_control_communications_t*
  op_Implicit___Unity__Services__Vivox__vx_resp_account_control_communications_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a092cc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_account_create_auto_accept_rule_t*
  op_Implicit___Unity__Services__Vivox__vx_resp_account_create_auto_accept_rule_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a08fb4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_account_create_block_rule_t* op_Implicit___Unity__Services__Vivox__vx_resp_account_create_block_rule_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a093d4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_account_delete_auto_accept_rule_t*
  op_Implicit___Unity__Services__Vivox__vx_resp_account_delete_auto_accept_rule_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a090bc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_account_delete_block_rule_t* op_Implicit___Unity__Services__Vivox__vx_resp_account_delete_block_rule_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0bae0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_account_delete_message_t* op_Implicit___Unity__Services__Vivox__vx_resp_account_delete_message_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0bbe8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_account_edit_message_t* op_Implicit___Unity__Services__Vivox__vx_resp_account_edit_message_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a096ec, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_account_get_account_t* op_Implicit___Unity__Services__Vivox__vx_resp_account_get_account_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0bf00, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_account_get_conversations_t* op_Implicit___Unity__Services__Vivox__vx_resp_account_get_conversations_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0b2c4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_account_get_session_fonts_t* op_Implicit___Unity__Services__Vivox__vx_resp_account_get_session_fonts_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0b3cc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_account_get_template_fonts_t*
  op_Implicit___Unity__Services__Vivox__vx_resp_account_get_template_fonts_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a094dc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_account_list_auto_accept_rules_t*
  op_Implicit___Unity__Services__Vivox__vx_resp_account_list_auto_accept_rules_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a091c4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_account_list_block_rules_t* op_Implicit___Unity__Services__Vivox__vx_resp_account_list_block_rules_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a08450, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_account_list_buddies_and_groups_t*
  op_Implicit___Unity__Services__Vivox__vx_resp_account_list_buddies_and_groups_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a056fc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_account_login_t* op_Implicit___Unity__Services__Vivox__vx_resp_account_login_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a05a14, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_account_logout_t* op_Implicit___Unity__Services__Vivox__vx_resp_account_logout_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0b0b4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_account_post_crash_dump_t* op_Implicit___Unity__Services__Vivox__vx_resp_account_post_crash_dump_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0b9d8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_account_send_message_t* op_Implicit___Unity__Services__Vivox__vx_resp_account_send_message_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a097f4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_account_send_sms_t* op_Implicit___Unity__Services__Vivox__vx_resp_account_send_sms_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a08ce4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_account_send_subscription_reply_t*
  op_Implicit___Unity__Services__Vivox__vx_resp_account_send_subscription_reply_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a07454, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_account_send_user_app_data_t*
  op_Implicit___Unity__Services__Vivox__vx_resp_account_send_user_app_data_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a05b1c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_account_set_login_properties_t*
  op_Implicit___Unity__Services__Vivox__vx_resp_account_set_login_properties_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a08bdc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_account_set_presence_t* op_Implicit___Unity__Services__Vivox__vx_resp_account_set_presence_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a095e4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_account_update_account_t* op_Implicit___Unity__Services__Vivox__vx_resp_account_update_account_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0b7ec, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_account_web_call_t* op_Implicit___Unity__Services__Vivox__vx_resp_account_web_call_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0a97c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_aux_capture_audio_start_t* op_Implicit___Unity__Services__Vivox__vx_resp_aux_capture_audio_start_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0aa84, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_aux_capture_audio_stop_t* op_Implicit___Unity__Services__Vivox__vx_resp_aux_capture_audio_stop_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a098fc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_aux_connectivity_info_t* op_Implicit___Unity__Services__Vivox__vx_resp_aux_connectivity_info_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0ad9c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_aux_create_account_t* op_Implicit___Unity__Services__Vivox__vx_resp_aux_create_account_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0afac, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_aux_deactivate_account_t* op_Implicit___Unity__Services__Vivox__vx_resp_aux_deactivate_account_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0b6e4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_aux_diagnostic_state_dump_t* op_Implicit___Unity__Services__Vivox__vx_resp_aux_diagnostic_state_dump_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a09b0c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_aux_get_capture_devices_t* op_Implicit___Unity__Services__Vivox__vx_resp_aux_get_capture_devices_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0a664, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_aux_get_derumbler_properties_t*
  op_Implicit___Unity__Services__Vivox__vx_resp_aux_get_derumbler_properties_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a09e24, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_aux_get_mic_level_t* op_Implicit___Unity__Services__Vivox__vx_resp_aux_get_mic_level_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a09a04, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_aux_get_render_devices_t* op_Implicit___Unity__Services__Vivox__vx_resp_aux_get_render_devices_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a09f2c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_aux_get_speaker_level_t* op_Implicit___Unity__Services__Vivox__vx_resp_aux_get_speaker_level_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0a454, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_aux_get_vad_properties_t* op_Implicit___Unity__Services__Vivox__vx_resp_aux_get_vad_properties_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0ab8c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_aux_global_monitor_keyboard_mouse_t*
  op_Implicit___Unity__Services__Vivox__vx_resp_aux_global_monitor_keyboard_mouse_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0c008, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_aux_notify_application_state_change_t*
  op_Implicit___Unity__Services__Vivox__vx_resp_aux_notify_application_state_change_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0b5dc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_aux_play_audio_buffer_t* op_Implicit___Unity__Services__Vivox__vx_resp_aux_play_audio_buffer_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0aea4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_aux_reactivate_account_t* op_Implicit___Unity__Services__Vivox__vx_resp_aux_reactivate_account_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0a34c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_aux_render_audio_modify_t* op_Implicit___Unity__Services__Vivox__vx_resp_aux_render_audio_modify_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0a244, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_aux_render_audio_start_t* op_Implicit___Unity__Services__Vivox__vx_resp_aux_render_audio_start_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0a874, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_aux_render_audio_stop_t* op_Implicit___Unity__Services__Vivox__vx_resp_aux_render_audio_stop_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0b1bc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_aux_reset_password_t* op_Implicit___Unity__Services__Vivox__vx_resp_aux_reset_password_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a09d1c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_aux_set_capture_device_t* op_Implicit___Unity__Services__Vivox__vx_resp_aux_set_capture_device_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0a76c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_aux_set_derumbler_properties_t*
  op_Implicit___Unity__Services__Vivox__vx_resp_aux_set_derumbler_properties_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0ac94, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_aux_set_idle_timeout_t* op_Implicit___Unity__Services__Vivox__vx_resp_aux_set_idle_timeout_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0a034, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_aux_set_mic_level_t* op_Implicit___Unity__Services__Vivox__vx_resp_aux_set_mic_level_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a09c14, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_aux_set_render_device_t* op_Implicit___Unity__Services__Vivox__vx_resp_aux_set_render_device_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0a13c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_aux_set_speaker_level_t* op_Implicit___Unity__Services__Vivox__vx_resp_aux_set_speaker_level_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0a55c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_aux_set_vad_properties_t* op_Implicit___Unity__Services__Vivox__vx_resp_aux_set_vad_properties_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0b4d4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_aux_start_buffer_capture_t* op_Implicit___Unity__Services__Vivox__vx_resp_aux_start_buffer_capture_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a07958, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_channel_ban_user_t* op_Implicit___Unity__Services__Vivox__vx_resp_channel_ban_user_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a07a3c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_channel_get_banned_users_t* op_Implicit___Unity__Services__Vivox__vx_resp_channel_get_banned_users_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a07b20, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_channel_kick_user_t* op_Implicit___Unity__Services__Vivox__vx_resp_channel_kick_user_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a07c04, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_channel_mute_all_users_t* op_Implicit___Unity__Services__Vivox__vx_resp_channel_mute_all_users_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a07874, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_channel_mute_user_t* op_Implicit___Unity__Services__Vivox__vx_resp_channel_mute_user_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a07ce8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_channel_set_lock_mode_t* op_Implicit___Unity__Services__Vivox__vx_resp_channel_set_lock_mode_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a05534, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_connector_create_t* op_Implicit___Unity__Services__Vivox__vx_resp_connector_create_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0815c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_connector_get_local_audio_info_t*
  op_Implicit___Unity__Services__Vivox__vx_resp_connector_get_local_audio_info_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a05618, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_connector_initiate_shutdown_t*
  op_Implicit___Unity__Services__Vivox__vx_resp_connector_initiate_shutdown_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a07dcc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_connector_mute_local_mic_t* op_Implicit___Unity__Services__Vivox__vx_resp_connector_mute_local_mic_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a07eb0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_connector_mute_local_speaker_t*
  op_Implicit___Unity__Services__Vivox__vx_resp_connector_mute_local_speaker_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a07f94, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_connector_set_local_mic_volume_t*
  op_Implicit___Unity__Services__Vivox__vx_resp_connector_set_local_mic_volume_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a08078, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_connector_set_local_speaker_volume_t*
  op_Implicit___Unity__Services__Vivox__vx_resp_connector_set_local_speaker_volume_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a08804, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_session_archive_query_t* op_Implicit___Unity__Services__Vivox__vx_resp_session_archive_query_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a06ed8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_session_channel_invite_user_t*
  op_Implicit___Unity__Services__Vivox__vx_resp_session_channel_invite_user_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a088e8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_session_chat_history_query_t*
  op_Implicit___Unity__Services__Vivox__vx_resp_session_chat_history_query_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a066d4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_session_create_t* op_Implicit___Unity__Services__Vivox__vx_resp_session_create_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0863c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_session_delete_message_t* op_Implicit___Unity__Services__Vivox__vx_resp_session_delete_message_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a08720, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_session_edit_message_t* op_Implicit___Unity__Services__Vivox__vx_resp_session_edit_message_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a067b8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_session_media_connect_t* op_Implicit___Unity__Services__Vivox__vx_resp_session_media_connect_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0689c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_session_media_disconnect_t* op_Implicit___Unity__Services__Vivox__vx_resp_session_media_disconnect_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a06c2c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_session_mute_local_speaker_t*
  op_Implicit___Unity__Services__Vivox__vx_resp_session_mute_local_speaker_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a08ed0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_session_send_dtmf_t* op_Implicit___Unity__Services__Vivox__vx_resp_session_send_dtmf_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a08558, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_session_send_message_t* op_Implicit___Unity__Services__Vivox__vx_resp_session_send_message_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a08dec, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_session_send_notification_t* op_Implicit___Unity__Services__Vivox__vx_resp_session_send_notification_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a07184, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_session_set_3d_position_t* op_Implicit___Unity__Services__Vivox__vx_resp_session_set_3d_position_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a06df4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_session_set_local_render_volume_t*
  op_Implicit___Unity__Services__Vivox__vx_resp_session_set_local_render_volume_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a06d10, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_session_set_local_speaker_volume_t*
  op_Implicit___Unity__Services__Vivox__vx_resp_session_set_local_speaker_volume_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a070a0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_session_set_participant_mute_for_me_t*
  op_Implicit___Unity__Services__Vivox__vx_resp_session_set_participant_mute_for_me_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a06fbc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_session_set_participant_volume_for_me_t*
  op_Implicit___Unity__Services__Vivox__vx_resp_session_set_participant_volume_for_me_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a07268, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_session_set_voice_font_t* op_Implicit___Unity__Services__Vivox__vx_resp_session_set_voice_font_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a06b48, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_session_terminate_t* op_Implicit___Unity__Services__Vivox__vx_resp_session_terminate_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a06980, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_session_text_connect_t* op_Implicit___Unity__Services__Vivox__vx_resp_session_text_connect_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a06a64, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_session_text_disconnect_t* op_Implicit___Unity__Services__Vivox__vx_resp_session_text_disconnect_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0c218, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_session_transcription_control_t*
  op_Implicit___Unity__Services__Vivox__vx_resp_session_transcription_control_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a05dec, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_sessiongroup_add_session_t* op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_add_session_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a065f0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_sessiongroup_control_audio_injection_t*
  op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_control_audio_injection_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a05c24, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_sessiongroup_create_t* op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_create_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0b8f4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_sessiongroup_get_stats_t* op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_get_stats_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a05ed0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_sessiongroup_remove_session_t*
  op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_remove_session_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0617c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_sessiongroup_reset_focus_t* op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_reset_focus_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a05fb4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_sessiongroup_set_focus_t* op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_set_focus_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a0650c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_sessiongroup_set_session_3d_position_t*
  op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_set_session_3d_position_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a06344, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_sessiongroup_set_tx_all_sessions_t*
  op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_set_tx_all_sessions_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a06428, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_sessiongroup_set_tx_no_session_t*
  op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_set_tx_no_session_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a06260, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_sessiongroup_set_tx_session_t*
  op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_set_tx_session_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a05d08, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_sessiongroup_terminate_t* op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_terminate_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method op_Implicit, addr 0x2a06098, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_sessiongroup_unset_focus_t* op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_unset_focus_t_(::Unity::Services::Vivox::vx_resp_base_t* t);

  /// @brief Method set_extended_status_info, addr 0x2a0c8f4, size 0x70, virtual false, abstract: false, final false
  inline void set_extended_status_info(::StringW value);

  /// @brief Method set_message, addr 0x2a0c2fc, size 0x88, virtual false, abstract: false, final false
  inline void set_message(::Unity::Services::Vivox::vx_message_base_t* value);

  /// @brief Method set_request, addr 0x2a0c798, size 0x88, virtual false, abstract: false, final false
  inline void set_request(::Unity::Services::Vivox::vx_req_base_t* value);

  /// @brief Method set_return_code, addr 0x2a0c528, size 0x70, virtual false, abstract: false, final false
  inline void set_return_code(int32_t value);

  /// @brief Method set_status_code, addr 0x2a0c5f8, size 0x70, virtual false, abstract: false, final false
  inline void set_status_code(int32_t value);

  /// @brief Method set_status_string, addr 0x2a0c6c8, size 0x70, virtual false, abstract: false, final false
  inline void set_status_string(::StringW value);

  /// @brief Method set_type, addr 0x2a0c458, size 0x70, virtual false, abstract: false, final false
  inline void set_type(::Unity::Services::Vivox::vx_response_type value);

  /// @brief Method swigRelease, addr 0x2a051cc, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::Unity::Services::Vivox::vx_resp_base_t* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_resp_base_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "vx_resp_base_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  vx_resp_base_t(vx_resp_base_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "vx_resp_base_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  vx_resp_base_t(vx_resp_base_t const&) = delete;

  /// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
  ::System::Runtime::InteropServices::HandleRef ___swigCPtr;

  /// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
  bool ___swigCMemOwn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_resp_base_t, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_resp_base_t, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_resp_base_t, ___swigCMemOwn) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::vx_resp_base_t);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_resp_base_t*, "Unity.Services.Vivox", "vx_resp_base_t");
