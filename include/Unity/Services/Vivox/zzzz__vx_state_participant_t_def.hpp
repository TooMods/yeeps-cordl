#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(vx_state_participant_t)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
namespace Unity::Services::Vivox {
struct vx_participant_type;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class vx_state_participant_t;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::vx_state_participant_t);
// Type: Unity.Services.Vivox::vx_state_participant_t
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::vx_state_participant_t*
class CORDL_TYPE vx_state_participant_t : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_display_name, put = set_display_name))::StringW display_name;

  __declspec(property(get = get_energy, put = set_energy)) double_t energy;

  __declspec(property(get = get_is_anonymous_login, put = set_is_anonymous_login)) int32_t is_anonymous_login;

  __declspec(property(get = get_is_audio_enabled, put = set_is_audio_enabled)) int32_t is_audio_enabled;

  __declspec(property(get = get_is_audio_moderator_muted, put = set_is_audio_moderator_muted)) int32_t is_audio_moderator_muted;

  __declspec(property(get = get_is_audio_muted_for_me, put = set_is_audio_muted_for_me)) int32_t is_audio_muted_for_me;

  __declspec(property(get = get_is_hand_raised, put = set_is_hand_raised)) int32_t is_hand_raised;

  __declspec(property(get = get_is_speaking, put = set_is_speaking)) int32_t is_speaking;

  __declspec(property(get = get_is_text_enabled, put = set_is_text_enabled)) int32_t is_text_enabled;

  __declspec(property(get = get_is_text_moderator_muted, put = set_is_text_moderator_muted)) int32_t is_text_moderator_muted;

  __declspec(property(get = get_is_text_muted_for_me, put = set_is_text_muted_for_me)) int32_t is_text_muted_for_me;

  __declspec(property(get = get_is_typing, put = set_is_typing)) int32_t is_typing;

  /// @brief Field swigCMemOwn, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_swigCMemOwn, put = __cordl_internal_set_swigCMemOwn)) bool swigCMemOwn;

  /// @brief Field swigCPtr, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_swigCPtr, put = __cordl_internal_set_swigCPtr))::System::Runtime::InteropServices::HandleRef swigCPtr;

  __declspec(property(get = get_type, put = set_type))::Unity::Services::Vivox::vx_participant_type type;

  __declspec(property(get = get_uri, put = set_uri))::StringW uri;

  __declspec(property(get = get_volume, put = set_volume)) int32_t volume;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x16ca664, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x16ca770, size 0x180, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x16ca6d0, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Unity::Services::Vivox::vx_state_participant_t* New_ctor();

  static inline ::Unity::Services::Vivox::vx_state_participant_t* New_ctor(void* cPtr, bool cMemoryOwn);

  constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

  constexpr bool& __cordl_internal_get_swigCMemOwn();

  constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

  constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr();

  constexpr void __cordl_internal_set_swigCMemOwn(bool value);

  constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef value);

  /// @brief Method .ctor, addr 0x16cb520, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x16ca4b8, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(void* cPtr, bool cMemoryOwn);

  /// @brief Method getCPtr, addr 0x16ca50c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Unity::Services::Vivox::vx_state_participant_t* obj);

  /// @brief Method get_display_name, addr 0x16caa30, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_display_name();

  /// @brief Method get_energy, addr 0x16cb320, size 0x60, virtual false, abstract: false, final false
  inline double_t get_energy();

  /// @brief Method get_is_anonymous_login, addr 0x16cb4c0, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_is_anonymous_login();

  /// @brief Method get_is_audio_enabled, addr 0x16cab00, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_is_audio_enabled();

  /// @brief Method get_is_audio_moderator_muted, addr 0x16cae40, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_is_audio_moderator_muted();

  /// @brief Method get_is_audio_muted_for_me, addr 0x16caca0, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_is_audio_muted_for_me();

  /// @brief Method get_is_hand_raised, addr 0x16cafe0, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_is_hand_raised();

  /// @brief Method get_is_speaking, addr 0x16cb180, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_is_speaking();

  /// @brief Method get_is_text_enabled, addr 0x16cabd0, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_is_text_enabled();

  /// @brief Method get_is_text_moderator_muted, addr 0x16caf10, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_is_text_moderator_muted();

  /// @brief Method get_is_text_muted_for_me, addr 0x16cad70, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_is_text_muted_for_me();

  /// @brief Method get_is_typing, addr 0x16cb0b0, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_is_typing();

  /// @brief Method get_type, addr 0x16cb3f0, size 0x60, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_participant_type get_type();

  /// @brief Method get_uri, addr 0x16ca960, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_uri();

  /// @brief Method get_volume, addr 0x16cb250, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_volume();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_display_name, addr 0x16ca9c0, size 0x70, virtual false, abstract: false, final false
  inline void set_display_name(::StringW value);

  /// @brief Method set_energy, addr 0x16cb2b0, size 0x70, virtual false, abstract: false, final false
  inline void set_energy(double_t value);

  /// @brief Method set_is_anonymous_login, addr 0x16cb450, size 0x70, virtual false, abstract: false, final false
  inline void set_is_anonymous_login(int32_t value);

  /// @brief Method set_is_audio_enabled, addr 0x16caa90, size 0x70, virtual false, abstract: false, final false
  inline void set_is_audio_enabled(int32_t value);

  /// @brief Method set_is_audio_moderator_muted, addr 0x16cadd0, size 0x70, virtual false, abstract: false, final false
  inline void set_is_audio_moderator_muted(int32_t value);

  /// @brief Method set_is_audio_muted_for_me, addr 0x16cac30, size 0x70, virtual false, abstract: false, final false
  inline void set_is_audio_muted_for_me(int32_t value);

  /// @brief Method set_is_hand_raised, addr 0x16caf70, size 0x70, virtual false, abstract: false, final false
  inline void set_is_hand_raised(int32_t value);

  /// @brief Method set_is_speaking, addr 0x16cb110, size 0x70, virtual false, abstract: false, final false
  inline void set_is_speaking(int32_t value);

  /// @brief Method set_is_text_enabled, addr 0x16cab60, size 0x70, virtual false, abstract: false, final false
  inline void set_is_text_enabled(int32_t value);

  /// @brief Method set_is_text_moderator_muted, addr 0x16caea0, size 0x70, virtual false, abstract: false, final false
  inline void set_is_text_moderator_muted(int32_t value);

  /// @brief Method set_is_text_muted_for_me, addr 0x16cad00, size 0x70, virtual false, abstract: false, final false
  inline void set_is_text_muted_for_me(int32_t value);

  /// @brief Method set_is_typing, addr 0x16cb040, size 0x70, virtual false, abstract: false, final false
  inline void set_is_typing(int32_t value);

  /// @brief Method set_type, addr 0x16cb380, size 0x70, virtual false, abstract: false, final false
  inline void set_type(::Unity::Services::Vivox::vx_participant_type value);

  /// @brief Method set_uri, addr 0x16ca8f0, size 0x70, virtual false, abstract: false, final false
  inline void set_uri(::StringW value);

  /// @brief Method set_volume, addr 0x16cb1e0, size 0x70, virtual false, abstract: false, final false
  inline void set_volume(int32_t value);

  /// @brief Method swigRelease, addr 0x16ca588, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::Unity::Services::Vivox::vx_state_participant_t* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_state_participant_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "vx_state_participant_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  vx_state_participant_t(vx_state_participant_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "vx_state_participant_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  vx_state_participant_t(vx_state_participant_t const&) = delete;

  /// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
  ::System::Runtime::InteropServices::HandleRef ___swigCPtr;

  /// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
  bool ___swigCMemOwn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_state_participant_t, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_state_participant_t, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_state_participant_t, ___swigCMemOwn) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::vx_state_participant_t);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_state_participant_t*, "Unity.Services.Vivox", "vx_state_participant_t");
