#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(vx_connectivity_test_result_t)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
namespace Unity::Services::Vivox {
struct ND_ERROR;
}
namespace Unity::Services::Vivox {
struct ND_TEST_TYPE;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class vx_connectivity_test_result_t;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::vx_connectivity_test_result_t);
// Type: Unity.Services.Vivox::vx_connectivity_test_result_t
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::vx_connectivity_test_result_t*
class CORDL_TYPE vx_connectivity_test_result_t : public ::System::Object {
public:
  // Declarations
  /// @brief Field swigCMemOwn, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_swigCMemOwn, put = __cordl_internal_set_swigCMemOwn)) bool swigCMemOwn;

  /// @brief Field swigCPtr, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_swigCPtr, put = __cordl_internal_set_swigCPtr))::System::Runtime::InteropServices::HandleRef swigCPtr;

  __declspec(property(get = get_test_additional_info, put = set_test_additional_info))::StringW test_additional_info;

  __declspec(property(get = get_test_error_code, put = set_test_error_code))::Unity::Services::Vivox::ND_ERROR test_error_code;

  __declspec(property(get = get_test_type, put = set_test_type))::Unity::Services::Vivox::ND_TEST_TYPE test_type;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x278fd10, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x278fe1c, size 0x180, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x278fd7c, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Unity::Services::Vivox::vx_connectivity_test_result_t* New_ctor();

  static inline ::Unity::Services::Vivox::vx_connectivity_test_result_t* New_ctor(void* cPtr, bool cMemoryOwn);

  constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

  constexpr bool& __cordl_internal_get_swigCMemOwn();

  constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

  constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr();

  constexpr void __cordl_internal_set_swigCMemOwn(bool value);

  constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef value);

  /// @brief Method .ctor, addr 0x279020c, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x278fb64, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(void* cPtr, bool cMemoryOwn);

  /// @brief Method getCPtr, addr 0x278fbb8, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Unity::Services::Vivox::vx_connectivity_test_result_t* obj);

  /// @brief Method get_test_additional_info, addr 0x27901ac, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_test_additional_info();

  /// @brief Method get_test_error_code, addr 0x27900dc, size 0x60, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::ND_ERROR get_test_error_code();

  /// @brief Method get_test_type, addr 0x279000c, size 0x60, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::ND_TEST_TYPE get_test_type();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_test_additional_info, addr 0x279013c, size 0x70, virtual false, abstract: false, final false
  inline void set_test_additional_info(::StringW value);

  /// @brief Method set_test_error_code, addr 0x279006c, size 0x70, virtual false, abstract: false, final false
  inline void set_test_error_code(::Unity::Services::Vivox::ND_ERROR value);

  /// @brief Method set_test_type, addr 0x278ff9c, size 0x70, virtual false, abstract: false, final false
  inline void set_test_type(::Unity::Services::Vivox::ND_TEST_TYPE value);

  /// @brief Method swigRelease, addr 0x278fc34, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::Unity::Services::Vivox::vx_connectivity_test_result_t* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_connectivity_test_result_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "vx_connectivity_test_result_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  vx_connectivity_test_result_t(vx_connectivity_test_result_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "vx_connectivity_test_result_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  vx_connectivity_test_result_t(vx_connectivity_test_result_t const&) = delete;

  /// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
  ::System::Runtime::InteropServices::HandleRef ___swigCPtr;

  /// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
  bool ___swigCMemOwn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_connectivity_test_result_t, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_connectivity_test_result_t, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_connectivity_test_result_t, ___swigCMemOwn) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::vx_connectivity_test_result_t);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_connectivity_test_result_t*, "Unity.Services.Vivox", "vx_connectivity_test_result_t");
