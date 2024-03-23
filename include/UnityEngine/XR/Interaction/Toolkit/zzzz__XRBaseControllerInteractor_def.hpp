#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__TargetPriorityMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseControllerInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseInteractor_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRBaseControllerInteractor)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling {
template <typename T> class LinkedPool_1;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class ActivateEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class DeactivateEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverExitEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRActivateInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRActivateInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRHoverInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectExitEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct TargetPriorityMode;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRBaseController;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRBaseInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRBaseControllerInteractor__InputTriggerType;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class __XRBaseControllerInteractor____c;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRInteractionUpdateOrder__UpdatePhase;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRBaseControllerInteractor__InputTriggerType;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRBaseControllerInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class __XRBaseControllerInteractor____c;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor__InputTriggerType);
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor);
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c);
// Type: ::InputTriggerType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: true
// CS Name: ::XRBaseControllerInteractor::InputTriggerType
struct CORDL_TYPE __XRBaseControllerInteractor__InputTriggerType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XRBaseControllerInteractor__InputTriggerType_Unwrapped
  enum struct ____XRBaseControllerInteractor__InputTriggerType_Unwrapped : int32_t {
    __E_State = static_cast<int32_t>(0x0),
    __E_StateChange = static_cast<int32_t>(0x1),
    __E_Toggle = static_cast<int32_t>(0x2),
    __E_Sticky = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XRBaseControllerInteractor__InputTriggerType_Unwrapped() const noexcept {
    return static_cast<____XRBaseControllerInteractor__InputTriggerType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRBaseControllerInteractor__InputTriggerType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XRBaseControllerInteractor__InputTriggerType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field State value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor__InputTriggerType const State;

  /// @brief Field StateChange value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor__InputTriggerType const StateChange;

  /// @brief Field Sticky value: static_cast<int32_t>(0x3)
  static ::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor__InputTriggerType const Sticky;

  /// @brief Field Toggle value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor__InputTriggerType const Toggle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor__InputTriggerType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor__InputTriggerType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::XRBaseControllerInteractor::<>c*
class CORDL_TYPE __XRBaseControllerInteractor____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c* __9;

  /// @brief Field <>9__223_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__223_0, put = setStaticF___9__223_0))::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>* __9__223_0;

  /// @brief Field <>9__223_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__223_1, put = setStaticF___9__223_1))::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>* __9__223_1;

  static inline ::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c* New_ctor();

  /// @brief Method <.ctor>b__223_0, addr 0x2cea250, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs* __ctor_b__223_0();

  /// @brief Method <.ctor>b__223_1, addr 0x2cea2b4, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs* __ctor_b__223_1();

  /// @brief Method .ctor, addr 0x2cea248, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c* getStaticF___9();

  static inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>* getStaticF___9__223_0();

  static inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>* getStaticF___9__223_1();

  static inline void setStaticF___9(::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c* value);

  static inline void setStaticF___9__223_0(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>* value);

  static inline void setStaticF___9__223_1(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRBaseControllerInteractor____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XRBaseControllerInteractor____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XRBaseControllerInteractor____c(__XRBaseControllerInteractor____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XRBaseControllerInteractor____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XRBaseControllerInteractor____c(__XRBaseControllerInteractor____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
// Type: UnityEngine.XR.Interaction.Toolkit::XRBaseControllerInteractor
// SizeInfo { instance_size: 632, native_size: -1, calculated_instance_size: 632, calculated_native_size: 632, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::XRBaseControllerInteractor*
class CORDL_TYPE XRBaseControllerInteractor : public ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor {
public:
  // Declarations
  using InputTriggerType = ::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor__InputTriggerType;

  using __c = ::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c;

  __declspec(property(get = get_AudioClipForOnHoverEnter, put = set_AudioClipForOnHoverEnter))::UnityW<::UnityEngine::AudioClip> AudioClipForOnHoverEnter;

  __declspec(property(get = get_AudioClipForOnHoverExit, put = set_AudioClipForOnHoverExit))::UnityW<::UnityEngine::AudioClip> AudioClipForOnHoverExit;

  __declspec(property(get = get_AudioClipForOnSelectEnter, put = set_AudioClipForOnSelectEnter))::UnityW<::UnityEngine::AudioClip> AudioClipForOnSelectEnter;

  __declspec(property(get = get_AudioClipForOnSelectExit, put = set_AudioClipForOnSelectExit))::UnityW<::UnityEngine::AudioClip> AudioClipForOnSelectExit;

  /// @brief Field <validTargets>k__BackingField, offset 0x270, size 0x8
  __declspec(property(get = __cordl_internal_get__validTargets_k__BackingField, put = __cordl_internal_set__validTargets_k__BackingField))::System::Collections::Generic::List_1<
      ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>* _validTargets_k__BackingField;

  __declspec(property(get = get_allowActivate, put = set_allowActivate)) bool allowActivate;

  __declspec(property(get = get_allowHoverAudioWhileSelecting, put = set_allowHoverAudioWhileSelecting)) bool allowHoverAudioWhileSelecting;

  __declspec(property(get = get_allowHoverHapticsWhileSelecting, put = set_allowHoverHapticsWhileSelecting)) bool allowHoverHapticsWhileSelecting;

  __declspec(property(get = get_allowHoveredActivate, put = set_allowHoveredActivate)) bool allowHoveredActivate;

  __declspec(property(get = get_audioClipForOnHoverCanceled, put = set_audioClipForOnHoverCanceled))::UnityW<::UnityEngine::AudioClip> audioClipForOnHoverCanceled;

  __declspec(property(get = get_audioClipForOnHoverEnter))::UnityW<::UnityEngine::AudioClip> audioClipForOnHoverEnter;

  __declspec(property(get = get_audioClipForOnHoverEntered, put = set_audioClipForOnHoverEntered))::UnityW<::UnityEngine::AudioClip> audioClipForOnHoverEntered;

  __declspec(property(get = get_audioClipForOnHoverExit))::UnityW<::UnityEngine::AudioClip> audioClipForOnHoverExit;

  __declspec(property(get = get_audioClipForOnHoverExited, put = set_audioClipForOnHoverExited))::UnityW<::UnityEngine::AudioClip> audioClipForOnHoverExited;

  __declspec(property(get = get_audioClipForOnSelectCanceled, put = set_audioClipForOnSelectCanceled))::UnityW<::UnityEngine::AudioClip> audioClipForOnSelectCanceled;

  __declspec(property(get = get_audioClipForOnSelectEnter))::UnityW<::UnityEngine::AudioClip> audioClipForOnSelectEnter;

  __declspec(property(get = get_audioClipForOnSelectEntered, put = set_audioClipForOnSelectEntered))::UnityW<::UnityEngine::AudioClip> audioClipForOnSelectEntered;

  __declspec(property(get = get_audioClipForOnSelectExit))::UnityW<::UnityEngine::AudioClip> audioClipForOnSelectExit;

  __declspec(property(get = get_audioClipForOnSelectExited, put = set_audioClipForOnSelectExited))::UnityW<::UnityEngine::AudioClip> audioClipForOnSelectExited;

  __declspec(property(get = get_hapticHoverCancelDuration, put = set_hapticHoverCancelDuration)) float_t hapticHoverCancelDuration;

  __declspec(property(get = get_hapticHoverCancelIntensity, put = set_hapticHoverCancelIntensity)) float_t hapticHoverCancelIntensity;

  __declspec(property(get = get_hapticHoverEnterDuration, put = set_hapticHoverEnterDuration)) float_t hapticHoverEnterDuration;

  __declspec(property(get = get_hapticHoverEnterIntensity, put = set_hapticHoverEnterIntensity)) float_t hapticHoverEnterIntensity;

  __declspec(property(get = get_hapticHoverExitDuration, put = set_hapticHoverExitDuration)) float_t hapticHoverExitDuration;

  __declspec(property(get = get_hapticHoverExitIntensity, put = set_hapticHoverExitIntensity)) float_t hapticHoverExitIntensity;

  __declspec(property(get = get_hapticSelectCancelDuration, put = set_hapticSelectCancelDuration)) float_t hapticSelectCancelDuration;

  __declspec(property(get = get_hapticSelectCancelIntensity, put = set_hapticSelectCancelIntensity)) float_t hapticSelectCancelIntensity;

  __declspec(property(get = get_hapticSelectEnterDuration, put = set_hapticSelectEnterDuration)) float_t hapticSelectEnterDuration;

  __declspec(property(get = get_hapticSelectEnterIntensity, put = set_hapticSelectEnterIntensity)) float_t hapticSelectEnterIntensity;

  __declspec(property(get = get_hapticSelectExitDuration, put = set_hapticSelectExitDuration)) float_t hapticSelectExitDuration;

  __declspec(property(get = get_hapticSelectExitIntensity, put = set_hapticSelectExitIntensity)) float_t hapticSelectExitIntensity;

  __declspec(property(get = get_hideControllerOnSelect, put = set_hideControllerOnSelect)) bool hideControllerOnSelect;

  __declspec(property(get = get_isSelectActive)) bool isSelectActive;

  __declspec(property(get = get_isUISelectActive)) bool isUISelectActive;

  /// @brief Field m_ActivateEventArgs, offset 0x250, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActivateEventArgs, put = __cordl_internal_set_m_ActivateEventArgs))::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<
      ::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>* m_ActivateEventArgs;

  /// @brief Field m_AllowActivate, offset 0x241, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AllowActivate, put = __cordl_internal_set_m_AllowActivate)) bool m_AllowActivate;

  /// @brief Field m_AllowHoverAudioWhileSelecting, offset 0x1f8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AllowHoverAudioWhileSelecting, put = __cordl_internal_set_m_AllowHoverAudioWhileSelecting)) bool m_AllowHoverAudioWhileSelecting;

  /// @brief Field m_AllowHoverHapticsWhileSelecting, offset 0x240, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AllowHoverHapticsWhileSelecting, put = __cordl_internal_set_m_AllowHoverHapticsWhileSelecting)) bool m_AllowHoverHapticsWhileSelecting;

  /// @brief Field m_AllowHoveredActivate, offset 0x195, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AllowHoveredActivate, put = __cordl_internal_set_m_AllowHoveredActivate)) bool m_AllowHoveredActivate;

  /// @brief Field m_AudioClipForOnHoverCanceled, offset 0x1f0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AudioClipForOnHoverCanceled,
                      put = __cordl_internal_set_m_AudioClipForOnHoverCanceled))::UnityW<::UnityEngine::AudioClip> m_AudioClipForOnHoverCanceled;

  /// @brief Field m_AudioClipForOnHoverEntered, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AudioClipForOnHoverEntered, put = __cordl_internal_set_m_AudioClipForOnHoverEntered))::UnityW<::UnityEngine::AudioClip> m_AudioClipForOnHoverEntered;

  /// @brief Field m_AudioClipForOnHoverExited, offset 0x1e0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AudioClipForOnHoverExited, put = __cordl_internal_set_m_AudioClipForOnHoverExited))::UnityW<::UnityEngine::AudioClip> m_AudioClipForOnHoverExited;

  /// @brief Field m_AudioClipForOnSelectCanceled, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AudioClipForOnSelectCanceled,
                      put = __cordl_internal_set_m_AudioClipForOnSelectCanceled))::UnityW<::UnityEngine::AudioClip> m_AudioClipForOnSelectCanceled;

  /// @brief Field m_AudioClipForOnSelectEntered, offset 0x1a0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AudioClipForOnSelectEntered,
                      put = __cordl_internal_set_m_AudioClipForOnSelectEntered))::UnityW<::UnityEngine::AudioClip> m_AudioClipForOnSelectEntered;

  /// @brief Field m_AudioClipForOnSelectExited, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AudioClipForOnSelectExited, put = __cordl_internal_set_m_AudioClipForOnSelectExited))::UnityW<::UnityEngine::AudioClip> m_AudioClipForOnSelectExited;

  /// @brief Field m_Controller, offset 0x248, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Controller, put = __cordl_internal_set_m_Controller))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController> m_Controller;

  /// @brief Field m_DeactivateEventArgs, offset 0x258, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DeactivateEventArgs, put = __cordl_internal_set_m_DeactivateEventArgs))::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<
      ::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>* m_DeactivateEventArgs;

  /// @brief Field m_EffectsAudioSource, offset 0x268, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EffectsAudioSource, put = __cordl_internal_set_m_EffectsAudioSource))::UnityW<::UnityEngine::AudioSource> m_EffectsAudioSource;

  /// @brief Field m_HapticHoverCancelDuration, offset 0x23c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HapticHoverCancelDuration, put = __cordl_internal_set_m_HapticHoverCancelDuration)) float_t m_HapticHoverCancelDuration;

  /// @brief Field m_HapticHoverCancelIntensity, offset 0x238, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HapticHoverCancelIntensity, put = __cordl_internal_set_m_HapticHoverCancelIntensity)) float_t m_HapticHoverCancelIntensity;

  /// @brief Field m_HapticHoverEnterDuration, offset 0x224, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HapticHoverEnterDuration, put = __cordl_internal_set_m_HapticHoverEnterDuration)) float_t m_HapticHoverEnterDuration;

  /// @brief Field m_HapticHoverEnterIntensity, offset 0x220, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HapticHoverEnterIntensity, put = __cordl_internal_set_m_HapticHoverEnterIntensity)) float_t m_HapticHoverEnterIntensity;

  /// @brief Field m_HapticHoverExitDuration, offset 0x230, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HapticHoverExitDuration, put = __cordl_internal_set_m_HapticHoverExitDuration)) float_t m_HapticHoverExitDuration;

  /// @brief Field m_HapticHoverExitIntensity, offset 0x22c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HapticHoverExitIntensity, put = __cordl_internal_set_m_HapticHoverExitIntensity)) float_t m_HapticHoverExitIntensity;

  /// @brief Field m_HapticSelectCancelDuration, offset 0x218, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HapticSelectCancelDuration, put = __cordl_internal_set_m_HapticSelectCancelDuration)) float_t m_HapticSelectCancelDuration;

  /// @brief Field m_HapticSelectCancelIntensity, offset 0x214, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HapticSelectCancelIntensity, put = __cordl_internal_set_m_HapticSelectCancelIntensity)) float_t m_HapticSelectCancelIntensity;

  /// @brief Field m_HapticSelectEnterDuration, offset 0x200, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HapticSelectEnterDuration, put = __cordl_internal_set_m_HapticSelectEnterDuration)) float_t m_HapticSelectEnterDuration;

  /// @brief Field m_HapticSelectEnterIntensity, offset 0x1fc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HapticSelectEnterIntensity, put = __cordl_internal_set_m_HapticSelectEnterIntensity)) float_t m_HapticSelectEnterIntensity;

  /// @brief Field m_HapticSelectExitDuration, offset 0x20c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HapticSelectExitDuration, put = __cordl_internal_set_m_HapticSelectExitDuration)) float_t m_HapticSelectExitDuration;

  /// @brief Field m_HapticSelectExitIntensity, offset 0x208, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HapticSelectExitIntensity, put = __cordl_internal_set_m_HapticSelectExitIntensity)) float_t m_HapticSelectExitIntensity;

  /// @brief Field m_HideControllerOnSelect, offset 0x194, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HideControllerOnSelect, put = __cordl_internal_set_m_HideControllerOnSelect)) bool m_HideControllerOnSelect;

  /// @brief Field m_PlayAudioClipOnHoverCanceled, offset 0x1e8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_PlayAudioClipOnHoverCanceled, put = __cordl_internal_set_m_PlayAudioClipOnHoverCanceled)) bool m_PlayAudioClipOnHoverCanceled;

  /// @brief Field m_PlayAudioClipOnHoverEntered, offset 0x1c8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_PlayAudioClipOnHoverEntered, put = __cordl_internal_set_m_PlayAudioClipOnHoverEntered)) bool m_PlayAudioClipOnHoverEntered;

  /// @brief Field m_PlayAudioClipOnHoverExited, offset 0x1d8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_PlayAudioClipOnHoverExited, put = __cordl_internal_set_m_PlayAudioClipOnHoverExited)) bool m_PlayAudioClipOnHoverExited;

  /// @brief Field m_PlayAudioClipOnSelectCanceled, offset 0x1b8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_PlayAudioClipOnSelectCanceled, put = __cordl_internal_set_m_PlayAudioClipOnSelectCanceled)) bool m_PlayAudioClipOnSelectCanceled;

  /// @brief Field m_PlayAudioClipOnSelectEntered, offset 0x19c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_PlayAudioClipOnSelectEntered, put = __cordl_internal_set_m_PlayAudioClipOnSelectEntered)) bool m_PlayAudioClipOnSelectEntered;

  /// @brief Field m_PlayAudioClipOnSelectExited, offset 0x1a8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_PlayAudioClipOnSelectExited, put = __cordl_internal_set_m_PlayAudioClipOnSelectExited)) bool m_PlayAudioClipOnSelectExited;

  /// @brief Field m_PlayHapticsOnHoverCanceled, offset 0x234, size 0x1
  __declspec(property(get = __cordl_internal_get_m_PlayHapticsOnHoverCanceled, put = __cordl_internal_set_m_PlayHapticsOnHoverCanceled)) bool m_PlayHapticsOnHoverCanceled;

  /// @brief Field m_PlayHapticsOnHoverEntered, offset 0x21c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_PlayHapticsOnHoverEntered, put = __cordl_internal_set_m_PlayHapticsOnHoverEntered)) bool m_PlayHapticsOnHoverEntered;

  /// @brief Field m_PlayHapticsOnHoverExited, offset 0x228, size 0x1
  __declspec(property(get = __cordl_internal_get_m_PlayHapticsOnHoverExited, put = __cordl_internal_set_m_PlayHapticsOnHoverExited)) bool m_PlayHapticsOnHoverExited;

  /// @brief Field m_PlayHapticsOnSelectCanceled, offset 0x210, size 0x1
  __declspec(property(get = __cordl_internal_get_m_PlayHapticsOnSelectCanceled, put = __cordl_internal_set_m_PlayHapticsOnSelectCanceled)) bool m_PlayHapticsOnSelectCanceled;

  /// @brief Field m_PlayHapticsOnSelectEntered, offset 0x1f9, size 0x1
  __declspec(property(get = __cordl_internal_get_m_PlayHapticsOnSelectEntered, put = __cordl_internal_set_m_PlayHapticsOnSelectEntered)) bool m_PlayHapticsOnSelectEntered;

  /// @brief Field m_PlayHapticsOnSelectExited, offset 0x204, size 0x1
  __declspec(property(get = __cordl_internal_get_m_PlayHapticsOnSelectExited, put = __cordl_internal_set_m_PlayHapticsOnSelectExited)) bool m_PlayHapticsOnSelectExited;

  /// @brief Field m_SelectActionTrigger, offset 0x190, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SelectActionTrigger,
                      put = __cordl_internal_set_m_SelectActionTrigger))::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor__InputTriggerType m_SelectActionTrigger;

  /// @brief Field m_TargetPriorityMode, offset 0x198, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TargetPriorityMode,
                      put = __cordl_internal_set_m_TargetPriorityMode))::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode m_TargetPriorityMode;

  /// @brief Field m_ToggleSelectActive, offset 0x260, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ToggleSelectActive, put = __cordl_internal_set_m_ToggleSelectActive)) bool m_ToggleSelectActive;

  /// @brief Field m_ToggleSelectDeactivatedThisFrame, offset 0x261, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ToggleSelectDeactivatedThisFrame, put = __cordl_internal_set_m_ToggleSelectDeactivatedThisFrame)) bool m_ToggleSelectDeactivatedThisFrame;

  /// @brief Field m_WaitingForSelectDeactivate, offset 0x262, size 0x1
  __declspec(property(get = __cordl_internal_get_m_WaitingForSelectDeactivate, put = __cordl_internal_set_m_WaitingForSelectDeactivate)) bool m_WaitingForSelectDeactivate;

  __declspec(property(get = get_playAudioClipOnHoverCanceled, put = set_playAudioClipOnHoverCanceled)) bool playAudioClipOnHoverCanceled;

  __declspec(property(get = get_playAudioClipOnHoverEnter)) bool playAudioClipOnHoverEnter;

  __declspec(property(get = get_playAudioClipOnHoverEntered, put = set_playAudioClipOnHoverEntered)) bool playAudioClipOnHoverEntered;

  __declspec(property(get = get_playAudioClipOnHoverExit)) bool playAudioClipOnHoverExit;

  __declspec(property(get = get_playAudioClipOnHoverExited, put = set_playAudioClipOnHoverExited)) bool playAudioClipOnHoverExited;

  __declspec(property(get = get_playAudioClipOnSelectCanceled, put = set_playAudioClipOnSelectCanceled)) bool playAudioClipOnSelectCanceled;

  __declspec(property(get = get_playAudioClipOnSelectEnter)) bool playAudioClipOnSelectEnter;

  __declspec(property(get = get_playAudioClipOnSelectEntered, put = set_playAudioClipOnSelectEntered)) bool playAudioClipOnSelectEntered;

  __declspec(property(get = get_playAudioClipOnSelectExit)) bool playAudioClipOnSelectExit;

  __declspec(property(get = get_playAudioClipOnSelectExited, put = set_playAudioClipOnSelectExited)) bool playAudioClipOnSelectExited;

  __declspec(property(get = get_playHapticsOnHoverCanceled, put = set_playHapticsOnHoverCanceled)) bool playHapticsOnHoverCanceled;

  __declspec(property(get = get_playHapticsOnHoverEnter)) bool playHapticsOnHoverEnter;

  __declspec(property(get = get_playHapticsOnHoverEntered, put = set_playHapticsOnHoverEntered)) bool playHapticsOnHoverEntered;

  __declspec(property(get = get_playHapticsOnHoverExited, put = set_playHapticsOnHoverExited)) bool playHapticsOnHoverExited;

  __declspec(property(get = get_playHapticsOnSelectCanceled, put = set_playHapticsOnSelectCanceled)) bool playHapticsOnSelectCanceled;

  __declspec(property(get = get_playHapticsOnSelectEnter)) bool playHapticsOnSelectEnter;

  __declspec(property(get = get_playHapticsOnSelectEntered, put = set_playHapticsOnSelectEntered)) bool playHapticsOnSelectEntered;

  __declspec(property(get = get_playHapticsOnSelectExit)) bool playHapticsOnSelectExit;

  __declspec(property(get = get_playHapticsOnSelectExited, put = set_playHapticsOnSelectExited)) bool playHapticsOnSelectExited;

  /// @brief Field s_ActivateTargets, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ActivateTargets,
                             put = setStaticF_s_ActivateTargets))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable*>* s_ActivateTargets;

  __declspec(property(get = get_selectActionTrigger, put = set_selectActionTrigger))::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor__InputTriggerType selectActionTrigger;

  __declspec(property(get = get_shouldActivate)) bool shouldActivate;

  __declspec(property(get = get_shouldDeactivate)) bool shouldDeactivate;

  __declspec(property(get = get_targetPriorityMode, put = set_targetPriorityMode))::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode targetPriorityMode;

  __declspec(property(get = get_validTargets))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>* validTargets;

  __declspec(property(get = get_xrController, put = set_xrController))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController> xrController;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractor"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractor*() noexcept;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXRInteractor"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*() noexcept;

  /// @brief Method Awake, addr 0x25ab158, size 0x1ec, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method CanPlayHoverAudio, addr 0x25ac7f0, size 0x2c, virtual false, abstract: false, final false
  inline bool CanPlayHoverAudio(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* hoveredInteractable);

  /// @brief Method CanPlayHoverHaptics, addr 0x25ac7c4, size 0x2c, virtual false, abstract: false, final false
  inline bool CanPlayHoverHaptics(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* hoveredInteractable);

  /// @brief Method CreateEffectsAudioSource, addr 0x25ab3a0, size 0x80, virtual false, abstract: false, final false
  inline void CreateEffectsAudioSource();

  /// @brief Method FindControllerComponent, addr 0x25ab344, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController> FindControllerComponent();

  /// @brief Method GetActivateTargets, addr 0x25ac08c, size 0x3a0, virtual true, abstract: false, final false
  inline void GetActivateTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable*>* targets);

  /// @brief Method HandleDeselecting, addr 0x25ac674, size 0x9c, virtual false, abstract: false, final false
  inline void HandleDeselecting();

  /// @brief Method HandleSelecting, addr 0x25ac488, size 0x98, virtual false, abstract: false, final false
  inline void HandleSelecting();

  static inline ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor* New_ctor();

  /// @brief Method OnHoverEntering, addr 0x25ac710, size 0xb4, virtual true, abstract: false, final false
  inline void OnHoverEntering(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs* args);

  /// @brief Method OnHoverExiting, addr 0x25ac81c, size 0x120, virtual true, abstract: false, final false
  inline void OnHoverExiting(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs* args);

  /// @brief Method OnSelectEntering, addr 0x25ac42c, size 0x5c, virtual true, abstract: false, final false
  inline void OnSelectEntering(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* args);

  /// @brief Method OnSelectExiting, addr 0x25ac5cc, size 0xa8, virtual true, abstract: false, final false
  inline void OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* args);

  /// @brief Method PlayAudio, addr 0x25ac93c, size 0xc4, virtual true, abstract: false, final false
  inline void PlayAudio(::UnityEngine::AudioClip* audioClip);

  /// @brief Method PreprocessInteractor, addr 0x25ab420, size 0xd8, virtual true, abstract: false, final false
  inline void PreprocessInteractor(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase);

  /// @brief Method ProcessInteractor, addr 0x25ab4f8, size 0x130, virtual true, abstract: false, final false
  inline void ProcessInteractor(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase);

  /// @brief Method SendActivateEvent, addr 0x25ab628, size 0x348, virtual false, abstract: false, final false
  inline void SendActivateEvent(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable*>* targets);

  /// @brief Method SendDeactivateEvent, addr 0x25ab970, size 0x348, virtual false, abstract: false, final false
  inline void SendDeactivateEvent(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable*>* targets);

  /// @brief Method SendHapticImpulse, addr 0x25ac520, size 0xac, virtual false, abstract: false, final false
  inline bool SendHapticImpulse(float_t amplitude, float_t duration);

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRInteractor.get_transform, addr 0x25acdcc, size 0x1008, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Transform> UnityEngine_XR_Interaction_Toolkit_IXRInteractor_get_transform();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>*& __cordl_internal_get__validTargets_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>*> const&
  __cordl_internal_get__validTargets_k__BackingField() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>*& __cordl_internal_get_m_ActivateEventArgs();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>*> const&
  __cordl_internal_get_m_ActivateEventArgs() const;

  constexpr bool const& __cordl_internal_get_m_AllowActivate() const;

  constexpr bool& __cordl_internal_get_m_AllowActivate();

  constexpr bool const& __cordl_internal_get_m_AllowHoverAudioWhileSelecting() const;

  constexpr bool& __cordl_internal_get_m_AllowHoverAudioWhileSelecting();

  constexpr bool const& __cordl_internal_get_m_AllowHoverHapticsWhileSelecting() const;

  constexpr bool& __cordl_internal_get_m_AllowHoverHapticsWhileSelecting();

  constexpr bool const& __cordl_internal_get_m_AllowHoveredActivate() const;

  constexpr bool& __cordl_internal_get_m_AllowHoveredActivate();

  constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_m_AudioClipForOnHoverCanceled() const;

  constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_m_AudioClipForOnHoverCanceled();

  constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_m_AudioClipForOnHoverEntered() const;

  constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_m_AudioClipForOnHoverEntered();

  constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_m_AudioClipForOnHoverExited() const;

  constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_m_AudioClipForOnHoverExited();

  constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_m_AudioClipForOnSelectCanceled() const;

  constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_m_AudioClipForOnSelectCanceled();

  constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_m_AudioClipForOnSelectEntered() const;

  constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_m_AudioClipForOnSelectEntered();

  constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_m_AudioClipForOnSelectExited() const;

  constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_m_AudioClipForOnSelectExited();

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController> const& __cordl_internal_get_m_Controller() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>& __cordl_internal_get_m_Controller();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>*& __cordl_internal_get_m_DeactivateEventArgs();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>*> const&
  __cordl_internal_get_m_DeactivateEventArgs() const;

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_m_EffectsAudioSource() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_m_EffectsAudioSource();

  constexpr float_t const& __cordl_internal_get_m_HapticHoverCancelDuration() const;

  constexpr float_t& __cordl_internal_get_m_HapticHoverCancelDuration();

  constexpr float_t const& __cordl_internal_get_m_HapticHoverCancelIntensity() const;

  constexpr float_t& __cordl_internal_get_m_HapticHoverCancelIntensity();

  constexpr float_t const& __cordl_internal_get_m_HapticHoverEnterDuration() const;

  constexpr float_t& __cordl_internal_get_m_HapticHoverEnterDuration();

  constexpr float_t const& __cordl_internal_get_m_HapticHoverEnterIntensity() const;

  constexpr float_t& __cordl_internal_get_m_HapticHoverEnterIntensity();

  constexpr float_t const& __cordl_internal_get_m_HapticHoverExitDuration() const;

  constexpr float_t& __cordl_internal_get_m_HapticHoverExitDuration();

  constexpr float_t const& __cordl_internal_get_m_HapticHoverExitIntensity() const;

  constexpr float_t& __cordl_internal_get_m_HapticHoverExitIntensity();

  constexpr float_t const& __cordl_internal_get_m_HapticSelectCancelDuration() const;

  constexpr float_t& __cordl_internal_get_m_HapticSelectCancelDuration();

  constexpr float_t const& __cordl_internal_get_m_HapticSelectCancelIntensity() const;

  constexpr float_t& __cordl_internal_get_m_HapticSelectCancelIntensity();

  constexpr float_t const& __cordl_internal_get_m_HapticSelectEnterDuration() const;

  constexpr float_t& __cordl_internal_get_m_HapticSelectEnterDuration();

  constexpr float_t const& __cordl_internal_get_m_HapticSelectEnterIntensity() const;

  constexpr float_t& __cordl_internal_get_m_HapticSelectEnterIntensity();

  constexpr float_t const& __cordl_internal_get_m_HapticSelectExitDuration() const;

  constexpr float_t& __cordl_internal_get_m_HapticSelectExitDuration();

  constexpr float_t const& __cordl_internal_get_m_HapticSelectExitIntensity() const;

  constexpr float_t& __cordl_internal_get_m_HapticSelectExitIntensity();

  constexpr bool const& __cordl_internal_get_m_HideControllerOnSelect() const;

  constexpr bool& __cordl_internal_get_m_HideControllerOnSelect();

  constexpr bool const& __cordl_internal_get_m_PlayAudioClipOnHoverCanceled() const;

  constexpr bool& __cordl_internal_get_m_PlayAudioClipOnHoverCanceled();

  constexpr bool const& __cordl_internal_get_m_PlayAudioClipOnHoverEntered() const;

  constexpr bool& __cordl_internal_get_m_PlayAudioClipOnHoverEntered();

  constexpr bool const& __cordl_internal_get_m_PlayAudioClipOnHoverExited() const;

  constexpr bool& __cordl_internal_get_m_PlayAudioClipOnHoverExited();

  constexpr bool const& __cordl_internal_get_m_PlayAudioClipOnSelectCanceled() const;

  constexpr bool& __cordl_internal_get_m_PlayAudioClipOnSelectCanceled();

  constexpr bool const& __cordl_internal_get_m_PlayAudioClipOnSelectEntered() const;

  constexpr bool& __cordl_internal_get_m_PlayAudioClipOnSelectEntered();

  constexpr bool const& __cordl_internal_get_m_PlayAudioClipOnSelectExited() const;

  constexpr bool& __cordl_internal_get_m_PlayAudioClipOnSelectExited();

  constexpr bool const& __cordl_internal_get_m_PlayHapticsOnHoverCanceled() const;

  constexpr bool& __cordl_internal_get_m_PlayHapticsOnHoverCanceled();

  constexpr bool const& __cordl_internal_get_m_PlayHapticsOnHoverEntered() const;

  constexpr bool& __cordl_internal_get_m_PlayHapticsOnHoverEntered();

  constexpr bool const& __cordl_internal_get_m_PlayHapticsOnHoverExited() const;

  constexpr bool& __cordl_internal_get_m_PlayHapticsOnHoverExited();

  constexpr bool const& __cordl_internal_get_m_PlayHapticsOnSelectCanceled() const;

  constexpr bool& __cordl_internal_get_m_PlayHapticsOnSelectCanceled();

  constexpr bool const& __cordl_internal_get_m_PlayHapticsOnSelectEntered() const;

  constexpr bool& __cordl_internal_get_m_PlayHapticsOnSelectEntered();

  constexpr bool const& __cordl_internal_get_m_PlayHapticsOnSelectExited() const;

  constexpr bool& __cordl_internal_get_m_PlayHapticsOnSelectExited();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor__InputTriggerType const& __cordl_internal_get_m_SelectActionTrigger() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor__InputTriggerType& __cordl_internal_get_m_SelectActionTrigger();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode const& __cordl_internal_get_m_TargetPriorityMode() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode& __cordl_internal_get_m_TargetPriorityMode();

  constexpr bool const& __cordl_internal_get_m_ToggleSelectActive() const;

  constexpr bool& __cordl_internal_get_m_ToggleSelectActive();

  constexpr bool const& __cordl_internal_get_m_ToggleSelectDeactivatedThisFrame() const;

  constexpr bool& __cordl_internal_get_m_ToggleSelectDeactivatedThisFrame();

  constexpr bool const& __cordl_internal_get_m_WaitingForSelectDeactivate() const;

  constexpr bool& __cordl_internal_get_m_WaitingForSelectDeactivate();

  constexpr void __cordl_internal_set__validTargets_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>* value);

  constexpr void
  __cordl_internal_set_m_ActivateEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>* value);

  constexpr void __cordl_internal_set_m_AllowActivate(bool value);

  constexpr void __cordl_internal_set_m_AllowHoverAudioWhileSelecting(bool value);

  constexpr void __cordl_internal_set_m_AllowHoverHapticsWhileSelecting(bool value);

  constexpr void __cordl_internal_set_m_AllowHoveredActivate(bool value);

  constexpr void __cordl_internal_set_m_AudioClipForOnHoverCanceled(::UnityW<::UnityEngine::AudioClip> value);

  constexpr void __cordl_internal_set_m_AudioClipForOnHoverEntered(::UnityW<::UnityEngine::AudioClip> value);

  constexpr void __cordl_internal_set_m_AudioClipForOnHoverExited(::UnityW<::UnityEngine::AudioClip> value);

  constexpr void __cordl_internal_set_m_AudioClipForOnSelectCanceled(::UnityW<::UnityEngine::AudioClip> value);

  constexpr void __cordl_internal_set_m_AudioClipForOnSelectEntered(::UnityW<::UnityEngine::AudioClip> value);

  constexpr void __cordl_internal_set_m_AudioClipForOnSelectExited(::UnityW<::UnityEngine::AudioClip> value);

  constexpr void __cordl_internal_set_m_Controller(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController> value);

  constexpr void
  __cordl_internal_set_m_DeactivateEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>* value);

  constexpr void __cordl_internal_set_m_EffectsAudioSource(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set_m_HapticHoverCancelDuration(float_t value);

  constexpr void __cordl_internal_set_m_HapticHoverCancelIntensity(float_t value);

  constexpr void __cordl_internal_set_m_HapticHoverEnterDuration(float_t value);

  constexpr void __cordl_internal_set_m_HapticHoverEnterIntensity(float_t value);

  constexpr void __cordl_internal_set_m_HapticHoverExitDuration(float_t value);

  constexpr void __cordl_internal_set_m_HapticHoverExitIntensity(float_t value);

  constexpr void __cordl_internal_set_m_HapticSelectCancelDuration(float_t value);

  constexpr void __cordl_internal_set_m_HapticSelectCancelIntensity(float_t value);

  constexpr void __cordl_internal_set_m_HapticSelectEnterDuration(float_t value);

  constexpr void __cordl_internal_set_m_HapticSelectEnterIntensity(float_t value);

  constexpr void __cordl_internal_set_m_HapticSelectExitDuration(float_t value);

  constexpr void __cordl_internal_set_m_HapticSelectExitIntensity(float_t value);

  constexpr void __cordl_internal_set_m_HideControllerOnSelect(bool value);

  constexpr void __cordl_internal_set_m_PlayAudioClipOnHoverCanceled(bool value);

  constexpr void __cordl_internal_set_m_PlayAudioClipOnHoverEntered(bool value);

  constexpr void __cordl_internal_set_m_PlayAudioClipOnHoverExited(bool value);

  constexpr void __cordl_internal_set_m_PlayAudioClipOnSelectCanceled(bool value);

  constexpr void __cordl_internal_set_m_PlayAudioClipOnSelectEntered(bool value);

  constexpr void __cordl_internal_set_m_PlayAudioClipOnSelectExited(bool value);

  constexpr void __cordl_internal_set_m_PlayHapticsOnHoverCanceled(bool value);

  constexpr void __cordl_internal_set_m_PlayHapticsOnHoverEntered(bool value);

  constexpr void __cordl_internal_set_m_PlayHapticsOnHoverExited(bool value);

  constexpr void __cordl_internal_set_m_PlayHapticsOnSelectCanceled(bool value);

  constexpr void __cordl_internal_set_m_PlayHapticsOnSelectEntered(bool value);

  constexpr void __cordl_internal_set_m_PlayHapticsOnSelectExited(bool value);

  constexpr void __cordl_internal_set_m_SelectActionTrigger(::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor__InputTriggerType value);

  constexpr void __cordl_internal_set_m_TargetPriorityMode(::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode value);

  constexpr void __cordl_internal_set_m_ToggleSelectActive(bool value);

  constexpr void __cordl_internal_set_m_ToggleSelectDeactivatedThisFrame(bool value);

  constexpr void __cordl_internal_set_m_WaitingForSelectDeactivate(bool value);

  /// @brief Method .ctor, addr 0x25acaa0, size 0x2a0, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable*>* getStaticF_s_ActivateTargets();

  /// @brief Method get_AudioClipForOnHoverEnter, addr 0x25aca50, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioClip> get_AudioClipForOnHoverEnter();

  /// @brief Method get_AudioClipForOnHoverExit, addr 0x25aca70, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioClip> get_AudioClipForOnHoverExit();

  /// @brief Method get_AudioClipForOnSelectEnter, addr 0x25aca10, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioClip> get_AudioClipForOnSelectEnter();

  /// @brief Method get_AudioClipForOnSelectExit, addr 0x25aca30, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioClip> get_AudioClipForOnSelectExit();

  /// @brief Method get_allowActivate, addr 0x25ab134, size 0x8, virtual false, abstract: false, final false
  inline bool get_allowActivate();

  /// @brief Method get_allowHoverAudioWhileSelecting, addr 0x25aafd4, size 0x8, virtual false, abstract: false, final false
  inline bool get_allowHoverAudioWhileSelecting();

  /// @brief Method get_allowHoverHapticsWhileSelecting, addr 0x25ab120, size 0x8, virtual false, abstract: false, final false
  inline bool get_allowHoverHapticsWhileSelecting();

  /// @brief Method get_allowHoveredActivate, addr 0x25aaed8, size 0x8, virtual false, abstract: false, final false
  inline bool get_allowHoveredActivate();

  /// @brief Method get_audioClipForOnHoverCanceled, addr 0x25aafc4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioClip> get_audioClipForOnHoverCanceled();

  /// @brief Method get_audioClipForOnHoverEnter, addr 0x25aca48, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioClip> get_audioClipForOnHoverEnter();

  /// @brief Method get_audioClipForOnHoverEntered, addr 0x25aaf7c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioClip> get_audioClipForOnHoverEntered();

  /// @brief Method get_audioClipForOnHoverExit, addr 0x25aca68, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioClip> get_audioClipForOnHoverExit();

  /// @brief Method get_audioClipForOnHoverExited, addr 0x25aafa0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioClip> get_audioClipForOnHoverExited();

  /// @brief Method get_audioClipForOnSelectCanceled, addr 0x25aaf58, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioClip> get_audioClipForOnSelectCanceled();

  /// @brief Method get_audioClipForOnSelectEnter, addr 0x25aca08, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioClip> get_audioClipForOnSelectEnter();

  /// @brief Method get_audioClipForOnSelectEntered, addr 0x25aaf10, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioClip> get_audioClipForOnSelectEntered();

  /// @brief Method get_audioClipForOnSelectExit, addr 0x25aca28, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioClip> get_audioClipForOnSelectExit();

  /// @brief Method get_audioClipForOnSelectExited, addr 0x25aaf34, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioClip> get_audioClipForOnSelectExited();

  /// @brief Method get_hapticHoverCancelDuration, addr 0x25ab110, size 0x8, virtual false, abstract: false, final false
  inline float_t get_hapticHoverCancelDuration();

  /// @brief Method get_hapticHoverCancelIntensity, addr 0x25ab100, size 0x8, virtual false, abstract: false, final false
  inline float_t get_hapticHoverCancelIntensity();

  /// @brief Method get_hapticHoverEnterDuration, addr 0x25ab0a8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_hapticHoverEnterDuration();

  /// @brief Method get_hapticHoverEnterIntensity, addr 0x25ab098, size 0x8, virtual false, abstract: false, final false
  inline float_t get_hapticHoverEnterIntensity();

  /// @brief Method get_hapticHoverExitDuration, addr 0x25ab0dc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_hapticHoverExitDuration();

  /// @brief Method get_hapticHoverExitIntensity, addr 0x25ab0cc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_hapticHoverExitIntensity();

  /// @brief Method get_hapticSelectCancelDuration, addr 0x25ab074, size 0x8, virtual false, abstract: false, final false
  inline float_t get_hapticSelectCancelDuration();

  /// @brief Method get_hapticSelectCancelIntensity, addr 0x25ab064, size 0x8, virtual false, abstract: false, final false
  inline float_t get_hapticSelectCancelIntensity();

  /// @brief Method get_hapticSelectEnterDuration, addr 0x25ab00c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_hapticSelectEnterDuration();

  /// @brief Method get_hapticSelectEnterIntensity, addr 0x25aaffc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_hapticSelectEnterIntensity();

  /// @brief Method get_hapticSelectExitDuration, addr 0x25ab040, size 0x8, virtual false, abstract: false, final false
  inline float_t get_hapticSelectExitDuration();

  /// @brief Method get_hapticSelectExitIntensity, addr 0x25ab030, size 0x8, virtual false, abstract: false, final false
  inline float_t get_hapticSelectExitIntensity();

  /// @brief Method get_hideControllerOnSelect, addr 0x25aae30, size 0x8, virtual false, abstract: false, final false
  inline bool get_hideControllerOnSelect();

  /// @brief Method get_isSelectActive, addr 0x25abcb8, size 0x1dc, virtual true, abstract: false, final false
  inline bool get_isSelectActive();

  /// @brief Method get_isUISelectActive, addr 0x25abe94, size 0x88, virtual false, abstract: false, final false
  inline bool get_isUISelectActive();

  /// @brief Method get_playAudioClipOnHoverCanceled, addr 0x25aafb0, size 0x8, virtual false, abstract: false, final false
  inline bool get_playAudioClipOnHoverCanceled();

  /// @brief Method get_playAudioClipOnHoverEnter, addr 0x25aca40, size 0x8, virtual false, abstract: false, final false
  inline bool get_playAudioClipOnHoverEnter();

  /// @brief Method get_playAudioClipOnHoverEntered, addr 0x25aaf68, size 0x8, virtual false, abstract: false, final false
  inline bool get_playAudioClipOnHoverEntered();

  /// @brief Method get_playAudioClipOnHoverExit, addr 0x25aca60, size 0x8, virtual false, abstract: false, final false
  inline bool get_playAudioClipOnHoverExit();

  /// @brief Method get_playAudioClipOnHoverExited, addr 0x25aaf8c, size 0x8, virtual false, abstract: false, final false
  inline bool get_playAudioClipOnHoverExited();

  /// @brief Method get_playAudioClipOnSelectCanceled, addr 0x25aaf44, size 0x8, virtual false, abstract: false, final false
  inline bool get_playAudioClipOnSelectCanceled();

  /// @brief Method get_playAudioClipOnSelectEnter, addr 0x25aca00, size 0x8, virtual false, abstract: false, final false
  inline bool get_playAudioClipOnSelectEnter();

  /// @brief Method get_playAudioClipOnSelectEntered, addr 0x25aaefc, size 0x8, virtual false, abstract: false, final false
  inline bool get_playAudioClipOnSelectEntered();

  /// @brief Method get_playAudioClipOnSelectExit, addr 0x25aca20, size 0x8, virtual false, abstract: false, final false
  inline bool get_playAudioClipOnSelectExit();

  /// @brief Method get_playAudioClipOnSelectExited, addr 0x25aaf20, size 0x8, virtual false, abstract: false, final false
  inline bool get_playAudioClipOnSelectExited();

  /// @brief Method get_playHapticsOnHoverCanceled, addr 0x25ab0ec, size 0x8, virtual false, abstract: false, final false
  inline bool get_playHapticsOnHoverCanceled();

  /// @brief Method get_playHapticsOnHoverEnter, addr 0x25aca90, size 0x8, virtual false, abstract: false, final false
  inline bool get_playHapticsOnHoverEnter();

  /// @brief Method get_playHapticsOnHoverEntered, addr 0x25ab084, size 0x8, virtual false, abstract: false, final false
  inline bool get_playHapticsOnHoverEntered();

  /// @brief Method get_playHapticsOnHoverExited, addr 0x25ab0b8, size 0x8, virtual false, abstract: false, final false
  inline bool get_playHapticsOnHoverExited();

  /// @brief Method get_playHapticsOnSelectCanceled, addr 0x25ab050, size 0x8, virtual false, abstract: false, final false
  inline bool get_playHapticsOnSelectCanceled();

  /// @brief Method get_playHapticsOnSelectEnter, addr 0x25aca80, size 0x8, virtual false, abstract: false, final false
  inline bool get_playHapticsOnSelectEnter();

  /// @brief Method get_playHapticsOnSelectEntered, addr 0x25aafe8, size 0x8, virtual false, abstract: false, final false
  inline bool get_playHapticsOnSelectEntered();

  /// @brief Method get_playHapticsOnSelectExit, addr 0x25aca88, size 0x8, virtual false, abstract: false, final false
  inline bool get_playHapticsOnSelectExit();

  /// @brief Method get_playHapticsOnSelectExited, addr 0x25ab01c, size 0x8, virtual false, abstract: false, final false
  inline bool get_playHapticsOnSelectExited();

  /// @brief Method get_selectActionTrigger, addr 0x25aae20, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor__InputTriggerType get_selectActionTrigger();

  /// @brief Method get_shouldActivate, addr 0x25abf1c, size 0xb8, virtual true, abstract: false, final false
  inline bool get_shouldActivate();

  /// @brief Method get_shouldDeactivate, addr 0x25abfd4, size 0xb8, virtual true, abstract: false, final false
  inline bool get_shouldDeactivate();

  /// @brief Method get_targetPriorityMode, addr 0x25aaeec, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode get_targetPriorityMode();

  /// @brief Method get_validTargets, addr 0x25aca98, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>* get_validTargets();

  /// @brief Method get_xrController, addr 0x25ab148, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController> get_xrController();

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractor"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractor* i___UnityEngine__XR__Interaction__Toolkit__IXRActivateInteractor() noexcept;

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXRInteractor"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* i___UnityEngine__XR__Interaction__Toolkit__IXRInteractor() noexcept;

  static inline void setStaticF_s_ActivateTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable*>* value);

  /// @brief Method set_AudioClipForOnHoverEnter, addr 0x25aca58, size 0x8, virtual false, abstract: false, final false
  inline void set_AudioClipForOnHoverEnter(::UnityEngine::AudioClip* value);

  /// @brief Method set_AudioClipForOnHoverExit, addr 0x25aca78, size 0x8, virtual false, abstract: false, final false
  inline void set_AudioClipForOnHoverExit(::UnityEngine::AudioClip* value);

  /// @brief Method set_AudioClipForOnSelectEnter, addr 0x25aca18, size 0x8, virtual false, abstract: false, final false
  inline void set_AudioClipForOnSelectEnter(::UnityEngine::AudioClip* value);

  /// @brief Method set_AudioClipForOnSelectExit, addr 0x25aca38, size 0x8, virtual false, abstract: false, final false
  inline void set_AudioClipForOnSelectExit(::UnityEngine::AudioClip* value);

  /// @brief Method set_allowActivate, addr 0x25ab13c, size 0xc, virtual false, abstract: false, final false
  inline void set_allowActivate(bool value);

  /// @brief Method set_allowHoverAudioWhileSelecting, addr 0x25aafdc, size 0xc, virtual false, abstract: false, final false
  inline void set_allowHoverAudioWhileSelecting(bool value);

  /// @brief Method set_allowHoverHapticsWhileSelecting, addr 0x25ab128, size 0xc, virtual false, abstract: false, final false
  inline void set_allowHoverHapticsWhileSelecting(bool value);

  /// @brief Method set_allowHoveredActivate, addr 0x25aaee0, size 0xc, virtual false, abstract: false, final false
  inline void set_allowHoveredActivate(bool value);

  /// @brief Method set_audioClipForOnHoverCanceled, addr 0x25aafcc, size 0x8, virtual false, abstract: false, final false
  inline void set_audioClipForOnHoverCanceled(::UnityEngine::AudioClip* value);

  /// @brief Method set_audioClipForOnHoverEntered, addr 0x25aaf84, size 0x8, virtual false, abstract: false, final false
  inline void set_audioClipForOnHoverEntered(::UnityEngine::AudioClip* value);

  /// @brief Method set_audioClipForOnHoverExited, addr 0x25aafa8, size 0x8, virtual false, abstract: false, final false
  inline void set_audioClipForOnHoverExited(::UnityEngine::AudioClip* value);

  /// @brief Method set_audioClipForOnSelectCanceled, addr 0x25aaf60, size 0x8, virtual false, abstract: false, final false
  inline void set_audioClipForOnSelectCanceled(::UnityEngine::AudioClip* value);

  /// @brief Method set_audioClipForOnSelectEntered, addr 0x25aaf18, size 0x8, virtual false, abstract: false, final false
  inline void set_audioClipForOnSelectEntered(::UnityEngine::AudioClip* value);

  /// @brief Method set_audioClipForOnSelectExited, addr 0x25aaf3c, size 0x8, virtual false, abstract: false, final false
  inline void set_audioClipForOnSelectExited(::UnityEngine::AudioClip* value);

  /// @brief Method set_hapticHoverCancelDuration, addr 0x25ab118, size 0x8, virtual false, abstract: false, final false
  inline void set_hapticHoverCancelDuration(float_t value);

  /// @brief Method set_hapticHoverCancelIntensity, addr 0x25ab108, size 0x8, virtual false, abstract: false, final false
  inline void set_hapticHoverCancelIntensity(float_t value);

  /// @brief Method set_hapticHoverEnterDuration, addr 0x25ab0b0, size 0x8, virtual false, abstract: false, final false
  inline void set_hapticHoverEnterDuration(float_t value);

  /// @brief Method set_hapticHoverEnterIntensity, addr 0x25ab0a0, size 0x8, virtual false, abstract: false, final false
  inline void set_hapticHoverEnterIntensity(float_t value);

  /// @brief Method set_hapticHoverExitDuration, addr 0x25ab0e4, size 0x8, virtual false, abstract: false, final false
  inline void set_hapticHoverExitDuration(float_t value);

  /// @brief Method set_hapticHoverExitIntensity, addr 0x25ab0d4, size 0x8, virtual false, abstract: false, final false
  inline void set_hapticHoverExitIntensity(float_t value);

  /// @brief Method set_hapticSelectCancelDuration, addr 0x25ab07c, size 0x8, virtual false, abstract: false, final false
  inline void set_hapticSelectCancelDuration(float_t value);

  /// @brief Method set_hapticSelectCancelIntensity, addr 0x25ab06c, size 0x8, virtual false, abstract: false, final false
  inline void set_hapticSelectCancelIntensity(float_t value);

  /// @brief Method set_hapticSelectEnterDuration, addr 0x25ab014, size 0x8, virtual false, abstract: false, final false
  inline void set_hapticSelectEnterDuration(float_t value);

  /// @brief Method set_hapticSelectEnterIntensity, addr 0x25ab004, size 0x8, virtual false, abstract: false, final false
  inline void set_hapticSelectEnterIntensity(float_t value);

  /// @brief Method set_hapticSelectExitDuration, addr 0x25ab048, size 0x8, virtual false, abstract: false, final false
  inline void set_hapticSelectExitDuration(float_t value);

  /// @brief Method set_hapticSelectExitIntensity, addr 0x25ab038, size 0x8, virtual false, abstract: false, final false
  inline void set_hapticSelectExitIntensity(float_t value);

  /// @brief Method set_hideControllerOnSelect, addr 0x25aae38, size 0xa0, virtual false, abstract: false, final false
  inline void set_hideControllerOnSelect(bool value);

  /// @brief Method set_playAudioClipOnHoverCanceled, addr 0x25aafb8, size 0xc, virtual false, abstract: false, final false
  inline void set_playAudioClipOnHoverCanceled(bool value);

  /// @brief Method set_playAudioClipOnHoverEntered, addr 0x25aaf70, size 0xc, virtual false, abstract: false, final false
  inline void set_playAudioClipOnHoverEntered(bool value);

  /// @brief Method set_playAudioClipOnHoverExited, addr 0x25aaf94, size 0xc, virtual false, abstract: false, final false
  inline void set_playAudioClipOnHoverExited(bool value);

  /// @brief Method set_playAudioClipOnSelectCanceled, addr 0x25aaf4c, size 0xc, virtual false, abstract: false, final false
  inline void set_playAudioClipOnSelectCanceled(bool value);

  /// @brief Method set_playAudioClipOnSelectEntered, addr 0x25aaf04, size 0xc, virtual false, abstract: false, final false
  inline void set_playAudioClipOnSelectEntered(bool value);

  /// @brief Method set_playAudioClipOnSelectExited, addr 0x25aaf28, size 0xc, virtual false, abstract: false, final false
  inline void set_playAudioClipOnSelectExited(bool value);

  /// @brief Method set_playHapticsOnHoverCanceled, addr 0x25ab0f4, size 0xc, virtual false, abstract: false, final false
  inline void set_playHapticsOnHoverCanceled(bool value);

  /// @brief Method set_playHapticsOnHoverEntered, addr 0x25ab08c, size 0xc, virtual false, abstract: false, final false
  inline void set_playHapticsOnHoverEntered(bool value);

  /// @brief Method set_playHapticsOnHoverExited, addr 0x25ab0c0, size 0xc, virtual false, abstract: false, final false
  inline void set_playHapticsOnHoverExited(bool value);

  /// @brief Method set_playHapticsOnSelectCanceled, addr 0x25ab058, size 0xc, virtual false, abstract: false, final false
  inline void set_playHapticsOnSelectCanceled(bool value);

  /// @brief Method set_playHapticsOnSelectEntered, addr 0x25aaff0, size 0xc, virtual false, abstract: false, final false
  inline void set_playHapticsOnSelectEntered(bool value);

  /// @brief Method set_playHapticsOnSelectExited, addr 0x25ab024, size 0xc, virtual false, abstract: false, final false
  inline void set_playHapticsOnSelectExited(bool value);

  /// @brief Method set_selectActionTrigger, addr 0x25aae28, size 0x8, virtual false, abstract: false, final false
  inline void set_selectActionTrigger(::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor__InputTriggerType value);

  /// @brief Method set_targetPriorityMode, addr 0x25aaef4, size 0x8, virtual true, abstract: false, final false
  inline void set_targetPriorityMode(::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode value);

  /// @brief Method set_xrController, addr 0x25ab150, size 0x8, virtual false, abstract: false, final false
  inline void set_xrController(::UnityEngine::XR::Interaction::Toolkit::XRBaseController* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRBaseControllerInteractor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRBaseControllerInteractor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRBaseControllerInteractor(XRBaseControllerInteractor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRBaseControllerInteractor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRBaseControllerInteractor(XRBaseControllerInteractor const&) = delete;

  /// @brief Field m_SelectActionTrigger, offset: 0x190, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor__InputTriggerType ___m_SelectActionTrigger;

  /// @brief Field m_HideControllerOnSelect, offset: 0x194, size: 0x1, def value: None
  bool ___m_HideControllerOnSelect;

  /// @brief Field m_AllowHoveredActivate, offset: 0x195, size: 0x1, def value: None
  bool ___m_AllowHoveredActivate;

  /// @brief Field m_TargetPriorityMode, offset: 0x198, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode ___m_TargetPriorityMode;

  /// @brief Field m_PlayAudioClipOnSelectEntered, offset: 0x19c, size: 0x1, def value: None
  bool ___m_PlayAudioClipOnSelectEntered;

  /// @brief Field m_AudioClipForOnSelectEntered, offset: 0x1a0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioClip> ___m_AudioClipForOnSelectEntered;

  /// @brief Field m_PlayAudioClipOnSelectExited, offset: 0x1a8, size: 0x1, def value: None
  bool ___m_PlayAudioClipOnSelectExited;

  /// @brief Field m_AudioClipForOnSelectExited, offset: 0x1b0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioClip> ___m_AudioClipForOnSelectExited;

  /// @brief Field m_PlayAudioClipOnSelectCanceled, offset: 0x1b8, size: 0x1, def value: None
  bool ___m_PlayAudioClipOnSelectCanceled;

  /// @brief Field m_AudioClipForOnSelectCanceled, offset: 0x1c0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioClip> ___m_AudioClipForOnSelectCanceled;

  /// @brief Field m_PlayAudioClipOnHoverEntered, offset: 0x1c8, size: 0x1, def value: None
  bool ___m_PlayAudioClipOnHoverEntered;

  /// @brief Field m_AudioClipForOnHoverEntered, offset: 0x1d0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioClip> ___m_AudioClipForOnHoverEntered;

  /// @brief Field m_PlayAudioClipOnHoverExited, offset: 0x1d8, size: 0x1, def value: None
  bool ___m_PlayAudioClipOnHoverExited;

  /// @brief Field m_AudioClipForOnHoverExited, offset: 0x1e0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioClip> ___m_AudioClipForOnHoverExited;

  /// @brief Field m_PlayAudioClipOnHoverCanceled, offset: 0x1e8, size: 0x1, def value: None
  bool ___m_PlayAudioClipOnHoverCanceled;

  /// @brief Field m_AudioClipForOnHoverCanceled, offset: 0x1f0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioClip> ___m_AudioClipForOnHoverCanceled;

  /// @brief Field m_AllowHoverAudioWhileSelecting, offset: 0x1f8, size: 0x1, def value: None
  bool ___m_AllowHoverAudioWhileSelecting;

  /// @brief Field m_PlayHapticsOnSelectEntered, offset: 0x1f9, size: 0x1, def value: None
  bool ___m_PlayHapticsOnSelectEntered;

  /// @brief Field m_HapticSelectEnterIntensity, offset: 0x1fc, size: 0x4, def value: None
  float_t ___m_HapticSelectEnterIntensity;

  /// @brief Field m_HapticSelectEnterDuration, offset: 0x200, size: 0x4, def value: None
  float_t ___m_HapticSelectEnterDuration;

  /// @brief Field m_PlayHapticsOnSelectExited, offset: 0x204, size: 0x1, def value: None
  bool ___m_PlayHapticsOnSelectExited;

  /// @brief Field m_HapticSelectExitIntensity, offset: 0x208, size: 0x4, def value: None
  float_t ___m_HapticSelectExitIntensity;

  /// @brief Field m_HapticSelectExitDuration, offset: 0x20c, size: 0x4, def value: None
  float_t ___m_HapticSelectExitDuration;

  /// @brief Field m_PlayHapticsOnSelectCanceled, offset: 0x210, size: 0x1, def value: None
  bool ___m_PlayHapticsOnSelectCanceled;

  /// @brief Field m_HapticSelectCancelIntensity, offset: 0x214, size: 0x4, def value: None
  float_t ___m_HapticSelectCancelIntensity;

  /// @brief Field m_HapticSelectCancelDuration, offset: 0x218, size: 0x4, def value: None
  float_t ___m_HapticSelectCancelDuration;

  /// @brief Field m_PlayHapticsOnHoverEntered, offset: 0x21c, size: 0x1, def value: None
  bool ___m_PlayHapticsOnHoverEntered;

  /// @brief Field m_HapticHoverEnterIntensity, offset: 0x220, size: 0x4, def value: None
  float_t ___m_HapticHoverEnterIntensity;

  /// @brief Field m_HapticHoverEnterDuration, offset: 0x224, size: 0x4, def value: None
  float_t ___m_HapticHoverEnterDuration;

  /// @brief Field m_PlayHapticsOnHoverExited, offset: 0x228, size: 0x1, def value: None
  bool ___m_PlayHapticsOnHoverExited;

  /// @brief Field m_HapticHoverExitIntensity, offset: 0x22c, size: 0x4, def value: None
  float_t ___m_HapticHoverExitIntensity;

  /// @brief Field m_HapticHoverExitDuration, offset: 0x230, size: 0x4, def value: None
  float_t ___m_HapticHoverExitDuration;

  /// @brief Field m_PlayHapticsOnHoverCanceled, offset: 0x234, size: 0x1, def value: None
  bool ___m_PlayHapticsOnHoverCanceled;

  /// @brief Field m_HapticHoverCancelIntensity, offset: 0x238, size: 0x4, def value: None
  float_t ___m_HapticHoverCancelIntensity;

  /// @brief Field m_HapticHoverCancelDuration, offset: 0x23c, size: 0x4, def value: None
  float_t ___m_HapticHoverCancelDuration;

  /// @brief Field m_AllowHoverHapticsWhileSelecting, offset: 0x240, size: 0x1, def value: None
  bool ___m_AllowHoverHapticsWhileSelecting;

  /// @brief Field m_AllowActivate, offset: 0x241, size: 0x1, def value: None
  bool ___m_AllowActivate;

  /// @brief Field m_Controller, offset: 0x248, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController> ___m_Controller;

  /// @brief Field m_ActivateEventArgs, offset: 0x250, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>* ___m_ActivateEventArgs;

  /// @brief Field m_DeactivateEventArgs, offset: 0x258, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>* ___m_DeactivateEventArgs;

  /// @brief Field m_ToggleSelectActive, offset: 0x260, size: 0x1, def value: None
  bool ___m_ToggleSelectActive;

  /// @brief Field m_ToggleSelectDeactivatedThisFrame, offset: 0x261, size: 0x1, def value: None
  bool ___m_ToggleSelectDeactivatedThisFrame;

  /// @brief Field m_WaitingForSelectDeactivate, offset: 0x262, size: 0x1, def value: None
  bool ___m_WaitingForSelectDeactivate;

  /// @brief Field m_EffectsAudioSource, offset: 0x268, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ___m_EffectsAudioSource;

  /// @brief Field <validTargets>k__BackingField, offset: 0x270, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>* ____validTargets_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, 0x278>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_SelectActionTrigger) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_HideControllerOnSelect) == 0x194, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_AllowHoveredActivate) == 0x195, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_TargetPriorityMode) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_PlayAudioClipOnSelectEntered) == 0x19c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_AudioClipForOnSelectEntered) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_PlayAudioClipOnSelectExited) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_AudioClipForOnSelectExited) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_PlayAudioClipOnSelectCanceled) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_AudioClipForOnSelectCanceled) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_PlayAudioClipOnHoverEntered) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_AudioClipForOnHoverEntered) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_PlayAudioClipOnHoverExited) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_AudioClipForOnHoverExited) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_PlayAudioClipOnHoverCanceled) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_AudioClipForOnHoverCanceled) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_AllowHoverAudioWhileSelecting) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_PlayHapticsOnSelectEntered) == 0x1f9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_HapticSelectEnterIntensity) == 0x1fc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_HapticSelectEnterDuration) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_PlayHapticsOnSelectExited) == 0x204, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_HapticSelectExitIntensity) == 0x208, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_HapticSelectExitDuration) == 0x20c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_PlayHapticsOnSelectCanceled) == 0x210, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_HapticSelectCancelIntensity) == 0x214, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_HapticSelectCancelDuration) == 0x218, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_PlayHapticsOnHoverEntered) == 0x21c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_HapticHoverEnterIntensity) == 0x220, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_HapticHoverEnterDuration) == 0x224, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_PlayHapticsOnHoverExited) == 0x228, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_HapticHoverExitIntensity) == 0x22c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_HapticHoverExitDuration) == 0x230, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_PlayHapticsOnHoverCanceled) == 0x234, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_HapticHoverCancelIntensity) == 0x238, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_HapticHoverCancelDuration) == 0x23c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_AllowHoverHapticsWhileSelecting) == 0x240, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_AllowActivate) == 0x241, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_Controller) == 0x248, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_ActivateEventArgs) == 0x250, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_DeactivateEventArgs) == 0x258, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_ToggleSelectActive) == 0x260, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_ToggleSelectDeactivatedThisFrame) == 0x261, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_WaitingForSelectDeactivate) == 0x262, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_EffectsAudioSource) == 0x268, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ____validTargets_k__BackingField) == 0x270, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor__InputTriggerType, "UnityEngine.XR.Interaction.Toolkit", "XRBaseControllerInteractor/InputTriggerType");
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*, "UnityEngine.XR.Interaction.Toolkit", "XRBaseControllerInteractor");
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c*, "UnityEngine.XR.Interaction.Toolkit", "XRBaseControllerInteractor/<>c");
