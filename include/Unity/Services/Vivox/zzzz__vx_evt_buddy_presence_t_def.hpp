#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(vx_evt_buddy_presence_t)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
namespace Unity::Services::Vivox {
struct vx_buddy_presence_state;
}
namespace Unity::Services::Vivox {
class vx_evt_base_t;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class vx_evt_buddy_presence_t;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::vx_evt_buddy_presence_t);
// Type: Unity.Services.Vivox::vx_evt_buddy_presence_t
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::vx_evt_buddy_presence_t*
class CORDL_TYPE vx_evt_buddy_presence_t : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_account_handle, put = set_account_handle))::StringW account_handle;

  __declspec(property(get = get_application, put = set_application))::StringW application;

  __declspec(property(get = get_base_, put = set_base_))::Unity::Services::Vivox::vx_evt_base_t* base_;

  __declspec(property(get = get_buddy_uri, put = set_buddy_uri))::StringW buddy_uri;

  __declspec(property(get = get_contact, put = set_contact))::StringW contact;

  __declspec(property(get = get_custom_message, put = set_custom_message))::StringW custom_message;

  __declspec(property(get = get_displayname, put = set_displayname))::StringW displayname;

  __declspec(property(get = get_encoded_uri_with_tag, put = set_encoded_uri_with_tag))::StringW encoded_uri_with_tag;

  __declspec(property(get = get_id, put = set_id))::StringW id;

  __declspec(property(get = get_presence, put = set_presence))::Unity::Services::Vivox::vx_buddy_presence_state presence;

  __declspec(property(get = get_priority, put = set_priority))::StringW priority;

  __declspec(property(get = get_state, put = set_state))::Unity::Services::Vivox::vx_buddy_presence_state state;

  /// @brief Field swigCMemOwn, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_swigCMemOwn, put = __cordl_internal_set_swigCMemOwn)) bool swigCMemOwn;

  /// @brief Field swigCPtr, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_swigCPtr, put = __cordl_internal_set_swigCPtr))::System::Runtime::InteropServices::HandleRef swigCPtr;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x279d10c, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x279d218, size 0x180, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x279d178, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Unity::Services::Vivox::vx_evt_buddy_presence_t* New_ctor();

  static inline ::Unity::Services::Vivox::vx_evt_buddy_presence_t* New_ctor(void* cPtr, bool cMemoryOwn);

  constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

  constexpr bool& __cordl_internal_get_swigCMemOwn();

  constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

  constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr();

  constexpr void __cordl_internal_set_swigCMemOwn(bool value);

  constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef value);

  /// @brief Method .ctor, addr 0x279de04, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x279a51c, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(void* cPtr, bool cMemoryOwn);

  /// @brief Method getCPtr, addr 0x279cfb4, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Unity::Services::Vivox::vx_evt_buddy_presence_t* obj);

  /// @brief Method get_account_handle, addr 0x279d654, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_account_handle();

  /// @brief Method get_application, addr 0x279da64, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_application();

  /// @brief Method get_base_, addr 0x279d41c, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_base_t* get_base_();

  /// @brief Method get_buddy_uri, addr 0x279d724, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_buddy_uri();

  /// @brief Method get_contact, addr 0x279db34, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_contact();

  /// @brief Method get_custom_message, addr 0x279d8c4, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_custom_message();

  /// @brief Method get_displayname, addr 0x279d994, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_displayname();

  /// @brief Method get_encoded_uri_with_tag, addr 0x279dda4, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_encoded_uri_with_tag();

  /// @brief Method get_id, addr 0x279dcd4, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_id();

  /// @brief Method get_presence, addr 0x279d7f4, size 0x60, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_buddy_presence_state get_presence();

  /// @brief Method get_priority, addr 0x279dc04, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_priority();

  /// @brief Method get_state, addr 0x279d584, size 0x60, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_buddy_presence_state get_state();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_account_handle, addr 0x279d5e4, size 0x70, virtual false, abstract: false, final false
  inline void set_account_handle(::StringW value);

  /// @brief Method set_application, addr 0x279d9f4, size 0x70, virtual false, abstract: false, final false
  inline void set_application(::StringW value);

  /// @brief Method set_base_, addr 0x279d398, size 0x84, virtual false, abstract: false, final false
  inline void set_base_(::Unity::Services::Vivox::vx_evt_base_t* value);

  /// @brief Method set_buddy_uri, addr 0x279d6b4, size 0x70, virtual false, abstract: false, final false
  inline void set_buddy_uri(::StringW value);

  /// @brief Method set_contact, addr 0x279dac4, size 0x70, virtual false, abstract: false, final false
  inline void set_contact(::StringW value);

  /// @brief Method set_custom_message, addr 0x279d854, size 0x70, virtual false, abstract: false, final false
  inline void set_custom_message(::StringW value);

  /// @brief Method set_displayname, addr 0x279d924, size 0x70, virtual false, abstract: false, final false
  inline void set_displayname(::StringW value);

  /// @brief Method set_encoded_uri_with_tag, addr 0x279dd34, size 0x70, virtual false, abstract: false, final false
  inline void set_encoded_uri_with_tag(::StringW value);

  /// @brief Method set_id, addr 0x279dc64, size 0x70, virtual false, abstract: false, final false
  inline void set_id(::StringW value);

  /// @brief Method set_presence, addr 0x279d784, size 0x70, virtual false, abstract: false, final false
  inline void set_presence(::Unity::Services::Vivox::vx_buddy_presence_state value);

  /// @brief Method set_priority, addr 0x279db94, size 0x70, virtual false, abstract: false, final false
  inline void set_priority(::StringW value);

  /// @brief Method set_state, addr 0x279d514, size 0x70, virtual false, abstract: false, final false
  inline void set_state(::Unity::Services::Vivox::vx_buddy_presence_state value);

  /// @brief Method swigRelease, addr 0x279d030, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::Unity::Services::Vivox::vx_evt_buddy_presence_t* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_evt_buddy_presence_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "vx_evt_buddy_presence_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  vx_evt_buddy_presence_t(vx_evt_buddy_presence_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "vx_evt_buddy_presence_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  vx_evt_buddy_presence_t(vx_evt_buddy_presence_t const&) = delete;

  /// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
  ::System::Runtime::InteropServices::HandleRef ___swigCPtr;

  /// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
  bool ___swigCMemOwn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_evt_buddy_presence_t, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_evt_buddy_presence_t, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_evt_buddy_presence_t, ___swigCMemOwn) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::vx_evt_buddy_presence_t);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_evt_buddy_presence_t*, "Unity.Services.Vivox", "vx_evt_buddy_presence_t");
