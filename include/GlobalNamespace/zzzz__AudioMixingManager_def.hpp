#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
CORDL_MODULE_EXPORT(AudioMixingManager)
namespace UnityEngine::Audio {
class AudioMixerGroup;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioMixingManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AudioMixingManager);
// Type: ::AudioMixingManager
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AudioMixingManager*
class CORDL_TYPE AudioMixingManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::AudioMixingManager>> {
public:
  // Declarations
  /// @brief Field musicMixer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_musicMixer, put = __cordl_internal_set_musicMixer))::UnityW<::UnityEngine::Audio::AudioMixerGroup> musicMixer;

  static inline ::GlobalNamespace::AudioMixingManager* New_ctor();

  /// @brief Method OnMusicDisabledChanged, addr 0x143cb18, size 0xac, virtual false, abstract: false, final false
  inline void OnMusicDisabledChanged(bool newIsDisabled);

  /// @brief Method Start, addr 0x143c9d0, size 0x148, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup> const& __cordl_internal_get_musicMixer() const;

  constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup>& __cordl_internal_get_musicMixer();

  constexpr void __cordl_internal_set_musicMixer(::UnityW<::UnityEngine::Audio::AudioMixerGroup> value);

  /// @brief Method .ctor, addr 0x143cbc4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioMixingManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioMixingManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioMixingManager(AudioMixingManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioMixingManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioMixingManager(AudioMixingManager const&) = delete;

  /// @brief Field musicMixer, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Audio::AudioMixerGroup> ___musicMixer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioMixingManager, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioMixingManager, ___musicMixer) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AudioMixingManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioMixingManager*, "", "AudioMixingManager");
