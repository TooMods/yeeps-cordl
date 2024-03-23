#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(vx_resp_account_get_session_fonts_t)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
namespace Unity::Services::Vivox {
class SWIGTYPE_p_p_vx_voice_font;
}
namespace Unity::Services::Vivox {
class vx_resp_base_t;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class vx_resp_account_get_session_fonts_t;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::vx_resp_account_get_session_fonts_t);
// Type: Unity.Services.Vivox::vx_resp_account_get_session_fonts_t
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::vx_resp_account_get_session_fonts_t*
class CORDL_TYPE vx_resp_account_get_session_fonts_t : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_base_, put = set_base_))::Unity::Services::Vivox::vx_resp_base_t* base_;

  __declspec(property(get = get_session_font_count, put = set_session_font_count)) int32_t session_font_count;

  __declspec(property(get = get_session_fonts, put = set_session_fonts))::Unity::Services::Vivox::SWIGTYPE_p_p_vx_voice_font* session_fonts;

  /// @brief Field swigCMemOwn, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_swigCMemOwn, put = __cordl_internal_set_swigCMemOwn)) bool swigCMemOwn;

  /// @brief Field swigCPtr, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_swigCPtr, put = __cordl_internal_set_swigCPtr))::System::Runtime::InteropServices::HandleRef swigCPtr;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x29efea4, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x29effb0, size 0x180, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x29eff10, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Unity::Services::Vivox::vx_resp_account_get_session_fonts_t* New_ctor();

  static inline ::Unity::Services::Vivox::vx_resp_account_get_session_fonts_t* New_ctor(void* cPtr, bool cMemoryOwn);

  constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

  constexpr bool& __cordl_internal_get_swigCMemOwn();

  constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

  constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr();

  constexpr void __cordl_internal_set_swigCMemOwn(bool value);

  constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef value);

  /// @brief Method .ctor, addr 0x29f04d8, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x29efcf8, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(void* cPtr, bool cMemoryOwn);

  /// @brief Method getCPtr, addr 0x29efd4c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Unity::Services::Vivox::vx_resp_account_get_session_fonts_t* obj);

  /// @brief Method get_base_, addr 0x29f01b4, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_base_t* get_base_();

  /// @brief Method get_session_font_count, addr 0x29f0478, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_session_font_count();

  /// @brief Method get_session_fonts, addr 0x29f0334, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_p_vx_voice_font* get_session_fonts();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_base_, addr 0x29f0130, size 0x84, virtual false, abstract: false, final false
  inline void set_base_(::Unity::Services::Vivox::vx_resp_base_t* value);

  /// @brief Method set_session_font_count, addr 0x29f0408, size 0x70, virtual false, abstract: false, final false
  inline void set_session_font_count(int32_t value);

  /// @brief Method set_session_fonts, addr 0x29f02ac, size 0x88, virtual false, abstract: false, final false
  inline void set_session_fonts(::Unity::Services::Vivox::SWIGTYPE_p_p_vx_voice_font* value);

  /// @brief Method swigRelease, addr 0x29efdc8, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::Unity::Services::Vivox::vx_resp_account_get_session_fonts_t* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_resp_account_get_session_fonts_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "vx_resp_account_get_session_fonts_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  vx_resp_account_get_session_fonts_t(vx_resp_account_get_session_fonts_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "vx_resp_account_get_session_fonts_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  vx_resp_account_get_session_fonts_t(vx_resp_account_get_session_fonts_t const&) = delete;

  /// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
  ::System::Runtime::InteropServices::HandleRef ___swigCPtr;

  /// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
  bool ___swigCMemOwn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_resp_account_get_session_fonts_t, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_resp_account_get_session_fonts_t, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_resp_account_get_session_fonts_t, ___swigCMemOwn) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::vx_resp_account_get_session_fonts_t);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_resp_account_get_session_fonts_t*, "Unity.Services.Vivox", "vx_resp_account_get_session_fonts_t");
