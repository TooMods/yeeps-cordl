#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SelfMuteButtonController)
namespace GlobalNamespace {
class ButtonController;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class SelfMuteButtonController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SelfMuteButtonController);
// Type: ::SelfMuteButtonController
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 69, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SelfMuteButtonController*
class CORDL_TYPE SelfMuteButtonController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field audioEnergyToScaleIncreaseRatio, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_audioEnergyToScaleIncreaseRatio, put = __cordl_internal_set_audioEnergyToScaleIncreaseRatio)) float_t audioEnergyToScaleIncreaseRatio;

  /// @brief Field buttonController, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_buttonController, put = __cordl_internal_set_buttonController))::UnityW<::GlobalNamespace::ButtonController> buttonController;

  /// @brief Field curFillRatio, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_curFillRatio, put = __cordl_internal_set_curFillRatio)) float_t curFillRatio;

  /// @brief Field isRegisteredForSpeakingVolume, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get_isRegisteredForSpeakingVolume, put = __cordl_internal_set_isRegisteredForSpeakingVolume)) bool isRegisteredForSpeakingVolume;

  /// @brief Field maxAudioEnergy, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_maxAudioEnergy, put = __cordl_internal_set_maxAudioEnergy)) float_t maxAudioEnergy;

  /// @brief Field selfMutedContainer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_selfMutedContainer, put = __cordl_internal_set_selfMutedContainer))::UnityW<::UnityEngine::GameObject> selfMutedContainer;

  /// @brief Field selfUnmutedContainer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_selfUnmutedContainer, put = __cordl_internal_set_selfUnmutedContainer))::UnityW<::UnityEngine::GameObject> selfUnmutedContainer;

  /// @brief Field volumeLevelImage, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_volumeLevelImage, put = __cordl_internal_set_volumeLevelImage))::UnityW<::UnityEngine::UI::Image> volumeLevelImage;

  static inline ::GlobalNamespace::SelfMuteButtonController* New_ctor();

  /// @brief Method OnDisable, addr 0xf248e0, size 0x1b4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0xf2448c, size 0x1a0, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnSelfMutedUpdated, addr 0xf246f0, size 0x1f0, virtual false, abstract: false, final false
  inline void OnSelfMutedUpdated(bool newSelfMuted);

  /// @brief Method OnSpeakingVolumeUpdated, addr 0xf24b58, size 0xb8, virtual false, abstract: false, final false
  inline void OnSpeakingVolumeUpdated(float_t volume);

  /// @brief Method OnToggleButtonPressed, addr 0xf24370, size 0x84, virtual false, abstract: false, final false
  inline void OnToggleButtonPressed();

  constexpr float_t const& __cordl_internal_get_audioEnergyToScaleIncreaseRatio() const;

  constexpr float_t& __cordl_internal_get_audioEnergyToScaleIncreaseRatio();

  constexpr ::UnityW<::GlobalNamespace::ButtonController> const& __cordl_internal_get_buttonController() const;

  constexpr ::UnityW<::GlobalNamespace::ButtonController>& __cordl_internal_get_buttonController();

  constexpr float_t const& __cordl_internal_get_curFillRatio() const;

  constexpr float_t& __cordl_internal_get_curFillRatio();

  constexpr bool const& __cordl_internal_get_isRegisteredForSpeakingVolume() const;

  constexpr bool& __cordl_internal_get_isRegisteredForSpeakingVolume();

  constexpr float_t const& __cordl_internal_get_maxAudioEnergy() const;

  constexpr float_t& __cordl_internal_get_maxAudioEnergy();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_selfMutedContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_selfMutedContainer();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_selfUnmutedContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_selfUnmutedContainer();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_volumeLevelImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_volumeLevelImage();

  constexpr void __cordl_internal_set_audioEnergyToScaleIncreaseRatio(float_t value);

  constexpr void __cordl_internal_set_buttonController(::UnityW<::GlobalNamespace::ButtonController> value);

  constexpr void __cordl_internal_set_curFillRatio(float_t value);

  constexpr void __cordl_internal_set_isRegisteredForSpeakingVolume(bool value);

  constexpr void __cordl_internal_set_maxAudioEnergy(float_t value);

  constexpr void __cordl_internal_set_selfMutedContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_selfUnmutedContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_volumeLevelImage(::UnityW<::UnityEngine::UI::Image> value);

  /// @brief Method .ctor, addr 0xf24c10, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelfMuteButtonController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SelfMuteButtonController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelfMuteButtonController(SelfMuteButtonController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelfMuteButtonController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelfMuteButtonController(SelfMuteButtonController const&) = delete;

  /// @brief Field buttonController, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ButtonController> ___buttonController;

  /// @brief Field selfMutedContainer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___selfMutedContainer;

  /// @brief Field selfUnmutedContainer, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___selfUnmutedContainer;

  /// @brief Field volumeLevelImage, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___volumeLevelImage;

  /// @brief Field audioEnergyToScaleIncreaseRatio, offset: 0x38, size: 0x4, def value: None
  float_t ___audioEnergyToScaleIncreaseRatio;

  /// @brief Field curFillRatio, offset: 0x3c, size: 0x4, def value: None
  float_t ___curFillRatio;

  /// @brief Field maxAudioEnergy, offset: 0x40, size: 0x4, def value: None
  float_t ___maxAudioEnergy;

  /// @brief Field isRegisteredForSpeakingVolume, offset: 0x44, size: 0x1, def value: None
  bool ___isRegisteredForSpeakingVolume;

  /// @brief Field fillLerpSpeed offset 0xffffffff size 0x4
  static constexpr float_t fillLerpSpeed{ 8.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelfMuteButtonController, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SelfMuteButtonController, ___buttonController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelfMuteButtonController, ___selfMutedContainer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelfMuteButtonController, ___selfUnmutedContainer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelfMuteButtonController, ___volumeLevelImage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelfMuteButtonController, ___audioEnergyToScaleIncreaseRatio) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelfMuteButtonController, ___curFillRatio) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelfMuteButtonController, ___maxAudioEnergy) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelfMuteButtonController, ___isRegisteredForSpeakingVolume) == 0x44, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SelfMuteButtonController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelfMuteButtonController*, "", "SelfMuteButtonController");
