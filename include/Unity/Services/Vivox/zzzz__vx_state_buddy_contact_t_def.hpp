#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(vx_state_buddy_contact_t)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
namespace Unity::Services::Vivox {
struct vx_buddy_presence_state;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class vx_state_buddy_contact_t;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::vx_state_buddy_contact_t);
// Type: Unity.Services.Vivox::vx_state_buddy_contact_t
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::vx_state_buddy_contact_t*
class CORDL_TYPE vx_state_buddy_contact_t : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_application, put = set_application))::StringW application;

  __declspec(property(get = get_contact, put = set_contact))::StringW contact;

  __declspec(property(get = get_custom_message, put = set_custom_message))::StringW custom_message;

  __declspec(property(get = get_display_name, put = set_display_name))::StringW display_name;

  __declspec(property(get = get_id, put = set_id))::StringW id;

  __declspec(property(get = get_presence, put = set_presence))::Unity::Services::Vivox::vx_buddy_presence_state presence;

  __declspec(property(get = get_priority, put = set_priority))::StringW priority;

  /// @brief Field swigCMemOwn, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_swigCMemOwn, put = __cordl_internal_set_swigCMemOwn)) bool swigCMemOwn;

  /// @brief Field swigCPtr, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_swigCPtr, put = __cordl_internal_set_swigCPtr))::System::Runtime::InteropServices::HandleRef swigCPtr;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x16c7f5c, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x16c8068, size 0x180, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x16c7fc8, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Unity::Services::Vivox::vx_state_buddy_contact_t* New_ctor();

  static inline ::Unity::Services::Vivox::vx_state_buddy_contact_t* New_ctor(void* cPtr, bool cMemoryOwn);

  constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

  constexpr bool& __cordl_internal_get_swigCMemOwn();

  constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

  constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr();

  constexpr void __cordl_internal_set_swigCMemOwn(bool value);

  constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef value);

  /// @brief Method .ctor, addr 0x16c8798, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x16c7db0, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(void* cPtr, bool cMemoryOwn);

  /// @brief Method getCPtr, addr 0x16c7e04, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Unity::Services::Vivox::vx_state_buddy_contact_t* obj);

  /// @brief Method get_application, addr 0x16c83f8, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_application();

  /// @brief Method get_contact, addr 0x16c8598, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_contact();

  /// @brief Method get_custom_message, addr 0x16c84c8, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_custom_message();

  /// @brief Method get_display_name, addr 0x16c8328, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_display_name();

  /// @brief Method get_id, addr 0x16c8738, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_id();

  /// @brief Method get_presence, addr 0x16c8258, size 0x60, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_buddy_presence_state get_presence();

  /// @brief Method get_priority, addr 0x16c8668, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_priority();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_application, addr 0x16c8388, size 0x70, virtual false, abstract: false, final false
  inline void set_application(::StringW value);

  /// @brief Method set_contact, addr 0x16c8528, size 0x70, virtual false, abstract: false, final false
  inline void set_contact(::StringW value);

  /// @brief Method set_custom_message, addr 0x16c8458, size 0x70, virtual false, abstract: false, final false
  inline void set_custom_message(::StringW value);

  /// @brief Method set_display_name, addr 0x16c82b8, size 0x70, virtual false, abstract: false, final false
  inline void set_display_name(::StringW value);

  /// @brief Method set_id, addr 0x16c86c8, size 0x70, virtual false, abstract: false, final false
  inline void set_id(::StringW value);

  /// @brief Method set_presence, addr 0x16c81e8, size 0x70, virtual false, abstract: false, final false
  inline void set_presence(::Unity::Services::Vivox::vx_buddy_presence_state value);

  /// @brief Method set_priority, addr 0x16c85f8, size 0x70, virtual false, abstract: false, final false
  inline void set_priority(::StringW value);

  /// @brief Method swigRelease, addr 0x16c7e80, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::Unity::Services::Vivox::vx_state_buddy_contact_t* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_state_buddy_contact_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "vx_state_buddy_contact_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  vx_state_buddy_contact_t(vx_state_buddy_contact_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "vx_state_buddy_contact_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  vx_state_buddy_contact_t(vx_state_buddy_contact_t const&) = delete;

  /// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
  ::System::Runtime::InteropServices::HandleRef ___swigCPtr;

  /// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
  bool ___swigCMemOwn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_state_buddy_contact_t, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_state_buddy_contact_t, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_state_buddy_contact_t, ___swigCMemOwn) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::vx_state_buddy_contact_t);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_state_buddy_contact_t*, "Unity.Services.Vivox", "vx_state_buddy_contact_t");
