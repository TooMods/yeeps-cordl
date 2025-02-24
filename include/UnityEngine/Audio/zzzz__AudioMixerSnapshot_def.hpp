#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AudioMixerSnapshot)
// Forward declare root types
namespace UnityEngine::Audio {
class AudioMixerSnapshot;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Audio::AudioMixerSnapshot);
// Type: UnityEngine.Audio::AudioMixerSnapshot
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: ::UnityEngine.Audio::AudioMixerSnapshot*
class CORDL_TYPE AudioMixerSnapshot : public ::UnityEngine::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioMixerSnapshot();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioMixerSnapshot", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioMixerSnapshot(AudioMixerSnapshot&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioMixerSnapshot", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioMixerSnapshot(AudioMixerSnapshot const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Audio::AudioMixerSnapshot, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Audio
NEED_NO_BOX(::UnityEngine::Audio::AudioMixerSnapshot);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Audio::AudioMixerSnapshot*, "UnityEngine.Audio", "AudioMixerSnapshot");
