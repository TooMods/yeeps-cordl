#pragma once
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_base_t_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_event_type_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_account_archive_message_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_account_archive_query_end_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_account_delete_message_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_account_edit_message_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_account_login_state_change_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_account_send_message_failed_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_audio_device_hot_swap_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_aux_audio_properties_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_buddy_and_group_list_changed_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_buddy_changed_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_buddy_group_changed_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_buddy_presence_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_connection_state_changed_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_idle_state_changed_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_keyboard_mouse_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_media_completion_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_media_stream_updated_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_message_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_network_message_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_participant_added_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_participant_removed_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_participant_updated_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_presence_updated_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_publication_state_changed_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_server_app_data_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_session_added_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_session_archive_message_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_session_archive_query_end_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_session_delete_message_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_session_edit_message_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_session_notification_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_session_removed_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_session_updated_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_sessiongroup_added_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_sessiongroup_playback_frame_played_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_sessiongroup_removed_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_sessiongroup_updated_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_stt_failed_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_subscription_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_text_stream_updated_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_transcribed_message_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_tts_injection_ended_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_tts_injection_failed_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_tts_injection_started_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_user_app_data_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_user_to_user_message_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_evt_voice_service_connection_state_changed_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_message_base_t_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::vx_evt_base_t::*)(void*, bool)>(&::Unity::Services::Vivox::vx_evt_base_t::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2791684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.getCPtr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::getCPtr)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2791510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "getCPtr", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.swigRelease
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::swigRelease)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2796fcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "swigRelease", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::vx_evt_base_t::*)()>(&::Unity::Services::Vivox::vx_evt_base_t::Finalize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2797114;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::vx_evt_base_t::*)()>(&::Unity::Services::Vivox::vx_evt_base_t::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x27970a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::vx_evt_base_t::*)(bool)>(&::Unity::Services::Vivox::vx_evt_base_t::Dispose)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x27971b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_account_login_state_change_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_account_login_state_change_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_account_login_state_change_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2797334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_buddy_presence_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_buddy_presence_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_buddy_presence_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x279743c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_subscription_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_subscription_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_subscription_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2797544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_session_notification_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_session_notification_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_session_notification_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2797628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_message_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_message_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_message_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2797730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_session_delete_message_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_session_delete_message_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_session_delete_message_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2797838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_session_edit_message_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_session_edit_message_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_session_edit_message_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2797940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_account_delete_message_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_account_delete_message_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_account_delete_message_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2797a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_account_edit_message_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_account_edit_message_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_account_edit_message_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2797b50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_session_archive_message_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_session_archive_message_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_session_archive_message_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2797c58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_transcribed_message_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_transcribed_message_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_transcribed_message_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2797d60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_session_archive_query_end_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_session_archive_query_end_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_session_archive_query_end_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2797e44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_aux_audio_properties_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_aux_audio_properties_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_aux_audio_properties_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2797f4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_buddy_changed_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_buddy_changed_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_buddy_changed_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2798054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_buddy_group_changed_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_buddy_group_changed_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_buddy_group_changed_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x279815c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_buddy_and_group_list_changed_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_buddy_and_group_list_changed_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_buddy_and_group_list_changed_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2798264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_keyboard_mouse_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_keyboard_mouse_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_keyboard_mouse_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x279836c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_idle_state_changed_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_idle_state_changed_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_idle_state_changed_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2798474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_media_stream_updated_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_media_stream_updated_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_media_stream_updated_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x279857c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_text_stream_updated_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_text_stream_updated_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_text_stream_updated_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2798684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_sessiongroup_added_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_sessiongroup_added_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_sessiongroup_added_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2798768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_sessiongroup_removed_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_sessiongroup_removed_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_sessiongroup_removed_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2798870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_session_added_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_session_added_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_session_added_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2798978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_session_removed_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_session_removed_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_session_removed_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2798a80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_participant_added_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_participant_added_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_participant_added_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2798b88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_participant_removed_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_participant_removed_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_participant_removed_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2798c90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_participant_updated_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_participant_updated_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_participant_updated_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2798d98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_sessiongroup_playback_frame_played_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_sessiongroup_playback_frame_played_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_sessiongroup_playback_frame_played_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2798ea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_session_updated_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_session_updated_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_session_updated_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2798fa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_sessiongroup_updated_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_sessiongroup_updated_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_sessiongroup_updated_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x279908c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_media_completion_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_media_completion_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_media_completion_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2799194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_server_app_data_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_server_app_data_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_server_app_data_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x279929c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_user_app_data_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_user_app_data_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_user_app_data_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x27993a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_network_message_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_network_message_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_network_message_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2799488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_voice_service_connection_state_changed_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Unity::Services::Vivox::vx_evt_voice_service_connection_state_changed_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
        &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_voice_service_connection_state_changed_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2799590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_publication_state_changed_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_publication_state_changed_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_publication_state_changed_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2799674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_audio_device_hot_swap_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_audio_device_hot_swap_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_audio_device_hot_swap_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x279977c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_user_to_user_message_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_user_to_user_message_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_user_to_user_message_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2799884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_account_archive_message_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_account_archive_message_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_account_archive_message_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2799968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_account_archive_query_end_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_account_archive_query_end_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_account_archive_query_end_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2799a70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_account_send_message_failed_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_account_send_message_failed_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_account_send_message_failed_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2799b78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_tts_injection_started_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_tts_injection_started_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_tts_injection_started_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2799c80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_tts_injection_ended_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_tts_injection_ended_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_tts_injection_ended_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2799d64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_tts_injection_failed_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_tts_injection_failed_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_tts_injection_failed_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2799e48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_stt_failed_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_stt_failed_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_stt_failed_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2799f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_connection_state_changed_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_connection_state_changed_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_connection_state_changed_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x279a010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.op_Implicit___Unity__Services__Vivox__vx_evt_presence_updated_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_presence_updated_t* (*)(::Unity::Services::Vivox::vx_evt_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_presence_updated_t_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x279a118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.set_message
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::vx_evt_base_t::*)(::Unity::Services::Vivox::vx_message_base_t*)>(
    &::Unity::Services::Vivox::vx_evt_base_t::set_message)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x279a220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "set_message", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_message_base_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.get_message
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_message_base_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::get_message)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x279a2a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "get_message",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.set_type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::vx_evt_base_t::*)(::Unity::Services::Vivox::vx_event_type)>(
    &::Unity::Services::Vivox::vx_evt_base_t::set_type)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x279a37c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "set_type", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_event_type>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.get_type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_event_type (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::get_type)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x279a3ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "get_type",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.set_extended_status_info
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::vx_evt_base_t::*)(::StringW)>(
    &::Unity::Services::Vivox::vx_evt_base_t::set_extended_status_info)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x279a44c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "set_extended_status_info",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.get_extended_status_info
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::get_extended_status_info)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x279a4bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                               "get_extended_status_info", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_account_login_state_change
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_account_login_state_change_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_account_login_state_change)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2797344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "as_vx_evt_account_login_state_change",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_buddy_presence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_buddy_presence_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_buddy_presence)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x279744c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                               "as_vx_evt_buddy_presence", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_subscription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_subscription_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_subscription)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2797554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                               "as_vx_evt_subscription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_session_notification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_session_notification_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_session_notification)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2797638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                               "as_vx_evt_session_notification", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_message
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_message_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_message)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2797740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                               "as_vx_evt_message", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_session_delete_message
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_session_delete_message_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_session_delete_message)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2797848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "as_vx_evt_session_delete_message",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_session_edit_message
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_session_edit_message_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_session_edit_message)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2797950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                               "as_vx_evt_session_edit_message", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_account_delete_message
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_account_delete_message_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_account_delete_message)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2797a58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "as_vx_evt_account_delete_message",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_account_edit_message
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_account_edit_message_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_account_edit_message)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2797b60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                               "as_vx_evt_account_edit_message", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_session_archive_message
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_session_archive_message_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_session_archive_message)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2797c68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "as_vx_evt_session_archive_message",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_transcribed_message
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_transcribed_message_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_transcribed_message)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2797d70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                               "as_vx_evt_transcribed_message", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_session_archive_query_end
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_session_archive_query_end_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_session_archive_query_end)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2797e54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "as_vx_evt_session_archive_query_end",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_aux_audio_properties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_aux_audio_properties_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_aux_audio_properties)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2797f5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                               "as_vx_evt_aux_audio_properties", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_buddy_changed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_buddy_changed_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_buddy_changed)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2798064;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                               "as_vx_evt_buddy_changed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_buddy_group_changed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_buddy_group_changed_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_buddy_group_changed)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x279816c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                               "as_vx_evt_buddy_group_changed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_buddy_and_group_list_changed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_buddy_and_group_list_changed_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_buddy_and_group_list_changed)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2798274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "as_vx_evt_buddy_and_group_list_changed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_keyboard_mouse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_keyboard_mouse_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_keyboard_mouse)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x279837c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                               "as_vx_evt_keyboard_mouse", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_idle_state_changed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_idle_state_changed_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_idle_state_changed)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2798484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                               "as_vx_evt_idle_state_changed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_media_stream_updated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_media_stream_updated_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_media_stream_updated)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x279858c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                               "as_vx_evt_media_stream_updated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_text_stream_updated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_text_stream_updated_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_text_stream_updated)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2798694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                               "as_vx_evt_text_stream_updated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_sessiongroup_added
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_sessiongroup_added_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_sessiongroup_added)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2798778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                               "as_vx_evt_sessiongroup_added", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_sessiongroup_removed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_sessiongroup_removed_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_sessiongroup_removed)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2798880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                               "as_vx_evt_sessiongroup_removed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_session_added
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_session_added_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_session_added)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2798988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                               "as_vx_evt_session_added", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_session_removed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_session_removed_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_session_removed)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2798a90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                               "as_vx_evt_session_removed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_participant_added
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_participant_added_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_participant_added)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2798b98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                               "as_vx_evt_participant_added", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_participant_removed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_participant_removed_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_participant_removed)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2798ca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                               "as_vx_evt_participant_removed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_participant_updated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_participant_updated_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_participant_updated)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2798da8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                               "as_vx_evt_participant_updated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_sessiongroup_playback_frame_played
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_sessiongroup_playback_frame_played_t* (
    ::Unity::Services::Vivox::vx_evt_base_t::*)()>(&::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_sessiongroup_playback_frame_played)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2798eb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                 "as_vx_evt_sessiongroup_playback_frame_played", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_session_updated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_session_updated_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_session_updated)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2798fb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                               "as_vx_evt_session_updated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_sessiongroup_updated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_sessiongroup_updated_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_sessiongroup_updated)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x279909c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                               "as_vx_evt_sessiongroup_updated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_media_completion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_media_completion_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_media_completion)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x27991a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                               "as_vx_evt_media_completion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_server_app_data
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_server_app_data_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_server_app_data)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x27992ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                               "as_vx_evt_server_app_data", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_user_app_data
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_user_app_data_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_user_app_data)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x27993b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                               "as_vx_evt_user_app_data", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_network_message
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_network_message_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_network_message)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2799498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                               "as_vx_evt_network_message", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_voice_service_connection_state_changed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_voice_service_connection_state_changed_t* (
    ::Unity::Services::Vivox::vx_evt_base_t::*)()>(&::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_voice_service_connection_state_changed)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x27995a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                 "as_vx_evt_voice_service_connection_state_changed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_publication_state_changed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_publication_state_changed_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_publication_state_changed)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2799684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "as_vx_evt_publication_state_changed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_audio_device_hot_swap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_audio_device_hot_swap_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_audio_device_hot_swap)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x279978c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "as_vx_evt_audio_device_hot_swap",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_user_to_user_message
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_user_to_user_message_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_user_to_user_message)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2799894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                               "as_vx_evt_user_to_user_message", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_account_archive_message
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_account_archive_message_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_account_archive_message)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2799978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "as_vx_evt_account_archive_message",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_account_archive_query_end
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_account_archive_query_end_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_account_archive_query_end)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2799a80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "as_vx_evt_account_archive_query_end",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_account_send_message_failed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_account_send_message_failed_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_account_send_message_failed)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2799b88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "as_vx_evt_account_send_message_failed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_tts_injection_started
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_tts_injection_started_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_tts_injection_started)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2799c90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "as_vx_evt_tts_injection_started",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_tts_injection_ended
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_tts_injection_ended_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_tts_injection_ended)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2799d74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                               "as_vx_evt_tts_injection_ended", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_tts_injection_failed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_tts_injection_failed_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_tts_injection_failed)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2799e58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                               "as_vx_evt_tts_injection_failed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_stt_failed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_stt_failed_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_stt_failed)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2799f3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                               "as_vx_evt_stt_failed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_connection_state_changed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_connection_state_changed_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_connection_state_changed)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x279a020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "as_vx_evt_connection_state_changed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t.as_vx_evt_presence_updated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::vx_evt_presence_updated_t* (::Unity::Services::Vivox::vx_evt_base_t::*)()>(
    &::Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_presence_updated)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x279a128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                               "as_vx_evt_presence_updated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::vx_evt_base_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::vx_evt_base_t::*)()>(&::Unity::Services::Vivox::vx_evt_base_t::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x279ae4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Services::Vivox::vx_evt_base_t::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Services::Vivox::vx_evt_base_t::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::System::Runtime::InteropServices::HandleRef& Unity::Services::Vivox::vx_evt_base_t::__cordl_internal_get_swigCPtr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& Unity::Services::Vivox::vx_evt_base_t::__cordl_internal_get_swigCPtr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___swigCPtr;
}
constexpr void Unity::Services::Vivox::vx_evt_base_t::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___swigCPtr = value;
}
constexpr bool& Unity::Services::Vivox::vx_evt_base_t::__cordl_internal_get_swigCMemOwn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___swigCMemOwn;
}
constexpr bool const& Unity::Services::Vivox::vx_evt_base_t::__cordl_internal_get_swigCMemOwn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___swigCMemOwn;
}
constexpr void Unity::Services::Vivox::vx_evt_base_t::__cordl_internal_set_swigCMemOwn(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___swigCMemOwn = value;
}
inline ::Unity::Services::Vivox::vx_evt_base_t* Unity::Services::Vivox::vx_evt_base_t::New_ctor(void* cPtr, bool cMemoryOwn) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::vx_evt_base_t*>(cPtr, cMemoryOwn));
}
inline void Unity::Services::Vivox::vx_evt_base_t::_ctor(void* cPtr, bool cMemoryOwn) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef Unity::Services::Vivox::vx_evt_base_t::getCPtr(::Unity::Services::Vivox::vx_evt_base_t* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "getCPtr", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef, false>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef Unity::Services::Vivox::vx_evt_base_t::swigRelease(::Unity::Services::Vivox::vx_evt_base_t* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "swigRelease", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef, false>(nullptr, ___internal_method, obj);
}
inline void Unity::Services::Vivox::vx_evt_base_t::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::vx_evt_base_t::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::vx_evt_base_t::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline ::Unity::Services::Vivox::vx_evt_account_login_state_change_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_account_login_state_change_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_account_login_state_change_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_buddy_presence_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_buddy_presence_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_buddy_presence_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_subscription_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_subscription_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_subscription_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_session_notification_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_session_notification_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_session_notification_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_message_t* Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_message_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_message_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_session_delete_message_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_session_delete_message_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_session_delete_message_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_session_edit_message_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_session_edit_message_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_session_edit_message_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_account_delete_message_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_account_delete_message_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_account_delete_message_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_account_edit_message_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_account_edit_message_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_account_edit_message_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_session_archive_message_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_session_archive_message_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_session_archive_message_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_transcribed_message_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_transcribed_message_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_transcribed_message_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_session_archive_query_end_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_session_archive_query_end_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_session_archive_query_end_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_aux_audio_properties_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_aux_audio_properties_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_aux_audio_properties_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_buddy_changed_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_buddy_changed_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_buddy_changed_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_buddy_group_changed_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_buddy_group_changed_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_buddy_group_changed_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_buddy_and_group_list_changed_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_buddy_and_group_list_changed_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_buddy_and_group_list_changed_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_keyboard_mouse_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_keyboard_mouse_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_keyboard_mouse_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_idle_state_changed_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_idle_state_changed_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_idle_state_changed_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_media_stream_updated_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_media_stream_updated_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_media_stream_updated_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_text_stream_updated_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_text_stream_updated_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_text_stream_updated_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_sessiongroup_added_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_sessiongroup_added_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_sessiongroup_added_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_sessiongroup_removed_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_sessiongroup_removed_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_sessiongroup_removed_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_session_added_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_session_added_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_session_added_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_session_removed_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_session_removed_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_session_removed_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_participant_added_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_participant_added_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_participant_added_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_participant_removed_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_participant_removed_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_participant_removed_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_participant_updated_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_participant_updated_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_participant_updated_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_sessiongroup_playback_frame_played_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_sessiongroup_playback_frame_played_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_sessiongroup_playback_frame_played_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_session_updated_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_session_updated_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_session_updated_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_sessiongroup_updated_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_sessiongroup_updated_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_sessiongroup_updated_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_media_completion_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_media_completion_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_media_completion_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_server_app_data_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_server_app_data_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_server_app_data_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_user_app_data_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_user_app_data_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_user_app_data_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_network_message_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_network_message_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_network_message_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_voice_service_connection_state_changed_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_voice_service_connection_state_changed_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_voice_service_connection_state_changed_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_publication_state_changed_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_publication_state_changed_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_publication_state_changed_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_audio_device_hot_swap_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_audio_device_hot_swap_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_audio_device_hot_swap_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_user_to_user_message_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_user_to_user_message_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_user_to_user_message_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_account_archive_message_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_account_archive_message_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_account_archive_message_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_account_archive_query_end_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_account_archive_query_end_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_account_archive_query_end_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_account_send_message_failed_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_account_send_message_failed_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_account_send_message_failed_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_tts_injection_started_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_tts_injection_started_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_tts_injection_started_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_tts_injection_ended_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_tts_injection_ended_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_tts_injection_ended_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_tts_injection_failed_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_tts_injection_failed_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_tts_injection_failed_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_stt_failed_t* Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_stt_failed_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_stt_failed_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_connection_state_changed_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_connection_state_changed_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_connection_state_changed_t*, false>(nullptr, ___internal_method, t);
}
inline ::Unity::Services::Vivox::vx_evt_presence_updated_t*
Unity::Services::Vivox::vx_evt_base_t::op_Implicit___Unity__Services__Vivox__vx_evt_presence_updated_t_(::Unity::Services::Vivox::vx_evt_base_t* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_evt_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_presence_updated_t*, false>(nullptr, ___internal_method, t);
}
inline void Unity::Services::Vivox::vx_evt_base_t::set_message(::Unity::Services::Vivox::vx_message_base_t* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "set_message", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_message_base_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Services::Vivox::vx_message_base_t* Unity::Services::Vivox::vx_evt_base_t::get_message() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "get_message",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_message_base_t*, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::vx_evt_base_t::set_type(::Unity::Services::Vivox::vx_event_type value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "set_type", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::vx_event_type>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Services::Vivox::vx_event_type Unity::Services::Vivox::vx_evt_base_t::get_type() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "get_type",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_event_type, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::vx_evt_base_t::set_extended_status_info(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "set_extended_status_info",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Unity::Services::Vivox::vx_evt_base_t::get_extended_status_info() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                             "get_extended_status_info", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_account_login_state_change_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_account_login_state_change() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "as_vx_evt_account_login_state_change",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_account_login_state_change_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_buddy_presence_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_buddy_presence() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                             "as_vx_evt_buddy_presence", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_buddy_presence_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_subscription_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_subscription() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                             "as_vx_evt_subscription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_subscription_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_session_notification_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_session_notification() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                             "as_vx_evt_session_notification", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_session_notification_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_message_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_message() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                             "as_vx_evt_message", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_message_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_session_delete_message_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_session_delete_message() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                             "as_vx_evt_session_delete_message", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_session_delete_message_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_session_edit_message_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_session_edit_message() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                             "as_vx_evt_session_edit_message", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_session_edit_message_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_account_delete_message_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_account_delete_message() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                             "as_vx_evt_account_delete_message", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_account_delete_message_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_account_edit_message_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_account_edit_message() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                             "as_vx_evt_account_edit_message", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_account_edit_message_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_session_archive_message_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_session_archive_message() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "as_vx_evt_session_archive_message",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_session_archive_message_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_transcribed_message_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_transcribed_message() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                             "as_vx_evt_transcribed_message", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_transcribed_message_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_session_archive_query_end_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_session_archive_query_end() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "as_vx_evt_session_archive_query_end",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_session_archive_query_end_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_aux_audio_properties_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_aux_audio_properties() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                             "as_vx_evt_aux_audio_properties", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_aux_audio_properties_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_buddy_changed_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_buddy_changed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                             "as_vx_evt_buddy_changed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_buddy_changed_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_buddy_group_changed_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_buddy_group_changed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                             "as_vx_evt_buddy_group_changed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_buddy_group_changed_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_buddy_and_group_list_changed_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_buddy_and_group_list_changed() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "as_vx_evt_buddy_and_group_list_changed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_buddy_and_group_list_changed_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_keyboard_mouse_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_keyboard_mouse() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                             "as_vx_evt_keyboard_mouse", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_keyboard_mouse_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_idle_state_changed_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_idle_state_changed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                             "as_vx_evt_idle_state_changed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_idle_state_changed_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_media_stream_updated_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_media_stream_updated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                             "as_vx_evt_media_stream_updated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_media_stream_updated_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_text_stream_updated_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_text_stream_updated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                             "as_vx_evt_text_stream_updated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_text_stream_updated_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_sessiongroup_added_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_sessiongroup_added() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                             "as_vx_evt_sessiongroup_added", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_sessiongroup_added_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_sessiongroup_removed_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_sessiongroup_removed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                             "as_vx_evt_sessiongroup_removed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_sessiongroup_removed_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_session_added_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_session_added() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                             "as_vx_evt_session_added", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_session_added_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_session_removed_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_session_removed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                             "as_vx_evt_session_removed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_session_removed_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_participant_added_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_participant_added() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                             "as_vx_evt_participant_added", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_participant_added_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_participant_removed_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_participant_removed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                             "as_vx_evt_participant_removed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_participant_removed_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_participant_updated_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_participant_updated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                             "as_vx_evt_participant_updated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_participant_updated_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_sessiongroup_playback_frame_played_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_sessiongroup_playback_frame_played() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "as_vx_evt_sessiongroup_playback_frame_played",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_sessiongroup_playback_frame_played_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_session_updated_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_session_updated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                             "as_vx_evt_session_updated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_session_updated_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_sessiongroup_updated_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_sessiongroup_updated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                             "as_vx_evt_sessiongroup_updated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_sessiongroup_updated_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_media_completion_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_media_completion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                             "as_vx_evt_media_completion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_media_completion_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_server_app_data_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_server_app_data() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                             "as_vx_evt_server_app_data", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_server_app_data_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_user_app_data_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_user_app_data() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                             "as_vx_evt_user_app_data", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_user_app_data_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_network_message_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_network_message() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                             "as_vx_evt_network_message", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_network_message_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_voice_service_connection_state_changed_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_voice_service_connection_state_changed() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                               "as_vx_evt_voice_service_connection_state_changed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_voice_service_connection_state_changed_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_publication_state_changed_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_publication_state_changed() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "as_vx_evt_publication_state_changed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_publication_state_changed_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_audio_device_hot_swap_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_audio_device_hot_swap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                             "as_vx_evt_audio_device_hot_swap", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_audio_device_hot_swap_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_user_to_user_message_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_user_to_user_message() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                             "as_vx_evt_user_to_user_message", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_user_to_user_message_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_account_archive_message_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_account_archive_message() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "as_vx_evt_account_archive_message",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_account_archive_message_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_account_archive_query_end_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_account_archive_query_end() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "as_vx_evt_account_archive_query_end",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_account_archive_query_end_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_account_send_message_failed_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_account_send_message_failed() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "as_vx_evt_account_send_message_failed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_account_send_message_failed_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_tts_injection_started_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_tts_injection_started() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                             "as_vx_evt_tts_injection_started", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_tts_injection_started_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_tts_injection_ended_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_tts_injection_ended() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                             "as_vx_evt_tts_injection_ended", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_tts_injection_ended_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_tts_injection_failed_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_tts_injection_failed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                             "as_vx_evt_tts_injection_failed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_tts_injection_failed_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_stt_failed_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_stt_failed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                             "as_vx_evt_stt_failed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_stt_failed_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_connection_state_changed_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_connection_state_changed() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), "as_vx_evt_connection_state_changed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_connection_state_changed_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_presence_updated_t* Unity::Services::Vivox::vx_evt_base_t::as_vx_evt_presence_updated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(),
                                                                             "as_vx_evt_presence_updated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::vx_evt_presence_updated_t*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::vx_evt_base_t* Unity::Services::Vivox::vx_evt_base_t::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::vx_evt_base_t*>());
}
inline void Unity::Services::Vivox::vx_evt_base_t::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::vx_evt_base_t*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_evt_base_t::vx_evt_base_t() {}
