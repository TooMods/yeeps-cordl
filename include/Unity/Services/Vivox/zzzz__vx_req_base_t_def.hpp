#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(vx_req_base_t)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
namespace Unity::Services::Vivox {
class SWIGTYPE_p_void;
}
namespace Unity::Services::Vivox {
class vx_message_base_t;
}
namespace Unity::Services::Vivox {
struct vx_request_type;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class vx_req_base_t;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::vx_req_base_t);
// Type: Unity.Services.Vivox::vx_req_base_t
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::vx_req_base_t*
class CORDL_TYPE vx_req_base_t : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_cookie, put = set_cookie))::StringW cookie;

  __declspec(property(get = get_message, put = set_message))::Unity::Services::Vivox::vx_message_base_t* message;

  /// @brief Field swigCMemOwn, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_swigCMemOwn, put = __cordl_internal_set_swigCMemOwn)) bool swigCMemOwn;

  /// @brief Field swigCPtr, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_swigCPtr, put = __cordl_internal_set_swigCPtr))::System::Runtime::InteropServices::HandleRef swigCPtr;

  __declspec(property(get = get_type, put = set_type))::Unity::Services::Vivox::vx_request_type type;

  __declspec(property(get = get_vcookie, put = set_vcookie))::Unity::Services::Vivox::SWIGTYPE_p_void* vcookie;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x2a52590, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x2a5269c, size 0x180, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x2a525fc, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Unity::Services::Vivox::vx_req_base_t* New_ctor();

  static inline ::Unity::Services::Vivox::vx_req_base_t* New_ctor(void* cPtr, bool cMemoryOwn);

  constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

  constexpr bool& __cordl_internal_get_swigCMemOwn();

  constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

  constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr();

  constexpr void __cordl_internal_set_swigCMemOwn(bool value);

  constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef value);

  /// @brief Method .ctor, addr 0x2a52c74, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2a496e4, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(void* cPtr, bool cMemoryOwn);

  /// @brief Method getCPtr, addr 0x2a49668, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Unity::Services::Vivox::vx_req_base_t* obj);

  /// @brief Method get_cookie, addr 0x2a52ab8, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_cookie();

  /// @brief Method get_message, addr 0x2a528a4, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_message_base_t* get_message();

  /// @brief Method get_type, addr 0x2a529e8, size 0x60, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_request_type get_type();

  /// @brief Method get_vcookie, addr 0x2a52ba0, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_void* get_vcookie();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_cookie, addr 0x2a52a48, size 0x70, virtual false, abstract: false, final false
  inline void set_cookie(::StringW value);

  /// @brief Method set_message, addr 0x2a5281c, size 0x88, virtual false, abstract: false, final false
  inline void set_message(::Unity::Services::Vivox::vx_message_base_t* value);

  /// @brief Method set_type, addr 0x2a52978, size 0x70, virtual false, abstract: false, final false
  inline void set_type(::Unity::Services::Vivox::vx_request_type value);

  /// @brief Method set_vcookie, addr 0x2a52b18, size 0x88, virtual false, abstract: false, final false
  inline void set_vcookie(::Unity::Services::Vivox::SWIGTYPE_p_void* value);

  /// @brief Method swigRelease, addr 0x2a524b4, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::Unity::Services::Vivox::vx_req_base_t* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_req_base_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "vx_req_base_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  vx_req_base_t(vx_req_base_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "vx_req_base_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  vx_req_base_t(vx_req_base_t const&) = delete;

  /// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
  ::System::Runtime::InteropServices::HandleRef ___swigCPtr;

  /// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
  bool ___swigCMemOwn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_req_base_t, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_req_base_t, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_req_base_t, ___swigCMemOwn) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::vx_req_base_t);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_req_base_t*, "Unity.Services.Vivox", "vx_req_base_t");
