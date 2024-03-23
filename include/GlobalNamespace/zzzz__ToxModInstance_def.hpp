#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__tox_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ToxModInstance)
namespace GlobalNamespace {
struct __tox__TOX_ERROR;
}
namespace GlobalNamespace {
struct __tox__TOX_PLAYER_DATA_TYPE;
}
namespace GlobalNamespace {
struct __tox__TOX_SESSION_DATA_TYPE;
}
namespace GlobalNamespace {
struct __tox__TOX_TRIAGE_SETTING;
}
// Forward declare root types
namespace GlobalNamespace {
class ToxModInstance;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ToxModInstance);
// Type: ::ToxModInstance
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ToxModInstance*
class CORDL_TYPE ToxModInstance : public ::System::Object {
public:
  // Declarations
  /// @brief Field tox_instance, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tox_instance, put = __cordl_internal_set_tox_instance))::GlobalNamespace::__tox__NativeToxInstance tox_instance;

  /// @brief Field use_aliases, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_use_aliases, put = __cordl_internal_set_use_aliases)) bool use_aliases;

  /// @brief Method Finalize, addr 0x28de11c, size 0x94, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GlobalCleanup, addr 0x28de9dc, size 0x50, virtual false, abstract: false, final false
  static inline void GlobalCleanup();

  /// @brief Method GlobalInit, addr 0x28de830, size 0x1ac, virtual false, abstract: false, final false
  static inline void GlobalInit();

  static inline ::GlobalNamespace::ToxModInstance* New_ctor(::StringW account_uuid, ::StringW api_key, ::StringW player_name, ::GlobalNamespace::__tox__TOX_TRIAGE_SETTING triage_setting, bool verbose,
                                                            ::StringW single_tenant_prefix, bool use_aliases, bool enable_proximity_chat);

  constexpr ::GlobalNamespace::__tox__NativeToxInstance const& __cordl_internal_get_tox_instance() const;

  constexpr ::GlobalNamespace::__tox__NativeToxInstance& __cordl_internal_get_tox_instance();

  constexpr bool const& __cordl_internal_get_use_aliases() const;

  constexpr bool& __cordl_internal_get_use_aliases();

  constexpr void __cordl_internal_set_tox_instance(::GlobalNamespace::__tox__NativeToxInstance value);

  constexpr void __cordl_internal_set_use_aliases(bool value);

  /// @brief Method .ctor, addr 0x28ddf78, size 0x10c, virtual false, abstract: false, final false
  inline void _ctor(::StringW account_uuid, ::StringW api_key, ::StringW player_name, ::GlobalNamespace::__tox__TOX_TRIAGE_SETTING triage_setting, bool verbose, ::StringW single_tenant_prefix,
                    bool use_aliases, bool enable_proximity_chat);

  /// @brief Method add_audio, addr 0x28de780, size 0x28, virtual false, abstract: false, final false
  inline void add_audio(::ArrayW<float_t, ::Array<float_t>*> audio, int32_t sample_rate, int32_t num_channels);

  /// @brief Method add_audio_nonrealtime, addr 0x28de7e0, size 0x28, virtual false, abstract: false, final false
  inline void add_audio_nonrealtime(::ArrayW<float_t, ::Array<float_t>*> audio, int32_t sample_rate, int32_t num_channels);

  /// @brief Method add_audio_nonrealtime_short, addr 0x28de808, size 0x28, virtual false, abstract: false, final false
  inline void add_audio_nonrealtime_short(::ArrayW<int16_t, ::Array<int16_t>*> audio, int32_t sample_rate, int32_t num_channels);

  /// @brief Method add_audio_raw, addr 0x28de7d0, size 0x8, virtual false, abstract: false, final false
  inline void add_audio_raw(void* audio, int32_t num_samples, int32_t sample_rate, int32_t num_channels);

  /// @brief Method add_audio_short, addr 0x28de7a8, size 0x28, virtual false, abstract: false, final false
  inline void add_audio_short(::ArrayW<int16_t, ::Array<int16_t>*> audio, int32_t sample_rate, int32_t num_channels);

  /// @brief Method add_audio_short_raw, addr 0x28de7d8, size 0x8, virtual false, abstract: false, final false
  inline void add_audio_short_raw(void* audio, int32_t num_samples, int32_t sample_rate, int32_t num_channels);

  /// @brief Method add_session_data, addr 0x28de37c, size 0x6c, virtual false, abstract: false, final false
  inline void add_session_data(::StringW session_data);

  /// @brief Method add_structured_player_data, addr 0x28de44c, size 0x64, virtual false, abstract: false, final false
  inline void add_structured_player_data(::GlobalNamespace::__tox__TOX_PLAYER_DATA_TYPE data_type, ::StringW player_data);

  /// @brief Method add_structured_session_data, addr 0x28de3e8, size 0x64, virtual false, abstract: false, final false
  inline void add_structured_session_data(::GlobalNamespace::__tox__TOX_SESSION_DATA_TYPE data_type, ::StringW session_data);

  /// @brief Method get_internal_player_uuid, addr 0x28de4b0, size 0x64, virtual false, abstract: false, final false
  inline ::StringW get_internal_player_uuid();

  /// @brief Method get_internal_session_uuid, addr 0x28de514, size 0x64, virtual false, abstract: false, final false
  inline ::StringW get_internal_session_uuid();

  /// @brief Method join_session, addr 0x28de2bc, size 0x74, virtual false, abstract: false, final false
  inline void join_session(::StringW session_name);

  /// @brief Method leave_session, addr 0x28de330, size 0x4c, virtual false, abstract: false, final false
  inline void leave_session();

  /// @brief Method manual_stop, addr 0x28de1b0, size 0x6c, virtual false, abstract: false, final false
  inline void manual_stop();

  /// @brief Method print_error, addr 0x28dde60, size 0x8c, virtual false, abstract: false, final false
  static inline void print_error(::StringW error_message);

  /// @brief Method print_if_sdk_error, addr 0x28de084, size 0x98, virtual false, abstract: false, final false
  static inline void print_if_sdk_error(::GlobalNamespace::__tox__TOX_ERROR err, ::StringW error_message);

  /// @brief Method print_info, addr 0x28ddeec, size 0x8c, virtual false, abstract: false, final false
  static inline void print_info(::StringW msg);

  /// @brief Method set_global_muted, addr 0x28de660, size 0x5c, virtual false, abstract: false, final false
  inline void set_global_muted(int32_t muted);

  /// @brief Method set_player_muted, addr 0x28de6bc, size 0x64, virtual false, abstract: false, final false
  inline void set_player_muted(::StringW player, int32_t muted);

  /// @brief Method set_players_muted_at_join, addr 0x28de720, size 0x60, virtual false, abstract: false, final false
  inline void set_players_muted_at_join(::ArrayW<::StringW, ::Array<::StringW>*> players);

  /// @brief Method set_proximity_chat_can_hear_player, addr 0x28de5ec, size 0x74, virtual false, abstract: false, final false
  inline void set_proximity_chat_can_hear_player(::ArrayW<::StringW, ::Array<::StringW>*> players);

  /// @brief Method set_proximity_chat_player_can_hear, addr 0x28de578, size 0x74, virtual false, abstract: false, final false
  inline void set_proximity_chat_player_can_hear(::ArrayW<::StringW, ::Array<::StringW>*> players);

  /// @brief Method set_session_name, addr 0x28de21c, size 0xa0, virtual false, abstract: false, final false
  inline void set_session_name(::StringW session_name);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ToxModInstance();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ToxModInstance", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ToxModInstance(ToxModInstance&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ToxModInstance", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ToxModInstance(ToxModInstance const&) = delete;

  /// @brief Field tox_instance, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__tox__NativeToxInstance ___tox_instance;

  /// @brief Field use_aliases, offset: 0x18, size: 0x1, def value: None
  bool ___use_aliases;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ToxModInstance, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ToxModInstance, ___tox_instance) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ToxModInstance, ___use_aliases) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ToxModInstance);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ToxModInstance*, "", "ToxModInstance");
