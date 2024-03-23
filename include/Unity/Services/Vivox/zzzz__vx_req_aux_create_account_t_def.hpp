#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(vx_req_aux_create_account_t)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
namespace Unity::Services::Vivox {
class vx_generic_credentials;
}
namespace Unity::Services::Vivox {
class vx_req_base_t;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class vx_req_aux_create_account_t;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::vx_req_aux_create_account_t);
// Type: Unity.Services.Vivox::vx_req_aux_create_account_t
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::vx_req_aux_create_account_t*
class CORDL_TYPE vx_req_aux_create_account_t : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_age, put = set_age))::StringW age;

  __declspec(property(get = get_base_, put = set_base_))::Unity::Services::Vivox::vx_req_base_t* base_;

  __declspec(property(get = get_credentials, put = set_credentials))::Unity::Services::Vivox::vx_generic_credentials* credentials;

  __declspec(property(get = get_displayname, put = set_displayname))::StringW displayname;

  __declspec(property(get = get_email, put = set_email))::StringW email;

  __declspec(property(get = get_ext_id, put = set_ext_id))::StringW ext_id;

  __declspec(property(get = get_ext_profile, put = set_ext_profile))::StringW ext_profile;

  __declspec(property(get = get_firstname, put = set_firstname))::StringW firstname;

  __declspec(property(get = get_gender, put = set_gender))::StringW gender;

  __declspec(property(get = get_lang, put = set_lang))::StringW lang;

  __declspec(property(get = get_lastname, put = set_lastname))::StringW lastname;

  __declspec(property(get = get_number, put = set_number))::StringW number;

  __declspec(property(get = get_password, put = set_password))::StringW password;

  __declspec(property(get = get_phone, put = set_phone))::StringW phone;

  /// @brief Field swigCMemOwn, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_swigCMemOwn, put = __cordl_internal_set_swigCMemOwn)) bool swigCMemOwn;

  /// @brief Field swigCPtr, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_swigCPtr, put = __cordl_internal_set_swigCPtr))::System::Runtime::InteropServices::HandleRef swigCPtr;

  __declspec(property(get = get_timezone, put = set_timezone))::StringW timezone;

  __declspec(property(get = get_user_name, put = set_user_name))::StringW user_name;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x28253f4, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x2825500, size 0x180, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x2825460, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Unity::Services::Vivox::vx_req_aux_create_account_t* New_ctor();

  static inline ::Unity::Services::Vivox::vx_req_aux_create_account_t* New_ctor(void* cPtr, bool cMemoryOwn);

  constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

  constexpr bool& __cordl_internal_get_swigCMemOwn();

  constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

  constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr();

  constexpr void __cordl_internal_set_swigCMemOwn(bool value);

  constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef value);

  /// @brief Method .ctor, addr 0x28264c8, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2825248, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(void* cPtr, bool cMemoryOwn);

  /// @brief Method getCPtr, addr 0x282529c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Unity::Services::Vivox::vx_req_aux_create_account_t* obj);

  /// @brief Method get_age, addr 0x2826128, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_age();

  /// @brief Method get_base_, addr 0x2825690, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_req_base_t* get_base_();

  /// @brief Method get_credentials, addr 0x2825870, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_generic_credentials* get_credentials();

  /// @brief Method get_displayname, addr 0x2825d18, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_displayname();

  /// @brief Method get_email, addr 0x2825b78, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_email();

  /// @brief Method get_ext_id, addr 0x2826468, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_ext_id();

  /// @brief Method get_ext_profile, addr 0x2826398, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_ext_profile();

  /// @brief Method get_firstname, addr 0x2825de8, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_firstname();

  /// @brief Method get_gender, addr 0x28261f8, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_gender();

  /// @brief Method get_lang, addr 0x2826058, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_lang();

  /// @brief Method get_lastname, addr 0x2825eb8, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_lastname();

  /// @brief Method get_number, addr 0x2825c48, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_number();

  /// @brief Method get_password, addr 0x2825aa8, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_password();

  /// @brief Method get_phone, addr 0x2825f88, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_phone();

  /// @brief Method get_timezone, addr 0x28262c8, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_timezone();

  /// @brief Method get_user_name, addr 0x28259d8, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_user_name();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method op_Implicit, addr 0x2825680, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_req_base_t* op_Implicit___Unity__Services__Vivox__vx_req_base_t_(::Unity::Services::Vivox::vx_req_aux_create_account_t* t);

  /// @brief Method set_age, addr 0x28260b8, size 0x70, virtual false, abstract: false, final false
  inline void set_age(::StringW value);

  /// @brief Method set_base_, addr 0x2825764, size 0x88, virtual false, abstract: false, final false
  inline void set_base_(::Unity::Services::Vivox::vx_req_base_t* value);

  /// @brief Method set_credentials, addr 0x28257ec, size 0x84, virtual false, abstract: false, final false
  inline void set_credentials(::Unity::Services::Vivox::vx_generic_credentials* value);

  /// @brief Method set_displayname, addr 0x2825ca8, size 0x70, virtual false, abstract: false, final false
  inline void set_displayname(::StringW value);

  /// @brief Method set_email, addr 0x2825b08, size 0x70, virtual false, abstract: false, final false
  inline void set_email(::StringW value);

  /// @brief Method set_ext_id, addr 0x28263f8, size 0x70, virtual false, abstract: false, final false
  inline void set_ext_id(::StringW value);

  /// @brief Method set_ext_profile, addr 0x2826328, size 0x70, virtual false, abstract: false, final false
  inline void set_ext_profile(::StringW value);

  /// @brief Method set_firstname, addr 0x2825d78, size 0x70, virtual false, abstract: false, final false
  inline void set_firstname(::StringW value);

  /// @brief Method set_gender, addr 0x2826188, size 0x70, virtual false, abstract: false, final false
  inline void set_gender(::StringW value);

  /// @brief Method set_lang, addr 0x2825fe8, size 0x70, virtual false, abstract: false, final false
  inline void set_lang(::StringW value);

  /// @brief Method set_lastname, addr 0x2825e48, size 0x70, virtual false, abstract: false, final false
  inline void set_lastname(::StringW value);

  /// @brief Method set_number, addr 0x2825bd8, size 0x70, virtual false, abstract: false, final false
  inline void set_number(::StringW value);

  /// @brief Method set_password, addr 0x2825a38, size 0x70, virtual false, abstract: false, final false
  inline void set_password(::StringW value);

  /// @brief Method set_phone, addr 0x2825f18, size 0x70, virtual false, abstract: false, final false
  inline void set_phone(::StringW value);

  /// @brief Method set_timezone, addr 0x2826258, size 0x70, virtual false, abstract: false, final false
  inline void set_timezone(::StringW value);

  /// @brief Method set_user_name, addr 0x2825968, size 0x70, virtual false, abstract: false, final false
  inline void set_user_name(::StringW value);

  /// @brief Method swigRelease, addr 0x2825318, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::Unity::Services::Vivox::vx_req_aux_create_account_t* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_req_aux_create_account_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "vx_req_aux_create_account_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  vx_req_aux_create_account_t(vx_req_aux_create_account_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "vx_req_aux_create_account_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  vx_req_aux_create_account_t(vx_req_aux_create_account_t const&) = delete;

  /// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
  ::System::Runtime::InteropServices::HandleRef ___swigCPtr;

  /// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
  bool ___swigCMemOwn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_req_aux_create_account_t, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_req_aux_create_account_t, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_req_aux_create_account_t, ___swigCMemOwn) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::vx_req_aux_create_account_t);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_req_aux_create_account_t*, "Unity.Services.Vivox", "vx_req_aux_create_account_t");
