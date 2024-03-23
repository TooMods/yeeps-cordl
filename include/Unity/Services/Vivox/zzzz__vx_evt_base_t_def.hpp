#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(vx_evt_base_t)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
namespace Unity::Services::Vivox {
struct vx_event_type;
}
namespace Unity::Services::Vivox {
class vx_evt_account_archive_message_t;
}
namespace Unity::Services::Vivox {
class vx_evt_account_archive_query_end_t;
}
namespace Unity::Services::Vivox {
class vx_evt_account_delete_message_t;
}
namespace Unity::Services::Vivox {
class vx_evt_account_edit_message_t;
}
namespace Unity::Services::Vivox {
class vx_evt_account_login_state_change_t;
}
namespace Unity::Services::Vivox {
class vx_evt_account_send_message_failed_t;
}
namespace Unity::Services::Vivox {
class vx_evt_audio_device_hot_swap_t;
}
namespace Unity::Services::Vivox {
class vx_evt_aux_audio_properties_t;
}
namespace Unity::Services::Vivox {
class vx_evt_buddy_and_group_list_changed_t;
}
namespace Unity::Services::Vivox {
class vx_evt_buddy_changed_t;
}
namespace Unity::Services::Vivox {
class vx_evt_buddy_group_changed_t;
}
namespace Unity::Services::Vivox {
class vx_evt_buddy_presence_t;
}
namespace Unity::Services::Vivox {
class vx_evt_connection_state_changed_t;
}
namespace Unity::Services::Vivox {
class vx_evt_idle_state_changed_t;
}
namespace Unity::Services::Vivox {
class vx_evt_keyboard_mouse_t;
}
namespace Unity::Services::Vivox {
class vx_evt_media_completion_t;
}
namespace Unity::Services::Vivox {
class vx_evt_media_stream_updated_t;
}
namespace Unity::Services::Vivox {
class vx_evt_message_t;
}
namespace Unity::Services::Vivox {
class vx_evt_network_message_t;
}
namespace Unity::Services::Vivox {
class vx_evt_participant_added_t;
}
namespace Unity::Services::Vivox {
class vx_evt_participant_removed_t;
}
namespace Unity::Services::Vivox {
class vx_evt_participant_updated_t;
}
namespace Unity::Services::Vivox {
class vx_evt_presence_updated_t;
}
namespace Unity::Services::Vivox {
class vx_evt_publication_state_changed_t;
}
namespace Unity::Services::Vivox {
class vx_evt_server_app_data_t;
}
namespace Unity::Services::Vivox {
class vx_evt_session_added_t;
}
namespace Unity::Services::Vivox {
class vx_evt_session_archive_message_t;
}
namespace Unity::Services::Vivox {
class vx_evt_session_archive_query_end_t;
}
namespace Unity::Services::Vivox {
class vx_evt_session_delete_message_t;
}
namespace Unity::Services::Vivox {
class vx_evt_session_edit_message_t;
}
namespace Unity::Services::Vivox {
class vx_evt_session_notification_t;
}
namespace Unity::Services::Vivox {
class vx_evt_session_removed_t;
}
namespace Unity::Services::Vivox {
class vx_evt_session_updated_t;
}
namespace Unity::Services::Vivox {
class vx_evt_sessiongroup_added_t;
}
namespace Unity::Services::Vivox {
class vx_evt_sessiongroup_playback_frame_played_t;
}
namespace Unity::Services::Vivox {
class vx_evt_sessiongroup_removed_t;
}
namespace Unity::Services::Vivox {
class vx_evt_sessiongroup_updated_t;
}
namespace Unity::Services::Vivox {
class vx_evt_stt_failed_t;
}
namespace Unity::Services::Vivox {
class vx_evt_subscription_t;
}
namespace Unity::Services::Vivox {
class vx_evt_text_stream_updated_t;
}
namespace Unity::Services::Vivox {
class vx_evt_transcribed_message_t;
}
namespace Unity::Services::Vivox {
class vx_evt_tts_injection_ended_t;
}
namespace Unity::Services::Vivox {
class vx_evt_tts_injection_failed_t;
}
namespace Unity::Services::Vivox {
class vx_evt_tts_injection_started_t;
}
namespace Unity::Services::Vivox {
class vx_evt_user_app_data_t;
}
namespace Unity::Services::Vivox {
class vx_evt_user_to_user_message_t;
}
namespace Unity::Services::Vivox {
class vx_evt_voice_service_connection_state_changed_t;
}
namespace Unity::Services::Vivox {
class vx_message_base_t;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class vx_evt_base_t;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::vx_evt_base_t);
// Type: Unity.Services.Vivox::vx_evt_base_t
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::vx_evt_base_t*
class CORDL_TYPE vx_evt_base_t : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_extended_status_info, put = set_extended_status_info))::StringW extended_status_info;

  __declspec(property(get = get_message, put = set_message))::Unity::Services::Vivox::vx_message_base_t* message;

  /// @brief Field swigCMemOwn, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_swigCMemOwn, put = __cordl_internal_set_swigCMemOwn)) bool swigCMemOwn;

  /// @brief Field swigCPtr, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_swigCPtr, put = __cordl_internal_set_swigCPtr))::System::Runtime::InteropServices::HandleRef swigCPtr;

  __declspec(property(get = get_type, put = set_type))::Unity::Services::Vivox::vx_event_type type;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x27970a8, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x27971b4, size 0x180, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x2797114, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Unity::Services::Vivox::vx_evt_base_t* New_ctor();

  static inline ::Unity::Services::Vivox::vx_evt_base_t* New_ctor(void* cPtr, bool cMemoryOwn);

  constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

  constexpr bool& __cordl_internal_get_swigCMemOwn();

  constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

  constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr();

  constexpr void __cordl_internal_set_swigCMemOwn(bool value);

  constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef value);

  /// @brief Method .ctor, addr 0x279ae4c, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2791684, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(void* cPtr, bool cMemoryOwn);

  /// @brief Method as_vx_evt_account_archive_message, addr 0x2799978, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_account_archive_message_t* as_vx_evt_account_archive_message();

  /// @brief Method as_vx_evt_account_archive_query_end, addr 0x2799a80, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_account_archive_query_end_t* as_vx_evt_account_archive_query_end();

  /// @brief Method as_vx_evt_account_delete_message, addr 0x2797a58, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_account_delete_message_t* as_vx_evt_account_delete_message();

  /// @brief Method as_vx_evt_account_edit_message, addr 0x2797b60, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_account_edit_message_t* as_vx_evt_account_edit_message();

  /// @brief Method as_vx_evt_account_login_state_change, addr 0x2797344, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_account_login_state_change_t* as_vx_evt_account_login_state_change();

  /// @brief Method as_vx_evt_account_send_message_failed, addr 0x2799b88, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_account_send_message_failed_t* as_vx_evt_account_send_message_failed();

  /// @brief Method as_vx_evt_audio_device_hot_swap, addr 0x279978c, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_audio_device_hot_swap_t* as_vx_evt_audio_device_hot_swap();

  /// @brief Method as_vx_evt_aux_audio_properties, addr 0x2797f5c, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_aux_audio_properties_t* as_vx_evt_aux_audio_properties();

  /// @brief Method as_vx_evt_buddy_and_group_list_changed, addr 0x2798274, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_buddy_and_group_list_changed_t* as_vx_evt_buddy_and_group_list_changed();

  /// @brief Method as_vx_evt_buddy_changed, addr 0x2798064, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_buddy_changed_t* as_vx_evt_buddy_changed();

  /// @brief Method as_vx_evt_buddy_group_changed, addr 0x279816c, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_buddy_group_changed_t* as_vx_evt_buddy_group_changed();

  /// @brief Method as_vx_evt_buddy_presence, addr 0x279744c, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_buddy_presence_t* as_vx_evt_buddy_presence();

  /// @brief Method as_vx_evt_connection_state_changed, addr 0x279a020, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_connection_state_changed_t* as_vx_evt_connection_state_changed();

  /// @brief Method as_vx_evt_idle_state_changed, addr 0x2798484, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_idle_state_changed_t* as_vx_evt_idle_state_changed();

  /// @brief Method as_vx_evt_keyboard_mouse, addr 0x279837c, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_keyboard_mouse_t* as_vx_evt_keyboard_mouse();

  /// @brief Method as_vx_evt_media_completion, addr 0x27991a4, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_media_completion_t* as_vx_evt_media_completion();

  /// @brief Method as_vx_evt_media_stream_updated, addr 0x279858c, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_media_stream_updated_t* as_vx_evt_media_stream_updated();

  /// @brief Method as_vx_evt_message, addr 0x2797740, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_message_t* as_vx_evt_message();

  /// @brief Method as_vx_evt_network_message, addr 0x2799498, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_network_message_t* as_vx_evt_network_message();

  /// @brief Method as_vx_evt_participant_added, addr 0x2798b98, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_participant_added_t* as_vx_evt_participant_added();

  /// @brief Method as_vx_evt_participant_removed, addr 0x2798ca0, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_participant_removed_t* as_vx_evt_participant_removed();

  /// @brief Method as_vx_evt_participant_updated, addr 0x2798da8, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_participant_updated_t* as_vx_evt_participant_updated();

  /// @brief Method as_vx_evt_presence_updated, addr 0x279a128, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_presence_updated_t* as_vx_evt_presence_updated();

  /// @brief Method as_vx_evt_publication_state_changed, addr 0x2799684, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_publication_state_changed_t* as_vx_evt_publication_state_changed();

  /// @brief Method as_vx_evt_server_app_data, addr 0x27992ac, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_server_app_data_t* as_vx_evt_server_app_data();

  /// @brief Method as_vx_evt_session_added, addr 0x2798988, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_session_added_t* as_vx_evt_session_added();

  /// @brief Method as_vx_evt_session_archive_message, addr 0x2797c68, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_session_archive_message_t* as_vx_evt_session_archive_message();

  /// @brief Method as_vx_evt_session_archive_query_end, addr 0x2797e54, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_session_archive_query_end_t* as_vx_evt_session_archive_query_end();

  /// @brief Method as_vx_evt_session_delete_message, addr 0x2797848, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_session_delete_message_t* as_vx_evt_session_delete_message();

  /// @brief Method as_vx_evt_session_edit_message, addr 0x2797950, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_session_edit_message_t* as_vx_evt_session_edit_message();

  /// @brief Method as_vx_evt_session_notification, addr 0x2797638, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_session_notification_t* as_vx_evt_session_notification();

  /// @brief Method as_vx_evt_session_removed, addr 0x2798a90, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_session_removed_t* as_vx_evt_session_removed();

  /// @brief Method as_vx_evt_session_updated, addr 0x2798fb8, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_session_updated_t* as_vx_evt_session_updated();

  /// @brief Method as_vx_evt_sessiongroup_added, addr 0x2798778, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_sessiongroup_added_t* as_vx_evt_sessiongroup_added();

  /// @brief Method as_vx_evt_sessiongroup_playback_frame_played, addr 0x2798eb0, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_sessiongroup_playback_frame_played_t* as_vx_evt_sessiongroup_playback_frame_played();

  /// @brief Method as_vx_evt_sessiongroup_removed, addr 0x2798880, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_sessiongroup_removed_t* as_vx_evt_sessiongroup_removed();

  /// @brief Method as_vx_evt_sessiongroup_updated, addr 0x279909c, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_sessiongroup_updated_t* as_vx_evt_sessiongroup_updated();

  /// @brief Method as_vx_evt_stt_failed, addr 0x2799f3c, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_stt_failed_t* as_vx_evt_stt_failed();

  /// @brief Method as_vx_evt_subscription, addr 0x2797554, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_subscription_t* as_vx_evt_subscription();

  /// @brief Method as_vx_evt_text_stream_updated, addr 0x2798694, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_text_stream_updated_t* as_vx_evt_text_stream_updated();

  /// @brief Method as_vx_evt_transcribed_message, addr 0x2797d70, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_transcribed_message_t* as_vx_evt_transcribed_message();

  /// @brief Method as_vx_evt_tts_injection_ended, addr 0x2799d74, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_tts_injection_ended_t* as_vx_evt_tts_injection_ended();

  /// @brief Method as_vx_evt_tts_injection_failed, addr 0x2799e58, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_tts_injection_failed_t* as_vx_evt_tts_injection_failed();

  /// @brief Method as_vx_evt_tts_injection_started, addr 0x2799c90, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_tts_injection_started_t* as_vx_evt_tts_injection_started();

  /// @brief Method as_vx_evt_user_app_data, addr 0x27993b4, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_user_app_data_t* as_vx_evt_user_app_data();

  /// @brief Method as_vx_evt_user_to_user_message, addr 0x2799894, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_user_to_user_message_t* as_vx_evt_user_to_user_message();

  /// @brief Method as_vx_evt_voice_service_connection_state_changed, addr 0x27995a0, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_voice_service_connection_state_changed_t* as_vx_evt_voice_service_connection_state_changed();

  /// @brief Method getCPtr, addr 0x2791510, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Unity::Services::Vivox::vx_evt_base_t* obj);

  /// @brief Method get_extended_status_info, addr 0x279a4bc, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_extended_status_info();

  /// @brief Method get_message, addr 0x279a2a8, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_message_base_t* get_message();

  /// @brief Method get_type, addr 0x279a3ec, size 0x60, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_event_type get_type();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method op_Implicit, addr 0x2799968, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_account_archive_message_t* op_Implicit___Unity__Services__Vivox__vx_evt_account_archive_message_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x2799a70, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_account_archive_query_end_t* op_Implicit___Unity__Services__Vivox__vx_evt_account_archive_query_end_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x2797a48, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_account_delete_message_t* op_Implicit___Unity__Services__Vivox__vx_evt_account_delete_message_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x2797b50, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_account_edit_message_t* op_Implicit___Unity__Services__Vivox__vx_evt_account_edit_message_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x2797334, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_account_login_state_change_t* op_Implicit___Unity__Services__Vivox__vx_evt_account_login_state_change_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x2799b78, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_account_send_message_failed_t* op_Implicit___Unity__Services__Vivox__vx_evt_account_send_message_failed_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x279977c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_audio_device_hot_swap_t* op_Implicit___Unity__Services__Vivox__vx_evt_audio_device_hot_swap_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x2797f4c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_aux_audio_properties_t* op_Implicit___Unity__Services__Vivox__vx_evt_aux_audio_properties_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x2798264, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_buddy_and_group_list_changed_t*
  op_Implicit___Unity__Services__Vivox__vx_evt_buddy_and_group_list_changed_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x2798054, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_buddy_changed_t* op_Implicit___Unity__Services__Vivox__vx_evt_buddy_changed_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x279815c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_buddy_group_changed_t* op_Implicit___Unity__Services__Vivox__vx_evt_buddy_group_changed_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x279743c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_buddy_presence_t* op_Implicit___Unity__Services__Vivox__vx_evt_buddy_presence_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x279a010, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_connection_state_changed_t* op_Implicit___Unity__Services__Vivox__vx_evt_connection_state_changed_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x2798474, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_idle_state_changed_t* op_Implicit___Unity__Services__Vivox__vx_evt_idle_state_changed_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x279836c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_keyboard_mouse_t* op_Implicit___Unity__Services__Vivox__vx_evt_keyboard_mouse_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x2799194, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_media_completion_t* op_Implicit___Unity__Services__Vivox__vx_evt_media_completion_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x279857c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_media_stream_updated_t* op_Implicit___Unity__Services__Vivox__vx_evt_media_stream_updated_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x2797730, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_message_t* op_Implicit___Unity__Services__Vivox__vx_evt_message_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x2799488, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_network_message_t* op_Implicit___Unity__Services__Vivox__vx_evt_network_message_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x2798b88, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_participant_added_t* op_Implicit___Unity__Services__Vivox__vx_evt_participant_added_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x2798c90, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_participant_removed_t* op_Implicit___Unity__Services__Vivox__vx_evt_participant_removed_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x2798d98, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_participant_updated_t* op_Implicit___Unity__Services__Vivox__vx_evt_participant_updated_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x279a118, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_presence_updated_t* op_Implicit___Unity__Services__Vivox__vx_evt_presence_updated_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x2799674, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_publication_state_changed_t* op_Implicit___Unity__Services__Vivox__vx_evt_publication_state_changed_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x279929c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_server_app_data_t* op_Implicit___Unity__Services__Vivox__vx_evt_server_app_data_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x2798978, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_session_added_t* op_Implicit___Unity__Services__Vivox__vx_evt_session_added_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x2797c58, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_session_archive_message_t* op_Implicit___Unity__Services__Vivox__vx_evt_session_archive_message_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x2797e44, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_session_archive_query_end_t* op_Implicit___Unity__Services__Vivox__vx_evt_session_archive_query_end_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x2797838, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_session_delete_message_t* op_Implicit___Unity__Services__Vivox__vx_evt_session_delete_message_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x2797940, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_session_edit_message_t* op_Implicit___Unity__Services__Vivox__vx_evt_session_edit_message_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x2797628, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_session_notification_t* op_Implicit___Unity__Services__Vivox__vx_evt_session_notification_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x2798a80, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_session_removed_t* op_Implicit___Unity__Services__Vivox__vx_evt_session_removed_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x2798fa8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_session_updated_t* op_Implicit___Unity__Services__Vivox__vx_evt_session_updated_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x2798768, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_sessiongroup_added_t* op_Implicit___Unity__Services__Vivox__vx_evt_sessiongroup_added_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x2798ea0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_sessiongroup_playback_frame_played_t*
  op_Implicit___Unity__Services__Vivox__vx_evt_sessiongroup_playback_frame_played_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x2798870, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_sessiongroup_removed_t* op_Implicit___Unity__Services__Vivox__vx_evt_sessiongroup_removed_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x279908c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_sessiongroup_updated_t* op_Implicit___Unity__Services__Vivox__vx_evt_sessiongroup_updated_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x2799f2c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_stt_failed_t* op_Implicit___Unity__Services__Vivox__vx_evt_stt_failed_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x2797544, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_subscription_t* op_Implicit___Unity__Services__Vivox__vx_evt_subscription_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x2798684, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_text_stream_updated_t* op_Implicit___Unity__Services__Vivox__vx_evt_text_stream_updated_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x2797d60, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_transcribed_message_t* op_Implicit___Unity__Services__Vivox__vx_evt_transcribed_message_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x2799d64, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_tts_injection_ended_t* op_Implicit___Unity__Services__Vivox__vx_evt_tts_injection_ended_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x2799e48, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_tts_injection_failed_t* op_Implicit___Unity__Services__Vivox__vx_evt_tts_injection_failed_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x2799c80, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_tts_injection_started_t* op_Implicit___Unity__Services__Vivox__vx_evt_tts_injection_started_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x27993a4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_user_app_data_t* op_Implicit___Unity__Services__Vivox__vx_evt_user_app_data_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x2799884, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_user_to_user_message_t* op_Implicit___Unity__Services__Vivox__vx_evt_user_to_user_message_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method op_Implicit, addr 0x2799590, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_voice_service_connection_state_changed_t*
  op_Implicit___Unity__Services__Vivox__vx_evt_voice_service_connection_state_changed_t_(::Unity::Services::Vivox::vx_evt_base_t* t);

  /// @brief Method set_extended_status_info, addr 0x279a44c, size 0x70, virtual false, abstract: false, final false
  inline void set_extended_status_info(::StringW value);

  /// @brief Method set_message, addr 0x279a220, size 0x88, virtual false, abstract: false, final false
  inline void set_message(::Unity::Services::Vivox::vx_message_base_t* value);

  /// @brief Method set_type, addr 0x279a37c, size 0x70, virtual false, abstract: false, final false
  inline void set_type(::Unity::Services::Vivox::vx_event_type value);

  /// @brief Method swigRelease, addr 0x2796fcc, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::Unity::Services::Vivox::vx_evt_base_t* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_evt_base_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "vx_evt_base_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  vx_evt_base_t(vx_evt_base_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "vx_evt_base_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  vx_evt_base_t(vx_evt_base_t const&) = delete;

  /// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
  ::System::Runtime::InteropServices::HandleRef ___swigCPtr;

  /// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
  bool ___swigCMemOwn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_evt_base_t, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_evt_base_t, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_evt_base_t, ___swigCMemOwn) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::vx_evt_base_t);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_evt_base_t*, "Unity.Services.Vivox", "vx_evt_base_t");
