#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(vx_evt_session_added_t)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
namespace Unity::Services::Vivox {
class vx_evt_base_t;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class vx_evt_session_added_t;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::vx_evt_session_added_t);
// Type: Unity.Services.Vivox::vx_evt_session_added_t
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::vx_evt_session_added_t*
class CORDL_TYPE vx_evt_session_added_t : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_alias_username, put = set_alias_username))::StringW alias_username;

  __declspec(property(get = get_application, put = set_application))::StringW application;

  __declspec(property(get = get_base_, put = set_base_))::Unity::Services::Vivox::vx_evt_base_t* base_;

  __declspec(property(get = get_channel_name, put = set_channel_name))::StringW channel_name;

  __declspec(property(get = get_displayname, put = set_displayname))::StringW displayname;

  __declspec(property(get = get_incoming, put = set_incoming)) int32_t incoming;

  __declspec(property(get = get_is_channel, put = set_is_channel)) int32_t is_channel;

  __declspec(property(get = get_session_handle, put = set_session_handle))::StringW session_handle;

  __declspec(property(get = get_sessiongroup_handle, put = set_sessiongroup_handle))::StringW sessiongroup_handle;

  /// @brief Field swigCMemOwn, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_swigCMemOwn, put = __cordl_internal_set_swigCMemOwn)) bool swigCMemOwn;

  /// @brief Field swigCPtr, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_swigCPtr, put = __cordl_internal_set_swigCPtr))::System::Runtime::InteropServices::HandleRef swigCPtr;

  __declspec(property(get = get_uri, put = set_uri))::StringW uri;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x27aa0d4, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x27aa1e0, size 0x180, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x27aa140, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Unity::Services::Vivox::vx_evt_session_added_t* New_ctor();

  static inline ::Unity::Services::Vivox::vx_evt_session_added_t* New_ctor(void* cPtr, bool cMemoryOwn);

  constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

  constexpr bool& __cordl_internal_get_swigCMemOwn();

  constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

  constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr();

  constexpr void __cordl_internal_set_swigCMemOwn(bool value);

  constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef value);

  /// @brief Method .ctor, addr 0x27aac2c, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x279aa08, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(void* cPtr, bool cMemoryOwn);

  /// @brief Method getCPtr, addr 0x27a9f7c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Unity::Services::Vivox::vx_evt_session_added_t* obj);

  /// @brief Method get_alias_username, addr 0x27aabcc, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_alias_username();

  /// @brief Method get_application, addr 0x27aaafc, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_application();

  /// @brief Method get_base_, addr 0x27aa3e4, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_base_t* get_base_();

  /// @brief Method get_channel_name, addr 0x27aa95c, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_channel_name();

  /// @brief Method get_displayname, addr 0x27aaa2c, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_displayname();

  /// @brief Method get_incoming, addr 0x27aa88c, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_incoming();

  /// @brief Method get_is_channel, addr 0x27aa7bc, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_is_channel();

  /// @brief Method get_session_handle, addr 0x27aa61c, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_session_handle();

  /// @brief Method get_sessiongroup_handle, addr 0x27aa54c, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_sessiongroup_handle();

  /// @brief Method get_uri, addr 0x27aa6ec, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_uri();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_alias_username, addr 0x27aab5c, size 0x70, virtual false, abstract: false, final false
  inline void set_alias_username(::StringW value);

  /// @brief Method set_application, addr 0x27aaa8c, size 0x70, virtual false, abstract: false, final false
  inline void set_application(::StringW value);

  /// @brief Method set_base_, addr 0x27aa360, size 0x84, virtual false, abstract: false, final false
  inline void set_base_(::Unity::Services::Vivox::vx_evt_base_t* value);

  /// @brief Method set_channel_name, addr 0x27aa8ec, size 0x70, virtual false, abstract: false, final false
  inline void set_channel_name(::StringW value);

  /// @brief Method set_displayname, addr 0x27aa9bc, size 0x70, virtual false, abstract: false, final false
  inline void set_displayname(::StringW value);

  /// @brief Method set_incoming, addr 0x27aa81c, size 0x70, virtual false, abstract: false, final false
  inline void set_incoming(int32_t value);

  /// @brief Method set_is_channel, addr 0x27aa74c, size 0x70, virtual false, abstract: false, final false
  inline void set_is_channel(int32_t value);

  /// @brief Method set_session_handle, addr 0x27aa5ac, size 0x70, virtual false, abstract: false, final false
  inline void set_session_handle(::StringW value);

  /// @brief Method set_sessiongroup_handle, addr 0x27aa4dc, size 0x70, virtual false, abstract: false, final false
  inline void set_sessiongroup_handle(::StringW value);

  /// @brief Method set_uri, addr 0x27aa67c, size 0x70, virtual false, abstract: false, final false
  inline void set_uri(::StringW value);

  /// @brief Method swigRelease, addr 0x27a9ff8, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::Unity::Services::Vivox::vx_evt_session_added_t* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_evt_session_added_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "vx_evt_session_added_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  vx_evt_session_added_t(vx_evt_session_added_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "vx_evt_session_added_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  vx_evt_session_added_t(vx_evt_session_added_t const&) = delete;

  /// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
  ::System::Runtime::InteropServices::HandleRef ___swigCPtr;

  /// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
  bool ___swigCMemOwn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_evt_session_added_t, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_evt_session_added_t, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_evt_session_added_t, ___swigCMemOwn) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::vx_evt_session_added_t);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_evt_session_added_t*, "Unity.Services.Vivox", "vx_evt_session_added_t");
