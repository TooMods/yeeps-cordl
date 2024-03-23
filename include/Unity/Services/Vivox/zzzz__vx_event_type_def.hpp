#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(vx_event_type)
// Forward declare root types
namespace Unity::Services::Vivox {
struct vx_event_type;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Vivox::vx_event_type);
// Type: Unity.Services.Vivox::vx_event_type
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::Unity.Services.Vivox::vx_event_type
struct CORDL_TYPE vx_event_type {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __vx_event_type_Unwrapped
  enum struct __vx_event_type_Unwrapped : int32_t {
    __E_evt_none = static_cast<int32_t>(0x0),
    __E_evt_account_login_state_change = static_cast<int32_t>(0x2),
    __E_evt_buddy_presence = static_cast<int32_t>(0x7),
    __E_evt_subscription = static_cast<int32_t>(0x8),
    __E_evt_session_notification = static_cast<int32_t>(0x9),
    __E_evt_message = static_cast<int32_t>(0xa),
    __E_evt_aux_audio_properties = static_cast<int32_t>(0xb),
    __E_evt_buddy_changed = static_cast<int32_t>(0xf),
    __E_evt_buddy_group_changed = static_cast<int32_t>(0x10),
    __E_evt_buddy_and_group_list_changed = static_cast<int32_t>(0x11),
    __E_evt_keyboard_mouse = static_cast<int32_t>(0x12),
    __E_evt_idle_state_changed = static_cast<int32_t>(0x13),
    __E_evt_media_stream_updated = static_cast<int32_t>(0x14),
    __E_evt_text_stream_updated = static_cast<int32_t>(0x15),
    __E_evt_sessiongroup_added = static_cast<int32_t>(0x16),
    __E_evt_sessiongroup_removed = static_cast<int32_t>(0x17),
    __E_evt_session_added = static_cast<int32_t>(0x18),
    __E_evt_session_removed = static_cast<int32_t>(0x19),
    __E_evt_participant_added = static_cast<int32_t>(0x1a),
    __E_evt_participant_removed = static_cast<int32_t>(0x1b),
    __E_evt_participant_updated = static_cast<int32_t>(0x1c),
    __E_evt_sessiongroup_playback_frame_played = static_cast<int32_t>(0x1e),
    __E_evt_session_updated = static_cast<int32_t>(0x1f),
    __E_evt_sessiongroup_updated = static_cast<int32_t>(0x20),
    __E_evt_media_completion = static_cast<int32_t>(0x21),
    __E_evt_server_app_data = static_cast<int32_t>(0x23),
    __E_evt_user_app_data = static_cast<int32_t>(0x24),
    __E_evt_network_message = static_cast<int32_t>(0x26),
    __E_evt_voice_service_connection_state_changed = static_cast<int32_t>(0x27),
    __E_evt_publication_state_changed = static_cast<int32_t>(0x28),
    __E_evt_audio_device_hot_swap = static_cast<int32_t>(0x29),
    __E_evt_user_to_user_message = static_cast<int32_t>(0x2a),
    __E_evt_session_archive_message = static_cast<int32_t>(0x2b),
    __E_evt_session_archive_query_end = static_cast<int32_t>(0x2c),
    __E_evt_account_archive_message = static_cast<int32_t>(0x2d),
    __E_evt_account_archive_query_end = static_cast<int32_t>(0x2e),
    __E_evt_account_send_message_failed = static_cast<int32_t>(0x2f),
    __E_evt_transcribed_message = static_cast<int32_t>(0x30),
    __E_evt_tts_injection_started = static_cast<int32_t>(0x31),
    __E_evt_tts_injection_ended = static_cast<int32_t>(0x32),
    __E_evt_tts_injection_failed = static_cast<int32_t>(0x33),
    __E_evt_stt_failed = static_cast<int32_t>(0x34),
    __E_evt_connection_state_changed = static_cast<int32_t>(0x35),
    __E_evt_presence_updated = static_cast<int32_t>(0x36),
    __E_evt_session_edit_message = static_cast<int32_t>(0x37),
    __E_evt_account_edit_message = static_cast<int32_t>(0x38),
    __E_evt_session_delete_message = static_cast<int32_t>(0x39),
    __E_evt_account_delete_message = static_cast<int32_t>(0x3a),
    __E_evt_max = static_cast<int32_t>(0x3b),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __vx_event_type_Unwrapped() const noexcept {
    return static_cast<__vx_event_type_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_event_type();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr vx_event_type(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field evt_account_archive_message value: static_cast<int32_t>(0x2d)
  static ::Unity::Services::Vivox::vx_event_type const evt_account_archive_message;

  /// @brief Field evt_account_archive_query_end value: static_cast<int32_t>(0x2e)
  static ::Unity::Services::Vivox::vx_event_type const evt_account_archive_query_end;

  /// @brief Field evt_account_delete_message value: static_cast<int32_t>(0x3a)
  static ::Unity::Services::Vivox::vx_event_type const evt_account_delete_message;

  /// @brief Field evt_account_edit_message value: static_cast<int32_t>(0x38)
  static ::Unity::Services::Vivox::vx_event_type const evt_account_edit_message;

  /// @brief Field evt_account_login_state_change value: static_cast<int32_t>(0x2)
  static ::Unity::Services::Vivox::vx_event_type const evt_account_login_state_change;

  /// @brief Field evt_account_send_message_failed value: static_cast<int32_t>(0x2f)
  static ::Unity::Services::Vivox::vx_event_type const evt_account_send_message_failed;

  /// @brief Field evt_audio_device_hot_swap value: static_cast<int32_t>(0x29)
  static ::Unity::Services::Vivox::vx_event_type const evt_audio_device_hot_swap;

  /// @brief Field evt_aux_audio_properties value: static_cast<int32_t>(0xb)
  static ::Unity::Services::Vivox::vx_event_type const evt_aux_audio_properties;

  /// @brief Field evt_buddy_and_group_list_changed value: static_cast<int32_t>(0x11)
  static ::Unity::Services::Vivox::vx_event_type const evt_buddy_and_group_list_changed;

  /// @brief Field evt_buddy_changed value: static_cast<int32_t>(0xf)
  static ::Unity::Services::Vivox::vx_event_type const evt_buddy_changed;

  /// @brief Field evt_buddy_group_changed value: static_cast<int32_t>(0x10)
  static ::Unity::Services::Vivox::vx_event_type const evt_buddy_group_changed;

  /// @brief Field evt_buddy_presence value: static_cast<int32_t>(0x7)
  static ::Unity::Services::Vivox::vx_event_type const evt_buddy_presence;

  /// @brief Field evt_connection_state_changed value: static_cast<int32_t>(0x35)
  static ::Unity::Services::Vivox::vx_event_type const evt_connection_state_changed;

  /// @brief Field evt_idle_state_changed value: static_cast<int32_t>(0x13)
  static ::Unity::Services::Vivox::vx_event_type const evt_idle_state_changed;

  /// @brief Field evt_keyboard_mouse value: static_cast<int32_t>(0x12)
  static ::Unity::Services::Vivox::vx_event_type const evt_keyboard_mouse;

  /// @brief Field evt_max value: static_cast<int32_t>(0x3b)
  static ::Unity::Services::Vivox::vx_event_type const evt_max;

  /// @brief Field evt_media_completion value: static_cast<int32_t>(0x21)
  static ::Unity::Services::Vivox::vx_event_type const evt_media_completion;

  /// @brief Field evt_media_stream_updated value: static_cast<int32_t>(0x14)
  static ::Unity::Services::Vivox::vx_event_type const evt_media_stream_updated;

  /// @brief Field evt_message value: static_cast<int32_t>(0xa)
  static ::Unity::Services::Vivox::vx_event_type const evt_message;

  /// @brief Field evt_network_message value: static_cast<int32_t>(0x26)
  static ::Unity::Services::Vivox::vx_event_type const evt_network_message;

  /// @brief Field evt_none value: static_cast<int32_t>(0x0)
  static ::Unity::Services::Vivox::vx_event_type const evt_none;

  /// @brief Field evt_participant_added value: static_cast<int32_t>(0x1a)
  static ::Unity::Services::Vivox::vx_event_type const evt_participant_added;

  /// @brief Field evt_participant_removed value: static_cast<int32_t>(0x1b)
  static ::Unity::Services::Vivox::vx_event_type const evt_participant_removed;

  /// @brief Field evt_participant_updated value: static_cast<int32_t>(0x1c)
  static ::Unity::Services::Vivox::vx_event_type const evt_participant_updated;

  /// @brief Field evt_presence_updated value: static_cast<int32_t>(0x36)
  static ::Unity::Services::Vivox::vx_event_type const evt_presence_updated;

  /// @brief Field evt_publication_state_changed value: static_cast<int32_t>(0x28)
  static ::Unity::Services::Vivox::vx_event_type const evt_publication_state_changed;

  /// @brief Field evt_server_app_data value: static_cast<int32_t>(0x23)
  static ::Unity::Services::Vivox::vx_event_type const evt_server_app_data;

  /// @brief Field evt_session_added value: static_cast<int32_t>(0x18)
  static ::Unity::Services::Vivox::vx_event_type const evt_session_added;

  /// @brief Field evt_session_archive_message value: static_cast<int32_t>(0x2b)
  static ::Unity::Services::Vivox::vx_event_type const evt_session_archive_message;

  /// @brief Field evt_session_archive_query_end value: static_cast<int32_t>(0x2c)
  static ::Unity::Services::Vivox::vx_event_type const evt_session_archive_query_end;

  /// @brief Field evt_session_delete_message value: static_cast<int32_t>(0x39)
  static ::Unity::Services::Vivox::vx_event_type const evt_session_delete_message;

  /// @brief Field evt_session_edit_message value: static_cast<int32_t>(0x37)
  static ::Unity::Services::Vivox::vx_event_type const evt_session_edit_message;

  /// @brief Field evt_session_notification value: static_cast<int32_t>(0x9)
  static ::Unity::Services::Vivox::vx_event_type const evt_session_notification;

  /// @brief Field evt_session_removed value: static_cast<int32_t>(0x19)
  static ::Unity::Services::Vivox::vx_event_type const evt_session_removed;

  /// @brief Field evt_session_updated value: static_cast<int32_t>(0x1f)
  static ::Unity::Services::Vivox::vx_event_type const evt_session_updated;

  /// @brief Field evt_sessiongroup_added value: static_cast<int32_t>(0x16)
  static ::Unity::Services::Vivox::vx_event_type const evt_sessiongroup_added;

  /// @brief Field evt_sessiongroup_playback_frame_played value: static_cast<int32_t>(0x1e)
  static ::Unity::Services::Vivox::vx_event_type const evt_sessiongroup_playback_frame_played;

  /// @brief Field evt_sessiongroup_removed value: static_cast<int32_t>(0x17)
  static ::Unity::Services::Vivox::vx_event_type const evt_sessiongroup_removed;

  /// @brief Field evt_sessiongroup_updated value: static_cast<int32_t>(0x20)
  static ::Unity::Services::Vivox::vx_event_type const evt_sessiongroup_updated;

  /// @brief Field evt_stt_failed value: static_cast<int32_t>(0x34)
  static ::Unity::Services::Vivox::vx_event_type const evt_stt_failed;

  /// @brief Field evt_subscription value: static_cast<int32_t>(0x8)
  static ::Unity::Services::Vivox::vx_event_type const evt_subscription;

  /// @brief Field evt_text_stream_updated value: static_cast<int32_t>(0x15)
  static ::Unity::Services::Vivox::vx_event_type const evt_text_stream_updated;

  /// @brief Field evt_transcribed_message value: static_cast<int32_t>(0x30)
  static ::Unity::Services::Vivox::vx_event_type const evt_transcribed_message;

  /// @brief Field evt_tts_injection_ended value: static_cast<int32_t>(0x32)
  static ::Unity::Services::Vivox::vx_event_type const evt_tts_injection_ended;

  /// @brief Field evt_tts_injection_failed value: static_cast<int32_t>(0x33)
  static ::Unity::Services::Vivox::vx_event_type const evt_tts_injection_failed;

  /// @brief Field evt_tts_injection_started value: static_cast<int32_t>(0x31)
  static ::Unity::Services::Vivox::vx_event_type const evt_tts_injection_started;

  /// @brief Field evt_user_app_data value: static_cast<int32_t>(0x24)
  static ::Unity::Services::Vivox::vx_event_type const evt_user_app_data;

  /// @brief Field evt_user_to_user_message value: static_cast<int32_t>(0x2a)
  static ::Unity::Services::Vivox::vx_event_type const evt_user_to_user_message;

  /// @brief Field evt_voice_service_connection_state_changed value: static_cast<int32_t>(0x27)
  static ::Unity::Services::Vivox::vx_event_type const evt_voice_service_connection_state_changed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_event_type, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_event_type, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Services::Vivox
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_event_type, "Unity.Services.Vivox", "vx_event_type");
