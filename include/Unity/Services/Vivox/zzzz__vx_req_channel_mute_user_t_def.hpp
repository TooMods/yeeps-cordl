#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(vx_req_channel_mute_user_t)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
namespace Unity::Services::Vivox {
struct vx_mute_scope;
}
namespace Unity::Services::Vivox {
class vx_req_base_t;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class vx_req_channel_mute_user_t;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::vx_req_channel_mute_user_t);
// Type: Unity.Services.Vivox::vx_req_channel_mute_user_t
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::vx_req_channel_mute_user_t*
class CORDL_TYPE vx_req_channel_mute_user_t : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_access_token, put = set_access_token))::StringW access_token;

  __declspec(property(get = get_account_handle, put = set_account_handle))::StringW account_handle;

  __declspec(property(get = get_base_, put = set_base_))::Unity::Services::Vivox::vx_req_base_t* base_;

  __declspec(property(get = get_channel_name, put = set_channel_name))::StringW channel_name;

  __declspec(property(get = get_channel_uri, put = set_channel_uri))::StringW channel_uri;

  __declspec(property(get = get_participant_uri, put = set_participant_uri))::StringW participant_uri;

  __declspec(property(get = get_scope, put = set_scope))::Unity::Services::Vivox::vx_mute_scope scope;

  __declspec(property(get = get_set_muted, put = set_set_muted)) int32_t set_muted;

  /// @brief Field swigCMemOwn, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_swigCMemOwn, put = __cordl_internal_set_swigCMemOwn)) bool swigCMemOwn;

  /// @brief Field swigCPtr, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_swigCPtr, put = __cordl_internal_set_swigCPtr))::System::Runtime::InteropServices::HandleRef swigCPtr;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x2a556c8, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x2a557d4, size 0x180, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x2a55734, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Unity::Services::Vivox::vx_req_channel_mute_user_t* New_ctor();

  static inline ::Unity::Services::Vivox::vx_req_channel_mute_user_t* New_ctor(void* cPtr, bool cMemoryOwn);

  constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

  constexpr bool& __cordl_internal_get_swigCMemOwn();

  constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

  constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr();

  constexpr void __cordl_internal_set_swigCMemOwn(bool value);

  constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef value);

  /// @brief Method .ctor, addr 0x2a56090, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2a5551c, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(void* cPtr, bool cMemoryOwn);

  /// @brief Method getCPtr, addr 0x2a55570, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Unity::Services::Vivox::vx_req_channel_mute_user_t* obj);

  /// @brief Method get_access_token, addr 0x2a56030, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_access_token();

  /// @brief Method get_account_handle, addr 0x2a55b50, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_account_handle();

  /// @brief Method get_base_, addr 0x2a55964, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_req_base_t* get_base_();

  /// @brief Method get_channel_name, addr 0x2a55c20, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_channel_name();

  /// @brief Method get_channel_uri, addr 0x2a55cf0, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_channel_uri();

  /// @brief Method get_participant_uri, addr 0x2a55dc0, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_participant_uri();

  /// @brief Method get_scope, addr 0x2a55f60, size 0x60, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_mute_scope get_scope();

  /// @brief Method get_set_muted, addr 0x2a55e90, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_set_muted();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method op_Implicit, addr 0x2a55954, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_req_base_t* op_Implicit___Unity__Services__Vivox__vx_req_base_t_(::Unity::Services::Vivox::vx_req_channel_mute_user_t* t);

  /// @brief Method set_access_token, addr 0x2a55fc0, size 0x70, virtual false, abstract: false, final false
  inline void set_access_token(::StringW value);

  /// @brief Method set_account_handle, addr 0x2a55ae0, size 0x70, virtual false, abstract: false, final false
  inline void set_account_handle(::StringW value);

  /// @brief Method set_base_, addr 0x2a55a5c, size 0x84, virtual false, abstract: false, final false
  inline void set_base_(::Unity::Services::Vivox::vx_req_base_t* value);

  /// @brief Method set_channel_name, addr 0x2a55bb0, size 0x70, virtual false, abstract: false, final false
  inline void set_channel_name(::StringW value);

  /// @brief Method set_channel_uri, addr 0x2a55c80, size 0x70, virtual false, abstract: false, final false
  inline void set_channel_uri(::StringW value);

  /// @brief Method set_participant_uri, addr 0x2a55d50, size 0x70, virtual false, abstract: false, final false
  inline void set_participant_uri(::StringW value);

  /// @brief Method set_scope, addr 0x2a55ef0, size 0x70, virtual false, abstract: false, final false
  inline void set_scope(::Unity::Services::Vivox::vx_mute_scope value);

  /// @brief Method set_set_muted, addr 0x2a55e20, size 0x70, virtual false, abstract: false, final false
  inline void set_set_muted(int32_t value);

  /// @brief Method swigRelease, addr 0x2a555ec, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::Unity::Services::Vivox::vx_req_channel_mute_user_t* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_req_channel_mute_user_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "vx_req_channel_mute_user_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  vx_req_channel_mute_user_t(vx_req_channel_mute_user_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "vx_req_channel_mute_user_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  vx_req_channel_mute_user_t(vx_req_channel_mute_user_t const&) = delete;

  /// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
  ::System::Runtime::InteropServices::HandleRef ___swigCPtr;

  /// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
  bool ___swigCMemOwn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_req_channel_mute_user_t, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_req_channel_mute_user_t, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_req_channel_mute_user_t, ___swigCMemOwn) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::vx_req_channel_mute_user_t);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_req_channel_mute_user_t*, "Unity.Services.Vivox", "vx_req_channel_mute_user_t");
