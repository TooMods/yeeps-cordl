#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(vx_state_session_t)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
namespace Unity::Services::Vivox {
class SWIGTYPE_p_p_vx_state_participant;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class vx_state_session_t;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::vx_state_session_t);
// Type: Unity.Services.Vivox::vx_state_session_t
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::vx_state_session_t*
class CORDL_TYPE vx_state_session_t : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_durable_media_id, put = set_durable_media_id))::StringW durable_media_id;

  __declspec(property(get = get_has_audio, put = set_has_audio)) int32_t has_audio;

  __declspec(property(get = get_has_text, put = set_has_text)) int32_t has_text;

  __declspec(property(get = get_is_audio_muted_for_me, put = set_is_audio_muted_for_me)) int32_t is_audio_muted_for_me;

  __declspec(property(get = get_is_connected, put = set_is_connected)) int32_t is_connected;

  __declspec(property(get = get_is_focused, put = set_is_focused)) int32_t is_focused;

  __declspec(property(get = get_is_incoming, put = set_is_incoming)) int32_t is_incoming;

  __declspec(property(get = get_is_positional, put = set_is_positional)) int32_t is_positional;

  __declspec(property(get = get_is_text_muted_for_me, put = set_is_text_muted_for_me)) int32_t is_text_muted_for_me;

  __declspec(property(get = get_is_transmitting, put = set_is_transmitting)) int32_t is_transmitting;

  __declspec(property(get = get_name, put = set_name))::StringW name;

  __declspec(property(get = get_session_font_id, put = set_session_font_id)) int32_t session_font_id;

  __declspec(property(get = get_session_handle, put = set_session_handle))::StringW session_handle;

  __declspec(property(get = get_state_participant_count, put = set_state_participant_count)) int32_t state_participant_count;

  __declspec(property(get = get_state_participants, put = set_state_participants))::Unity::Services::Vivox::SWIGTYPE_p_p_vx_state_participant* state_participants;

  /// @brief Field swigCMemOwn, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_swigCMemOwn, put = __cordl_internal_set_swigCMemOwn)) bool swigCMemOwn;

  /// @brief Field swigCPtr, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_swigCPtr, put = __cordl_internal_set_swigCPtr))::System::Runtime::InteropServices::HandleRef swigCPtr;

  __declspec(property(get = get_uri, put = set_uri))::StringW uri;

  __declspec(property(get = get_volume, put = set_volume)) int32_t volume;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x16cc750, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x16cc85c, size 0x180, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x16cc7bc, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Unity::Services::Vivox::vx_state_session_t* New_ctor();

  static inline ::Unity::Services::Vivox::vx_state_session_t* New_ctor(void* cPtr, bool cMemoryOwn);

  constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

  constexpr bool& __cordl_internal_get_swigCMemOwn();

  constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

  constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr();

  constexpr void __cordl_internal_set_swigCMemOwn(bool value);

  constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef value);

  /// @brief Method .ctor, addr 0x16cd838, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x16cc5a4, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(void* cPtr, bool cMemoryOwn);

  /// @brief Method getCPtr, addr 0x16cc5f8, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Unity::Services::Vivox::vx_state_session_t* obj);

  /// @brief Method get_durable_media_id, addr 0x16cd7d8, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_durable_media_id();

  /// @brief Method get_has_audio, addr 0x16cd19c, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_has_audio();

  /// @brief Method get_has_text, addr 0x16cd26c, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_has_text();

  /// @brief Method get_is_audio_muted_for_me, addr 0x16cccbc, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_is_audio_muted_for_me();

  /// @brief Method get_is_connected, addr 0x16cd4dc, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_is_connected();

  /// @brief Method get_is_focused, addr 0x16ccf2c, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_is_focused();

  /// @brief Method get_is_incoming, addr 0x16cd33c, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_is_incoming();

  /// @brief Method get_is_positional, addr 0x16cd40c, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_is_positional();

  /// @brief Method get_is_text_muted_for_me, addr 0x16ccd8c, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_is_text_muted_for_me();

  /// @brief Method get_is_transmitting, addr 0x16cce5c, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_is_transmitting();

  /// @brief Method get_name, addr 0x16ccbec, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method get_session_font_id, addr 0x16cd0cc, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_session_font_id();

  /// @brief Method get_session_handle, addr 0x16cca4c, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_session_handle();

  /// @brief Method get_state_participant_count, addr 0x16cd5ac, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_state_participant_count();

  /// @brief Method get_state_participants, addr 0x16cd694, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_p_vx_state_participant* get_state_participants();

  /// @brief Method get_uri, addr 0x16ccb1c, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_uri();

  /// @brief Method get_volume, addr 0x16ccffc, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_volume();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_durable_media_id, addr 0x16cd768, size 0x70, virtual false, abstract: false, final false
  inline void set_durable_media_id(::StringW value);

  /// @brief Method set_has_audio, addr 0x16cd12c, size 0x70, virtual false, abstract: false, final false
  inline void set_has_audio(int32_t value);

  /// @brief Method set_has_text, addr 0x16cd1fc, size 0x70, virtual false, abstract: false, final false
  inline void set_has_text(int32_t value);

  /// @brief Method set_is_audio_muted_for_me, addr 0x16ccc4c, size 0x70, virtual false, abstract: false, final false
  inline void set_is_audio_muted_for_me(int32_t value);

  /// @brief Method set_is_connected, addr 0x16cd46c, size 0x70, virtual false, abstract: false, final false
  inline void set_is_connected(int32_t value);

  /// @brief Method set_is_focused, addr 0x16ccebc, size 0x70, virtual false, abstract: false, final false
  inline void set_is_focused(int32_t value);

  /// @brief Method set_is_incoming, addr 0x16cd2cc, size 0x70, virtual false, abstract: false, final false
  inline void set_is_incoming(int32_t value);

  /// @brief Method set_is_positional, addr 0x16cd39c, size 0x70, virtual false, abstract: false, final false
  inline void set_is_positional(int32_t value);

  /// @brief Method set_is_text_muted_for_me, addr 0x16ccd1c, size 0x70, virtual false, abstract: false, final false
  inline void set_is_text_muted_for_me(int32_t value);

  /// @brief Method set_is_transmitting, addr 0x16ccdec, size 0x70, virtual false, abstract: false, final false
  inline void set_is_transmitting(int32_t value);

  /// @brief Method set_name, addr 0x16ccb7c, size 0x70, virtual false, abstract: false, final false
  inline void set_name(::StringW value);

  /// @brief Method set_session_font_id, addr 0x16cd05c, size 0x70, virtual false, abstract: false, final false
  inline void set_session_font_id(int32_t value);

  /// @brief Method set_session_handle, addr 0x16cc9dc, size 0x70, virtual false, abstract: false, final false
  inline void set_session_handle(::StringW value);

  /// @brief Method set_state_participant_count, addr 0x16cd53c, size 0x70, virtual false, abstract: false, final false
  inline void set_state_participant_count(int32_t value);

  /// @brief Method set_state_participants, addr 0x16cd60c, size 0x88, virtual false, abstract: false, final false
  inline void set_state_participants(::Unity::Services::Vivox::SWIGTYPE_p_p_vx_state_participant* value);

  /// @brief Method set_uri, addr 0x16ccaac, size 0x70, virtual false, abstract: false, final false
  inline void set_uri(::StringW value);

  /// @brief Method set_volume, addr 0x16ccf8c, size 0x70, virtual false, abstract: false, final false
  inline void set_volume(int32_t value);

  /// @brief Method swigRelease, addr 0x16cc674, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::Unity::Services::Vivox::vx_state_session_t* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_state_session_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "vx_state_session_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  vx_state_session_t(vx_state_session_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "vx_state_session_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  vx_state_session_t(vx_state_session_t const&) = delete;

  /// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
  ::System::Runtime::InteropServices::HandleRef ___swigCPtr;

  /// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
  bool ___swigCMemOwn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_state_session_t, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_state_session_t, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_state_session_t, ___swigCMemOwn) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::vx_state_session_t);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_state_session_t*, "Unity.Services.Vivox", "vx_state_session_t");
