#pragma once
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_base_t_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_message_base_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_req_base_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_account_anonymous_login_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_account_archive_query_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_account_authtoken_login_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_account_buddy_delete_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_account_buddy_set_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_account_channel_add_acl_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_account_channel_change_owner_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_account_channel_get_acl_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_account_channel_remove_acl_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_account_chat_history_get_last_read_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_account_chat_history_query_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_account_chat_history_set_marker_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_account_control_communications_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_account_create_auto_accept_rule_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_account_create_block_rule_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_account_delete_auto_accept_rule_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_account_delete_block_rule_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_account_delete_message_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_account_edit_message_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_account_get_account_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_account_get_conversations_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_account_get_session_fonts_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_account_get_template_fonts_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_account_list_auto_accept_rules_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_account_list_block_rules_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_account_list_buddies_and_groups_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_account_login_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_account_logout_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_account_post_crash_dump_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_account_send_message_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_account_send_sms_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_account_send_subscription_reply_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_account_send_user_app_data_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_account_set_login_properties_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_account_set_presence_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_account_update_account_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_account_web_call_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_aux_capture_audio_start_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_aux_capture_audio_stop_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_aux_connectivity_info_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_aux_create_account_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_aux_deactivate_account_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_aux_diagnostic_state_dump_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_aux_get_capture_devices_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_aux_get_derumbler_properties_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_aux_get_mic_level_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_aux_get_render_devices_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_aux_get_speaker_level_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_aux_get_vad_properties_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_aux_global_monitor_keyboard_mouse_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_aux_notify_application_state_change_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_aux_play_audio_buffer_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_aux_reactivate_account_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_aux_render_audio_modify_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_aux_render_audio_start_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_aux_render_audio_stop_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_aux_reset_password_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_aux_set_capture_device_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_aux_set_derumbler_properties_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_aux_set_idle_timeout_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_aux_set_mic_level_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_aux_set_render_device_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_aux_set_speaker_level_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_aux_set_vad_properties_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_aux_start_buffer_capture_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_channel_ban_user_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_channel_get_banned_users_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_channel_kick_user_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_channel_mute_all_users_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_channel_mute_user_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_channel_set_lock_mode_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_connector_create_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_connector_get_local_audio_info_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_connector_initiate_shutdown_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_connector_mute_local_mic_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_connector_mute_local_speaker_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_connector_set_local_mic_volume_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_connector_set_local_speaker_volume_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_session_archive_query_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_session_channel_invite_user_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_session_chat_history_query_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_session_create_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_session_delete_message_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_session_edit_message_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_session_media_connect_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_session_media_disconnect_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_session_mute_local_speaker_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_session_send_dtmf_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_session_send_message_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_session_send_notification_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_session_set_3d_position_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_session_set_local_render_volume_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_session_set_local_speaker_volume_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_session_set_participant_mute_for_me_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_session_set_participant_volume_for_me_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_session_set_voice_font_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_session_terminate_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_session_text_connect_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_session_text_disconnect_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_session_transcription_control_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_sessiongroup_add_session_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_sessiongroup_control_audio_injection_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_sessiongroup_create_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_sessiongroup_get_stats_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_sessiongroup_remove_session_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_sessiongroup_reset_focus_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_sessiongroup_set_focus_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_sessiongroup_set_session_3d_position_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_sessiongroup_set_tx_all_sessions_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_sessiongroup_set_tx_no_session_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_sessiongroup_set_tx_session_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_sessiongroup_terminate_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_sessiongroup_unset_focus_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_response_type_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::vx_resp_base_t::*)(void*, bool)>(&::Unity::Services::Vivox::vx_resp_base_t::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x29e60f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.getCPtr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::getCPtr)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x29e5f7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "getCPtr", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.swigRelease
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::swigRelease)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2a051cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "swigRelease", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::vx_resp_base_t::*)()>(&::Unity::Services::Vivox::vx_resp_base_t::Finalize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2a05314;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::vx_resp_base_t::*)()>(&::Unity::Services::Vivox::vx_resp_base_t::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2a052a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::vx_resp_base_t::*)(bool)>(&::Unity::Services::Vivox::vx_resp_base_t::Dispose)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2a053b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_connector_create_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_connector_create_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_connector_create_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a05534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_connector_initiate_shutdown_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_connector_initiate_shutdown_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_connector_initiate_shutdown_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a05618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_account_login_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_login_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_login_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a056fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_account_authtoken_login_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_authtoken_login_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_authtoken_login_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a05804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_account_anonymous_login_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_anonymous_login_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_anonymous_login_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0590c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_account_logout_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_logout_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_logout_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a05a14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_account_set_login_properties_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_set_login_properties_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_set_login_properties_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a05b1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_create_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_sessiongroup_create_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_create_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a05c24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_terminate_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_sessiongroup_terminate_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_terminate_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a05d08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_add_session_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_sessiongroup_add_session_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_add_session_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a05dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_remove_session_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_sessiongroup_remove_session_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_remove_session_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a05ed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_set_focus_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_sessiongroup_set_focus_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_set_focus_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a05fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_unset_focus_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_sessiongroup_unset_focus_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_unset_focus_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a06098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_reset_focus_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_sessiongroup_reset_focus_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_reset_focus_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0617c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_set_tx_session_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_sessiongroup_set_tx_session_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_set_tx_session_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a06260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_set_tx_all_sessions_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_sessiongroup_set_tx_all_sessions_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_set_tx_all_sessions_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a06344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_set_tx_no_session_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_sessiongroup_set_tx_no_session_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_set_tx_no_session_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a06428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_set_session_3d_position_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Unity::Services::Vivox::vx_resp_sessiongroup_set_session_3d_position_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
        &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_set_session_3d_position_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0650c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_control_audio_injection_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Unity::Services::Vivox::vx_resp_sessiongroup_control_audio_injection_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
        &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_control_audio_injection_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a065f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_session_create_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_create_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_create_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a066d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_session_media_connect_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_media_connect_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_media_connect_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a067b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_session_media_disconnect_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_media_disconnect_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_media_disconnect_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0689c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_session_text_connect_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_text_connect_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_text_connect_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a06980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_session_text_disconnect_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_text_disconnect_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_text_disconnect_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a06a64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_session_terminate_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_terminate_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_terminate_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a06b48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_session_mute_local_speaker_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_mute_local_speaker_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_mute_local_speaker_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a06c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_session_set_local_speaker_volume_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_set_local_speaker_volume_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_set_local_speaker_volume_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a06d10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_session_set_local_render_volume_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_set_local_render_volume_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_set_local_render_volume_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a06df4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_session_channel_invite_user_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_channel_invite_user_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_channel_invite_user_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a06ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_session_set_participant_volume_for_me_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Unity::Services::Vivox::vx_resp_session_set_participant_volume_for_me_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
        &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_set_participant_volume_for_me_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a06fbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_session_set_participant_mute_for_me_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Unity::Services::Vivox::vx_resp_session_set_participant_mute_for_me_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
        &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_set_participant_mute_for_me_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a070a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_session_set_3d_position_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_set_3d_position_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_set_3d_position_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a07184;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_session_set_voice_font_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_set_voice_font_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_set_voice_font_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a07268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_account_channel_change_owner_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_channel_change_owner_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_channel_change_owner_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0734c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_account_send_user_app_data_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_send_user_app_data_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_send_user_app_data_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a07454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_account_channel_add_acl_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_channel_add_acl_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_channel_add_acl_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0755c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_account_channel_remove_acl_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_channel_remove_acl_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_channel_remove_acl_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a07664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_account_channel_get_acl_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_channel_get_acl_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_channel_get_acl_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0776c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_channel_mute_user_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_channel_mute_user_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_channel_mute_user_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a07874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_channel_ban_user_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_channel_ban_user_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_channel_ban_user_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a07958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_channel_get_banned_users_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_channel_get_banned_users_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_channel_get_banned_users_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a07a3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_channel_kick_user_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_channel_kick_user_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_channel_kick_user_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a07b20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_channel_mute_all_users_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_channel_mute_all_users_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_channel_mute_all_users_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a07c04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_channel_set_lock_mode_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_channel_set_lock_mode_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_channel_set_lock_mode_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a07ce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_connector_mute_local_mic_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_connector_mute_local_mic_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_connector_mute_local_mic_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a07dcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_connector_mute_local_speaker_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_connector_mute_local_speaker_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_connector_mute_local_speaker_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a07eb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_connector_set_local_mic_volume_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_connector_set_local_mic_volume_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_connector_set_local_mic_volume_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a07f94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_connector_set_local_speaker_volume_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Unity::Services::Vivox::vx_resp_connector_set_local_speaker_volume_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
        &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_connector_set_local_speaker_volume_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a08078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_connector_get_local_audio_info_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_connector_get_local_audio_info_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_connector_get_local_audio_info_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0815c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_account_buddy_set_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_buddy_set_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_buddy_set_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a08240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_account_buddy_delete_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_buddy_delete_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_buddy_delete_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a08348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_account_list_buddies_and_groups_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_list_buddies_and_groups_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_list_buddies_and_groups_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a08450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_session_send_message_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_send_message_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_send_message_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a08558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_session_delete_message_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_delete_message_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_delete_message_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0863c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_session_edit_message_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_edit_message_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_edit_message_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a08720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_session_archive_query_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_archive_query_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_archive_query_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a08804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_session_chat_history_query_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_chat_history_query_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_chat_history_query_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a088e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_account_chat_history_set_marker_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_chat_history_set_marker_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_chat_history_set_marker_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a089cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_account_chat_history_get_last_read_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Unity::Services::Vivox::vx_resp_account_chat_history_get_last_read_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
        &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_chat_history_get_last_read_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a08ad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_account_set_presence_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_set_presence_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_set_presence_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a08bdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_account_send_subscription_reply_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_send_subscription_reply_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_send_subscription_reply_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a08ce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_session_send_notification_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_send_notification_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_send_notification_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a08dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_session_send_dtmf_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_send_dtmf_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_send_dtmf_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a08ed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_account_create_block_rule_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_create_block_rule_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_create_block_rule_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a08fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_account_delete_block_rule_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_delete_block_rule_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_delete_block_rule_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a090bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_account_list_block_rules_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_list_block_rules_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_list_block_rules_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a091c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_account_create_auto_accept_rule_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_create_auto_accept_rule_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_create_auto_accept_rule_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a092cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_account_delete_auto_accept_rule_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_delete_auto_accept_rule_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_delete_auto_accept_rule_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a093d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_account_list_auto_accept_rules_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_list_auto_accept_rules_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_list_auto_accept_rules_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a094dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_account_update_account_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_update_account_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_update_account_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a095e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_account_get_account_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_get_account_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_get_account_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a096ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_account_send_sms_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_send_sms_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_send_sms_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a097f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_aux_connectivity_info_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_connectivity_info_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_connectivity_info_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a098fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_aux_get_render_devices_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_get_render_devices_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_get_render_devices_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a09a04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_aux_get_capture_devices_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_get_capture_devices_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_get_capture_devices_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a09b0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_aux_set_render_device_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_set_render_device_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_set_render_device_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a09c14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_aux_set_capture_device_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_set_capture_device_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_set_capture_device_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a09d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_aux_get_mic_level_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_get_mic_level_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_get_mic_level_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a09e24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_aux_get_speaker_level_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_get_speaker_level_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_get_speaker_level_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a09f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_aux_set_mic_level_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_set_mic_level_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_set_mic_level_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0a034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_aux_set_speaker_level_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_set_speaker_level_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_set_speaker_level_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0a13c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_aux_render_audio_start_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_render_audio_start_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_render_audio_start_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0a244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_aux_render_audio_modify_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_render_audio_modify_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_render_audio_modify_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0a34c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_aux_get_vad_properties_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_get_vad_properties_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_get_vad_properties_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0a454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_aux_set_vad_properties_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_set_vad_properties_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_set_vad_properties_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0a55c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_aux_get_derumbler_properties_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_get_derumbler_properties_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_get_derumbler_properties_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0a664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_aux_set_derumbler_properties_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_set_derumbler_properties_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_set_derumbler_properties_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0a76c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_aux_render_audio_stop_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_render_audio_stop_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_render_audio_stop_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0a874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_aux_capture_audio_start_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_capture_audio_start_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_capture_audio_start_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0a97c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_aux_capture_audio_stop_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_capture_audio_stop_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_capture_audio_stop_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0aa84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_aux_global_monitor_keyboard_mouse_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Unity::Services::Vivox::vx_resp_aux_global_monitor_keyboard_mouse_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
        &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_global_monitor_keyboard_mouse_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0ab8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_aux_set_idle_timeout_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_set_idle_timeout_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_set_idle_timeout_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0ac94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_aux_create_account_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_create_account_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_create_account_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0ad9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_aux_reactivate_account_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_reactivate_account_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_reactivate_account_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0aea4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_aux_deactivate_account_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_deactivate_account_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_deactivate_account_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0afac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_account_post_crash_dump_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_post_crash_dump_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_post_crash_dump_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0b0b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_aux_reset_password_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_reset_password_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_reset_password_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0b1bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_account_get_session_fonts_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_get_session_fonts_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_get_session_fonts_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0b2c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_account_get_template_fonts_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_get_template_fonts_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_get_template_fonts_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0b3cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_aux_start_buffer_capture_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_start_buffer_capture_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_start_buffer_capture_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0b4d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_aux_play_audio_buffer_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_play_audio_buffer_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_play_audio_buffer_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0b5dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_aux_diagnostic_state_dump_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_diagnostic_state_dump_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_diagnostic_state_dump_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0b6e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_account_web_call_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_web_call_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_web_call_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0b7ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_get_stats_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_sessiongroup_get_stats_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_get_stats_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0b8f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_account_send_message_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_send_message_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_send_message_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0b9d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_account_delete_message_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_delete_message_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_delete_message_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0bae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_account_edit_message_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_edit_message_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_edit_message_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0bbe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_account_archive_query_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_archive_query_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_archive_query_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0bcf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_account_chat_history_query_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_chat_history_query_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_chat_history_query_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0bdf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_account_get_conversations_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_get_conversations_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_get_conversations_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0bf00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_aux_notify_application_state_change_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Unity::Services::Vivox::vx_resp_aux_notify_application_state_change_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
        &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_notify_application_state_change_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0c008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_account_control_communications_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_control_communications_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_control_communications_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0c110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.op_Implicit___Unity__Services__Vivox__vx_resp_session_transcription_control_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_transcription_control_t* (*)(::Unity::Services::Vivox::vx_resp_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_transcription_control_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0c218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.set_message
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::vx_resp_base_t::*)(::Unity::Services::Vivox::vx_message_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::set_message)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2a0c2fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "set_message", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_message_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.get_message
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_message_base_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::get_message)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a0c384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "get_message",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.set_type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::vx_resp_base_t::*)(::Unity::Services::Vivox::vx_response_type)>(
    &::Unity::Services::Vivox::vx_resp_base_t::set_type)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2a0c458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "set_type", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_response_type>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.get_type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_response_type (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::get_type)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2a0c4c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "get_type",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.set_return_code
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::vx_resp_base_t::*)(int32_t)>(
    &::Unity::Services::Vivox::vx_resp_base_t::set_return_code)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2a0c528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "set_return_code",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.get_return_code
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::get_return_code)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2a0c598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                               "get_return_code", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.set_status_code
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::vx_resp_base_t::*)(int32_t)>(
    &::Unity::Services::Vivox::vx_resp_base_t::set_status_code)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2a0c5f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "set_status_code",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.get_status_code
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::get_status_code)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2a0c668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                               "get_status_code", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.set_status_string
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::vx_resp_base_t::*)(::StringW)>(
    &::Unity::Services::Vivox::vx_resp_base_t::set_status_string)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2a0c6c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "set_status_string",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.get_status_string
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::get_status_string)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2a0c738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                               "get_status_string", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.set_request
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::vx_resp_base_t::*)(::Unity::Services::Vivox::vx_req_base_t*)>(
    &::Unity::Services::Vivox::vx_resp_base_t::set_request)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2a0c798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "set_request", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_req_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.get_request
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_req_base_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::get_request)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a0c820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "get_request",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.set_extended_status_info
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::vx_resp_base_t::*)(::StringW)>(
    &::Unity::Services::Vivox::vx_resp_base_t::set_extended_status_info)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2a0c8f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "set_extended_status_info",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.get_extended_status_info
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::get_extended_status_info)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2a0c964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                               "get_extended_status_info", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_connector_create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_connector_create_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_connector_create)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a05544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                               "as_vx_resp_connector_create", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_connector_initiate_shutdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_connector_initiate_shutdown_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_connector_initiate_shutdown)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a05628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_connector_initiate_shutdown",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_account_login
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_login_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_login)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a0570c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                               "as_vx_resp_account_login", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_account_authtoken_login
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_authtoken_login_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_authtoken_login)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a05814;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_authtoken_login",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_account_anonymous_login
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_anonymous_login_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_anonymous_login)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a0591c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_anonymous_login",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_account_logout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_logout_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_logout)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a05a24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                               "as_vx_resp_account_logout", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_account_set_login_properties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_set_login_properties_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_set_login_properties)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a05b2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_set_login_properties",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_sessiongroup_create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_sessiongroup_create_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_sessiongroup_create)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a05c34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                               "as_vx_resp_sessiongroup_create", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_sessiongroup_terminate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_sessiongroup_terminate_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_sessiongroup_terminate)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a05d18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_sessiongroup_terminate",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_sessiongroup_add_session
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_sessiongroup_add_session_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_sessiongroup_add_session)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a05dfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_sessiongroup_add_session",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_sessiongroup_remove_session
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_sessiongroup_remove_session_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_sessiongroup_remove_session)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a05ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_sessiongroup_remove_session",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_sessiongroup_set_focus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_sessiongroup_set_focus_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_sessiongroup_set_focus)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a05fc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_sessiongroup_set_focus",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_sessiongroup_unset_focus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_sessiongroup_unset_focus_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_sessiongroup_unset_focus)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a060a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_sessiongroup_unset_focus",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_sessiongroup_reset_focus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_sessiongroup_reset_focus_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_sessiongroup_reset_focus)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a0618c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_sessiongroup_reset_focus",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_sessiongroup_set_tx_session
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_sessiongroup_set_tx_session_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_sessiongroup_set_tx_session)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a06270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_sessiongroup_set_tx_session",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_sessiongroup_set_tx_all_sessions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_sessiongroup_set_tx_all_sessions_t* (
    ::Unity::Services::Vivox::vx_resp_base_t::*)()>(&::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_sessiongroup_set_tx_all_sessions)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a06354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                 "as_vx_resp_sessiongroup_set_tx_all_sessions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_sessiongroup_set_tx_no_session
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_sessiongroup_set_tx_no_session_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_sessiongroup_set_tx_no_session)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a06438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_sessiongroup_set_tx_no_session",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_sessiongroup_set_session_3d_position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_sessiongroup_set_session_3d_position_t* (
    ::Unity::Services::Vivox::vx_resp_base_t::*)()>(&::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_sessiongroup_set_session_3d_position)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a0651c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                 "as_vx_resp_sessiongroup_set_session_3d_position", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_sessiongroup_control_audio_injection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_sessiongroup_control_audio_injection_t* (
    ::Unity::Services::Vivox::vx_resp_base_t::*)()>(&::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_sessiongroup_control_audio_injection)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a06600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                 "as_vx_resp_sessiongroup_control_audio_injection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_session_create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_create_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_create)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a066e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                               "as_vx_resp_session_create", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_session_media_connect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_media_connect_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_media_connect)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a067c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_session_media_connect",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_session_media_disconnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_media_disconnect_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_media_disconnect)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a068ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_session_media_disconnect",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_session_text_connect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_text_connect_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_text_connect)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a06990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_session_text_connect",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_session_text_disconnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_text_disconnect_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_text_disconnect)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a06a74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_session_text_disconnect",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_session_terminate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_terminate_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_terminate)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a06b58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                               "as_vx_resp_session_terminate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_session_mute_local_speaker
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_mute_local_speaker_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_mute_local_speaker)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a06c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_session_mute_local_speaker",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_session_set_local_speaker_volume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_set_local_speaker_volume_t* (
    ::Unity::Services::Vivox::vx_resp_base_t::*)()>(&::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_set_local_speaker_volume)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a06d20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                 "as_vx_resp_session_set_local_speaker_volume", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_session_set_local_render_volume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_set_local_render_volume_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_set_local_render_volume)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a06e04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_session_set_local_render_volume",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_session_channel_invite_user
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_channel_invite_user_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_channel_invite_user)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a06ee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_session_channel_invite_user",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_session_set_participant_volume_for_me
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_set_participant_volume_for_me_t* (
    ::Unity::Services::Vivox::vx_resp_base_t::*)()>(&::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_set_participant_volume_for_me)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a06fcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                 "as_vx_resp_session_set_participant_volume_for_me", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_session_set_participant_mute_for_me
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_set_participant_mute_for_me_t* (
    ::Unity::Services::Vivox::vx_resp_base_t::*)()>(&::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_set_participant_mute_for_me)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a070b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                 "as_vx_resp_session_set_participant_mute_for_me", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_session_set_3d_position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_set_3d_position_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_set_3d_position)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a07194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_session_set_3d_position",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_session_set_voice_font
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_set_voice_font_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_set_voice_font)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a07278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_session_set_voice_font",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_account_channel_change_owner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_channel_change_owner_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_channel_change_owner)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a0735c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_channel_change_owner",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_account_send_user_app_data
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_send_user_app_data_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_send_user_app_data)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a07464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_send_user_app_data",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_account_channel_add_acl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_channel_add_acl_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_channel_add_acl)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a0756c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_channel_add_acl",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_account_channel_remove_acl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_channel_remove_acl_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_channel_remove_acl)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a07674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_channel_remove_acl",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_account_channel_get_acl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_channel_get_acl_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_channel_get_acl)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a0777c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_channel_get_acl",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_channel_mute_user
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_channel_mute_user_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_channel_mute_user)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a07884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                               "as_vx_resp_channel_mute_user", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_channel_ban_user
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_channel_ban_user_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_channel_ban_user)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a07968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                               "as_vx_resp_channel_ban_user", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_channel_get_banned_users
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_channel_get_banned_users_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_channel_get_banned_users)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a07a4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_channel_get_banned_users",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_channel_kick_user
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_channel_kick_user_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_channel_kick_user)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a07b30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                               "as_vx_resp_channel_kick_user", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_channel_mute_all_users
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_channel_mute_all_users_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_channel_mute_all_users)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a07c14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_channel_mute_all_users",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_channel_set_lock_mode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_channel_set_lock_mode_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_channel_set_lock_mode)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a07cf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_channel_set_lock_mode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_connector_mute_local_mic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_connector_mute_local_mic_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_connector_mute_local_mic)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a07ddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_connector_mute_local_mic",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_connector_mute_local_speaker
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_connector_mute_local_speaker_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_connector_mute_local_speaker)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a07ec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_connector_mute_local_speaker",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_connector_set_local_mic_volume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_connector_set_local_mic_volume_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_connector_set_local_mic_volume)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a07fa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_connector_set_local_mic_volume",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_connector_set_local_speaker_volume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_connector_set_local_speaker_volume_t* (
    ::Unity::Services::Vivox::vx_resp_base_t::*)()>(&::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_connector_set_local_speaker_volume)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a08088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                 "as_vx_resp_connector_set_local_speaker_volume", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_connector_get_local_audio_info
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_connector_get_local_audio_info_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_connector_get_local_audio_info)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a0816c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_connector_get_local_audio_info",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_account_buddy_set
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_buddy_set_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_buddy_set)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a08250;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                               "as_vx_resp_account_buddy_set", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_account_buddy_delete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_buddy_delete_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_buddy_delete)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a08358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_buddy_delete",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_account_list_buddies_and_groups
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_list_buddies_and_groups_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_list_buddies_and_groups)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a08460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_list_buddies_and_groups",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_session_send_message
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_send_message_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_send_message)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a08568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_session_send_message",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_session_delete_message
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_delete_message_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_delete_message)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a0864c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_session_delete_message",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_session_edit_message
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_edit_message_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_edit_message)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a08730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_session_edit_message",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_session_archive_query
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_archive_query_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_archive_query)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a08814;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_session_archive_query",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_session_chat_history_query
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_chat_history_query_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_chat_history_query)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a088f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_session_chat_history_query",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_account_chat_history_set_marker
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_chat_history_set_marker_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_chat_history_set_marker)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a089dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_chat_history_set_marker",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_account_chat_history_get_last_read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_chat_history_get_last_read_t* (
    ::Unity::Services::Vivox::vx_resp_base_t::*)()>(&::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_chat_history_get_last_read)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a08ae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                 "as_vx_resp_account_chat_history_get_last_read", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_account_set_presence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_set_presence_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_set_presence)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a08bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_set_presence",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_account_send_subscription_reply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_send_subscription_reply_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_send_subscription_reply)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a08cf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_send_subscription_reply",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_session_send_notification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_send_notification_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_send_notification)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a08dfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_session_send_notification",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_session_send_dtmf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_send_dtmf_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_send_dtmf)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a08ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                               "as_vx_resp_session_send_dtmf", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_account_create_block_rule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_create_block_rule_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_create_block_rule)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a08fc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_create_block_rule",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_account_delete_block_rule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_delete_block_rule_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_delete_block_rule)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a090cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_delete_block_rule",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_account_list_block_rules
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_list_block_rules_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_list_block_rules)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a091d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_list_block_rules",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_account_create_auto_accept_rule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_create_auto_accept_rule_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_create_auto_accept_rule)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a092dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_create_auto_accept_rule",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_account_delete_auto_accept_rule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_delete_auto_accept_rule_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_delete_auto_accept_rule)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a093e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_delete_auto_accept_rule",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_account_list_auto_accept_rules
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_list_auto_accept_rules_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_list_auto_accept_rules)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a094ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_list_auto_accept_rules",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_account_update_account
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_update_account_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_update_account)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a095f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_update_account",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_account_get_account
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_get_account_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_get_account)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a096fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                               "as_vx_resp_account_get_account", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_account_send_sms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_send_sms_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_send_sms)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a09804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                               "as_vx_resp_account_send_sms", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_aux_connectivity_info
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_connectivity_info_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_connectivity_info)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a0990c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_aux_connectivity_info",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_aux_get_render_devices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_get_render_devices_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_get_render_devices)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a09a14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_aux_get_render_devices",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_aux_get_capture_devices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_get_capture_devices_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_get_capture_devices)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a09b1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_aux_get_capture_devices",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_aux_set_render_device
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_set_render_device_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_set_render_device)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a09c24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_aux_set_render_device",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_aux_set_capture_device
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_set_capture_device_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_set_capture_device)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a09d2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_aux_set_capture_device",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_aux_get_mic_level
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_get_mic_level_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_get_mic_level)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a09e34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                               "as_vx_resp_aux_get_mic_level", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_aux_get_speaker_level
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_get_speaker_level_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_get_speaker_level)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a09f3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_aux_get_speaker_level",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_aux_set_mic_level
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_set_mic_level_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_set_mic_level)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a0a044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                               "as_vx_resp_aux_set_mic_level", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_aux_set_speaker_level
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_set_speaker_level_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_set_speaker_level)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a0a14c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_aux_set_speaker_level",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_aux_render_audio_start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_render_audio_start_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_render_audio_start)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a0a254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_aux_render_audio_start",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_aux_render_audio_modify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_render_audio_modify_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_render_audio_modify)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a0a35c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_aux_render_audio_modify",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_aux_get_vad_properties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_get_vad_properties_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_get_vad_properties)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a0a464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_aux_get_vad_properties",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_aux_set_vad_properties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_set_vad_properties_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_set_vad_properties)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a0a56c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_aux_set_vad_properties",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_aux_get_derumbler_properties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_get_derumbler_properties_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_get_derumbler_properties)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a0a674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_aux_get_derumbler_properties",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_aux_set_derumbler_properties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_set_derumbler_properties_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_set_derumbler_properties)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a0a77c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_aux_set_derumbler_properties",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_aux_render_audio_stop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_render_audio_stop_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_render_audio_stop)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a0a884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_aux_render_audio_stop",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_aux_capture_audio_start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_capture_audio_start_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_capture_audio_start)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a0a98c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_aux_capture_audio_start",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_aux_capture_audio_stop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_capture_audio_stop_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_capture_audio_stop)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a0aa94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_aux_capture_audio_stop",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_aux_global_monitor_keyboard_mouse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_global_monitor_keyboard_mouse_t* (
    ::Unity::Services::Vivox::vx_resp_base_t::*)()>(&::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_global_monitor_keyboard_mouse)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a0ab9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                 "as_vx_resp_aux_global_monitor_keyboard_mouse", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_aux_set_idle_timeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_set_idle_timeout_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_set_idle_timeout)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a0aca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_aux_set_idle_timeout",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_aux_create_account
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_create_account_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_create_account)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a0adac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                               "as_vx_resp_aux_create_account", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_aux_reactivate_account
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_reactivate_account_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_reactivate_account)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a0aeb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_aux_reactivate_account",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_aux_deactivate_account
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_deactivate_account_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_deactivate_account)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a0afbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_aux_deactivate_account",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_account_post_crash_dump
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_post_crash_dump_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_post_crash_dump)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a0b0c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_post_crash_dump",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_aux_reset_password
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_reset_password_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_reset_password)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a0b1cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                               "as_vx_resp_aux_reset_password", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_account_get_session_fonts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_get_session_fonts_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_get_session_fonts)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a0b2d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_get_session_fonts",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_account_get_template_fonts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_get_template_fonts_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_get_template_fonts)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a0b3dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_get_template_fonts",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_aux_start_buffer_capture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_start_buffer_capture_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_start_buffer_capture)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a0b4e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_aux_start_buffer_capture",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_aux_play_audio_buffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_play_audio_buffer_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_play_audio_buffer)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a0b5ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_aux_play_audio_buffer",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_aux_diagnostic_state_dump
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_diagnostic_state_dump_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_diagnostic_state_dump)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a0b6f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_aux_diagnostic_state_dump",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_account_web_call
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_web_call_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_web_call)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a0b7fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                               "as_vx_resp_account_web_call", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_sessiongroup_get_stats
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_sessiongroup_get_stats_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_sessiongroup_get_stats)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a0b904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_sessiongroup_get_stats",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_account_send_message
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_send_message_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_send_message)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a0b9e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_send_message",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_account_delete_message
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_delete_message_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_delete_message)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a0baf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_delete_message",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_account_edit_message
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_edit_message_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_edit_message)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a0bbf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_edit_message",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_account_archive_query
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_archive_query_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_archive_query)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a0bd00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_archive_query",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_account_chat_history_query
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_chat_history_query_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_chat_history_query)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a0be08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_chat_history_query",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_account_get_conversations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_get_conversations_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_get_conversations)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a0bf10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_get_conversations",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_aux_notify_application_state_change
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_aux_notify_application_state_change_t* (
    ::Unity::Services::Vivox::vx_resp_base_t::*)()>(&::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_notify_application_state_change)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a0c018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                 "as_vx_resp_aux_notify_application_state_change", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_account_control_communications
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_account_control_communications_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_control_communications)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a0c120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_control_communications",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t.as_vx_resp_session_transcription_control
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_resp_session_transcription_control_t* (::Unity::Services::Vivox::vx_resp_base_t::*)()>(
    &::Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_transcription_control)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a0c228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_session_transcription_control",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_resp_base_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::vx_resp_base_t::*)()>(&::Unity::Services::Vivox::vx_resp_base_t::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2a0c9c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Services::Vivox::vx_resp_base_t::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Services::Vivox::vx_resp_base_t::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::System::Runtime::InteropServices::HandleRef& Unity::Services::Vivox::vx_resp_base_t::__cordl_internal_get_swigCPtr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& Unity::Services::Vivox::vx_resp_base_t::__cordl_internal_get_swigCPtr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___swigCPtr;
}
constexpr void Unity::Services::Vivox::vx_resp_base_t::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___swigCPtr = value;
}
constexpr bool& Unity::Services::Vivox::vx_resp_base_t::__cordl_internal_get_swigCMemOwn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___swigCMemOwn;
}
constexpr bool const& Unity::Services::Vivox::vx_resp_base_t::__cordl_internal_get_swigCMemOwn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___swigCMemOwn;
}
constexpr void Unity::Services::Vivox::vx_resp_base_t::__cordl_internal_set_swigCMemOwn(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___swigCMemOwn = value;
}
inline ::Unity::Services::Vivox::vx_resp_base_t* Unity::Services::Vivox::vx_resp_base_t::New_ctor(void* cPtr, bool cMemoryOwn) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::vx_resp_base_t*>(cPtr, cMemoryOwn));
}
inline void Unity::Services::Vivox::vx_resp_base_t::_ctor(void* cPtr, bool cMemoryOwn) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef Unity::Services::Vivox::vx_resp_base_t::getCPtr(::Unity::Services::Vivox::vx_resp_base_t* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "getCPtr", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef, false>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef Unity::Services::Vivox::vx_resp_base_t::swigRelease(::Unity::Services::Vivox::vx_resp_base_t* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "swigRelease", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef, false>(nullptr, ___internal_method, obj);
}
inline void Unity::Services::Vivox::vx_resp_base_t::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::vx_resp_base_t::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::vx_resp_base_t::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline ::Unity::Services::Vivox::vx_resp_connector_create_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_connector_create_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_connector_create_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_connector_initiate_shutdown_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_connector_initiate_shutdown_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_connector_initiate_shutdown_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_account_login_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_login_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_login_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_account_authtoken_login_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_authtoken_login_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_authtoken_login_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_account_anonymous_login_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_anonymous_login_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_anonymous_login_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_account_logout_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_logout_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_logout_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_account_set_login_properties_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_set_login_properties_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_set_login_properties_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_sessiongroup_create_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_create_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_sessiongroup_create_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_sessiongroup_terminate_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_terminate_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_sessiongroup_terminate_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_sessiongroup_add_session_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_add_session_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_sessiongroup_add_session_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_sessiongroup_remove_session_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_remove_session_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_sessiongroup_remove_session_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_sessiongroup_set_focus_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_set_focus_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_sessiongroup_set_focus_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_sessiongroup_unset_focus_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_unset_focus_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_sessiongroup_unset_focus_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_sessiongroup_reset_focus_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_reset_focus_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_sessiongroup_reset_focus_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_sessiongroup_set_tx_session_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_set_tx_session_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_sessiongroup_set_tx_session_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_sessiongroup_set_tx_all_sessions_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_set_tx_all_sessions_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_sessiongroup_set_tx_all_sessions_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_sessiongroup_set_tx_no_session_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_set_tx_no_session_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_sessiongroup_set_tx_no_session_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_sessiongroup_set_session_3d_position_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_set_session_3d_position_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_sessiongroup_set_session_3d_position_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_sessiongroup_control_audio_injection_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_control_audio_injection_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_sessiongroup_control_audio_injection_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_session_create_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_create_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_create_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_session_media_connect_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_media_connect_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_media_connect_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_session_media_disconnect_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_media_disconnect_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_media_disconnect_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_session_text_connect_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_text_connect_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_text_connect_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_session_text_disconnect_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_text_disconnect_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_text_disconnect_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_session_terminate_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_terminate_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_terminate_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_session_mute_local_speaker_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_mute_local_speaker_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_mute_local_speaker_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_session_set_local_speaker_volume_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_set_local_speaker_volume_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_set_local_speaker_volume_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_session_set_local_render_volume_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_set_local_render_volume_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_set_local_render_volume_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_session_channel_invite_user_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_channel_invite_user_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_channel_invite_user_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_session_set_participant_volume_for_me_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_set_participant_volume_for_me_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_set_participant_volume_for_me_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_session_set_participant_mute_for_me_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_set_participant_mute_for_me_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_set_participant_mute_for_me_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_session_set_3d_position_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_set_3d_position_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_set_3d_position_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_session_set_voice_font_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_set_voice_font_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_set_voice_font_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_account_channel_change_owner_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_channel_change_owner_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_channel_change_owner_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_account_send_user_app_data_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_send_user_app_data_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_send_user_app_data_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_account_channel_add_acl_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_channel_add_acl_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_channel_add_acl_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_account_channel_remove_acl_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_channel_remove_acl_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_channel_remove_acl_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_account_channel_get_acl_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_channel_get_acl_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_channel_get_acl_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_channel_mute_user_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_channel_mute_user_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_channel_mute_user_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_channel_ban_user_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_channel_ban_user_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_channel_ban_user_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_channel_get_banned_users_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_channel_get_banned_users_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_channel_get_banned_users_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_channel_kick_user_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_channel_kick_user_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_channel_kick_user_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_channel_mute_all_users_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_channel_mute_all_users_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_channel_mute_all_users_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_channel_set_lock_mode_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_channel_set_lock_mode_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_channel_set_lock_mode_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_connector_mute_local_mic_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_connector_mute_local_mic_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_connector_mute_local_mic_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_connector_mute_local_speaker_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_connector_mute_local_speaker_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_connector_mute_local_speaker_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_connector_set_local_mic_volume_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_connector_set_local_mic_volume_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_connector_set_local_mic_volume_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_connector_set_local_speaker_volume_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_connector_set_local_speaker_volume_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_connector_set_local_speaker_volume_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_connector_get_local_audio_info_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_connector_get_local_audio_info_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_connector_get_local_audio_info_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_account_buddy_set_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_buddy_set_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_buddy_set_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_account_buddy_delete_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_buddy_delete_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_buddy_delete_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_account_list_buddies_and_groups_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_list_buddies_and_groups_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_list_buddies_and_groups_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_session_send_message_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_send_message_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_send_message_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_session_delete_message_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_delete_message_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_delete_message_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_session_edit_message_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_edit_message_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_edit_message_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_session_archive_query_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_archive_query_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_archive_query_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_session_chat_history_query_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_chat_history_query_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_chat_history_query_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_account_chat_history_set_marker_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_chat_history_set_marker_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_chat_history_set_marker_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_account_chat_history_get_last_read_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_chat_history_get_last_read_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_chat_history_get_last_read_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_account_set_presence_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_set_presence_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_set_presence_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_account_send_subscription_reply_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_send_subscription_reply_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_send_subscription_reply_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_session_send_notification_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_send_notification_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_send_notification_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_session_send_dtmf_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_send_dtmf_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_send_dtmf_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_account_create_block_rule_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_create_block_rule_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_create_block_rule_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_account_delete_block_rule_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_delete_block_rule_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_delete_block_rule_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_account_list_block_rules_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_list_block_rules_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_list_block_rules_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_account_create_auto_accept_rule_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_create_auto_accept_rule_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_create_auto_accept_rule_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_account_delete_auto_accept_rule_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_delete_auto_accept_rule_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_delete_auto_accept_rule_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_account_list_auto_accept_rules_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_list_auto_accept_rules_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_list_auto_accept_rules_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_account_update_account_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_update_account_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_update_account_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_account_get_account_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_get_account_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_get_account_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_account_send_sms_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_send_sms_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_send_sms_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_aux_connectivity_info_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_connectivity_info_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_connectivity_info_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_aux_get_render_devices_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_get_render_devices_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_get_render_devices_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_aux_get_capture_devices_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_get_capture_devices_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_get_capture_devices_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_aux_set_render_device_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_set_render_device_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_set_render_device_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_aux_set_capture_device_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_set_capture_device_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_set_capture_device_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_aux_get_mic_level_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_get_mic_level_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_get_mic_level_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_aux_get_speaker_level_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_get_speaker_level_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_get_speaker_level_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_aux_set_mic_level_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_set_mic_level_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_set_mic_level_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_aux_set_speaker_level_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_set_speaker_level_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_set_speaker_level_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_aux_render_audio_start_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_render_audio_start_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_render_audio_start_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_aux_render_audio_modify_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_render_audio_modify_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_render_audio_modify_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_aux_get_vad_properties_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_get_vad_properties_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_get_vad_properties_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_aux_set_vad_properties_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_set_vad_properties_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_set_vad_properties_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_aux_get_derumbler_properties_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_get_derumbler_properties_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_get_derumbler_properties_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_aux_set_derumbler_properties_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_set_derumbler_properties_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_set_derumbler_properties_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_aux_render_audio_stop_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_render_audio_stop_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_render_audio_stop_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_aux_capture_audio_start_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_capture_audio_start_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_capture_audio_start_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_aux_capture_audio_stop_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_capture_audio_stop_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_capture_audio_stop_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_aux_global_monitor_keyboard_mouse_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_global_monitor_keyboard_mouse_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_global_monitor_keyboard_mouse_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_aux_set_idle_timeout_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_set_idle_timeout_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_set_idle_timeout_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_aux_create_account_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_create_account_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_create_account_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_aux_reactivate_account_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_reactivate_account_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_reactivate_account_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_aux_deactivate_account_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_deactivate_account_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_deactivate_account_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_account_post_crash_dump_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_post_crash_dump_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_post_crash_dump_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_aux_reset_password_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_reset_password_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_reset_password_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_account_get_session_fonts_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_get_session_fonts_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_get_session_fonts_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_account_get_template_fonts_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_get_template_fonts_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_get_template_fonts_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_aux_start_buffer_capture_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_start_buffer_capture_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_start_buffer_capture_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_aux_play_audio_buffer_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_play_audio_buffer_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_play_audio_buffer_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_aux_diagnostic_state_dump_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_diagnostic_state_dump_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_diagnostic_state_dump_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_account_web_call_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_web_call_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_web_call_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_sessiongroup_get_stats_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_sessiongroup_get_stats_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_sessiongroup_get_stats_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_account_send_message_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_send_message_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_send_message_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_account_delete_message_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_delete_message_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_delete_message_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_account_edit_message_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_edit_message_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_edit_message_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_account_archive_query_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_archive_query_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_archive_query_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_account_chat_history_query_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_chat_history_query_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_chat_history_query_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_account_get_conversations_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_get_conversations_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_get_conversations_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_aux_notify_application_state_change_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_aux_notify_application_state_change_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_notify_application_state_change_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_account_control_communications_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_account_control_communications_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_control_communications_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_resp_session_transcription_control_t*
Unity::Services::Vivox::vx_resp_base_t::op_Implicit___Unity__Services__Vivox__vx_resp_session_transcription_control_t_(::Unity::Services::Vivox::vx_resp_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_resp_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_transcription_control_t*, false>(nullptr, ___internal_method, t);
}
inline void Unity::Services::Vivox::vx_resp_base_t::set_message(::Unity::Services::Vivox::vx_message_base_t* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "set_message", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_message_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Services::Vivox::vx_message_base_t* Unity::Services::Vivox::vx_resp_base_t::get_message() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "get_message",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_message_base_t*, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::vx_resp_base_t::set_type(::Unity::Services::Vivox::vx_response_type value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "set_type", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_response_type>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Services::Vivox::vx_response_type Unity::Services::Vivox::vx_resp_base_t::get_type() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "get_type",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_response_type, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::vx_resp_base_t::set_return_code(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "set_return_code",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Unity::Services::Vivox::vx_resp_base_t::get_return_code() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                             "get_return_code", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::vx_resp_base_t::set_status_code(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "set_status_code",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Unity::Services::Vivox::vx_resp_base_t::get_status_code() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                             "get_status_code", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::vx_resp_base_t::set_status_string(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "set_status_string",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Unity::Services::Vivox::vx_resp_base_t::get_status_string() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                             "get_status_string", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::vx_resp_base_t::set_request(::Unity::Services::Vivox::vx_req_base_t* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "set_request", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_req_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Services::Vivox::vx_req_base_t* Unity::Services::Vivox::vx_resp_base_t::get_request() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "get_request",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_req_base_t*, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::vx_resp_base_t::set_extended_status_info(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "set_extended_status_info",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Unity::Services::Vivox::vx_resp_base_t::get_extended_status_info() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                             "get_extended_status_info", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_connector_create_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_connector_create() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                             "as_vx_resp_connector_create", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_connector_create_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_connector_initiate_shutdown_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_connector_initiate_shutdown() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_connector_initiate_shutdown",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_connector_initiate_shutdown_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_account_login_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_login() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                             "as_vx_resp_account_login", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_login_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_account_authtoken_login_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_authtoken_login() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_authtoken_login",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_authtoken_login_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_account_anonymous_login_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_anonymous_login() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_anonymous_login",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_anonymous_login_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_account_logout_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_logout() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                             "as_vx_resp_account_logout", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_logout_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_account_set_login_properties_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_set_login_properties() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_set_login_properties",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_set_login_properties_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_sessiongroup_create_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_sessiongroup_create() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                             "as_vx_resp_sessiongroup_create", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_sessiongroup_create_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_sessiongroup_terminate_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_sessiongroup_terminate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_sessiongroup_terminate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_sessiongroup_terminate_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_sessiongroup_add_session_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_sessiongroup_add_session() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_sessiongroup_add_session",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_sessiongroup_add_session_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_sessiongroup_remove_session_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_sessiongroup_remove_session() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_sessiongroup_remove_session",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_sessiongroup_remove_session_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_sessiongroup_set_focus_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_sessiongroup_set_focus() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_sessiongroup_set_focus",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_sessiongroup_set_focus_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_sessiongroup_unset_focus_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_sessiongroup_unset_focus() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_sessiongroup_unset_focus",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_sessiongroup_unset_focus_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_sessiongroup_reset_focus_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_sessiongroup_reset_focus() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_sessiongroup_reset_focus",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_sessiongroup_reset_focus_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_sessiongroup_set_tx_session_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_sessiongroup_set_tx_session() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_sessiongroup_set_tx_session",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_sessiongroup_set_tx_session_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_sessiongroup_set_tx_all_sessions_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_sessiongroup_set_tx_all_sessions() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_sessiongroup_set_tx_all_sessions",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_sessiongroup_set_tx_all_sessions_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_sessiongroup_set_tx_no_session_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_sessiongroup_set_tx_no_session() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_sessiongroup_set_tx_no_session",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_sessiongroup_set_tx_no_session_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_sessiongroup_set_session_3d_position_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_sessiongroup_set_session_3d_position() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                               "as_vx_resp_sessiongroup_set_session_3d_position", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_sessiongroup_set_session_3d_position_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_sessiongroup_control_audio_injection_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_sessiongroup_control_audio_injection() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                               "as_vx_resp_sessiongroup_control_audio_injection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_sessiongroup_control_audio_injection_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_session_create_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_create() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                             "as_vx_resp_session_create", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_create_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_session_media_connect_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_media_connect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                             "as_vx_resp_session_media_connect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_media_connect_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_session_media_disconnect_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_media_disconnect() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_session_media_disconnect",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_media_disconnect_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_session_text_connect_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_text_connect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                             "as_vx_resp_session_text_connect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_text_connect_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_session_text_disconnect_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_text_disconnect() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_session_text_disconnect",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_text_disconnect_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_session_terminate_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_terminate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                             "as_vx_resp_session_terminate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_terminate_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_session_mute_local_speaker_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_mute_local_speaker() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_session_mute_local_speaker",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_mute_local_speaker_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_session_set_local_speaker_volume_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_set_local_speaker_volume() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_session_set_local_speaker_volume",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_set_local_speaker_volume_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_session_set_local_render_volume_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_set_local_render_volume() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_session_set_local_render_volume",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_set_local_render_volume_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_session_channel_invite_user_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_channel_invite_user() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_session_channel_invite_user",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_channel_invite_user_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_session_set_participant_volume_for_me_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_set_participant_volume_for_me() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                               "as_vx_resp_session_set_participant_volume_for_me", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_set_participant_volume_for_me_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_session_set_participant_mute_for_me_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_set_participant_mute_for_me() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                               "as_vx_resp_session_set_participant_mute_for_me", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_set_participant_mute_for_me_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_session_set_3d_position_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_set_3d_position() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_session_set_3d_position",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_set_3d_position_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_session_set_voice_font_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_set_voice_font() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_session_set_voice_font",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_set_voice_font_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_account_channel_change_owner_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_channel_change_owner() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_channel_change_owner",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_channel_change_owner_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_account_send_user_app_data_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_send_user_app_data() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_send_user_app_data",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_send_user_app_data_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_account_channel_add_acl_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_channel_add_acl() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_channel_add_acl",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_channel_add_acl_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_account_channel_remove_acl_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_channel_remove_acl() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_channel_remove_acl",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_channel_remove_acl_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_account_channel_get_acl_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_channel_get_acl() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_channel_get_acl",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_channel_get_acl_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_channel_mute_user_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_channel_mute_user() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                             "as_vx_resp_channel_mute_user", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_channel_mute_user_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_channel_ban_user_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_channel_ban_user() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                             "as_vx_resp_channel_ban_user", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_channel_ban_user_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_channel_get_banned_users_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_channel_get_banned_users() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_channel_get_banned_users",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_channel_get_banned_users_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_channel_kick_user_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_channel_kick_user() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                             "as_vx_resp_channel_kick_user", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_channel_kick_user_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_channel_mute_all_users_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_channel_mute_all_users() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_channel_mute_all_users",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_channel_mute_all_users_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_channel_set_lock_mode_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_channel_set_lock_mode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                             "as_vx_resp_channel_set_lock_mode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_channel_set_lock_mode_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_connector_mute_local_mic_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_connector_mute_local_mic() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_connector_mute_local_mic",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_connector_mute_local_mic_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_connector_mute_local_speaker_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_connector_mute_local_speaker() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_connector_mute_local_speaker",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_connector_mute_local_speaker_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_connector_set_local_mic_volume_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_connector_set_local_mic_volume() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_connector_set_local_mic_volume",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_connector_set_local_mic_volume_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_connector_set_local_speaker_volume_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_connector_set_local_speaker_volume() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                               "as_vx_resp_connector_set_local_speaker_volume", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_connector_set_local_speaker_volume_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_connector_get_local_audio_info_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_connector_get_local_audio_info() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_connector_get_local_audio_info",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_connector_get_local_audio_info_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_account_buddy_set_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_buddy_set() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                             "as_vx_resp_account_buddy_set", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_buddy_set_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_account_buddy_delete_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_buddy_delete() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                             "as_vx_resp_account_buddy_delete", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_buddy_delete_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_account_list_buddies_and_groups_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_list_buddies_and_groups() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_list_buddies_and_groups",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_list_buddies_and_groups_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_session_send_message_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_send_message() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                             "as_vx_resp_session_send_message", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_send_message_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_session_delete_message_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_delete_message() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_session_delete_message",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_delete_message_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_session_edit_message_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_edit_message() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                             "as_vx_resp_session_edit_message", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_edit_message_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_session_archive_query_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_archive_query() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                             "as_vx_resp_session_archive_query", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_archive_query_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_session_chat_history_query_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_chat_history_query() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_session_chat_history_query",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_chat_history_query_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_account_chat_history_set_marker_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_chat_history_set_marker() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_chat_history_set_marker",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_chat_history_set_marker_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_account_chat_history_get_last_read_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_chat_history_get_last_read() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                               "as_vx_resp_account_chat_history_get_last_read", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_chat_history_get_last_read_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_account_set_presence_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_set_presence() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                             "as_vx_resp_account_set_presence", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_set_presence_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_account_send_subscription_reply_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_send_subscription_reply() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_send_subscription_reply",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_send_subscription_reply_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_session_send_notification_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_send_notification() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_session_send_notification",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_send_notification_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_session_send_dtmf_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_send_dtmf() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                             "as_vx_resp_session_send_dtmf", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_send_dtmf_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_account_create_block_rule_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_create_block_rule() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_create_block_rule",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_create_block_rule_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_account_delete_block_rule_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_delete_block_rule() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_delete_block_rule",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_delete_block_rule_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_account_list_block_rules_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_list_block_rules() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_list_block_rules",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_list_block_rules_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_account_create_auto_accept_rule_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_create_auto_accept_rule() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_create_auto_accept_rule",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_create_auto_accept_rule_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_account_delete_auto_accept_rule_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_delete_auto_accept_rule() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_delete_auto_accept_rule",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_delete_auto_accept_rule_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_account_list_auto_accept_rules_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_list_auto_accept_rules() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_list_auto_accept_rules",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_list_auto_accept_rules_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_account_update_account_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_update_account() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_update_account",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_update_account_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_account_get_account_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_get_account() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                             "as_vx_resp_account_get_account", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_get_account_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_account_send_sms_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_send_sms() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                             "as_vx_resp_account_send_sms", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_send_sms_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_aux_connectivity_info_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_connectivity_info() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                             "as_vx_resp_aux_connectivity_info", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_connectivity_info_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_aux_get_render_devices_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_get_render_devices() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_aux_get_render_devices",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_get_render_devices_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_aux_get_capture_devices_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_get_capture_devices() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_aux_get_capture_devices",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_get_capture_devices_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_aux_set_render_device_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_set_render_device() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                             "as_vx_resp_aux_set_render_device", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_set_render_device_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_aux_set_capture_device_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_set_capture_device() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_aux_set_capture_device",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_set_capture_device_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_aux_get_mic_level_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_get_mic_level() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                             "as_vx_resp_aux_get_mic_level", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_get_mic_level_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_aux_get_speaker_level_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_get_speaker_level() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                             "as_vx_resp_aux_get_speaker_level", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_get_speaker_level_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_aux_set_mic_level_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_set_mic_level() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                             "as_vx_resp_aux_set_mic_level", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_set_mic_level_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_aux_set_speaker_level_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_set_speaker_level() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                             "as_vx_resp_aux_set_speaker_level", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_set_speaker_level_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_aux_render_audio_start_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_render_audio_start() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_aux_render_audio_start",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_render_audio_start_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_aux_render_audio_modify_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_render_audio_modify() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_aux_render_audio_modify",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_render_audio_modify_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_aux_get_vad_properties_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_get_vad_properties() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_aux_get_vad_properties",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_get_vad_properties_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_aux_set_vad_properties_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_set_vad_properties() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_aux_set_vad_properties",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_set_vad_properties_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_aux_get_derumbler_properties_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_get_derumbler_properties() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_aux_get_derumbler_properties",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_get_derumbler_properties_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_aux_set_derumbler_properties_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_set_derumbler_properties() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_aux_set_derumbler_properties",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_set_derumbler_properties_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_aux_render_audio_stop_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_render_audio_stop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                             "as_vx_resp_aux_render_audio_stop", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_render_audio_stop_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_aux_capture_audio_start_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_capture_audio_start() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_aux_capture_audio_start",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_capture_audio_start_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_aux_capture_audio_stop_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_capture_audio_stop() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_aux_capture_audio_stop",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_capture_audio_stop_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_aux_global_monitor_keyboard_mouse_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_global_monitor_keyboard_mouse() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_aux_global_monitor_keyboard_mouse",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_global_monitor_keyboard_mouse_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_aux_set_idle_timeout_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_set_idle_timeout() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                             "as_vx_resp_aux_set_idle_timeout", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_set_idle_timeout_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_aux_create_account_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_create_account() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                             "as_vx_resp_aux_create_account", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_create_account_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_aux_reactivate_account_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_reactivate_account() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_aux_reactivate_account",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_reactivate_account_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_aux_deactivate_account_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_deactivate_account() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_aux_deactivate_account",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_deactivate_account_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_account_post_crash_dump_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_post_crash_dump() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_post_crash_dump",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_post_crash_dump_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_aux_reset_password_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_reset_password() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                             "as_vx_resp_aux_reset_password", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_reset_password_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_account_get_session_fonts_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_get_session_fonts() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_get_session_fonts",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_get_session_fonts_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_account_get_template_fonts_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_get_template_fonts() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_get_template_fonts",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_get_template_fonts_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_aux_start_buffer_capture_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_start_buffer_capture() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_aux_start_buffer_capture",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_start_buffer_capture_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_aux_play_audio_buffer_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_play_audio_buffer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                             "as_vx_resp_aux_play_audio_buffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_play_audio_buffer_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_aux_diagnostic_state_dump_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_diagnostic_state_dump() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_aux_diagnostic_state_dump",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_diagnostic_state_dump_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_account_web_call_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_web_call() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                             "as_vx_resp_account_web_call", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_web_call_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_sessiongroup_get_stats_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_sessiongroup_get_stats() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_sessiongroup_get_stats",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_sessiongroup_get_stats_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_account_send_message_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_send_message() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                             "as_vx_resp_account_send_message", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_send_message_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_account_delete_message_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_delete_message() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_delete_message",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_delete_message_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_account_edit_message_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_edit_message() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                             "as_vx_resp_account_edit_message", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_edit_message_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_account_archive_query_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_archive_query() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                                                             "as_vx_resp_account_archive_query", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_archive_query_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_account_chat_history_query_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_chat_history_query() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_chat_history_query",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_chat_history_query_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_account_get_conversations_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_get_conversations() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_get_conversations",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_get_conversations_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_aux_notify_application_state_change_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_aux_notify_application_state_change() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(),
                                               "as_vx_resp_aux_notify_application_state_change", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_aux_notify_application_state_change_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_account_control_communications_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_account_control_communications() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_account_control_communications",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_account_control_communications_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_session_transcription_control_t* Unity::Services::Vivox::vx_resp_base_t::as_vx_resp_session_transcription_control() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), "as_vx_resp_session_transcription_control",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_resp_session_transcription_control_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_resp_base_t* Unity::Services::Vivox::vx_resp_base_t::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::vx_resp_base_t*>());
}
inline void Unity::Services::Vivox::vx_resp_base_t::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_resp_base_t*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_resp_base_t::vx_resp_base_t() {}
