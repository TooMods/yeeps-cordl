#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(vx_evt_session_archive_message_t)
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
class vx_evt_session_archive_message_t;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::vx_evt_session_archive_message_t);
// Type: Unity.Services.Vivox::vx_evt_session_archive_message_t
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::vx_evt_session_archive_message_t*
class CORDL_TYPE vx_evt_session_archive_message_t : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_base_, put = set_base_))::Unity::Services::Vivox::vx_evt_base_t* base_;

  __declspec(property(get = get_displayname, put = set_displayname))::StringW displayname;

  __declspec(property(get = get_encoded_uri_with_tag, put = set_encoded_uri_with_tag))::StringW encoded_uri_with_tag;

  __declspec(property(get = get_is_current_user, put = set_is_current_user)) int32_t is_current_user;

  __declspec(property(get = get_language, put = set_language))::StringW language;

  __declspec(property(get = get_message_body, put = set_message_body))::StringW message_body;

  __declspec(property(get = get_message_id, put = set_message_id))::StringW message_id;

  __declspec(property(get = get_participant_uri, put = set_participant_uri))::StringW participant_uri;

  __declspec(property(get = get_query_id, put = set_query_id))::StringW query_id;

  __declspec(property(get = get_session_handle, put = set_session_handle))::StringW session_handle;

  __declspec(property(get = get_sessiongroup_handle, put = set_sessiongroup_handle))::StringW sessiongroup_handle;

  /// @brief Field swigCMemOwn, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_swigCMemOwn, put = __cordl_internal_set_swigCMemOwn)) bool swigCMemOwn;

  /// @brief Field swigCPtr, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_swigCPtr, put = __cordl_internal_set_swigCPtr))::System::Runtime::InteropServices::HandleRef swigCPtr;

  __declspec(property(get = get_time_stamp, put = set_time_stamp))::StringW time_stamp;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x27aae1c, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x27aaf28, size 0x180, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x27aae88, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Unity::Services::Vivox::vx_evt_session_archive_message_t* New_ctor();

  static inline ::Unity::Services::Vivox::vx_evt_session_archive_message_t* New_ctor(void* cPtr, bool cMemoryOwn);

  constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

  constexpr bool& __cordl_internal_get_swigCMemOwn();

  constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

  constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr();

  constexpr void __cordl_internal_set_swigCMemOwn(bool value);

  constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef value);

  /// @brief Method .ctor, addr 0x27abb14, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x279a6c0, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(void* cPtr, bool cMemoryOwn);

  /// @brief Method getCPtr, addr 0x27aacc4, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Unity::Services::Vivox::vx_evt_session_archive_message_t* obj);

  /// @brief Method get_base_, addr 0x27ab12c, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_base_t* get_base_();

  /// @brief Method get_displayname, addr 0x27ab6a4, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_displayname();

  /// @brief Method get_encoded_uri_with_tag, addr 0x27ab914, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_encoded_uri_with_tag();

  /// @brief Method get_is_current_user, addr 0x27ab9e4, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_is_current_user();

  /// @brief Method get_language, addr 0x27abab4, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_language();

  /// @brief Method get_message_body, addr 0x27ab774, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_message_body();

  /// @brief Method get_message_id, addr 0x27ab844, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_message_id();

  /// @brief Method get_participant_uri, addr 0x27ab5d4, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_participant_uri();

  /// @brief Method get_query_id, addr 0x27ab434, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_query_id();

  /// @brief Method get_session_handle, addr 0x27ab364, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_session_handle();

  /// @brief Method get_sessiongroup_handle, addr 0x27ab294, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_sessiongroup_handle();

  /// @brief Method get_time_stamp, addr 0x27ab504, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_time_stamp();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_base_, addr 0x27ab0a8, size 0x84, virtual false, abstract: false, final false
  inline void set_base_(::Unity::Services::Vivox::vx_evt_base_t* value);

  /// @brief Method set_displayname, addr 0x27ab634, size 0x70, virtual false, abstract: false, final false
  inline void set_displayname(::StringW value);

  /// @brief Method set_encoded_uri_with_tag, addr 0x27ab8a4, size 0x70, virtual false, abstract: false, final false
  inline void set_encoded_uri_with_tag(::StringW value);

  /// @brief Method set_is_current_user, addr 0x27ab974, size 0x70, virtual false, abstract: false, final false
  inline void set_is_current_user(int32_t value);

  /// @brief Method set_language, addr 0x27aba44, size 0x70, virtual false, abstract: false, final false
  inline void set_language(::StringW value);

  /// @brief Method set_message_body, addr 0x27ab704, size 0x70, virtual false, abstract: false, final false
  inline void set_message_body(::StringW value);

  /// @brief Method set_message_id, addr 0x27ab7d4, size 0x70, virtual false, abstract: false, final false
  inline void set_message_id(::StringW value);

  /// @brief Method set_participant_uri, addr 0x27ab564, size 0x70, virtual false, abstract: false, final false
  inline void set_participant_uri(::StringW value);

  /// @brief Method set_query_id, addr 0x27ab3c4, size 0x70, virtual false, abstract: false, final false
  inline void set_query_id(::StringW value);

  /// @brief Method set_session_handle, addr 0x27ab2f4, size 0x70, virtual false, abstract: false, final false
  inline void set_session_handle(::StringW value);

  /// @brief Method set_sessiongroup_handle, addr 0x27ab224, size 0x70, virtual false, abstract: false, final false
  inline void set_sessiongroup_handle(::StringW value);

  /// @brief Method set_time_stamp, addr 0x27ab494, size 0x70, virtual false, abstract: false, final false
  inline void set_time_stamp(::StringW value);

  /// @brief Method swigRelease, addr 0x27aad40, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::Unity::Services::Vivox::vx_evt_session_archive_message_t* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_evt_session_archive_message_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "vx_evt_session_archive_message_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  vx_evt_session_archive_message_t(vx_evt_session_archive_message_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "vx_evt_session_archive_message_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  vx_evt_session_archive_message_t(vx_evt_session_archive_message_t const&) = delete;

  /// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
  ::System::Runtime::InteropServices::HandleRef ___swigCPtr;

  /// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
  bool ___swigCMemOwn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_evt_session_archive_message_t, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_evt_session_archive_message_t, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_evt_session_archive_message_t, ___swigCMemOwn) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::vx_evt_session_archive_message_t);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_evt_session_archive_message_t*, "Unity.Services.Vivox", "vx_evt_session_archive_message_t");
