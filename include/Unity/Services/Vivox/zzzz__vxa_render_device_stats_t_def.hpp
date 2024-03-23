#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(vxa_render_device_stats_t)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class vxa_render_device_stats_t;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::vxa_render_device_stats_t);
// Type: Unity.Services.Vivox::vxa_render_device_stats_t
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::vxa_render_device_stats_t*
class CORDL_TYPE vxa_render_device_stats_t : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_audio_queue_read_count, put = set_audio_queue_read_count)) int32_t audio_queue_read_count;

  __declspec(property(get = get_audio_queue_write_count, put = set_audio_queue_write_count)) int32_t audio_queue_write_count;

  __declspec(property(get = get_buffer_overrun_count, put = set_buffer_overrun_count)) int32_t buffer_overrun_count;

  __declspec(property(get = get_buffer_underrun_count, put = set_buffer_underrun_count)) int32_t buffer_underrun_count;

  __declspec(property(get = get_current_output_queue_depth_milliseconds, put = set_current_output_queue_depth_milliseconds)) int32_t current_output_queue_depth_milliseconds;

  __declspec(property(get = get_hardware_output_channels, put = set_hardware_output_channels)) int32_t hardware_output_channels;

  __declspec(property(get = get_hardware_preferred_buffer_duration, put = set_hardware_preferred_buffer_duration)) int32_t hardware_preferred_buffer_duration;

  __declspec(property(get = get_hardware_preferred_samplerate, put = set_hardware_preferred_samplerate)) int32_t hardware_preferred_samplerate;

  __declspec(property(get = get_other_error_count, put = set_other_error_count)) int32_t other_error_count;

  /// @brief Field swigCMemOwn, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_swigCMemOwn, put = __cordl_internal_set_swigCMemOwn)) bool swigCMemOwn;

  /// @brief Field swigCPtr, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_swigCPtr, put = __cordl_internal_set_swigCPtr))::System::Runtime::InteropServices::HandleRef swigCPtr;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x2788778, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x2788884, size 0x180, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x27887e4, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Unity::Services::Vivox::vxa_render_device_stats_t* New_ctor();

  static inline ::Unity::Services::Vivox::vxa_render_device_stats_t* New_ctor(void* cPtr, bool cMemoryOwn);

  constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

  constexpr bool& __cordl_internal_get_swigCMemOwn();

  constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

  constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr();

  constexpr void __cordl_internal_set_swigCMemOwn(bool value);

  constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef value);

  /// @brief Method .ctor, addr 0x2789154, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x27885cc, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(void* cPtr, bool cMemoryOwn);

  /// @brief Method getCPtr, addr 0x2788620, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Unity::Services::Vivox::vxa_render_device_stats_t* obj);

  /// @brief Method get_audio_queue_read_count, addr 0x2788db4, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_audio_queue_read_count();

  /// @brief Method get_audio_queue_write_count, addr 0x2788e84, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_audio_queue_write_count();

  /// @brief Method get_buffer_overrun_count, addr 0x2788c14, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_buffer_overrun_count();

  /// @brief Method get_buffer_underrun_count, addr 0x2788b44, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_buffer_underrun_count();

  /// @brief Method get_current_output_queue_depth_milliseconds, addr 0x2788a74, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_current_output_queue_depth_milliseconds();

  /// @brief Method get_hardware_output_channels, addr 0x2788f54, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_hardware_output_channels();

  /// @brief Method get_hardware_preferred_buffer_duration, addr 0x27890f4, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_hardware_preferred_buffer_duration();

  /// @brief Method get_hardware_preferred_samplerate, addr 0x2789024, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_hardware_preferred_samplerate();

  /// @brief Method get_other_error_count, addr 0x2788ce4, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_other_error_count();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_audio_queue_read_count, addr 0x2788d44, size 0x70, virtual false, abstract: false, final false
  inline void set_audio_queue_read_count(int32_t value);

  /// @brief Method set_audio_queue_write_count, addr 0x2788e14, size 0x70, virtual false, abstract: false, final false
  inline void set_audio_queue_write_count(int32_t value);

  /// @brief Method set_buffer_overrun_count, addr 0x2788ba4, size 0x70, virtual false, abstract: false, final false
  inline void set_buffer_overrun_count(int32_t value);

  /// @brief Method set_buffer_underrun_count, addr 0x2788ad4, size 0x70, virtual false, abstract: false, final false
  inline void set_buffer_underrun_count(int32_t value);

  /// @brief Method set_current_output_queue_depth_milliseconds, addr 0x2788a04, size 0x70, virtual false, abstract: false, final false
  inline void set_current_output_queue_depth_milliseconds(int32_t value);

  /// @brief Method set_hardware_output_channels, addr 0x2788ee4, size 0x70, virtual false, abstract: false, final false
  inline void set_hardware_output_channels(int32_t value);

  /// @brief Method set_hardware_preferred_buffer_duration, addr 0x2789084, size 0x70, virtual false, abstract: false, final false
  inline void set_hardware_preferred_buffer_duration(int32_t value);

  /// @brief Method set_hardware_preferred_samplerate, addr 0x2788fb4, size 0x70, virtual false, abstract: false, final false
  inline void set_hardware_preferred_samplerate(int32_t value);

  /// @brief Method set_other_error_count, addr 0x2788c74, size 0x70, virtual false, abstract: false, final false
  inline void set_other_error_count(int32_t value);

  /// @brief Method swigRelease, addr 0x278869c, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::Unity::Services::Vivox::vxa_render_device_stats_t* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr vxa_render_device_stats_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "vxa_render_device_stats_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  vxa_render_device_stats_t(vxa_render_device_stats_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "vxa_render_device_stats_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  vxa_render_device_stats_t(vxa_render_device_stats_t const&) = delete;

  /// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
  ::System::Runtime::InteropServices::HandleRef ___swigCPtr;

  /// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
  bool ___swigCMemOwn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vxa_render_device_stats_t, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vxa_render_device_stats_t, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vxa_render_device_stats_t, ___swigCMemOwn) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::vxa_render_device_stats_t);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vxa_render_device_stats_t*, "Unity.Services.Vivox", "vxa_render_device_stats_t");
