#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AudioAffordanceThemeData)
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio {
class AudioAffordanceThemeData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeData);
// Type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio::AudioAffordanceThemeData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio::AudioAffordanceThemeData*
class CORDL_TYPE AudioAffordanceThemeData : public ::System::Object {
public:
  // Declarations
  /// @brief Field stateEntered, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_stateEntered, put = __cordl_internal_set_stateEntered))::UnityW<::UnityEngine::AudioClip> stateEntered;

  /// @brief Field stateExited, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_stateExited, put = __cordl_internal_set_stateExited))::UnityW<::UnityEngine::AudioClip> stateExited;

  /// @brief Field stateName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_stateName, put = __cordl_internal_set_stateName))::StringW stateName;

  static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeData* New_ctor();

  constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_stateEntered() const;

  constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_stateEntered();

  constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_stateExited() const;

  constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_stateExited();

  constexpr ::StringW const& __cordl_internal_get_stateName() const;

  constexpr ::StringW& __cordl_internal_get_stateName();

  constexpr void __cordl_internal_set_stateEntered(::UnityW<::UnityEngine::AudioClip> value);

  constexpr void __cordl_internal_set_stateExited(::UnityW<::UnityEngine::AudioClip> value);

  constexpr void __cordl_internal_set_stateName(::StringW value);

  /// @brief Method .ctor, addr 0x2a2acd4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioAffordanceThemeData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioAffordanceThemeData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioAffordanceThemeData(AudioAffordanceThemeData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioAffordanceThemeData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioAffordanceThemeData(AudioAffordanceThemeData const&) = delete;

  /// @brief Field stateName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___stateName;

  /// @brief Field stateEntered, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioClip> ___stateEntered;

  /// @brief Field stateExited, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioClip> ___stateExited;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeData, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeData, ___stateName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeData, ___stateEntered) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeData, ___stateExited) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeData*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio",
                       "AudioAffordanceThemeData");
