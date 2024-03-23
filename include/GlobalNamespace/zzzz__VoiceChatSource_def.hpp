#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VoiceChatSource)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class VoiceChatSource;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VoiceChatSource);
// Type: ::VoiceChatSource
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::VoiceChatSource*
class CORDL_TYPE VoiceChatSource : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field animateWithAudio, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_animateWithAudio, put = __cordl_internal_set_animateWithAudio)) bool animateWithAudio;

  /// @brief Field audioEnergyToScaleIncreaseRatio, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_audioEnergyToScaleIncreaseRatio, put = __cordl_internal_set_audioEnergyToScaleIncreaseRatio)) float_t audioEnergyToScaleIncreaseRatio;

  /// @brief Field curScaleBoost, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_curScaleBoost, put = __cordl_internal_set_curScaleBoost)) float_t curScaleBoost;

  /// @brief Field isActive, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_isActive, put = __cordl_internal_set_isActive)) bool isActive;

  /// @brief Field isMaster, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_isMaster, put = __cordl_internal_set_isMaster)) bool isMaster;

  /// @brief Field maxAudioEnergy, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_maxAudioEnergy, put = __cordl_internal_set_maxAudioEnergy)) float_t maxAudioEnergy;

  /// @brief Field registeredUserID, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_registeredUserID, put = __cordl_internal_set_registeredUserID))::StringW registeredUserID;

  /// @brief Field userID, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_userID, put = __cordl_internal_set_userID))::StringW userID;

  /// @brief Method Deregister, addr 0xf343ec, size 0x184, virtual false, abstract: false, final false
  inline void Deregister();

  /// @brief Method GetPosition, addr 0xf2f04c, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetPosition();

  /// @brief Method Initialize, addr 0xf34394, size 0x58, virtual false, abstract: false, final false
  inline void Initialize(bool isMaster, ::StringW userID, bool startsActive);

  static inline ::GlobalNamespace::VoiceChatSource* New_ctor();

  /// @brief Method OnDisable, addr 0xf347e8, size 0x10, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0xf347c8, size 0x20, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnSpeakingVolumeUpdated, addr 0xf347f8, size 0xd8, virtual false, abstract: false, final false
  inline void OnSpeakingVolumeUpdated(float_t volume);

  /// @brief Method Register, addr 0xf34638, size 0x190, virtual false, abstract: false, final false
  inline void Register();

  /// @brief Method SetActive, addr 0xf34570, size 0xc8, virtual false, abstract: false, final false
  inline void SetActive(bool newActive);

  constexpr bool const& __cordl_internal_get_animateWithAudio() const;

  constexpr bool& __cordl_internal_get_animateWithAudio();

  constexpr float_t const& __cordl_internal_get_audioEnergyToScaleIncreaseRatio() const;

  constexpr float_t& __cordl_internal_get_audioEnergyToScaleIncreaseRatio();

  constexpr float_t const& __cordl_internal_get_curScaleBoost() const;

  constexpr float_t& __cordl_internal_get_curScaleBoost();

  constexpr bool const& __cordl_internal_get_isActive() const;

  constexpr bool& __cordl_internal_get_isActive();

  constexpr bool const& __cordl_internal_get_isMaster() const;

  constexpr bool& __cordl_internal_get_isMaster();

  constexpr float_t const& __cordl_internal_get_maxAudioEnergy() const;

  constexpr float_t& __cordl_internal_get_maxAudioEnergy();

  constexpr ::StringW const& __cordl_internal_get_registeredUserID() const;

  constexpr ::StringW& __cordl_internal_get_registeredUserID();

  constexpr ::StringW const& __cordl_internal_get_userID() const;

  constexpr ::StringW& __cordl_internal_get_userID();

  constexpr void __cordl_internal_set_animateWithAudio(bool value);

  constexpr void __cordl_internal_set_audioEnergyToScaleIncreaseRatio(float_t value);

  constexpr void __cordl_internal_set_curScaleBoost(float_t value);

  constexpr void __cordl_internal_set_isActive(bool value);

  constexpr void __cordl_internal_set_isMaster(bool value);

  constexpr void __cordl_internal_set_maxAudioEnergy(float_t value);

  constexpr void __cordl_internal_set_registeredUserID(::StringW value);

  constexpr void __cordl_internal_set_userID(::StringW value);

  /// @brief Method .ctor, addr 0xf348d0, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VoiceChatSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VoiceChatSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VoiceChatSource(VoiceChatSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VoiceChatSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VoiceChatSource(VoiceChatSource const&) = delete;

  /// @brief Field isMaster, offset: 0x18, size: 0x1, def value: None
  bool ___isMaster;

  /// @brief Field userID, offset: 0x20, size: 0x8, def value: None
  ::StringW ___userID;

  /// @brief Field isActive, offset: 0x28, size: 0x1, def value: None
  bool ___isActive;

  /// @brief Field animateWithAudio, offset: 0x29, size: 0x1, def value: None
  bool ___animateWithAudio;

  /// @brief Field audioEnergyToScaleIncreaseRatio, offset: 0x2c, size: 0x4, def value: None
  float_t ___audioEnergyToScaleIncreaseRatio;

  /// @brief Field curScaleBoost, offset: 0x30, size: 0x4, def value: None
  float_t ___curScaleBoost;

  /// @brief Field maxAudioEnergy, offset: 0x34, size: 0x4, def value: None
  float_t ___maxAudioEnergy;

  /// @brief Field registeredUserID, offset: 0x38, size: 0x8, def value: None
  ::StringW ___registeredUserID;

  /// @brief Field scaleBoostLerpSpeed offset 0xffffffff size 0x4
  static constexpr float_t scaleBoostLerpSpeed{ 8.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VoiceChatSource, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceChatSource, ___isMaster) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceChatSource, ___userID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceChatSource, ___isActive) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceChatSource, ___animateWithAudio) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceChatSource, ___audioEnergyToScaleIncreaseRatio) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceChatSource, ___curScaleBoost) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceChatSource, ___maxAudioEnergy) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceChatSource, ___registeredUserID) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VoiceChatSource);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VoiceChatSource*, "", "VoiceChatSource");
