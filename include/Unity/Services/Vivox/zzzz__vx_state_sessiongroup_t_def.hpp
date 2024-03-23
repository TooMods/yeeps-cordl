#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(vx_state_sessiongroup_t)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
namespace Unity::Services::Vivox {
class SWIGTYPE_p_p_vx_state_session;
}
namespace Unity::Services::Vivox {
struct vx_sessiongroup_playback_mode;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class vx_state_sessiongroup_t;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::vx_state_sessiongroup_t);
// Type: Unity.Services.Vivox::vx_state_sessiongroup_t
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::vx_state_sessiongroup_t*
class CORDL_TYPE vx_state_sessiongroup_t : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_current_playback_mode, put = set_current_playback_mode))::Unity::Services::Vivox::vx_sessiongroup_playback_mode current_playback_mode;

  __declspec(property(get = get_current_playback_speed, put = set_current_playback_speed)) double_t current_playback_speed;

  __declspec(property(get = get_current_recording_filename, put = set_current_recording_filename))::StringW current_recording_filename;

  __declspec(property(get = get_first_loop_frame, put = set_first_loop_frame)) int32_t first_loop_frame;

  __declspec(property(get = get_in_delayed_playback, put = set_in_delayed_playback)) int32_t in_delayed_playback;

  __declspec(property(get = get_last_loop_frame_played, put = set_last_loop_frame_played)) int32_t last_loop_frame_played;

  __declspec(property(get = get_loop_buffer_capacity, put = set_loop_buffer_capacity)) int32_t loop_buffer_capacity;

  __declspec(property(get = get_playback_paused, put = set_playback_paused)) int32_t playback_paused;

  __declspec(property(get = get_sessiongroup_handle, put = set_sessiongroup_handle))::StringW sessiongroup_handle;

  __declspec(property(get = get_state_sessions, put = set_state_sessions))::Unity::Services::Vivox::SWIGTYPE_p_p_vx_state_session* state_sessions;

  __declspec(property(get = get_state_sessions_count, put = set_state_sessions_count)) int32_t state_sessions_count;

  /// @brief Field swigCMemOwn, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_swigCMemOwn, put = __cordl_internal_set_swigCMemOwn)) bool swigCMemOwn;

  /// @brief Field swigCPtr, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_swigCPtr, put = __cordl_internal_set_swigCPtr))::System::Runtime::InteropServices::HandleRef swigCPtr;

  __declspec(property(get = get_total_loop_frames_captured, put = set_total_loop_frames_captured)) int32_t total_loop_frames_captured;

  __declspec(property(get = get_total_recorded_frames, put = set_total_recorded_frames)) int32_t total_recorded_frames;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x16cb764, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x16cb870, size 0x180, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x16cb7d0, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Unity::Services::Vivox::vx_state_sessiongroup_t* New_ctor();

  static inline ::Unity::Services::Vivox::vx_state_sessiongroup_t* New_ctor(void* cPtr, bool cMemoryOwn);

  constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

  constexpr bool& __cordl_internal_get_swigCMemOwn();

  constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

  constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr();

  constexpr void __cordl_internal_set_swigCMemOwn(bool value);

  constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef value);

  /// @brief Method .ctor, addr 0x16cc50c, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x16cb5b8, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(void* cPtr, bool cMemoryOwn);

  /// @brief Method getCPtr, addr 0x16cb60c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Unity::Services::Vivox::vx_state_sessiongroup_t* obj);

  /// @brief Method get_current_playback_mode, addr 0x16cbefc, size 0x60, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_sessiongroup_playback_mode get_current_playback_mode();

  /// @brief Method get_current_playback_speed, addr 0x16cbe2c, size 0x60, virtual false, abstract: false, final false
  inline double_t get_current_playback_speed();

  /// @brief Method get_current_recording_filename, addr 0x16cc3dc, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_current_recording_filename();

  /// @brief Method get_first_loop_frame, addr 0x16cc16c, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_first_loop_frame();

  /// @brief Method get_in_delayed_playback, addr 0x16cbd5c, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_in_delayed_playback();

  /// @brief Method get_last_loop_frame_played, addr 0x16cc30c, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_last_loop_frame_played();

  /// @brief Method get_loop_buffer_capacity, addr 0x16cc09c, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_loop_buffer_capacity();

  /// @brief Method get_playback_paused, addr 0x16cbfcc, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_playback_paused();

  /// @brief Method get_sessiongroup_handle, addr 0x16cba60, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_sessiongroup_handle();

  /// @brief Method get_state_sessions, addr 0x16cbc18, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_p_vx_state_session* get_state_sessions();

  /// @brief Method get_state_sessions_count, addr 0x16cbb30, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_state_sessions_count();

  /// @brief Method get_total_loop_frames_captured, addr 0x16cc23c, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_total_loop_frames_captured();

  /// @brief Method get_total_recorded_frames, addr 0x16cc4ac, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_total_recorded_frames();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_current_playback_mode, addr 0x16cbe8c, size 0x70, virtual false, abstract: false, final false
  inline void set_current_playback_mode(::Unity::Services::Vivox::vx_sessiongroup_playback_mode value);

  /// @brief Method set_current_playback_speed, addr 0x16cbdbc, size 0x70, virtual false, abstract: false, final false
  inline void set_current_playback_speed(double_t value);

  /// @brief Method set_current_recording_filename, addr 0x16cc36c, size 0x70, virtual false, abstract: false, final false
  inline void set_current_recording_filename(::StringW value);

  /// @brief Method set_first_loop_frame, addr 0x16cc0fc, size 0x70, virtual false, abstract: false, final false
  inline void set_first_loop_frame(int32_t value);

  /// @brief Method set_in_delayed_playback, addr 0x16cbcec, size 0x70, virtual false, abstract: false, final false
  inline void set_in_delayed_playback(int32_t value);

  /// @brief Method set_last_loop_frame_played, addr 0x16cc29c, size 0x70, virtual false, abstract: false, final false
  inline void set_last_loop_frame_played(int32_t value);

  /// @brief Method set_loop_buffer_capacity, addr 0x16cc02c, size 0x70, virtual false, abstract: false, final false
  inline void set_loop_buffer_capacity(int32_t value);

  /// @brief Method set_playback_paused, addr 0x16cbf5c, size 0x70, virtual false, abstract: false, final false
  inline void set_playback_paused(int32_t value);

  /// @brief Method set_sessiongroup_handle, addr 0x16cb9f0, size 0x70, virtual false, abstract: false, final false
  inline void set_sessiongroup_handle(::StringW value);

  /// @brief Method set_state_sessions, addr 0x16cbb90, size 0x88, virtual false, abstract: false, final false
  inline void set_state_sessions(::Unity::Services::Vivox::SWIGTYPE_p_p_vx_state_session* value);

  /// @brief Method set_state_sessions_count, addr 0x16cbac0, size 0x70, virtual false, abstract: false, final false
  inline void set_state_sessions_count(int32_t value);

  /// @brief Method set_total_loop_frames_captured, addr 0x16cc1cc, size 0x70, virtual false, abstract: false, final false
  inline void set_total_loop_frames_captured(int32_t value);

  /// @brief Method set_total_recorded_frames, addr 0x16cc43c, size 0x70, virtual false, abstract: false, final false
  inline void set_total_recorded_frames(int32_t value);

  /// @brief Method swigRelease, addr 0x16cb688, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::Unity::Services::Vivox::vx_state_sessiongroup_t* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_state_sessiongroup_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "vx_state_sessiongroup_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  vx_state_sessiongroup_t(vx_state_sessiongroup_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "vx_state_sessiongroup_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  vx_state_sessiongroup_t(vx_state_sessiongroup_t const&) = delete;

  /// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
  ::System::Runtime::InteropServices::HandleRef ___swigCPtr;

  /// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
  bool ___swigCMemOwn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_state_sessiongroup_t, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_state_sessiongroup_t, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_state_sessiongroup_t, ___swigCMemOwn) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::vx_state_sessiongroup_t);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_state_sessiongroup_t*, "Unity.Services.Vivox", "vx_state_sessiongroup_t");
