#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(vx_req_account_archive_query_t)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
namespace Unity::Services::Vivox {
class vx_req_base_t;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class vx_req_account_archive_query_t;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::vx_req_account_archive_query_t);
// Type: Unity.Services.Vivox::vx_req_account_archive_query_t
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::vx_req_account_archive_query_t*
class CORDL_TYPE vx_req_account_archive_query_t : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_account_handle, put = set_account_handle))::StringW account_handle;

  __declspec(property(get = get_after_id, put = set_after_id))::StringW after_id;

  __declspec(property(get = get_application_stanza_body, put = set_application_stanza_body))::StringW application_stanza_body;

  __declspec(property(get = get_application_stanza_namespace, put = set_application_stanza_namespace))::StringW application_stanza_namespace;

  __declspec(property(get = get_base_, put = set_base_))::Unity::Services::Vivox::vx_req_base_t* base_;

  __declspec(property(get = get_before_id, put = set_before_id))::StringW before_id;

  __declspec(property(get = get_channel_uri, put = set_channel_uri))::StringW channel_uri;

  __declspec(property(get = get_cursor, put = set_cursor))::StringW cursor;

  __declspec(property(get = get_display_name, put = set_display_name))::StringW display_name;

  __declspec(property(get = get_first_message_index, put = set_first_message_index)) int32_t first_message_index;

  __declspec(property(get = get_max, put = set_max)) uint32_t max;

  __declspec(property(get = get_participant_uri, put = set_participant_uri))::StringW participant_uri;

  __declspec(property(get = get_search_text, put = set_search_text))::StringW search_text;

  /// @brief Field swigCMemOwn, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_swigCMemOwn, put = __cordl_internal_set_swigCMemOwn)) bool swigCMemOwn;

  /// @brief Field swigCPtr, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_swigCPtr, put = __cordl_internal_set_swigCPtr))::System::Runtime::InteropServices::HandleRef swigCPtr;

  __declspec(property(get = get_time_end, put = set_time_end))::StringW time_end;

  __declspec(property(get = get_time_start, put = set_time_start))::StringW time_start;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x280d964, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x280da70, size 0x180, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x280d9d0, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Unity::Services::Vivox::vx_req_account_archive_query_t* New_ctor();

  static inline ::Unity::Services::Vivox::vx_req_account_archive_query_t* New_ctor(void* cPtr, bool cMemoryOwn);

  constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

  constexpr bool& __cordl_internal_get_swigCMemOwn();

  constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

  constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr();

  constexpr void __cordl_internal_set_swigCMemOwn(bool value);

  constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef value);

  /// @brief Method .ctor, addr 0x280e8bc, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x280d7b8, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(void* cPtr, bool cMemoryOwn);

  /// @brief Method getCPtr, addr 0x280d80c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Unity::Services::Vivox::vx_req_account_archive_query_t* obj);

  /// @brief Method get_account_handle, addr 0x280ddcc, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_account_handle();

  /// @brief Method get_after_id, addr 0x280e5ec, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_after_id();

  /// @brief Method get_application_stanza_body, addr 0x280e85c, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_application_stanza_body();

  /// @brief Method get_application_stanza_namespace, addr 0x280e78c, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_application_stanza_namespace();

  /// @brief Method get_base_, addr 0x280dc00, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_req_base_t* get_base_();

  /// @brief Method get_before_id, addr 0x280e51c, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_before_id();

  /// @brief Method get_channel_uri, addr 0x280e1dc, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_channel_uri();

  /// @brief Method get_cursor, addr 0x280e03c, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_cursor();

  /// @brief Method get_display_name, addr 0x280e37c, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_display_name();

  /// @brief Method get_first_message_index, addr 0x280e6bc, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_first_message_index();

  /// @brief Method get_max, addr 0x280e44c, size 0x60, virtual false, abstract: false, final false
  inline uint32_t get_max();

  /// @brief Method get_participant_uri, addr 0x280e2ac, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_participant_uri();

  /// @brief Method get_search_text, addr 0x280e10c, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_search_text();

  /// @brief Method get_time_end, addr 0x280df6c, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_time_end();

  /// @brief Method get_time_start, addr 0x280de9c, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_time_start();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method op_Implicit, addr 0x280dbf0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_req_base_t* op_Implicit___Unity__Services__Vivox__vx_req_base_t_(::Unity::Services::Vivox::vx_req_account_archive_query_t* t);

  /// @brief Method set_account_handle, addr 0x280dd5c, size 0x70, virtual false, abstract: false, final false
  inline void set_account_handle(::StringW value);

  /// @brief Method set_after_id, addr 0x280e57c, size 0x70, virtual false, abstract: false, final false
  inline void set_after_id(::StringW value);

  /// @brief Method set_application_stanza_body, addr 0x280e7ec, size 0x70, virtual false, abstract: false, final false
  inline void set_application_stanza_body(::StringW value);

  /// @brief Method set_application_stanza_namespace, addr 0x280e71c, size 0x70, virtual false, abstract: false, final false
  inline void set_application_stanza_namespace(::StringW value);

  /// @brief Method set_base_, addr 0x280dcd4, size 0x88, virtual false, abstract: false, final false
  inline void set_base_(::Unity::Services::Vivox::vx_req_base_t* value);

  /// @brief Method set_before_id, addr 0x280e4ac, size 0x70, virtual false, abstract: false, final false
  inline void set_before_id(::StringW value);

  /// @brief Method set_channel_uri, addr 0x280e16c, size 0x70, virtual false, abstract: false, final false
  inline void set_channel_uri(::StringW value);

  /// @brief Method set_cursor, addr 0x280dfcc, size 0x70, virtual false, abstract: false, final false
  inline void set_cursor(::StringW value);

  /// @brief Method set_display_name, addr 0x280e30c, size 0x70, virtual false, abstract: false, final false
  inline void set_display_name(::StringW value);

  /// @brief Method set_first_message_index, addr 0x280e64c, size 0x70, virtual false, abstract: false, final false
  inline void set_first_message_index(int32_t value);

  /// @brief Method set_max, addr 0x280e3dc, size 0x70, virtual false, abstract: false, final false
  inline void set_max(uint32_t value);

  /// @brief Method set_participant_uri, addr 0x280e23c, size 0x70, virtual false, abstract: false, final false
  inline void set_participant_uri(::StringW value);

  /// @brief Method set_search_text, addr 0x280e09c, size 0x70, virtual false, abstract: false, final false
  inline void set_search_text(::StringW value);

  /// @brief Method set_time_end, addr 0x280defc, size 0x70, virtual false, abstract: false, final false
  inline void set_time_end(::StringW value);

  /// @brief Method set_time_start, addr 0x280de2c, size 0x70, virtual false, abstract: false, final false
  inline void set_time_start(::StringW value);

  /// @brief Method swigRelease, addr 0x280d888, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::Unity::Services::Vivox::vx_req_account_archive_query_t* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_req_account_archive_query_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "vx_req_account_archive_query_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  vx_req_account_archive_query_t(vx_req_account_archive_query_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "vx_req_account_archive_query_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  vx_req_account_archive_query_t(vx_req_account_archive_query_t const&) = delete;

  /// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
  ::System::Runtime::InteropServices::HandleRef ___swigCPtr;

  /// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
  bool ___swigCMemOwn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_req_account_archive_query_t, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_req_account_archive_query_t, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_req_account_archive_query_t, ___swigCMemOwn) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::vx_req_account_archive_query_t);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_req_account_archive_query_t*, "Unity.Services.Vivox", "vx_req_account_archive_query_t");
