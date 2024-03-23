#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(vx_participant_t)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class vx_participant_t;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::vx_participant_t);
// Type: Unity.Services.Vivox::vx_participant_t
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::vx_participant_t*
class CORDL_TYPE vx_participant_t : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_account_id, put = set_account_id)) int32_t account_id;

  __declspec(property(get = get_display_name, put = set_display_name))::StringW display_name;

  __declspec(property(get = get_first_name, put = set_first_name))::StringW first_name;

  __declspec(property(get = get_is_moderator, put = set_is_moderator)) int32_t is_moderator;

  __declspec(property(get = get_is_moderator_muted, put = set_is_moderator_muted)) int32_t is_moderator_muted;

  __declspec(property(get = get_is_moderator_text_muted, put = set_is_moderator_text_muted)) int32_t is_moderator_text_muted;

  __declspec(property(get = get_is_muted_for_me, put = set_is_muted_for_me)) int32_t is_muted_for_me;

  __declspec(property(get = get_is_owner, put = set_is_owner)) int32_t is_owner;

  __declspec(property(get = get_last_name, put = set_last_name))::StringW last_name;

  /// @brief Field swigCMemOwn, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_swigCMemOwn, put = __cordl_internal_set_swigCMemOwn)) bool swigCMemOwn;

  /// @brief Field swigCPtr, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_swigCPtr, put = __cordl_internal_set_swigCPtr))::System::Runtime::InteropServices::HandleRef swigCPtr;

  __declspec(property(get = get_uri, put = set_uri))::StringW uri;

  __declspec(property(get = get_username, put = set_username))::StringW username;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x280b3c8, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x280b4d4, size 0x180, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x280b434, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Unity::Services::Vivox::vx_participant_t* New_ctor();

  static inline ::Unity::Services::Vivox::vx_participant_t* New_ctor(void* cPtr, bool cMemoryOwn);

  constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

  constexpr bool& __cordl_internal_get_swigCMemOwn();

  constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

  constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr();

  constexpr void __cordl_internal_set_swigCMemOwn(bool value);

  constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef value);

  /// @brief Method .ctor, addr 0x280bf44, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x280b21c, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(void* cPtr, bool cMemoryOwn);

  /// @brief Method getCPtr, addr 0x280b270, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Unity::Services::Vivox::vx_participant_t* obj);

  /// @brief Method get_account_id, addr 0x280bee4, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_account_id();

  /// @brief Method get_display_name, addr 0x280b934, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_display_name();

  /// @brief Method get_first_name, addr 0x280b794, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_first_name();

  /// @brief Method get_is_moderator, addr 0x280bad4, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_is_moderator();

  /// @brief Method get_is_moderator_muted, addr 0x280bba4, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_is_moderator_muted();

  /// @brief Method get_is_moderator_text_muted, addr 0x280bc74, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_is_moderator_text_muted();

  /// @brief Method get_is_muted_for_me, addr 0x280bd44, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_is_muted_for_me();

  /// @brief Method get_is_owner, addr 0x280be14, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_is_owner();

  /// @brief Method get_last_name, addr 0x280b864, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_last_name();

  /// @brief Method get_uri, addr 0x280b6c4, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_uri();

  /// @brief Method get_username, addr 0x280ba04, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_username();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_account_id, addr 0x280be74, size 0x70, virtual false, abstract: false, final false
  inline void set_account_id(int32_t value);

  /// @brief Method set_display_name, addr 0x280b8c4, size 0x70, virtual false, abstract: false, final false
  inline void set_display_name(::StringW value);

  /// @brief Method set_first_name, addr 0x280b724, size 0x70, virtual false, abstract: false, final false
  inline void set_first_name(::StringW value);

  /// @brief Method set_is_moderator, addr 0x280ba64, size 0x70, virtual false, abstract: false, final false
  inline void set_is_moderator(int32_t value);

  /// @brief Method set_is_moderator_muted, addr 0x280bb34, size 0x70, virtual false, abstract: false, final false
  inline void set_is_moderator_muted(int32_t value);

  /// @brief Method set_is_moderator_text_muted, addr 0x280bc04, size 0x70, virtual false, abstract: false, final false
  inline void set_is_moderator_text_muted(int32_t value);

  /// @brief Method set_is_muted_for_me, addr 0x280bcd4, size 0x70, virtual false, abstract: false, final false
  inline void set_is_muted_for_me(int32_t value);

  /// @brief Method set_is_owner, addr 0x280bda4, size 0x70, virtual false, abstract: false, final false
  inline void set_is_owner(int32_t value);

  /// @brief Method set_last_name, addr 0x280b7f4, size 0x70, virtual false, abstract: false, final false
  inline void set_last_name(::StringW value);

  /// @brief Method set_uri, addr 0x280b654, size 0x70, virtual false, abstract: false, final false
  inline void set_uri(::StringW value);

  /// @brief Method set_username, addr 0x280b994, size 0x70, virtual false, abstract: false, final false
  inline void set_username(::StringW value);

  /// @brief Method swigRelease, addr 0x280b2ec, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::Unity::Services::Vivox::vx_participant_t* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_participant_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "vx_participant_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  vx_participant_t(vx_participant_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "vx_participant_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  vx_participant_t(vx_participant_t const&) = delete;

  /// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
  ::System::Runtime::InteropServices::HandleRef ___swigCPtr;

  /// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
  bool ___swigCMemOwn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_participant_t, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_participant_t, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_participant_t, ___swigCMemOwn) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::vx_participant_t);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_participant_t*, "Unity.Services.Vivox", "vx_participant_t");
