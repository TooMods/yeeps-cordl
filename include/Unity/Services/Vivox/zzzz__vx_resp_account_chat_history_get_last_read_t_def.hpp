#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(vx_resp_account_chat_history_get_last_read_t)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
namespace Unity::Services::Vivox {
class vx_resp_base_t;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class vx_resp_account_chat_history_get_last_read_t;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::vx_resp_account_chat_history_get_last_read_t);
// Type: Unity.Services.Vivox::vx_resp_account_chat_history_get_last_read_t
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::vx_resp_account_chat_history_get_last_read_t*
class CORDL_TYPE vx_resp_account_chat_history_get_last_read_t : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_base_, put = set_base_))::Unity::Services::Vivox::vx_resp_base_t* base_;

  __declspec(property(get = get_message_id, put = set_message_id))::StringW message_id;

  __declspec(property(get = get_read_at, put = set_read_at)) int64_t read_at;

  /// @brief Field swigCMemOwn, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_swigCMemOwn, put = __cordl_internal_set_swigCMemOwn)) bool swigCMemOwn;

  /// @brief Field swigCPtr, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_swigCPtr, put = __cordl_internal_set_swigCPtr))::System::Runtime::InteropServices::HandleRef swigCPtr;

  __declspec(property(get = get_unread_messages_count, put = set_unread_messages_count)) int32_t unread_messages_count;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x29ea444, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x29ea550, size 0x180, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x29ea4b0, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Unity::Services::Vivox::vx_resp_account_chat_history_get_last_read_t* New_ctor();

  static inline ::Unity::Services::Vivox::vx_resp_account_chat_history_get_last_read_t* New_ctor(void* cPtr, bool cMemoryOwn);

  constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

  constexpr bool& __cordl_internal_get_swigCMemOwn();

  constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

  constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr();

  constexpr void __cordl_internal_set_swigCMemOwn(bool value);

  constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef value);

  /// @brief Method .ctor, addr 0x29eaabc, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x29ea298, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(void* cPtr, bool cMemoryOwn);

  /// @brief Method getCPtr, addr 0x29ea2ec, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Unity::Services::Vivox::vx_resp_account_chat_history_get_last_read_t* obj);

  /// @brief Method get_base_, addr 0x29ea754, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_base_t* get_base_();

  /// @brief Method get_message_id, addr 0x29ea8bc, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_message_id();

  /// @brief Method get_read_at, addr 0x29ea98c, size 0x60, virtual false, abstract: false, final false
  inline int64_t get_read_at();

  /// @brief Method get_unread_messages_count, addr 0x29eaa5c, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_unread_messages_count();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_base_, addr 0x29ea6d0, size 0x84, virtual false, abstract: false, final false
  inline void set_base_(::Unity::Services::Vivox::vx_resp_base_t* value);

  /// @brief Method set_message_id, addr 0x29ea84c, size 0x70, virtual false, abstract: false, final false
  inline void set_message_id(::StringW value);

  /// @brief Method set_read_at, addr 0x29ea91c, size 0x70, virtual false, abstract: false, final false
  inline void set_read_at(int64_t value);

  /// @brief Method set_unread_messages_count, addr 0x29ea9ec, size 0x70, virtual false, abstract: false, final false
  inline void set_unread_messages_count(int32_t value);

  /// @brief Method swigRelease, addr 0x29ea368, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::Unity::Services::Vivox::vx_resp_account_chat_history_get_last_read_t* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_resp_account_chat_history_get_last_read_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "vx_resp_account_chat_history_get_last_read_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  vx_resp_account_chat_history_get_last_read_t(vx_resp_account_chat_history_get_last_read_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "vx_resp_account_chat_history_get_last_read_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  vx_resp_account_chat_history_get_last_read_t(vx_resp_account_chat_history_get_last_read_t const&) = delete;

  /// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
  ::System::Runtime::InteropServices::HandleRef ___swigCPtr;

  /// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
  bool ___swigCMemOwn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_resp_account_chat_history_get_last_read_t, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_resp_account_chat_history_get_last_read_t, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_resp_account_chat_history_get_last_read_t, ___swigCMemOwn) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::vx_resp_account_chat_history_get_last_read_t);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_resp_account_chat_history_get_last_read_t*, "Unity.Services.Vivox", "vx_resp_account_chat_history_get_last_read_t");
