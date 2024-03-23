#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(vx_account_t)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class vx_account_t;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::vx_account_t);
// Type: Unity.Services.Vivox::vx_account_t
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::vx_account_t*
class CORDL_TYPE vx_account_t : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_carrier, put = set_carrier))::StringW carrier;

  __declspec(property(get = get_created_date, put = set_created_date))::StringW created_date;

  __declspec(property(get = get_displayname, put = set_displayname))::StringW displayname;

  __declspec(property(get = get_email, put = set_email))::StringW email;

  __declspec(property(get = get_firstname, put = set_firstname))::StringW firstname;

  __declspec(property(get = get_lastname, put = set_lastname))::StringW lastname;

  __declspec(property(get = get_phone, put = set_phone))::StringW phone;

  /// @brief Field swigCMemOwn, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_swigCMemOwn, put = __cordl_internal_set_swigCMemOwn)) bool swigCMemOwn;

  /// @brief Field swigCPtr, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_swigCPtr, put = __cordl_internal_set_swigCPtr))::System::Runtime::InteropServices::HandleRef swigCPtr;

  __declspec(property(get = get_uri, put = set_uri))::StringW uri;

  __declspec(property(get = get_username, put = set_username))::StringW username;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x2789398, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x27894a4, size 0x180, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x2789404, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Unity::Services::Vivox::vx_account_t* New_ctor();

  static inline ::Unity::Services::Vivox::vx_account_t* New_ctor(void* cPtr, bool cMemoryOwn);

  constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

  constexpr bool& __cordl_internal_get_swigCMemOwn();

  constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

  constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr();

  constexpr void __cordl_internal_set_swigCMemOwn(bool value);

  constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef value);

  /// @brief Method .ctor, addr 0x2789d74, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x27891ec, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(void* cPtr, bool cMemoryOwn);

  /// @brief Method getCPtr, addr 0x2789240, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Unity::Services::Vivox::vx_account_t* obj);

  /// @brief Method get_carrier, addr 0x2789c44, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_carrier();

  /// @brief Method get_created_date, addr 0x2789d14, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_created_date();

  /// @brief Method get_displayname, addr 0x27899d4, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_displayname();

  /// @brief Method get_email, addr 0x2789aa4, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_email();

  /// @brief Method get_firstname, addr 0x2789764, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_firstname();

  /// @brief Method get_lastname, addr 0x2789834, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_lastname();

  /// @brief Method get_phone, addr 0x2789b74, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_phone();

  /// @brief Method get_uri, addr 0x2789694, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_uri();

  /// @brief Method get_username, addr 0x2789904, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_username();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_carrier, addr 0x2789bd4, size 0x70, virtual false, abstract: false, final false
  inline void set_carrier(::StringW value);

  /// @brief Method set_created_date, addr 0x2789ca4, size 0x70, virtual false, abstract: false, final false
  inline void set_created_date(::StringW value);

  /// @brief Method set_displayname, addr 0x2789964, size 0x70, virtual false, abstract: false, final false
  inline void set_displayname(::StringW value);

  /// @brief Method set_email, addr 0x2789a34, size 0x70, virtual false, abstract: false, final false
  inline void set_email(::StringW value);

  /// @brief Method set_firstname, addr 0x27896f4, size 0x70, virtual false, abstract: false, final false
  inline void set_firstname(::StringW value);

  /// @brief Method set_lastname, addr 0x27897c4, size 0x70, virtual false, abstract: false, final false
  inline void set_lastname(::StringW value);

  /// @brief Method set_phone, addr 0x2789b04, size 0x70, virtual false, abstract: false, final false
  inline void set_phone(::StringW value);

  /// @brief Method set_uri, addr 0x2789624, size 0x70, virtual false, abstract: false, final false
  inline void set_uri(::StringW value);

  /// @brief Method set_username, addr 0x2789894, size 0x70, virtual false, abstract: false, final false
  inline void set_username(::StringW value);

  /// @brief Method swigRelease, addr 0x27892bc, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::Unity::Services::Vivox::vx_account_t* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_account_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "vx_account_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  vx_account_t(vx_account_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "vx_account_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  vx_account_t(vx_account_t const&) = delete;

  /// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
  ::System::Runtime::InteropServices::HandleRef ___swigCPtr;

  /// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
  bool ___swigCMemOwn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_account_t, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_account_t, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_account_t, ___swigCMemOwn) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::vx_account_t);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_account_t*, "Unity.Services.Vivox", "vx_account_t");
