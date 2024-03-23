#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(vx_evt_account_archive_query_end_t)
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
class vx_evt_account_archive_query_end_t;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::vx_evt_account_archive_query_end_t);
// Type: Unity.Services.Vivox::vx_evt_account_archive_query_end_t
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::vx_evt_account_archive_query_end_t*
class CORDL_TYPE vx_evt_account_archive_query_end_t : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_account_handle, put = set_account_handle))::StringW account_handle;

  __declspec(property(get = get_base_, put = set_base_))::Unity::Services::Vivox::vx_evt_base_t* base_;

  __declspec(property(get = get_count, put = set_count)) uint32_t count;

  __declspec(property(get = get_first_id, put = set_first_id))::StringW first_id;

  __declspec(property(get = get_first_index, put = set_first_index)) uint32_t first_index;

  __declspec(property(get = get_last_id, put = set_last_id))::StringW last_id;

  __declspec(property(get = get_next_cursor, put = set_next_cursor))::StringW next_cursor;

  __declspec(property(get = get_query_id, put = set_query_id))::StringW query_id;

  __declspec(property(get = get_return_code, put = set_return_code)) int32_t return_code;

  __declspec(property(get = get_status_code, put = set_status_code)) int32_t status_code;

  /// @brief Field swigCMemOwn, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_swigCMemOwn, put = __cordl_internal_set_swigCMemOwn)) bool swigCMemOwn;

  /// @brief Field swigCPtr, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_swigCPtr, put = __cordl_internal_set_swigCPtr))::System::Runtime::InteropServices::HandleRef swigCPtr;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x279220c, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x2792318, size 0x180, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x2792278, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Unity::Services::Vivox::vx_evt_account_archive_query_end_t* New_ctor();

  static inline ::Unity::Services::Vivox::vx_evt_account_archive_query_end_t* New_ctor(void* cPtr, bool cMemoryOwn);

  constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

  constexpr bool& __cordl_internal_get_swigCMemOwn();

  constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

  constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr();

  constexpr void __cordl_internal_set_swigCMemOwn(bool value);

  constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef value);

  /// @brief Method .ctor, addr 0x2792d64, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2792060, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(void* cPtr, bool cMemoryOwn);

  /// @brief Method getCPtr, addr 0x27920b4, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Unity::Services::Vivox::vx_evt_account_archive_query_end_t* obj);

  /// @brief Method get_account_handle, addr 0x2792684, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_account_handle();

  /// @brief Method get_base_, addr 0x279251c, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_base_t* get_base_();

  /// @brief Method get_count, addr 0x2792c34, size 0x60, virtual false, abstract: false, final false
  inline uint32_t get_count();

  /// @brief Method get_first_id, addr 0x27929c4, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_first_id();

  /// @brief Method get_first_index, addr 0x2792b64, size 0x60, virtual false, abstract: false, final false
  inline uint32_t get_first_index();

  /// @brief Method get_last_id, addr 0x2792a94, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_last_id();

  /// @brief Method get_next_cursor, addr 0x2792d04, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_next_cursor();

  /// @brief Method get_query_id, addr 0x2792754, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_query_id();

  /// @brief Method get_return_code, addr 0x2792824, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_return_code();

  /// @brief Method get_status_code, addr 0x27928f4, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_status_code();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_account_handle, addr 0x2792614, size 0x70, virtual false, abstract: false, final false
  inline void set_account_handle(::StringW value);

  /// @brief Method set_base_, addr 0x2792498, size 0x84, virtual false, abstract: false, final false
  inline void set_base_(::Unity::Services::Vivox::vx_evt_base_t* value);

  /// @brief Method set_count, addr 0x2792bc4, size 0x70, virtual false, abstract: false, final false
  inline void set_count(uint32_t value);

  /// @brief Method set_first_id, addr 0x2792954, size 0x70, virtual false, abstract: false, final false
  inline void set_first_id(::StringW value);

  /// @brief Method set_first_index, addr 0x2792af4, size 0x70, virtual false, abstract: false, final false
  inline void set_first_index(uint32_t value);

  /// @brief Method set_last_id, addr 0x2792a24, size 0x70, virtual false, abstract: false, final false
  inline void set_last_id(::StringW value);

  /// @brief Method set_next_cursor, addr 0x2792c94, size 0x70, virtual false, abstract: false, final false
  inline void set_next_cursor(::StringW value);

  /// @brief Method set_query_id, addr 0x27926e4, size 0x70, virtual false, abstract: false, final false
  inline void set_query_id(::StringW value);

  /// @brief Method set_return_code, addr 0x27927b4, size 0x70, virtual false, abstract: false, final false
  inline void set_return_code(int32_t value);

  /// @brief Method set_status_code, addr 0x2792884, size 0x70, virtual false, abstract: false, final false
  inline void set_status_code(int32_t value);

  /// @brief Method swigRelease, addr 0x2792130, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::Unity::Services::Vivox::vx_evt_account_archive_query_end_t* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_evt_account_archive_query_end_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "vx_evt_account_archive_query_end_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  vx_evt_account_archive_query_end_t(vx_evt_account_archive_query_end_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "vx_evt_account_archive_query_end_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  vx_evt_account_archive_query_end_t(vx_evt_account_archive_query_end_t const&) = delete;

  /// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
  ::System::Runtime::InteropServices::HandleRef ___swigCPtr;

  /// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
  bool ___swigCMemOwn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_evt_account_archive_query_end_t, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_evt_account_archive_query_end_t, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_evt_account_archive_query_end_t, ___swigCMemOwn) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::vx_evt_account_archive_query_end_t);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_evt_account_archive_query_end_t*, "Unity.Services.Vivox", "vx_evt_account_archive_query_end_t");
