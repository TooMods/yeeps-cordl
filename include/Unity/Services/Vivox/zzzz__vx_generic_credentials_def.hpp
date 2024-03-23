#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(vx_generic_credentials)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class vx_generic_credentials;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::vx_generic_credentials);
// Type: Unity.Services.Vivox::vx_generic_credentials
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::vx_generic_credentials*
class CORDL_TYPE vx_generic_credentials : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_admin_password, put = set_admin_password))::StringW admin_password;

  __declspec(property(get = get_admin_username, put = set_admin_username))::StringW admin_username;

  __declspec(property(get = get_grant_document, put = set_grant_document))::StringW grant_document;

  __declspec(property(get = get_server_url, put = set_server_url))::StringW server_url;

  /// @brief Field swigCMemOwn, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_swigCMemOwn, put = __cordl_internal_set_swigCMemOwn)) bool swigCMemOwn;

  /// @brief Field swigCPtr, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_swigCPtr, put = __cordl_internal_set_swigCPtr))::System::Runtime::InteropServices::HandleRef swigCPtr;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x2809438, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x2809544, size 0x180, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x28094a4, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Unity::Services::Vivox::vx_generic_credentials* New_ctor();

  static inline ::Unity::Services::Vivox::vx_generic_credentials* New_ctor(void* cPtr, bool cMemoryOwn);

  constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

  constexpr bool& __cordl_internal_get_swigCMemOwn();

  constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

  constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr();

  constexpr void __cordl_internal_set_swigCMemOwn(bool value);

  constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef value);

  /// @brief Method .ctor, addr 0x2809a04, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x280928c, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(void* cPtr, bool cMemoryOwn);

  /// @brief Method getCPtr, addr 0x28092e0, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Unity::Services::Vivox::vx_generic_credentials* obj);

  /// @brief Method get_admin_password, addr 0x2809804, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_admin_password();

  /// @brief Method get_admin_username, addr 0x2809734, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_admin_username();

  /// @brief Method get_grant_document, addr 0x28098d4, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_grant_document();

  /// @brief Method get_server_url, addr 0x28099a4, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_server_url();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_admin_password, addr 0x2809794, size 0x70, virtual false, abstract: false, final false
  inline void set_admin_password(::StringW value);

  /// @brief Method set_admin_username, addr 0x28096c4, size 0x70, virtual false, abstract: false, final false
  inline void set_admin_username(::StringW value);

  /// @brief Method set_grant_document, addr 0x2809864, size 0x70, virtual false, abstract: false, final false
  inline void set_grant_document(::StringW value);

  /// @brief Method set_server_url, addr 0x2809934, size 0x70, virtual false, abstract: false, final false
  inline void set_server_url(::StringW value);

  /// @brief Method swigRelease, addr 0x280935c, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::Unity::Services::Vivox::vx_generic_credentials* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_generic_credentials();

public:
  // Ctor Parameters [CppParam { name: "", ty: "vx_generic_credentials", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  vx_generic_credentials(vx_generic_credentials&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "vx_generic_credentials", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  vx_generic_credentials(vx_generic_credentials const&) = delete;

  /// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
  ::System::Runtime::InteropServices::HandleRef ___swigCPtr;

  /// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
  bool ___swigCMemOwn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_generic_credentials, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_generic_credentials, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_generic_credentials, ___swigCMemOwn) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::vx_generic_credentials);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_generic_credentials*, "Unity.Services.Vivox", "vx_generic_credentials");
