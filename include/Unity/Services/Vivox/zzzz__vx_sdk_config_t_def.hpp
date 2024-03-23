#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(vx_sdk_config_t)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
namespace Unity::Services::Vivox {
class SWIGTYPE_p_f_int__void;
}
namespace Unity::Services::Vivox {
class SWIGTYPE_p_f_p_void__void;
}
namespace Unity::Services::Vivox {
class SWIGTYPE_p_f_p_void_enum_vx_log_level_p_q_const__char_p_q_const__char__void;
}
namespace Unity::Services::Vivox {
class SWIGTYPE_p_f_p_void_enum_vx_udp_frame_type_p_void_int_p_p_void_p_int_p_p_void_p_int__void;
}
namespace Unity::Services::Vivox {
class SWIGTYPE_p_f_p_void_enum_vx_udp_frame_type_p_void_int_p_void_int_p_void_int_int__void;
}
namespace Unity::Services::Vivox {
class SWIGTYPE_p_f_p_void_p_q_const__char__void;
}
namespace Unity::Services::Vivox {
class SWIGTYPE_p_f_p_void_p_q_const__char_p_q_const__char__void;
}
namespace Unity::Services::Vivox {
class SWIGTYPE_p_f_p_void_p_q_const__char_p_q_const__char_p_short_int_int_int__void;
}
namespace Unity::Services::Vivox {
class SWIGTYPE_p_f_p_void_p_q_const__char_p_q_const__char_p_short_int_int_int_int__void;
}
namespace Unity::Services::Vivox {
class SWIGTYPE_p_f_p_void_p_q_const__char_p_q_const__char_p_vx_before_recv_audio_mixed_participant_data_t_size_t__void;
}
namespace Unity::Services::Vivox {
class SWIGTYPE_p_f_p_void_p_void_size_t__int;
}
namespace Unity::Services::Vivox {
class SWIGTYPE_p_f_p_void_size_t__p_void;
}
namespace Unity::Services::Vivox {
class SWIGTYPE_p_f_size_t__p_void;
}
namespace Unity::Services::Vivox {
class SWIGTYPE_p_f_size_t_size_t__p_void;
}
namespace Unity::Services::Vivox {
class SWIGTYPE_p_f_void__int;
}
namespace Unity::Services::Vivox {
class SWIGTYPE_p_void;
}
namespace Unity::Services::Vivox {
struct vx_bluetooth_profile;
}
namespace Unity::Services::Vivox {
struct vx_log_level;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class vx_sdk_config_t;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::vx_sdk_config_t);
// Type: Unity.Services.Vivox::vx_sdk_config_t
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::vx_sdk_config_t*
class CORDL_TYPE vx_sdk_config_t : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_allow_shared_capture_devices, put = set_allow_shared_capture_devices)) int32_t allow_shared_capture_devices;

  __declspec(property(get = get_app_id, put = set_app_id))::StringW app_id;

  __declspec(property(get = get_bluetooth_profile, put = set_bluetooth_profile))::Unity::Services::Vivox::vx_bluetooth_profile bluetooth_profile;

  __declspec(property(get = get_callback_handle, put = set_callback_handle))::Unity::Services::Vivox::SWIGTYPE_p_void* callback_handle;

  __declspec(property(get = get_capture_device_buffer_size_intervals, put = set_capture_device_buffer_size_intervals)) int32_t capture_device_buffer_size_intervals;

  __declspec(property(get = get_cert_data_dir, put = set_cert_data_dir))::StringW cert_data_dir;

  /// @brief Field configSize, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_configSize, put = setStaticF_configSize)) uint32_t configSize;

  __declspec(property(get = get_default_codecs_mask, put = set_default_codecs_mask)) uint32_t default_codecs_mask;

  __declspec(property(get = get_default_render_to_receiver, put = set_default_render_to_receiver)) int32_t default_render_to_receiver;

  __declspec(property(get = get_disable_audio_ducking, put = set_disable_audio_ducking)) int32_t disable_audio_ducking;

  __declspec(property(get = get_disable_device_polling, put = set_disable_device_polling)) int32_t disable_device_polling;

  __declspec(property(get = get_dynamic_voice_processing_switching, put = set_dynamic_voice_processing_switching)) int32_t dynamic_voice_processing_switching;

  __declspec(property(get = get_enable_advanced_auto_levels, put = set_enable_advanced_auto_levels)) int32_t enable_advanced_auto_levels;

  __declspec(property(get = get_enable_dtx, put = set_enable_dtx)) int32_t enable_dtx;

  __declspec(property(get = get_enable_fast_network_change_detection, put = set_enable_fast_network_change_detection)) int32_t enable_fast_network_change_detection;

  __declspec(property(get = get_enable_multiparty_text, put = set_enable_multiparty_text)) int32_t enable_multiparty_text;

  __declspec(property(get = get_enable_persistent_http, put = set_enable_persistent_http)) int32_t enable_persistent_http;

  __declspec(property(get = get_force_capture_silence, put = set_force_capture_silence)) int32_t force_capture_silence;

  __declspec(property(get = get_initial_log_level, put = set_initial_log_level))::Unity::Services::Vivox::vx_log_level initial_log_level;

  __declspec(property(get = get_job_queue_handle, put = set_job_queue_handle))::Unity::Services::Vivox::SWIGTYPE_p_void* job_queue_handle;

  __declspec(property(get = get_lost_rtp_timeout_ms, put = set_lost_rtp_timeout_ms)) int32_t lost_rtp_timeout_ms;

  __declspec(property(get = get_max_logins_per_user, put = set_max_logins_per_user)) int32_t max_logins_per_user;

  __declspec(property(get = get_mic_makeup_gain, put = set_mic_makeup_gain)) float_t mic_makeup_gain;

  __declspec(property(get = get_never_rtp_timeout_ms, put = set_never_rtp_timeout_ms)) int32_t never_rtp_timeout_ms;

  __declspec(property(get = get_num_codec_threads, put = set_num_codec_threads)) int32_t num_codec_threads;

  __declspec(property(get = get_num_voice_threads, put = set_num_voice_threads)) int32_t num_voice_threads;

  __declspec(property(get = get_num_web_threads, put = set_num_web_threads)) int32_t num_web_threads;

  __declspec(property(get = get_pf_calloc_func, put = set_pf_calloc_func))::Unity::Services::Vivox::SWIGTYPE_p_f_size_t_size_t__p_void* pf_calloc_func;

  __declspec(property(get = get_pf_free_aligned_func, put = set_pf_free_aligned_func))::Unity::Services::Vivox::SWIGTYPE_p_f_p_void__void* pf_free_aligned_func;

  __declspec(property(get = get_pf_free_func, put = set_pf_free_func))::Unity::Services::Vivox::SWIGTYPE_p_f_p_void__void* pf_free_func;

  __declspec(property(get = get_pf_logging_callback,
                      put = set_pf_logging_callback))::Unity::Services::Vivox::SWIGTYPE_p_f_p_void_enum_vx_log_level_p_q_const__char_p_q_const__char__void* pf_logging_callback;

  __declspec(property(get = get_pf_malloc_aligned_func, put = set_pf_malloc_aligned_func))::Unity::Services::Vivox::SWIGTYPE_p_f_size_t_size_t__p_void* pf_malloc_aligned_func;

  __declspec(property(get = get_pf_malloc_func, put = set_pf_malloc_func))::Unity::Services::Vivox::SWIGTYPE_p_f_size_t__p_void* pf_malloc_func;

  __declspec(property(
      get = get_pf_on_after_udp_frame_transmitted,
      put = set_pf_on_after_udp_frame_transmitted))::Unity::Services::Vivox::SWIGTYPE_p_f_p_void_enum_vx_udp_frame_type_p_void_int_p_void_int_p_void_int_int__void* pf_on_after_udp_frame_transmitted;

  __declspec(property(get = get_pf_on_assert, put = set_pf_on_assert))::Unity::Services::Vivox::SWIGTYPE_p_f_int__void* pf_on_assert;

  __declspec(property(get = get_pf_on_audio_unit_after_capture_audio_read, put = set_pf_on_audio_unit_after_capture_audio_read))::Unity::Services::Vivox::
      SWIGTYPE_p_f_p_void_p_q_const__char_p_q_const__char_p_short_int_int_int__void* pf_on_audio_unit_after_capture_audio_read;

  __declspec(property(get = get_pf_on_audio_unit_before_capture_audio_sent, put = set_pf_on_audio_unit_before_capture_audio_sent))::Unity::Services::Vivox::
      SWIGTYPE_p_f_p_void_p_q_const__char_p_q_const__char_p_short_int_int_int_int__void* pf_on_audio_unit_before_capture_audio_sent;

  __declspec(property(get = get_pf_on_audio_unit_before_recv_audio_mixed, put = set_pf_on_audio_unit_before_recv_audio_mixed))::Unity::Services::Vivox::
      SWIGTYPE_p_f_p_void_p_q_const__char_p_q_const__char_p_vx_before_recv_audio_mixed_participant_data_t_size_t__void* pf_on_audio_unit_before_recv_audio_mixed;

  __declspec(property(get = get_pf_on_audio_unit_before_recv_audio_rendered, put = set_pf_on_audio_unit_before_recv_audio_rendered))::Unity::Services::Vivox::
      SWIGTYPE_p_f_p_void_p_q_const__char_p_q_const__char_p_short_int_int_int_int__void* pf_on_audio_unit_before_recv_audio_rendered;

  __declspec(property(get = get_pf_on_audio_unit_capture_device_status_changed,
                      put = set_pf_on_audio_unit_capture_device_status_changed))::Unity::Services::Vivox::SWIGTYPE_p_f_int__void* pf_on_audio_unit_capture_device_status_changed;

  __declspec(property(get = get_pf_on_audio_unit_started,
                      put = set_pf_on_audio_unit_started))::Unity::Services::Vivox::SWIGTYPE_p_f_p_void_p_q_const__char_p_q_const__char__void* pf_on_audio_unit_started;

  __declspec(property(get = get_pf_on_audio_unit_stopped,
                      put = set_pf_on_audio_unit_stopped))::Unity::Services::Vivox::SWIGTYPE_p_f_p_void_p_q_const__char_p_q_const__char__void* pf_on_audio_unit_stopped;

  __declspec(property(get = get_pf_on_before_udp_frame_transmitted, put = set_pf_on_before_udp_frame_transmitted))::Unity::Services::Vivox::
      SWIGTYPE_p_f_p_void_enum_vx_udp_frame_type_p_void_int_p_p_void_p_int_p_p_void_p_int__void* pf_on_before_udp_frame_transmitted;

  __declspec(property(get = get_pf_on_thread_created, put = set_pf_on_thread_created))::Unity::Services::Vivox::SWIGTYPE_p_f_p_void_p_q_const__char__void* pf_on_thread_created;

  __declspec(property(get = get_pf_on_thread_exit, put = set_pf_on_thread_exit))::Unity::Services::Vivox::SWIGTYPE_p_f_p_void__void* pf_on_thread_exit;

  __declspec(property(get = get_pf_queue_job_async, put = set_pf_queue_job_async))::Unity::Services::Vivox::SWIGTYPE_p_f_p_void_p_void_size_t__int* pf_queue_job_async;

  __declspec(property(get = get_pf_queue_job_sync, put = set_pf_queue_job_sync))::Unity::Services::Vivox::SWIGTYPE_p_f_p_void_p_void_size_t__int* pf_queue_job_sync;

  __declspec(property(get = get_pf_realloc_func, put = set_pf_realloc_func))::Unity::Services::Vivox::SWIGTYPE_p_f_p_void_size_t__p_void* pf_realloc_func;

  __declspec(property(get = get_pf_request_permission_for_network, put = set_pf_request_permission_for_network))::Unity::Services::Vivox::SWIGTYPE_p_f_void__int* pf_request_permission_for_network;

  __declspec(property(get = get_pf_sdk_message_callback, put = set_pf_sdk_message_callback))::Unity::Services::Vivox::SWIGTYPE_p_f_p_void__void* pf_sdk_message_callback;

  __declspec(property(get = get_preferred_sip_port, put = set_preferred_sip_port)) int32_t preferred_sip_port;

  __declspec(property(get = get_processor_affinity_mask, put = set_processor_affinity_mask)) int64_t processor_affinity_mask;

  __declspec(property(get = get_render_device_buffer_size_intervals, put = set_render_device_buffer_size_intervals)) int32_t render_device_buffer_size_intervals;

  __declspec(property(get = get_render_source_initial_buffer_count, put = set_render_source_initial_buffer_count)) int32_t render_source_initial_buffer_count;

  __declspec(property(get = get_render_source_queue_depth_max, put = set_render_source_queue_depth_max)) int32_t render_source_queue_depth_max;

  __declspec(property(get = get_reserved, put = set_reserved)) int32_t reserved;

  /// @brief Field swigCMemOwn, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_swigCMemOwn, put = __cordl_internal_set_swigCMemOwn)) bool swigCMemOwn;

  /// @brief Field swigCPtr, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_swigCPtr, put = __cordl_internal_set_swigCPtr))::System::Runtime::InteropServices::HandleRef swigCPtr;

  __declspec(property(get = get_upstream_jitter_frame_count, put = set_upstream_jitter_frame_count)) int32_t upstream_jitter_frame_count;

  __declspec(property(get = get_use_access_tokens, put = set_use_access_tokens)) int32_t use_access_tokens;

  __declspec(property(get = get_use_os_proxy_settings, put = set_use_os_proxy_settings)) int32_t use_os_proxy_settings;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x16c2de8, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x16c2ef4, size 0x180, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x16c2e54, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Unity::Services::Vivox::vx_sdk_config_t* New_ctor();

  static inline ::Unity::Services::Vivox::vx_sdk_config_t* New_ctor(void* cPtr, bool cMemoryOwn);

  constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

  constexpr bool& __cordl_internal_get_swigCMemOwn();

  constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

  constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr();

  constexpr void __cordl_internal_set_swigCMemOwn(bool value);

  constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef value);

  /// @brief Method .ctor, addr 0x16c6d40, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x16c2c3c, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(void* cPtr, bool cMemoryOwn);

  /// @brief Method getCPtr, addr 0x16c2c90, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Unity::Services::Vivox::vx_sdk_config_t* obj);

  static inline uint32_t getStaticF_configSize();

  /// @brief Method get_allow_shared_capture_devices, addr 0x16c35c4, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_allow_shared_capture_devices();

  /// @brief Method get_app_id, addr 0x16c3764, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_app_id();

  /// @brief Method get_bluetooth_profile, addr 0x16c6b84, size 0x60, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_bluetooth_profile get_bluetooth_profile();

  /// @brief Method get_callback_handle, addr 0x16c46f8, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_void* get_callback_handle();

  /// @brief Method get_capture_device_buffer_size_intervals, addr 0x16c565c, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_capture_device_buffer_size_intervals();

  /// @brief Method get_cert_data_dir, addr 0x16c3834, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_cert_data_dir();

  /// @brief Method get_default_codecs_mask, addr 0x16c5b3c, size 0x60, virtual false, abstract: false, final false
  inline uint32_t get_default_codecs_mask();

  /// @brief Method get_default_render_to_receiver, addr 0x16c6204, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_default_render_to_receiver();

  /// @brief Method get_disable_audio_ducking, addr 0x16c57fc, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_disable_audio_ducking();

  /// @brief Method get_disable_device_polling, addr 0x16c4bc4, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_disable_device_polling();

  /// @brief Method get_dynamic_voice_processing_switching, addr 0x16c67b8, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_dynamic_voice_processing_switching();

  /// @brief Method get_enable_advanced_auto_levels, addr 0x16c4d64, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_enable_advanced_auto_levels();

  /// @brief Method get_enable_dtx, addr 0x16c5a6c, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_enable_dtx();

  /// @brief Method get_enable_fast_network_change_detection, addr 0x16c5ec4, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_enable_fast_network_change_detection();

  /// @brief Method get_enable_multiparty_text, addr 0x16c599c, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_enable_multiparty_text();

  /// @brief Method get_enable_persistent_http, addr 0x16c6064, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_enable_persistent_http();

  /// @brief Method get_force_capture_silence, addr 0x16c4c94, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_force_capture_silence();

  /// @brief Method get_initial_log_level, addr 0x16c4af4, size 0x60, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_log_level get_initial_log_level();

  /// @brief Method get_job_queue_handle, addr 0x16c4214, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_void* get_job_queue_handle();

  /// @brief Method get_lost_rtp_timeout_ms, addr 0x16c6ab4, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_lost_rtp_timeout_ms();

  /// @brief Method get_max_logins_per_user, addr 0x16c3694, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_max_logins_per_user();

  /// @brief Method get_mic_makeup_gain, addr 0x16c62d4, size 0x60, virtual false, abstract: false, final false
  inline float_t get_mic_makeup_gain();

  /// @brief Method get_never_rtp_timeout_ms, addr 0x16c69e4, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_never_rtp_timeout_ms();

  /// @brief Method get_num_codec_threads, addr 0x16c30e4, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_num_codec_threads();

  /// @brief Method get_num_voice_threads, addr 0x16c31b4, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_num_voice_threads();

  /// @brief Method get_num_web_threads, addr 0x16c3284, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_num_web_threads();

  /// @brief Method get_pf_calloc_func, addr 0x16c3d30, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_f_size_t_size_t__p_void* get_pf_calloc_func();

  /// @brief Method get_pf_free_aligned_func, addr 0x16c3fe8, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_f_p_void__void* get_pf_free_aligned_func();

  /// @brief Method get_pf_free_func, addr 0x16c3a78, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_f_p_void__void* get_pf_free_func();

  /// @brief Method get_pf_logging_callback, addr 0x16c4854, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_f_p_void_enum_vx_log_level_p_q_const__char_p_q_const__char__void* get_pf_logging_callback();

  /// @brief Method get_pf_malloc_aligned_func, addr 0x16c3e8c, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_f_size_t_size_t__p_void* get_pf_malloc_aligned_func();

  /// @brief Method get_pf_malloc_func, addr 0x16c391c, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_f_size_t__p_void* get_pf_malloc_func();

  /// @brief Method get_pf_on_after_udp_frame_transmitted, addr 0x16c5d80, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_f_p_void_enum_vx_udp_frame_type_p_void_int_p_void_int_p_void_int_int__void* get_pf_on_after_udp_frame_transmitted();

  /// @brief Method get_pf_on_assert, addr 0x16c6c6c, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_f_int__void* get_pf_on_assert();

  /// @brief Method get_pf_on_audio_unit_after_capture_audio_read, addr 0x16c5104, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_f_p_void_p_q_const__char_p_q_const__char_p_short_int_int_int__void* get_pf_on_audio_unit_after_capture_audio_read();

  /// @brief Method get_pf_on_audio_unit_before_capture_audio_sent, addr 0x16c5260, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_f_p_void_p_q_const__char_p_q_const__char_p_short_int_int_int_int__void* get_pf_on_audio_unit_before_capture_audio_sent();

  /// @brief Method get_pf_on_audio_unit_before_recv_audio_mixed, addr 0x16c53bc, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_f_p_void_p_q_const__char_p_q_const__char_p_vx_before_recv_audio_mixed_participant_data_t_size_t__void* get_pf_on_audio_unit_before_recv_audio_mixed();

  /// @brief Method get_pf_on_audio_unit_before_recv_audio_rendered, addr 0x16c5518, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_f_p_void_p_q_const__char_p_q_const__char_p_short_int_int_int_int__void* get_pf_on_audio_unit_before_recv_audio_rendered();

  /// @brief Method get_pf_on_audio_unit_capture_device_status_changed, addr 0x16c68a0, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_f_int__void* get_pf_on_audio_unit_capture_device_status_changed();

  /// @brief Method get_pf_on_audio_unit_started, addr 0x16c4e4c, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_f_p_void_p_q_const__char_p_q_const__char__void* get_pf_on_audio_unit_started();

  /// @brief Method get_pf_on_audio_unit_stopped, addr 0x16c4fa8, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_f_p_void_p_q_const__char_p_q_const__char__void* get_pf_on_audio_unit_stopped();

  /// @brief Method get_pf_on_before_udp_frame_transmitted, addr 0x16c5c24, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_f_p_void_enum_vx_udp_frame_type_p_void_int_p_p_void_p_int_p_p_void_p_int__void* get_pf_on_before_udp_frame_transmitted();

  /// @brief Method get_pf_on_thread_created, addr 0x16c63bc, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_f_p_void_p_q_const__char__void* get_pf_on_thread_created();

  /// @brief Method get_pf_on_thread_exit, addr 0x16c6518, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_f_p_void__void* get_pf_on_thread_exit();

  /// @brief Method get_pf_queue_job_async, addr 0x16c44cc, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_f_p_void_p_void_size_t__int* get_pf_queue_job_async();

  /// @brief Method get_pf_queue_job_sync, addr 0x16c4370, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_f_p_void_p_void_size_t__int* get_pf_queue_job_sync();

  /// @brief Method get_pf_realloc_func, addr 0x16c3bd4, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_f_p_void_size_t__p_void* get_pf_realloc_func();

  /// @brief Method get_pf_request_permission_for_network, addr 0x16c6674, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_f_void__int* get_pf_request_permission_for_network();

  /// @brief Method get_pf_sdk_message_callback, addr 0x16c49b0, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_f_p_void__void* get_pf_sdk_message_callback();

  /// @brief Method get_preferred_sip_port, addr 0x16c6134, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_preferred_sip_port();

  /// @brief Method get_processor_affinity_mask, addr 0x16c4610, size 0x60, virtual false, abstract: false, final false
  inline int64_t get_processor_affinity_mask();

  /// @brief Method get_render_device_buffer_size_intervals, addr 0x16c572c, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_render_device_buffer_size_intervals();

  /// @brief Method get_render_source_initial_buffer_count, addr 0x16c3424, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_render_source_initial_buffer_count();

  /// @brief Method get_render_source_queue_depth_max, addr 0x16c3354, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_render_source_queue_depth_max();

  /// @brief Method get_reserved, addr 0x16c412c, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_reserved();

  /// @brief Method get_upstream_jitter_frame_count, addr 0x16c34f4, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_upstream_jitter_frame_count();

  /// @brief Method get_use_access_tokens, addr 0x16c58cc, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_use_access_tokens();

  /// @brief Method get_use_os_proxy_settings, addr 0x16c5f94, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_use_os_proxy_settings();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_configSize(uint32_t value);

  /// @brief Method set_allow_shared_capture_devices, addr 0x16c3554, size 0x70, virtual false, abstract: false, final false
  inline void set_allow_shared_capture_devices(int32_t value);

  /// @brief Method set_app_id, addr 0x16c36f4, size 0x70, virtual false, abstract: false, final false
  inline void set_app_id(::StringW value);

  /// @brief Method set_bluetooth_profile, addr 0x16c6b14, size 0x70, virtual false, abstract: false, final false
  inline void set_bluetooth_profile(::Unity::Services::Vivox::vx_bluetooth_profile value);

  /// @brief Method set_callback_handle, addr 0x16c4670, size 0x88, virtual false, abstract: false, final false
  inline void set_callback_handle(::Unity::Services::Vivox::SWIGTYPE_p_void* value);

  /// @brief Method set_capture_device_buffer_size_intervals, addr 0x16c55ec, size 0x70, virtual false, abstract: false, final false
  inline void set_capture_device_buffer_size_intervals(int32_t value);

  /// @brief Method set_cert_data_dir, addr 0x16c37c4, size 0x70, virtual false, abstract: false, final false
  inline void set_cert_data_dir(::StringW value);

  /// @brief Method set_default_codecs_mask, addr 0x16c5acc, size 0x70, virtual false, abstract: false, final false
  inline void set_default_codecs_mask(uint32_t value);

  /// @brief Method set_default_render_to_receiver, addr 0x16c6194, size 0x70, virtual false, abstract: false, final false
  inline void set_default_render_to_receiver(int32_t value);

  /// @brief Method set_disable_audio_ducking, addr 0x16c578c, size 0x70, virtual false, abstract: false, final false
  inline void set_disable_audio_ducking(int32_t value);

  /// @brief Method set_disable_device_polling, addr 0x16c4b54, size 0x70, virtual false, abstract: false, final false
  inline void set_disable_device_polling(int32_t value);

  /// @brief Method set_dynamic_voice_processing_switching, addr 0x16c6748, size 0x70, virtual false, abstract: false, final false
  inline void set_dynamic_voice_processing_switching(int32_t value);

  /// @brief Method set_enable_advanced_auto_levels, addr 0x16c4cf4, size 0x70, virtual false, abstract: false, final false
  inline void set_enable_advanced_auto_levels(int32_t value);

  /// @brief Method set_enable_dtx, addr 0x16c59fc, size 0x70, virtual false, abstract: false, final false
  inline void set_enable_dtx(int32_t value);

  /// @brief Method set_enable_fast_network_change_detection, addr 0x16c5e54, size 0x70, virtual false, abstract: false, final false
  inline void set_enable_fast_network_change_detection(int32_t value);

  /// @brief Method set_enable_multiparty_text, addr 0x16c592c, size 0x70, virtual false, abstract: false, final false
  inline void set_enable_multiparty_text(int32_t value);

  /// @brief Method set_enable_persistent_http, addr 0x16c5ff4, size 0x70, virtual false, abstract: false, final false
  inline void set_enable_persistent_http(int32_t value);

  /// @brief Method set_force_capture_silence, addr 0x16c4c24, size 0x70, virtual false, abstract: false, final false
  inline void set_force_capture_silence(int32_t value);

  /// @brief Method set_initial_log_level, addr 0x16c4a84, size 0x70, virtual false, abstract: false, final false
  inline void set_initial_log_level(::Unity::Services::Vivox::vx_log_level value);

  /// @brief Method set_job_queue_handle, addr 0x16c418c, size 0x88, virtual false, abstract: false, final false
  inline void set_job_queue_handle(::Unity::Services::Vivox::SWIGTYPE_p_void* value);

  /// @brief Method set_lost_rtp_timeout_ms, addr 0x16c6a44, size 0x70, virtual false, abstract: false, final false
  inline void set_lost_rtp_timeout_ms(int32_t value);

  /// @brief Method set_max_logins_per_user, addr 0x16c3624, size 0x70, virtual false, abstract: false, final false
  inline void set_max_logins_per_user(int32_t value);

  /// @brief Method set_mic_makeup_gain, addr 0x16c6264, size 0x70, virtual false, abstract: false, final false
  inline void set_mic_makeup_gain(float_t value);

  /// @brief Method set_never_rtp_timeout_ms, addr 0x16c6974, size 0x70, virtual false, abstract: false, final false
  inline void set_never_rtp_timeout_ms(int32_t value);

  /// @brief Method set_num_codec_threads, addr 0x16c3074, size 0x70, virtual false, abstract: false, final false
  inline void set_num_codec_threads(int32_t value);

  /// @brief Method set_num_voice_threads, addr 0x16c3144, size 0x70, virtual false, abstract: false, final false
  inline void set_num_voice_threads(int32_t value);

  /// @brief Method set_num_web_threads, addr 0x16c3214, size 0x70, virtual false, abstract: false, final false
  inline void set_num_web_threads(int32_t value);

  /// @brief Method set_pf_calloc_func, addr 0x16c3ca8, size 0x88, virtual false, abstract: false, final false
  inline void set_pf_calloc_func(::Unity::Services::Vivox::SWIGTYPE_p_f_size_t_size_t__p_void* value);

  /// @brief Method set_pf_free_aligned_func, addr 0x16c3f60, size 0x88, virtual false, abstract: false, final false
  inline void set_pf_free_aligned_func(::Unity::Services::Vivox::SWIGTYPE_p_f_p_void__void* value);

  /// @brief Method set_pf_free_func, addr 0x16c39f0, size 0x88, virtual false, abstract: false, final false
  inline void set_pf_free_func(::Unity::Services::Vivox::SWIGTYPE_p_f_p_void__void* value);

  /// @brief Method set_pf_logging_callback, addr 0x16c47cc, size 0x88, virtual false, abstract: false, final false
  inline void set_pf_logging_callback(::Unity::Services::Vivox::SWIGTYPE_p_f_p_void_enum_vx_log_level_p_q_const__char_p_q_const__char__void* value);

  /// @brief Method set_pf_malloc_aligned_func, addr 0x16c3e04, size 0x88, virtual false, abstract: false, final false
  inline void set_pf_malloc_aligned_func(::Unity::Services::Vivox::SWIGTYPE_p_f_size_t_size_t__p_void* value);

  /// @brief Method set_pf_malloc_func, addr 0x16c3894, size 0x88, virtual false, abstract: false, final false
  inline void set_pf_malloc_func(::Unity::Services::Vivox::SWIGTYPE_p_f_size_t__p_void* value);

  /// @brief Method set_pf_on_after_udp_frame_transmitted, addr 0x16c5cf8, size 0x88, virtual false, abstract: false, final false
  inline void set_pf_on_after_udp_frame_transmitted(::Unity::Services::Vivox::SWIGTYPE_p_f_p_void_enum_vx_udp_frame_type_p_void_int_p_void_int_p_void_int_int__void* value);

  /// @brief Method set_pf_on_assert, addr 0x16c6be4, size 0x88, virtual false, abstract: false, final false
  inline void set_pf_on_assert(::Unity::Services::Vivox::SWIGTYPE_p_f_int__void* value);

  /// @brief Method set_pf_on_audio_unit_after_capture_audio_read, addr 0x16c507c, size 0x88, virtual false, abstract: false, final false
  inline void set_pf_on_audio_unit_after_capture_audio_read(::Unity::Services::Vivox::SWIGTYPE_p_f_p_void_p_q_const__char_p_q_const__char_p_short_int_int_int__void* value);

  /// @brief Method set_pf_on_audio_unit_before_capture_audio_sent, addr 0x16c51d8, size 0x88, virtual false, abstract: false, final false
  inline void set_pf_on_audio_unit_before_capture_audio_sent(::Unity::Services::Vivox::SWIGTYPE_p_f_p_void_p_q_const__char_p_q_const__char_p_short_int_int_int_int__void* value);

  /// @brief Method set_pf_on_audio_unit_before_recv_audio_mixed, addr 0x16c5334, size 0x88, virtual false, abstract: false, final false
  inline void
  set_pf_on_audio_unit_before_recv_audio_mixed(::Unity::Services::Vivox::SWIGTYPE_p_f_p_void_p_q_const__char_p_q_const__char_p_vx_before_recv_audio_mixed_participant_data_t_size_t__void* value);

  /// @brief Method set_pf_on_audio_unit_before_recv_audio_rendered, addr 0x16c5490, size 0x88, virtual false, abstract: false, final false
  inline void set_pf_on_audio_unit_before_recv_audio_rendered(::Unity::Services::Vivox::SWIGTYPE_p_f_p_void_p_q_const__char_p_q_const__char_p_short_int_int_int_int__void* value);

  /// @brief Method set_pf_on_audio_unit_capture_device_status_changed, addr 0x16c6818, size 0x88, virtual false, abstract: false, final false
  inline void set_pf_on_audio_unit_capture_device_status_changed(::Unity::Services::Vivox::SWIGTYPE_p_f_int__void* value);

  /// @brief Method set_pf_on_audio_unit_started, addr 0x16c4dc4, size 0x88, virtual false, abstract: false, final false
  inline void set_pf_on_audio_unit_started(::Unity::Services::Vivox::SWIGTYPE_p_f_p_void_p_q_const__char_p_q_const__char__void* value);

  /// @brief Method set_pf_on_audio_unit_stopped, addr 0x16c4f20, size 0x88, virtual false, abstract: false, final false
  inline void set_pf_on_audio_unit_stopped(::Unity::Services::Vivox::SWIGTYPE_p_f_p_void_p_q_const__char_p_q_const__char__void* value);

  /// @brief Method set_pf_on_before_udp_frame_transmitted, addr 0x16c5b9c, size 0x88, virtual false, abstract: false, final false
  inline void set_pf_on_before_udp_frame_transmitted(::Unity::Services::Vivox::SWIGTYPE_p_f_p_void_enum_vx_udp_frame_type_p_void_int_p_p_void_p_int_p_p_void_p_int__void* value);

  /// @brief Method set_pf_on_thread_created, addr 0x16c6334, size 0x88, virtual false, abstract: false, final false
  inline void set_pf_on_thread_created(::Unity::Services::Vivox::SWIGTYPE_p_f_p_void_p_q_const__char__void* value);

  /// @brief Method set_pf_on_thread_exit, addr 0x16c6490, size 0x88, virtual false, abstract: false, final false
  inline void set_pf_on_thread_exit(::Unity::Services::Vivox::SWIGTYPE_p_f_p_void__void* value);

  /// @brief Method set_pf_queue_job_async, addr 0x16c4444, size 0x88, virtual false, abstract: false, final false
  inline void set_pf_queue_job_async(::Unity::Services::Vivox::SWIGTYPE_p_f_p_void_p_void_size_t__int* value);

  /// @brief Method set_pf_queue_job_sync, addr 0x16c42e8, size 0x88, virtual false, abstract: false, final false
  inline void set_pf_queue_job_sync(::Unity::Services::Vivox::SWIGTYPE_p_f_p_void_p_void_size_t__int* value);

  /// @brief Method set_pf_realloc_func, addr 0x16c3b4c, size 0x88, virtual false, abstract: false, final false
  inline void set_pf_realloc_func(::Unity::Services::Vivox::SWIGTYPE_p_f_p_void_size_t__p_void* value);

  /// @brief Method set_pf_request_permission_for_network, addr 0x16c65ec, size 0x88, virtual false, abstract: false, final false
  inline void set_pf_request_permission_for_network(::Unity::Services::Vivox::SWIGTYPE_p_f_void__int* value);

  /// @brief Method set_pf_sdk_message_callback, addr 0x16c4928, size 0x88, virtual false, abstract: false, final false
  inline void set_pf_sdk_message_callback(::Unity::Services::Vivox::SWIGTYPE_p_f_p_void__void* value);

  /// @brief Method set_preferred_sip_port, addr 0x16c60c4, size 0x70, virtual false, abstract: false, final false
  inline void set_preferred_sip_port(int32_t value);

  /// @brief Method set_processor_affinity_mask, addr 0x16c45a0, size 0x70, virtual false, abstract: false, final false
  inline void set_processor_affinity_mask(int64_t value);

  /// @brief Method set_render_device_buffer_size_intervals, addr 0x16c56bc, size 0x70, virtual false, abstract: false, final false
  inline void set_render_device_buffer_size_intervals(int32_t value);

  /// @brief Method set_render_source_initial_buffer_count, addr 0x16c33b4, size 0x70, virtual false, abstract: false, final false
  inline void set_render_source_initial_buffer_count(int32_t value);

  /// @brief Method set_render_source_queue_depth_max, addr 0x16c32e4, size 0x70, virtual false, abstract: false, final false
  inline void set_render_source_queue_depth_max(int32_t value);

  /// @brief Method set_reserved, addr 0x16c40bc, size 0x70, virtual false, abstract: false, final false
  inline void set_reserved(int32_t value);

  /// @brief Method set_upstream_jitter_frame_count, addr 0x16c3484, size 0x70, virtual false, abstract: false, final false
  inline void set_upstream_jitter_frame_count(int32_t value);

  /// @brief Method set_use_access_tokens, addr 0x16c585c, size 0x70, virtual false, abstract: false, final false
  inline void set_use_access_tokens(int32_t value);

  /// @brief Method set_use_os_proxy_settings, addr 0x16c5f24, size 0x70, virtual false, abstract: false, final false
  inline void set_use_os_proxy_settings(int32_t value);

  /// @brief Method swigRelease, addr 0x16c2d0c, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::Unity::Services::Vivox::vx_sdk_config_t* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_sdk_config_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "vx_sdk_config_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  vx_sdk_config_t(vx_sdk_config_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "vx_sdk_config_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  vx_sdk_config_t(vx_sdk_config_t const&) = delete;

  /// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
  ::System::Runtime::InteropServices::HandleRef ___swigCPtr;

  /// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
  bool ___swigCMemOwn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_sdk_config_t, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_sdk_config_t, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_sdk_config_t, ___swigCMemOwn) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::vx_sdk_config_t);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_sdk_config_t*, "Unity.Services.Vivox", "vx_sdk_config_t");
