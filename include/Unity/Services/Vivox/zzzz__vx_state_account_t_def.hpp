#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(vx_state_account_t)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
namespace Unity::Services::Vivox {
class SWIGTYPE_p_p_vx_state_buddy;
}
namespace Unity::Services::Vivox {
class SWIGTYPE_p_p_vx_state_buddy_group;
}
namespace Unity::Services::Vivox {
class SWIGTYPE_p_p_vx_state_sessiongroup;
}
namespace Unity::Services::Vivox {
struct vx_login_state_change_state;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class vx_state_account_t;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::vx_state_account_t);
// Type: Unity.Services.Vivox::vx_state_account_t
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::vx_state_account_t*
class CORDL_TYPE vx_state_account_t : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_account_handle, put = set_account_handle))::StringW account_handle;

  __declspec(property(get = get_account_uri, put = set_account_uri))::StringW account_uri;

  __declspec(property(get = get_display_name, put = set_display_name))::StringW display_name;

  __declspec(property(get = get_is_anonymous_login, put = set_is_anonymous_login)) int32_t is_anonymous_login;

  __declspec(property(get = get_state, put = set_state))::Unity::Services::Vivox::vx_login_state_change_state state;

  __declspec(property(get = get_state_buddies, put = set_state_buddies))::Unity::Services::Vivox::SWIGTYPE_p_p_vx_state_buddy* state_buddies;

  __declspec(property(get = get_state_buddy_count, put = set_state_buddy_count)) int32_t state_buddy_count;

  __declspec(property(get = get_state_buddy_group_count, put = set_state_buddy_group_count)) int32_t state_buddy_group_count;

  __declspec(property(get = get_state_buddy_groups, put = set_state_buddy_groups))::Unity::Services::Vivox::SWIGTYPE_p_p_vx_state_buddy_group* state_buddy_groups;

  __declspec(property(get = get_state_sessiongroups, put = set_state_sessiongroups))::Unity::Services::Vivox::SWIGTYPE_p_p_vx_state_sessiongroup* state_sessiongroups;

  __declspec(property(get = get_state_sessiongroups_count, put = set_state_sessiongroups_count)) int32_t state_sessiongroups_count;

  /// @brief Field swigCMemOwn, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_swigCMemOwn, put = __cordl_internal_set_swigCMemOwn)) bool swigCMemOwn;

  /// @brief Field swigCPtr, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_swigCPtr, put = __cordl_internal_set_swigCPtr))::System::Runtime::InteropServices::HandleRef swigCPtr;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x16c6ff8, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x16c7104, size 0x180, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x16c7064, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Unity::Services::Vivox::vx_state_account_t* New_ctor();

  static inline ::Unity::Services::Vivox::vx_state_account_t* New_ctor(void* cPtr, bool cMemoryOwn);

  constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

  constexpr bool& __cordl_internal_get_swigCMemOwn();

  constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

  constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr();

  constexpr void __cordl_internal_set_swigCMemOwn(bool value);

  constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef value);

  /// @brief Method .ctor, addr 0x16c7d18, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x16c6e4c, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(void* cPtr, bool cMemoryOwn);

  /// @brief Method getCPtr, addr 0x16c6ea0, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Unity::Services::Vivox::vx_state_account_t* obj);

  /// @brief Method get_account_handle, addr 0x16c72f4, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_account_handle();

  /// @brief Method get_account_uri, addr 0x16c73c4, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_account_uri();

  /// @brief Method get_display_name, addr 0x16c7494, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_display_name();

  /// @brief Method get_is_anonymous_login, addr 0x16c7564, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_is_anonymous_login();

  /// @brief Method get_state, addr 0x16c7704, size 0x60, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_login_state_change_state get_state();

  /// @brief Method get_state_buddies, addr 0x16c7ae8, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_p_vx_state_buddy* get_state_buddies();

  /// @brief Method get_state_buddy_count, addr 0x16c7930, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_state_buddy_count();

  /// @brief Method get_state_buddy_group_count, addr 0x16c7a00, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_state_buddy_group_count();

  /// @brief Method get_state_buddy_groups, addr 0x16c7c44, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_p_vx_state_buddy_group* get_state_buddy_groups();

  /// @brief Method get_state_sessiongroups, addr 0x16c77ec, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_p_vx_state_sessiongroup* get_state_sessiongroups();

  /// @brief Method get_state_sessiongroups_count, addr 0x16c7634, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_state_sessiongroups_count();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_account_handle, addr 0x16c7284, size 0x70, virtual false, abstract: false, final false
  inline void set_account_handle(::StringW value);

  /// @brief Method set_account_uri, addr 0x16c7354, size 0x70, virtual false, abstract: false, final false
  inline void set_account_uri(::StringW value);

  /// @brief Method set_display_name, addr 0x16c7424, size 0x70, virtual false, abstract: false, final false
  inline void set_display_name(::StringW value);

  /// @brief Method set_is_anonymous_login, addr 0x16c74f4, size 0x70, virtual false, abstract: false, final false
  inline void set_is_anonymous_login(int32_t value);

  /// @brief Method set_state, addr 0x16c7694, size 0x70, virtual false, abstract: false, final false
  inline void set_state(::Unity::Services::Vivox::vx_login_state_change_state value);

  /// @brief Method set_state_buddies, addr 0x16c7a60, size 0x88, virtual false, abstract: false, final false
  inline void set_state_buddies(::Unity::Services::Vivox::SWIGTYPE_p_p_vx_state_buddy* value);

  /// @brief Method set_state_buddy_count, addr 0x16c78c0, size 0x70, virtual false, abstract: false, final false
  inline void set_state_buddy_count(int32_t value);

  /// @brief Method set_state_buddy_group_count, addr 0x16c7990, size 0x70, virtual false, abstract: false, final false
  inline void set_state_buddy_group_count(int32_t value);

  /// @brief Method set_state_buddy_groups, addr 0x16c7bbc, size 0x88, virtual false, abstract: false, final false
  inline void set_state_buddy_groups(::Unity::Services::Vivox::SWIGTYPE_p_p_vx_state_buddy_group* value);

  /// @brief Method set_state_sessiongroups, addr 0x16c7764, size 0x88, virtual false, abstract: false, final false
  inline void set_state_sessiongroups(::Unity::Services::Vivox::SWIGTYPE_p_p_vx_state_sessiongroup* value);

  /// @brief Method set_state_sessiongroups_count, addr 0x16c75c4, size 0x70, virtual false, abstract: false, final false
  inline void set_state_sessiongroups_count(int32_t value);

  /// @brief Method swigRelease, addr 0x16c6f1c, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::Unity::Services::Vivox::vx_state_account_t* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_state_account_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "vx_state_account_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  vx_state_account_t(vx_state_account_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "vx_state_account_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  vx_state_account_t(vx_state_account_t const&) = delete;

  /// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
  ::System::Runtime::InteropServices::HandleRef ___swigCPtr;

  /// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
  bool ___swigCMemOwn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_state_account_t, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_state_account_t, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_state_account_t, ___swigCMemOwn) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::vx_state_account_t);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_state_account_t*, "Unity.Services.Vivox", "vx_state_account_t");
