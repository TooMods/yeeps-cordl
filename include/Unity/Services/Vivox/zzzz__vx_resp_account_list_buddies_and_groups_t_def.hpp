#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(vx_resp_account_list_buddies_and_groups_t)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
namespace Unity::Services::Vivox {
class SWIGTYPE_p_p_vx_buddy;
}
namespace Unity::Services::Vivox {
class SWIGTYPE_p_p_vx_group;
}
namespace Unity::Services::Vivox {
class vx_resp_base_t;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class vx_resp_account_list_buddies_and_groups_t;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::vx_resp_account_list_buddies_and_groups_t);
// Type: Unity.Services.Vivox::vx_resp_account_list_buddies_and_groups_t
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::vx_resp_account_list_buddies_and_groups_t*
class CORDL_TYPE vx_resp_account_list_buddies_and_groups_t : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_base_, put = set_base_))::Unity::Services::Vivox::vx_resp_base_t* base_;

  __declspec(property(get = get_buddies, put = set_buddies))::Unity::Services::Vivox::SWIGTYPE_p_p_vx_buddy* buddies;

  __declspec(property(get = get_buddy_count, put = set_buddy_count)) int32_t buddy_count;

  __declspec(property(get = get_group_count, put = set_group_count)) int32_t group_count;

  __declspec(property(get = get_groups, put = set_groups))::Unity::Services::Vivox::SWIGTYPE_p_p_vx_group* groups;

  /// @brief Field swigCMemOwn, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_swigCMemOwn, put = __cordl_internal_set_swigCMemOwn)) bool swigCMemOwn;

  /// @brief Field swigCPtr, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_swigCPtr, put = __cordl_internal_set_swigCPtr))::System::Runtime::InteropServices::HandleRef swigCPtr;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x29f2084, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x29f2190, size 0x180, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x29f20f0, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Unity::Services::Vivox::vx_resp_account_list_buddies_and_groups_t* New_ctor();

  static inline ::Unity::Services::Vivox::vx_resp_account_list_buddies_and_groups_t* New_ctor(void* cPtr, bool cMemoryOwn);

  constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

  constexpr bool& __cordl_internal_get_swigCMemOwn();

  constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

  constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr();

  constexpr void __cordl_internal_set_swigCMemOwn(bool value);

  constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef value);

  /// @brief Method .ctor, addr 0x29f28e4, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x29f1ed8, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(void* cPtr, bool cMemoryOwn);

  /// @brief Method getCPtr, addr 0x29f1f2c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Unity::Services::Vivox::vx_resp_account_list_buddies_and_groups_t* obj);

  /// @brief Method get_base_, addr 0x29f2394, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_base_t* get_base_();

  /// @brief Method get_buddies, addr 0x29f26b4, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_p_vx_buddy* get_buddies();

  /// @brief Method get_buddy_count, addr 0x29f24fc, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_buddy_count();

  /// @brief Method get_group_count, addr 0x29f25cc, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_group_count();

  /// @brief Method get_groups, addr 0x29f2810, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_p_vx_group* get_groups();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_base_, addr 0x29f2310, size 0x84, virtual false, abstract: false, final false
  inline void set_base_(::Unity::Services::Vivox::vx_resp_base_t* value);

  /// @brief Method set_buddies, addr 0x29f262c, size 0x88, virtual false, abstract: false, final false
  inline void set_buddies(::Unity::Services::Vivox::SWIGTYPE_p_p_vx_buddy* value);

  /// @brief Method set_buddy_count, addr 0x29f248c, size 0x70, virtual false, abstract: false, final false
  inline void set_buddy_count(int32_t value);

  /// @brief Method set_group_count, addr 0x29f255c, size 0x70, virtual false, abstract: false, final false
  inline void set_group_count(int32_t value);

  /// @brief Method set_groups, addr 0x29f2788, size 0x88, virtual false, abstract: false, final false
  inline void set_groups(::Unity::Services::Vivox::SWIGTYPE_p_p_vx_group* value);

  /// @brief Method swigRelease, addr 0x29f1fa8, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::Unity::Services::Vivox::vx_resp_account_list_buddies_and_groups_t* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_resp_account_list_buddies_and_groups_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "vx_resp_account_list_buddies_and_groups_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  vx_resp_account_list_buddies_and_groups_t(vx_resp_account_list_buddies_and_groups_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "vx_resp_account_list_buddies_and_groups_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  vx_resp_account_list_buddies_and_groups_t(vx_resp_account_list_buddies_and_groups_t const&) = delete;

  /// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
  ::System::Runtime::InteropServices::HandleRef ___swigCPtr;

  /// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
  bool ___swigCMemOwn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_resp_account_list_buddies_and_groups_t, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_resp_account_list_buddies_and_groups_t, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_resp_account_list_buddies_and_groups_t, ___swigCMemOwn) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::vx_resp_account_list_buddies_and_groups_t);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_resp_account_list_buddies_and_groups_t*, "Unity.Services.Vivox", "vx_resp_account_list_buddies_and_groups_t");
