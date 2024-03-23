#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VivoxParticipant)
namespace System::ComponentModel {
class PropertyChangedEventArgs;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace Unity::Services::Vivox {
class IParticipant;
}
namespace Unity::Services::Vivox {
class IVivoxServiceInternal;
}
namespace Unity::Services::Vivox {
template <typename TK> class KeyEventArg_1;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class VivoxParticipant;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::VivoxParticipant);
// Type: Unity.Services.Vivox::VivoxParticipant
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::VivoxParticipant*
class CORDL_TYPE VivoxParticipant : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AudioEnergy)) double_t AudioEnergy;

  __declspec(property(get = get_ChannelName))::StringW ChannelName;

  __declspec(property(get = get_ChannelURI))::StringW ChannelURI;

  __declspec(property(get = get_DisplayName))::StringW DisplayName;

  __declspec(property(get = get_IsMuted)) bool IsMuted;

  __declspec(property(get = get_IsSelf)) bool IsSelf;

  __declspec(property(get = get_LocalVolume)) int32_t LocalVolume;

  /// @brief Field ParticipantAudioEnergyChanged, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_ParticipantAudioEnergyChanged, put = __cordl_internal_set_ParticipantAudioEnergyChanged))::System::Action* ParticipantAudioEnergyChanged;

  /// @brief Field ParticipantMuteStateChanged, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_ParticipantMuteStateChanged, put = __cordl_internal_set_ParticipantMuteStateChanged))::System::Action* ParticipantMuteStateChanged;

  /// @brief Field ParticipantSpeechDetected, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_ParticipantSpeechDetected, put = __cordl_internal_set_ParticipantSpeechDetected))::System::Action* ParticipantSpeechDetected;

  __declspec(property(get = get_ParticipantTapAudioSource, put = set_ParticipantTapAudioSource))::UnityW<::UnityEngine::AudioSource> ParticipantTapAudioSource;

  __declspec(property(get = get_PlayerId))::StringW PlayerId;

  __declspec(property(get = get_SpeechDetected)) bool SpeechDetected;

  __declspec(property(get = get_URI))::StringW URI;

  /// @brief Field <ParticipantTapAudioSource>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__ParticipantTapAudioSource_k__BackingField,
                      put = __cordl_internal_set__ParticipantTapAudioSource_k__BackingField))::UnityW<::UnityEngine::AudioSource> _ParticipantTapAudioSource_k__BackingField;

  /// @brief Field m_ParentParticipant, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ParentParticipant, put = __cordl_internal_set_m_ParentParticipant))::Unity::Services::Vivox::IParticipant* m_ParentParticipant;

  /// @brief Field m_ParticipantTapGameObject, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ParticipantTapGameObject, put = __cordl_internal_set_m_ParticipantTapGameObject))::UnityW<::UnityEngine::GameObject> m_ParticipantTapGameObject;

  /// @brief Field m_VivoxService, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VivoxService, put = __cordl_internal_set_m_VivoxService))::Unity::Services::Vivox::IVivoxServiceInternal* m_VivoxService;

  /// @brief Method CreateVivoxParticipantTap, addr 0x1c168fc, size 0x410, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> CreateVivoxParticipantTap(::StringW gameObjectName, bool silenceInChannelAudioMix);

  /// @brief Method DestroyTap, addr 0x1c15d14, size 0xf8, virtual false, abstract: false, final false
  inline void DestroyTap();

  /// @brief Method DestroyVivoxParticipantTap, addr 0x1c15e0c, size 0x90, virtual false, abstract: false, final false
  inline void DestroyVivoxParticipantTap();

  /// @brief Method MutePlayerLocally, addr 0x1c1656c, size 0x64, virtual false, abstract: false, final false
  inline void MutePlayerLocally();

  static inline ::Unity::Services::Vivox::VivoxParticipant* New_ctor(::Unity::Services::Vivox::IVivoxServiceInternal* vivoxService, ::Unity::Services::Vivox::IParticipant* participant);

  /// @brief Method OnParticipantRemoved, addr 0x1c15774, size 0x4f0, virtual false, abstract: false, final false
  inline void OnParticipantRemoved(::System::Object* sender, ::Unity::Services::Vivox::KeyEventArg_1<::StringW>* keyEventArg);

  /// @brief Method OnPropertyChanged, addr 0x1c15eb8, size 0x240, virtual false, abstract: false, final false
  inline void OnPropertyChanged(::System::Object* obj, ::System::ComponentModel::PropertyChangedEventArgs* args);

  /// @brief Method OnUserInputDeviceMuteStateChanged, addr 0x1c15e9c, size 0x1c, virtual false, abstract: false, final false
  inline void OnUserInputDeviceMuteStateChanged(bool isMuted);

  /// @brief Method SetLocalMuteState, addr 0x1c165d0, size 0x1a4, virtual false, abstract: false, final false
  inline void SetLocalMuteState(bool doMute);

  /// @brief Method SetLocalVolume, addr 0x1c1639c, size 0x10c, virtual false, abstract: false, final false
  inline void SetLocalVolume(int32_t volume);

  /// @brief Method UnmutePlayerLocally, addr 0x1c16774, size 0x64, virtual false, abstract: false, final false
  inline void UnmutePlayerLocally();

  /// @brief Method ValidateParticipant, addr 0x1c164a8, size 0xc4, virtual false, abstract: false, final false
  inline bool ValidateParticipant(::StringW memberName);

  constexpr ::System::Action*& __cordl_internal_get_ParticipantAudioEnergyChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_ParticipantAudioEnergyChanged() const;

  constexpr ::System::Action*& __cordl_internal_get_ParticipantMuteStateChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_ParticipantMuteStateChanged() const;

  constexpr ::System::Action*& __cordl_internal_get_ParticipantSpeechDetected();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_ParticipantSpeechDetected() const;

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__ParticipantTapAudioSource_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__ParticipantTapAudioSource_k__BackingField();

  constexpr ::Unity::Services::Vivox::IParticipant*& __cordl_internal_get_m_ParentParticipant();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::IParticipant*> const& __cordl_internal_get_m_ParentParticipant() const;

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_ParticipantTapGameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_ParticipantTapGameObject();

  constexpr ::Unity::Services::Vivox::IVivoxServiceInternal*& __cordl_internal_get_m_VivoxService();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::IVivoxServiceInternal*> const& __cordl_internal_get_m_VivoxService() const;

  constexpr void __cordl_internal_set_ParticipantAudioEnergyChanged(::System::Action* value);

  constexpr void __cordl_internal_set_ParticipantMuteStateChanged(::System::Action* value);

  constexpr void __cordl_internal_set_ParticipantSpeechDetected(::System::Action* value);

  constexpr void __cordl_internal_set__ParticipantTapAudioSource_k__BackingField(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set_m_ParentParticipant(::Unity::Services::Vivox::IParticipant* value);

  constexpr void __cordl_internal_set_m_ParticipantTapGameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_VivoxService(::Unity::Services::Vivox::IVivoxServiceInternal* value);

  /// @brief Method .ctor, addr 0x1c152a4, size 0x4d0, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Vivox::IVivoxServiceInternal* vivoxService, ::Unity::Services::Vivox::IParticipant* participant);

  /// @brief Method add_ParticipantAudioEnergyChanged, addr 0x1c1766c, size 0x9c, virtual false, abstract: false, final false
  inline void add_ParticipantAudioEnergyChanged(::System::Action* value);

  /// @brief Method add_ParticipantMuteStateChanged, addr 0x1c173fc, size 0x9c, virtual false, abstract: false, final false
  inline void add_ParticipantMuteStateChanged(::System::Action* value);

  /// @brief Method add_ParticipantSpeechDetected, addr 0x1c17534, size 0x9c, virtual false, abstract: false, final false
  inline void add_ParticipantSpeechDetected(::System::Action* value);

  /// @brief Method get_AudioEnergy, addr 0x1c17348, size 0xa4, virtual false, abstract: false, final false
  inline double_t get_AudioEnergy();

  /// @brief Method get_ChannelName, addr 0x1c16efc, size 0x128, virtual false, abstract: false, final false
  inline ::StringW get_ChannelName();

  /// @brief Method get_ChannelURI, addr 0x1c170d8, size 0x128, virtual false, abstract: false, final false
  inline ::StringW get_ChannelURI();

  /// @brief Method get_DisplayName, addr 0x1c16e2c, size 0xd0, virtual false, abstract: false, final false
  inline ::StringW get_DisplayName();

  /// @brief Method get_IsMuted, addr 0x1c16198, size 0x204, virtual false, abstract: false, final false
  inline bool get_IsMuted();

  /// @brief Method get_IsSelf, addr 0x1c160f8, size 0xa0, virtual false, abstract: false, final false
  inline bool get_IsSelf();

  /// @brief Method get_LocalVolume, addr 0x1c172a4, size 0xa4, virtual false, abstract: false, final false
  inline int32_t get_LocalVolume();

  /// @brief Method get_ParticipantTapAudioSource, addr 0x1c173ec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioSource> get_ParticipantTapAudioSource();

  /// @brief Method get_PlayerId, addr 0x1c15c64, size 0xb0, virtual false, abstract: false, final false
  inline ::StringW get_PlayerId();

  /// @brief Method get_SpeechDetected, addr 0x1c17200, size 0xa4, virtual false, abstract: false, final false
  inline bool get_SpeechDetected();

  /// @brief Method get_URI, addr 0x1c17024, size 0xb4, virtual false, abstract: false, final false
  inline ::StringW get_URI();

  /// @brief Method remove_ParticipantAudioEnergyChanged, addr 0x1c17708, size 0x9c, virtual false, abstract: false, final false
  inline void remove_ParticipantAudioEnergyChanged(::System::Action* value);

  /// @brief Method remove_ParticipantMuteStateChanged, addr 0x1c17498, size 0x9c, virtual false, abstract: false, final false
  inline void remove_ParticipantMuteStateChanged(::System::Action* value);

  /// @brief Method remove_ParticipantSpeechDetected, addr 0x1c175d0, size 0x9c, virtual false, abstract: false, final false
  inline void remove_ParticipantSpeechDetected(::System::Action* value);

  /// @brief Method set_ParticipantTapAudioSource, addr 0x1c173f4, size 0x8, virtual false, abstract: false, final false
  inline void set_ParticipantTapAudioSource(::UnityEngine::AudioSource* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VivoxParticipant();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VivoxParticipant", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VivoxParticipant(VivoxParticipant&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VivoxParticipant", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VivoxParticipant(VivoxParticipant const&) = delete;

  /// @brief Field m_VivoxService, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::IVivoxServiceInternal* ___m_VivoxService;

  /// @brief Field m_ParentParticipant, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::IParticipant* ___m_ParentParticipant;

  /// @brief Field m_ParticipantTapGameObject, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_ParticipantTapGameObject;

  /// @brief Field <ParticipantTapAudioSource>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ____ParticipantTapAudioSource_k__BackingField;

  /// @brief Field ParticipantMuteStateChanged, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ___ParticipantMuteStateChanged;

  /// @brief Field ParticipantSpeechDetected, offset: 0x38, size: 0x8, def value: None
  ::System::Action* ___ParticipantSpeechDetected;

  /// @brief Field ParticipantAudioEnergyChanged, offset: 0x40, size: 0x8, def value: None
  ::System::Action* ___ParticipantAudioEnergyChanged;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::VivoxParticipant, 0x48>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxParticipant, ___m_VivoxService) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxParticipant, ___m_ParentParticipant) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxParticipant, ___m_ParticipantTapGameObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxParticipant, ____ParticipantTapAudioSource_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxParticipant, ___ParticipantMuteStateChanged) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxParticipant, ___ParticipantSpeechDetected) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxParticipant, ___ParticipantAudioEnergyChanged) == 0x40, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::VivoxParticipant);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::VivoxParticipant*, "Unity.Services.Vivox", "VivoxParticipant");
