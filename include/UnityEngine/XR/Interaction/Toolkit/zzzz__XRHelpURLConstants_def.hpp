#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XRHelpURLConstants)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class XRHelpURLConstants;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::XRHelpURLConstants);
// Type: UnityEngine.XR.Interaction.Toolkit::XRHelpURLConstants
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::XRHelpURLConstants*
class CORDL_TYPE XRHelpURLConstants : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRHelpURLConstants();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRHelpURLConstants", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRHelpURLConstants(XRHelpURLConstants&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRHelpURLConstants", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRHelpURLConstants(XRHelpURLConstants const&) = delete;

  /// @brief Field k_ARAnnotationInteractable offset 0xffffffff size 0x8
  static constexpr ::ConstString k_ARAnnotationInteractable{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.AR.ARAnnotationInteractable.html"
  };

  /// @brief Field k_ARGestureInteractor offset 0xffffffff size 0x8
  static constexpr ::ConstString k_ARGestureInteractor{ u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor.html" };

  /// @brief Field k_ARPlacementInteractable offset 0xffffffff size 0x8
  static constexpr ::ConstString k_ARPlacementInteractable{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.AR.ARPlacementInteractable.html"
  };

  /// @brief Field k_ARRotationInteractable offset 0xffffffff size 0x8
  static constexpr ::ConstString k_ARRotationInteractable{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.AR.ARRotationInteractable.html"
  };

  /// @brief Field k_ARScaleInteractable offset 0xffffffff size 0x8
  static constexpr ::ConstString k_ARScaleInteractable{ u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable.html" };

  /// @brief Field k_ARSelectionInteractable offset 0xffffffff size 0x8
  static constexpr ::ConstString k_ARSelectionInteractable{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.AR.ARSelectionInteractable.html"
  };

  /// @brief Field k_ARTranslationInteractable offset 0xffffffff size 0x8
  static constexpr ::ConstString k_ARTranslationInteractable{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.AR.ARTranslationInteractable.html"
  };

  /// @brief Field k_ActionBasedContinuousMoveProvider offset 0xffffffff size 0x8
  static constexpr ::ConstString k_ActionBasedContinuousMoveProvider{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.ActionBasedContinuousMoveProvider.html"
  };

  /// @brief Field k_ActionBasedContinuousTurnProvider offset 0xffffffff size 0x8
  static constexpr ::ConstString k_ActionBasedContinuousTurnProvider{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.ActionBasedContinuousTurnProvider.html"
  };

  /// @brief Field k_ActionBasedController offset 0xffffffff size 0x8
  static constexpr ::ConstString k_ActionBasedController{ u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.ActionBasedController.html" };

  /// @brief Field k_ActionBasedSnapTurnProvider offset 0xffffffff size 0x8
  static constexpr ::ConstString k_ActionBasedSnapTurnProvider{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.ActionBasedSnapTurnProvider.html"
  };

  /// @brief Field k_AudioAffordanceReceiver offset 0xffffffff size 0x8
  static constexpr ::ConstString k_AudioAffordanceReceiver{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Audio.AudioAffordanceReceiver.html"
  };

  /// @brief Field k_AudioAffordanceThemeDatum offset 0xffffffff size 0x8
  static constexpr ::ConstString k_AudioAffordanceThemeDatum{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceThemeDatum.html"
  };

  /// @brief Field k_BaseApi offset 0xffffffff size 0x8
  static constexpr ::ConstString k_BaseApi{ u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/" };

  /// @brief Field k_BaseNamespace offset 0xffffffff size 0x8
  static constexpr ::ConstString k_BaseNamespace{ u"UnityEngine.XR.Interaction.Toolkit." };

  /// @brief Field k_BlendShapeAffordanceReceiver offset 0xffffffff size 0x8
  static constexpr ::ConstString k_BlendShapeAffordanceReceiver{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering.BlendShapeAffordanceReceiver.html"
  };

  /// @brief Field k_CharacterControllerDriver offset 0xffffffff size 0x8
  static constexpr ::ConstString k_CharacterControllerDriver{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.CharacterControllerDriver.html"
  };

  /// @brief Field k_ColorAffordanceReceiver offset 0xffffffff size 0x8
  static constexpr ::ConstString k_ColorAffordanceReceiver{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.ColorAffordanceReceiver.html"
  };

  /// @brief Field k_ColorAffordanceThemeDatum offset 0xffffffff size 0x8
  static constexpr ::ConstString k_ColorAffordanceThemeDatum{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.ColorAffordanceThemeDatum.html"
  };

  /// @brief Field k_ColorMaterialPropertyAffordanceReceiver offset 0xffffffff size 0x8
  static constexpr ::ConstString k_ColorMaterialPropertyAffordanceReceiver{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering.ColorMaterialPropertyAffordanceReceiver.html"
  };

  /// @brief Field k_DeviceBasedContinuousMoveProvider offset 0xffffffff size 0x8
  static constexpr ::ConstString k_DeviceBasedContinuousMoveProvider{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.DeviceBasedContinuousMoveProvider.html"
  };

  /// @brief Field k_DeviceBasedContinuousTurnProvider offset 0xffffffff size 0x8
  static constexpr ::ConstString k_DeviceBasedContinuousTurnProvider{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.DeviceBasedContinuousTurnProvider.html"
  };

  /// @brief Field k_DeviceBasedSnapTurnProvider offset 0xffffffff size 0x8
  static constexpr ::ConstString k_DeviceBasedSnapTurnProvider{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.DeviceBasedSnapTurnProvider.html"
  };

  /// @brief Field k_DisposableManagerSingleton offset 0xffffffff size 0x8
  static constexpr ::ConstString k_DisposableManagerSingleton{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.Utilities.DisposableManagerSingleton.html"
  };

  /// @brief Field k_FloatAffordanceReceiver offset 0xffffffff size 0x8
  static constexpr ::ConstString k_FloatAffordanceReceiver{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.FloatAffordanceReceiver.html"
  };

  /// @brief Field k_FloatAffordanceThemeDatum offset 0xffffffff size 0x8
  static constexpr ::ConstString k_FloatAffordanceThemeDatum{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.FloatAffordanceThemeDatum.html"
  };

  /// @brief Field k_FloatMaterialPropertyAffordanceReceiver offset 0xffffffff size 0x8
  static constexpr ::ConstString k_FloatMaterialPropertyAffordanceReceiver{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering.FloatMaterialPropertyAffordanceReceiver.html"
  };

  /// @brief Field k_GrabMoveProvider offset 0xffffffff size 0x8
  static constexpr ::ConstString k_GrabMoveProvider{ u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.GrabMoveProvider.html" };

  /// @brief Field k_ImageColorAffordanceReceiver offset 0xffffffff size 0x8
  static constexpr ::ConstString k_ImageColorAffordanceReceiver{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.UI.ImageColorAffordanceReceiver.html"
  };

  /// @brief Field k_InputActionManager offset 0xffffffff size 0x8
  static constexpr ::ConstString k_InputActionManager{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.Inputs.InputActionManager.html"
  };

  /// @brief Field k_LazyFollow offset 0xffffffff size 0x8
  static constexpr ::ConstString k_LazyFollow{ u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.UI.LazyFollow.html" };

  /// @brief Field k_LocomotionSystem offset 0xffffffff size 0x8
  static constexpr ::ConstString k_LocomotionSystem{ u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.LocomotionSystem.html" };

  /// @brief Field k_MaterialInstanceHelper offset 0xffffffff size 0x8
  static constexpr ::ConstString k_MaterialInstanceHelper{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Rendering.MaterialInstanceHelper.html"
  };

  /// @brief Field k_MaterialPropertyBlockHelper offset 0xffffffff size 0x8
  static constexpr ::ConstString k_MaterialPropertyBlockHelper{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Rendering.MaterialPropertyBlockHelper.html"
  };

  /// @brief Field k_PokeThresholdDatum offset 0xffffffff size 0x8
  static constexpr ::ConstString k_PokeThresholdDatum{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.Filtering.PokeThresholdDatum.html"
  };

  /// @brief Field k_QuaternionAffordanceReceiver offset 0xffffffff size 0x8
  static constexpr ::ConstString k_QuaternionAffordanceReceiver{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.QuaternionAffordanceReceiver.html"
  };

  /// @brief Field k_QuaternionEulerAffordanceReceiver offset 0xffffffff size 0x8
  static constexpr ::ConstString k_QuaternionEulerAffordanceReceiver{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.QuaternionEulerAffordanceReceiver.html"
  };

  /// @brief Field k_TeleportationAnchor offset 0xffffffff size 0x8
  static constexpr ::ConstString k_TeleportationAnchor{ u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.TeleportationAnchor.html" };

  /// @brief Field k_TeleportationArea offset 0xffffffff size 0x8
  static constexpr ::ConstString k_TeleportationArea{ u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.TeleportationArea.html" };

  /// @brief Field k_TeleportationProvider offset 0xffffffff size 0x8
  static constexpr ::ConstString k_TeleportationProvider{ u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.TeleportationProvider.html" };

  /// @brief Field k_TrackedDeviceGraphicRaycaster offset 0xffffffff size 0x8
  static constexpr ::ConstString k_TrackedDeviceGraphicRaycaster{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceGraphicRaycaster.html"
  };

  /// @brief Field k_TrackedDevicePhysicsRaycaster offset 0xffffffff size 0x8
  static constexpr ::ConstString k_TrackedDevicePhysicsRaycaster{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.UI.TrackedDevicePhysicsRaycaster.html"
  };

  /// @brief Field k_TunnelingVignetteController offset 0xffffffff size 0x8
  static constexpr ::ConstString k_TunnelingVignetteController{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.TunnelingVignetteController.html"
  };

  /// @brief Field k_TwoHandedGrabMoveProvider offset 0xffffffff size 0x8
  static constexpr ::ConstString k_TwoHandedGrabMoveProvider{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.TwoHandedGrabMoveProvider.html"
  };

  /// @brief Field k_UniformTransformScaleAffordanceReceiver offset 0xffffffff size 0x8
  static constexpr ::ConstString k_UniformTransformScaleAffordanceReceiver{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/"
    u"UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Transformation.UniformTransformScaleAffordanceReceiver.html"
  };

  /// @brief Field k_Vector2AffordanceReceiver offset 0xffffffff size 0x8
  static constexpr ::ConstString k_Vector2AffordanceReceiver{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector2AffordanceReceiver.html"
  };

  /// @brief Field k_Vector2AffordanceThemeDatum offset 0xffffffff size 0x8
  static constexpr ::ConstString k_Vector2AffordanceThemeDatum{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector2AffordanceThemeDatum.html"
  };

  /// @brief Field k_Vector2MaterialPropertyAffordanceReceiver offset 0xffffffff size 0x8
  static constexpr ::ConstString k_Vector2MaterialPropertyAffordanceReceiver{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering.Vector2MaterialPropertyAffordanceReceiver.html"
  };

  /// @brief Field k_Vector3AffordanceReceiver offset 0xffffffff size 0x8
  static constexpr ::ConstString k_Vector3AffordanceReceiver{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector3AffordanceReceiver.html"
  };

  /// @brief Field k_Vector3AffordanceThemeDatum offset 0xffffffff size 0x8
  static constexpr ::ConstString k_Vector3AffordanceThemeDatum{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector3AffordanceThemeDatum.html"
  };

  /// @brief Field k_Vector3MaterialPropertyAffordanceReceiver offset 0xffffffff size 0x8
  static constexpr ::ConstString k_Vector3MaterialPropertyAffordanceReceiver{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering.Vector3MaterialPropertyAffordanceReceiver.html"
  };

  /// @brief Field k_Vector4AffordanceReceiver offset 0xffffffff size 0x8
  static constexpr ::ConstString k_Vector4AffordanceReceiver{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector4AffordanceReceiver.html"
  };

  /// @brief Field k_Vector4AffordanceThemeDatum offset 0xffffffff size 0x8
  static constexpr ::ConstString k_Vector4AffordanceThemeDatum{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector4AffordanceThemeDatum.html"
  };

  /// @brief Field k_Vector4MaterialPropertyAffordanceReceiver offset 0xffffffff size 0x8
  static constexpr ::ConstString k_Vector4MaterialPropertyAffordanceReceiver{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering.Vector4MaterialPropertyAffordanceReceiver.html"
  };

  /// @brief Field k_XRController offset 0xffffffff size 0x8
  static constexpr ::ConstString k_XRController{ u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.XRController.html" };

  /// @brief Field k_XRControllerRecorder offset 0xffffffff size 0x8
  static constexpr ::ConstString k_XRControllerRecorder{ u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.XRControllerRecorder.html" };

  /// @brief Field k_XRControllerRecording offset 0xffffffff size 0x8
  static constexpr ::ConstString k_XRControllerRecording{ u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.XRControllerRecording.html" };

  /// @brief Field k_XRDeviceSimulator offset 0xffffffff size 0x8
  static constexpr ::ConstString k_XRDeviceSimulator{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator.html"
  };

  /// @brief Field k_XRDirectInteractor offset 0xffffffff size 0x8
  static constexpr ::ConstString k_XRDirectInteractor{ u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor.html" };

  /// @brief Field k_XRDualGrabFreeTransformer offset 0xffffffff size 0x8
  static constexpr ::ConstString k_XRDualGrabFreeTransformer{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.Transformers.XRDualGrabFreeTransformer.html"
  };

  /// @brief Field k_XRGazeInteractor offset 0xffffffff size 0x8
  static constexpr ::ConstString k_XRGazeInteractor{ u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.XRGazeInteractor.html" };

  /// @brief Field k_XRGeneralGrabTransformer offset 0xffffffff size 0x8
  static constexpr ::ConstString k_XRGeneralGrabTransformer{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.Transformers.XRGeneralGrabTransformer.html"
  };

  /// @brief Field k_XRGrabInteractable offset 0xffffffff size 0x8
  static constexpr ::ConstString k_XRGrabInteractable{ u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable.html" };

  /// @brief Field k_XRInteractableAffordanceStateProvider offset 0xffffffff size 0x8
  static constexpr ::ConstString k_XRInteractableAffordanceStateProvider{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider.html"
  };

  /// @brief Field k_XRInteractableSnapVolume offset 0xffffffff size 0x8
  static constexpr ::ConstString k_XRInteractableSnapVolume{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.XRInteractableSnapVolume.html"
  };

  /// @brief Field k_XRInteractionGroup offset 0xffffffff size 0x8
  static constexpr ::ConstString k_XRInteractionGroup{ u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup.html" };

  /// @brief Field k_XRInteractionManager offset 0xffffffff size 0x8
  static constexpr ::ConstString k_XRInteractionManager{ u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.XRInteractionManager.html" };

  /// @brief Field k_XRInteractorLineVisual offset 0xffffffff size 0x8
  static constexpr ::ConstString k_XRInteractorLineVisual{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual.html"
  };

  /// @brief Field k_XRInteractorReticleVisual offset 0xffffffff size 0x8
  static constexpr ::ConstString k_XRInteractorReticleVisual{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.XRInteractorReticleVisual.html"
  };

  /// @brief Field k_XRLegacyGrabTransformer offset 0xffffffff size 0x8
  static constexpr ::ConstString k_XRLegacyGrabTransformer{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.Transformers.XRLegacyGrabTransformer.html"
  };

  /// @brief Field k_XRPokeFilter offset 0xffffffff size 0x8
  static constexpr ::ConstString k_XRPokeFilter{ u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.Filtering.XRPokeFilter.html" };

  /// @brief Field k_XRPokeInteractor offset 0xffffffff size 0x8
  static constexpr ::ConstString k_XRPokeInteractor{ u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.XRPokeInteractor.html" };

  /// @brief Field k_XRRayInteractor offset 0xffffffff size 0x8
  static constexpr ::ConstString k_XRRayInteractor{ u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.XRRayInteractor.html" };

  /// @brief Field k_XRRig offset 0xffffffff size 0x8
  static constexpr ::ConstString k_XRRig{ u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.XRRig.html" };

  /// @brief Field k_XRSimpleInteractable offset 0xffffffff size 0x8
  static constexpr ::ConstString k_XRSimpleInteractable{ u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.XRSimpleInteractable.html" };

  /// @brief Field k_XRSingleGrabFreeTransformer offset 0xffffffff size 0x8
  static constexpr ::ConstString k_XRSingleGrabFreeTransformer{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.Transformers.XRSingleGrabFreeTransformer.html"
  };

  /// @brief Field k_XRSingleGrabOffsetPreserveTransformer offset 0xffffffff size 0x8
  static constexpr ::ConstString k_XRSingleGrabOffsetPreserveTransformer{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.Transformers.k_XRSingleGrabOffsetPreserveTransformer.html"
  };

  /// @brief Field k_XRSocketInteractor offset 0xffffffff size 0x8
  static constexpr ::ConstString k_XRSocketInteractor{ u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.XRSocketInteractor.html" };

  /// @brief Field k_XRTargetFilter offset 0xffffffff size 0x8
  static constexpr ::ConstString k_XRTargetFilter{ u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetFilter.html" };

  /// @brief Field k_XRTintInteractableVisual offset 0xffffffff size 0x8
  static constexpr ::ConstString k_XRTintInteractableVisual{
    u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.XRTintInteractableVisual.html"
  };

  /// @brief Field k_XRUIInputModule offset 0xffffffff size 0x8
  static constexpr ::ConstString k_XRUIInputModule{ u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@2.3/api/UnityEngine.XR.Interaction.Toolkit.UI.XRUIInputModule.html" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::XRHelpURLConstants, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::XRHelpURLConstants);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::XRHelpURLConstants*, "UnityEngine.XR.Interaction.Toolkit", "XRHelpURLConstants");
