#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(vx_req_session_media_connect_t)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
namespace Unity::Services::Vivox {
struct vx_media_type;
}
namespace Unity::Services::Vivox {
class vx_req_base_t;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class vx_req_session_media_connect_t;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::vx_req_session_media_connect_t);
// Type: Unity.Services.Vivox::vx_req_session_media_connect_t
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::vx_req_session_media_connect_t*
class CORDL_TYPE vx_req_session_media_connect_t : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_base_, put = set_base_))::Unity::Services::Vivox::vx_req_base_t* base_;

  __declspec(property(get = get_capture_device_id, put = set_capture_device_id))::StringW capture_device_id;

  __declspec(property(get = get_jitter_compensation, put = set_jitter_compensation)) int32_t jitter_compensation;

  __declspec(property(get = get_loop_mode_duration_seconds, put = set_loop_mode_duration_seconds)) int32_t loop_mode_duration_seconds;

  __declspec(property(get = get_media, put = set_media))::Unity::Services::Vivox::vx_media_type media;

  __declspec(property(get = get_render_device_id, put = set_render_device_id))::StringW render_device_id;

  __declspec(property(get = get_session_font_id, put = set_session_font_id)) int32_t session_font_id;

  __declspec(property(get = get_session_handle, put = set_session_handle))::StringW session_handle;

  __declspec(property(get = get_sessiongroup_handle, put = set_sessiongroup_handle))::StringW sessiongroup_handle;

  /// @brief Field swigCMemOwn, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_swigCMemOwn, put = __cordl_internal_set_swigCMemOwn)) bool swigCMemOwn;

  /// @brief Field swigCPtr, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_swigCPtr, put = __cordl_internal_set_swigCPtr))::System::Runtime::InteropServices::HandleRef swigCPtr;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x2a67940, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x2a67a4c, size 0x180, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x2a679ac, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Unity::Services::Vivox::vx_req_session_media_connect_t* New_ctor();

  static inline ::Unity::Services::Vivox::vx_req_session_media_connect_t* New_ctor(void* cPtr, bool cMemoryOwn);

  constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

  constexpr bool& __cordl_internal_get_swigCMemOwn();

  constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

  constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr();

  constexpr void __cordl_internal_set_swigCMemOwn(bool value);

  constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef value);

  /// @brief Method .ctor, addr 0x2a683d8, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2a67794, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(void* cPtr, bool cMemoryOwn);

  /// @brief Method getCPtr, addr 0x2a677e8, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Unity::Services::Vivox::vx_req_session_media_connect_t* obj);

  /// @brief Method get_base_, addr 0x2a67bdc, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_req_base_t* get_base_();

  /// @brief Method get_capture_device_id, addr 0x2a68108, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_capture_device_id();

  /// @brief Method get_jitter_compensation, addr 0x2a682a8, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_jitter_compensation();

  /// @brief Method get_loop_mode_duration_seconds, addr 0x2a68378, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_loop_mode_duration_seconds();

  /// @brief Method get_media, addr 0x2a68038, size 0x60, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_media_type get_media();

  /// @brief Method get_render_device_id, addr 0x2a681d8, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_render_device_id();

  /// @brief Method get_session_font_id, addr 0x2a67f68, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_session_font_id();

  /// @brief Method get_session_handle, addr 0x2a67e98, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_session_handle();

  /// @brief Method get_sessiongroup_handle, addr 0x2a67dc8, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_sessiongroup_handle();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method op_Implicit, addr 0x2a67bcc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_req_base_t* op_Implicit___Unity__Services__Vivox__vx_req_base_t_(::Unity::Services::Vivox::vx_req_session_media_connect_t* t);

  /// @brief Method set_base_, addr 0x2a67cd4, size 0x84, virtual false, abstract: false, final false
  inline void set_base_(::Unity::Services::Vivox::vx_req_base_t* value);

  /// @brief Method set_capture_device_id, addr 0x2a68098, size 0x70, virtual false, abstract: false, final false
  inline void set_capture_device_id(::StringW value);

  /// @brief Method set_jitter_compensation, addr 0x2a68238, size 0x70, virtual false, abstract: false, final false
  inline void set_jitter_compensation(int32_t value);

  /// @brief Method set_loop_mode_duration_seconds, addr 0x2a68308, size 0x70, virtual false, abstract: false, final false
  inline void set_loop_mode_duration_seconds(int32_t value);

  /// @brief Method set_media, addr 0x2a67fc8, size 0x70, virtual false, abstract: false, final false
  inline void set_media(::Unity::Services::Vivox::vx_media_type value);

  /// @brief Method set_render_device_id, addr 0x2a68168, size 0x70, virtual false, abstract: false, final false
  inline void set_render_device_id(::StringW value);

  /// @brief Method set_session_font_id, addr 0x2a67ef8, size 0x70, virtual false, abstract: false, final false
  inline void set_session_font_id(int32_t value);

  /// @brief Method set_session_handle, addr 0x2a67e28, size 0x70, virtual false, abstract: false, final false
  inline void set_session_handle(::StringW value);

  /// @brief Method set_sessiongroup_handle, addr 0x2a67d58, size 0x70, virtual false, abstract: false, final false
  inline void set_sessiongroup_handle(::StringW value);

  /// @brief Method swigRelease, addr 0x2a67864, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::Unity::Services::Vivox::vx_req_session_media_connect_t* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_req_session_media_connect_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "vx_req_session_media_connect_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  vx_req_session_media_connect_t(vx_req_session_media_connect_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "vx_req_session_media_connect_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  vx_req_session_media_connect_t(vx_req_session_media_connect_t const&) = delete;

  /// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
  ::System::Runtime::InteropServices::HandleRef ___swigCPtr;

  /// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
  bool ___swigCMemOwn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_req_session_media_connect_t, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_req_session_media_connect_t, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_req_session_media_connect_t, ___swigCMemOwn) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::vx_req_session_media_connect_t);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_req_session_media_connect_t*, "Unity.Services.Vivox", "vx_req_session_media_connect_t");
