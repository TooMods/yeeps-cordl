#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(vx_resp_aux_get_render_devices_t)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
namespace Unity::Services::Vivox {
class SWIGTYPE_p_p_vx_device;
}
namespace Unity::Services::Vivox {
class vx_device_t;
}
namespace Unity::Services::Vivox {
class vx_resp_base_t;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class vx_resp_aux_get_render_devices_t;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::vx_resp_aux_get_render_devices_t);
// Type: Unity.Services.Vivox::vx_resp_aux_get_render_devices_t
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::vx_resp_aux_get_render_devices_t*
class CORDL_TYPE vx_resp_aux_get_render_devices_t : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_base_, put = set_base_))::Unity::Services::Vivox::vx_resp_base_t* base_;

  __declspec(property(get = get_count, put = set_count)) int32_t count;

  __declspec(property(get = get_current_render_device, put = set_current_render_device))::Unity::Services::Vivox::vx_device_t* current_render_device;

  __declspec(property(get = get_default_communication_render_device, put = set_default_communication_render_device))::Unity::Services::Vivox::vx_device_t* default_communication_render_device;

  __declspec(property(get = get_default_render_device, put = set_default_render_device))::Unity::Services::Vivox::vx_device_t* default_render_device;

  __declspec(property(get = get_effective_render_device, put = set_effective_render_device))::Unity::Services::Vivox::vx_device_t* effective_render_device;

  __declspec(property(get = get_render_devices, put = set_render_devices))::Unity::Services::Vivox::SWIGTYPE_p_p_vx_device* render_devices;

  /// @brief Field swigCMemOwn, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_swigCMemOwn, put = __cordl_internal_set_swigCMemOwn)) bool swigCMemOwn;

  /// @brief Field swigCPtr, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_swigCPtr, put = __cordl_internal_set_swigCPtr))::System::Runtime::InteropServices::HandleRef swigCPtr;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x29fce88, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x29fcf94, size 0x180, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x29fcef4, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Unity::Services::Vivox::vx_resp_aux_get_render_devices_t* New_ctor();

  static inline ::Unity::Services::Vivox::vx_resp_aux_get_render_devices_t* New_ctor(void* cPtr, bool cMemoryOwn);

  constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

  constexpr bool& __cordl_internal_get_swigCMemOwn();

  constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

  constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr();

  constexpr void __cordl_internal_set_swigCMemOwn(bool value);

  constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef value);

  /// @brief Method .ctor, addr 0x29fda2c, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x29fccdc, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(void* cPtr, bool cMemoryOwn);

  /// @brief Method getCPtr, addr 0x29fcd30, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Unity::Services::Vivox::vx_resp_aux_get_render_devices_t* obj);

  /// @brief Method get_base_, addr 0x29fd198, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_base_t* get_base_();

  /// @brief Method get_count, addr 0x29fd300, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_count();

  /// @brief Method get_current_render_device, addr 0x29fd544, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_device_t* get_current_render_device();

  /// @brief Method get_default_communication_render_device, addr 0x29fd958, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_device_t* get_default_communication_render_device();

  /// @brief Method get_default_render_device, addr 0x29fd7fc, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_device_t* get_default_render_device();

  /// @brief Method get_effective_render_device, addr 0x29fd6a0, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_device_t* get_effective_render_device();

  /// @brief Method get_render_devices, addr 0x29fd3e8, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_p_vx_device* get_render_devices();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_base_, addr 0x29fd114, size 0x84, virtual false, abstract: false, final false
  inline void set_base_(::Unity::Services::Vivox::vx_resp_base_t* value);

  /// @brief Method set_count, addr 0x29fd290, size 0x70, virtual false, abstract: false, final false
  inline void set_count(int32_t value);

  /// @brief Method set_current_render_device, addr 0x29fd4bc, size 0x88, virtual false, abstract: false, final false
  inline void set_current_render_device(::Unity::Services::Vivox::vx_device_t* value);

  /// @brief Method set_default_communication_render_device, addr 0x29fd8d0, size 0x88, virtual false, abstract: false, final false
  inline void set_default_communication_render_device(::Unity::Services::Vivox::vx_device_t* value);

  /// @brief Method set_default_render_device, addr 0x29fd774, size 0x88, virtual false, abstract: false, final false
  inline void set_default_render_device(::Unity::Services::Vivox::vx_device_t* value);

  /// @brief Method set_effective_render_device, addr 0x29fd618, size 0x88, virtual false, abstract: false, final false
  inline void set_effective_render_device(::Unity::Services::Vivox::vx_device_t* value);

  /// @brief Method set_render_devices, addr 0x29fd360, size 0x88, virtual false, abstract: false, final false
  inline void set_render_devices(::Unity::Services::Vivox::SWIGTYPE_p_p_vx_device* value);

  /// @brief Method swigRelease, addr 0x29fcdac, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::Unity::Services::Vivox::vx_resp_aux_get_render_devices_t* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_resp_aux_get_render_devices_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "vx_resp_aux_get_render_devices_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  vx_resp_aux_get_render_devices_t(vx_resp_aux_get_render_devices_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "vx_resp_aux_get_render_devices_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  vx_resp_aux_get_render_devices_t(vx_resp_aux_get_render_devices_t const&) = delete;

  /// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
  ::System::Runtime::InteropServices::HandleRef ___swigCPtr;

  /// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
  bool ___swigCMemOwn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_resp_aux_get_render_devices_t, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_resp_aux_get_render_devices_t, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_resp_aux_get_render_devices_t, ___swigCMemOwn) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::vx_resp_aux_get_render_devices_t);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_resp_aux_get_render_devices_t*, "Unity.Services.Vivox", "vx_resp_aux_get_render_devices_t");
