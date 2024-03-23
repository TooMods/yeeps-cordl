#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(vx_message_base_t)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
namespace Unity::Services::Vivox {
class vx_evt_base_t;
}
namespace Unity::Services::Vivox {
struct vx_message_type;
}
namespace Unity::Services::Vivox {
class vx_resp_base_t;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class vx_message_base_t;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::vx_message_base_t);
// Type: Unity.Services.Vivox::vx_message_base_t
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::vx_message_base_t*
class CORDL_TYPE vx_message_base_t : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_create_time_ms, put = set_create_time_ms)) uint64_t create_time_ms;

  __declspec(property(get = get_last_step_ms, put = set_last_step_ms)) uint64_t last_step_ms;

  __declspec(property(get = get_sdk_handle, put = set_sdk_handle)) uint32_t sdk_handle;

  /// @brief Field swigCMemOwn, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_swigCMemOwn, put = __cordl_internal_set_swigCMemOwn)) bool swigCMemOwn;

  /// @brief Field swigCPtr, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_swigCPtr, put = __cordl_internal_set_swigCPtr))::System::Runtime::InteropServices::HandleRef swigCPtr;

  __declspec(property(get = get_type, put = set_type))::Unity::Services::Vivox::vx_message_type type;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x280a42c, size 0x1e0, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method Finalize, addr 0x280a390, size 0x9c, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Unity::Services::Vivox::vx_message_base_t* New_ctor();

  static inline ::Unity::Services::Vivox::vx_message_base_t* New_ctor(void* cPtr, bool cMemoryOwn);

  constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

  constexpr bool& __cordl_internal_get_swigCMemOwn();

  constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

  constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr();

  constexpr void __cordl_internal_set_swigCMemOwn(bool value);

  constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef value);

  /// @brief Method .ctor, addr 0x280ab14, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x280a1dc, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(void* cPtr, bool cMemoryOwn);

  /// @brief Method as_evt_base, addr 0x280a700, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_base_t* as_evt_base();

  /// @brief Method as_resp_base, addr 0x280a61c, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_base_t* as_resp_base();

  /// @brief Method getCPtr, addr 0x280a230, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Unity::Services::Vivox::vx_message_base_t* obj);

  /// @brief Method get_create_time_ms, addr 0x280a9e4, size 0x60, virtual false, abstract: false, final false
  inline uint64_t get_create_time_ms();

  /// @brief Method get_last_step_ms, addr 0x280aab4, size 0x60, virtual false, abstract: false, final false
  inline uint64_t get_last_step_ms();

  /// @brief Method get_sdk_handle, addr 0x280a914, size 0x60, virtual false, abstract: false, final false
  inline uint32_t get_sdk_handle();

  /// @brief Method get_type, addr 0x280a844, size 0x60, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_message_type get_type();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method op_Implicit, addr 0x280a6f0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_evt_base_t* op_Implicit___Unity__Services__Vivox__vx_evt_base_t_(::Unity::Services::Vivox::vx_message_base_t* t);

  /// @brief Method op_Implicit, addr 0x280a60c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_resp_base_t* op_Implicit___Unity__Services__Vivox__vx_resp_base_t_(::Unity::Services::Vivox::vx_message_base_t* t);

  /// @brief Method set_create_time_ms, addr 0x280a974, size 0x70, virtual false, abstract: false, final false
  inline void set_create_time_ms(uint64_t value);

  /// @brief Method set_last_step_ms, addr 0x280aa44, size 0x70, virtual false, abstract: false, final false
  inline void set_last_step_ms(uint64_t value);

  /// @brief Method set_sdk_handle, addr 0x280a8a4, size 0x70, virtual false, abstract: false, final false
  inline void set_sdk_handle(uint32_t value);

  /// @brief Method set_type, addr 0x280a7d4, size 0x70, virtual false, abstract: false, final false
  inline void set_type(::Unity::Services::Vivox::vx_message_type value);

  /// @brief Method swigRelease, addr 0x280a2ac, size 0xe4, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::Unity::Services::Vivox::vx_message_base_t* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_message_base_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "vx_message_base_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  vx_message_base_t(vx_message_base_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "vx_message_base_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  vx_message_base_t(vx_message_base_t const&) = delete;

  /// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
  ::System::Runtime::InteropServices::HandleRef ___swigCPtr;

  /// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
  bool ___swigCMemOwn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_message_base_t, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_message_base_t, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_message_base_t, ___swigCMemOwn) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::vx_message_base_t);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_message_base_t*, "Unity.Services.Vivox", "vx_message_base_t");
