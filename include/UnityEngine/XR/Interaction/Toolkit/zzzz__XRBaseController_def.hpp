#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractionState_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseController_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRBaseController)
namespace UnityEngine::XR::Interaction::Toolkit {
struct InteractionState;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRControllerState;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRBaseController__UpdateType;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRInteractionUpdateOrder__UpdatePhase;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRBaseController__UpdateType;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRBaseController;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::__XRBaseController__UpdateType);
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::XRBaseController);
// Type: ::UpdateType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: true
// CS Name: ::XRBaseController::UpdateType
struct CORDL_TYPE __XRBaseController__UpdateType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XRBaseController__UpdateType_Unwrapped
  enum struct ____XRBaseController__UpdateType_Unwrapped : int32_t {
    __E_UpdateAndBeforeRender = static_cast<int32_t>(0x0),
    __E_Update = static_cast<int32_t>(0x1),
    __E_BeforeRender = static_cast<int32_t>(0x2),
    __E_Fixed = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XRBaseController__UpdateType_Unwrapped() const noexcept {
    return static_cast<____XRBaseController__UpdateType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRBaseController__UpdateType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XRBaseController__UpdateType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BeforeRender value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::Interaction::Toolkit::__XRBaseController__UpdateType const BeforeRender;

  /// @brief Field Fixed value: static_cast<int32_t>(0x3)
  static ::UnityEngine::XR::Interaction::Toolkit::__XRBaseController__UpdateType const Fixed;

  /// @brief Field Update value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::__XRBaseController__UpdateType const Update;

  /// @brief Field UpdateAndBeforeRender value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::__XRBaseController__UpdateType const UpdateAndBeforeRender;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::__XRBaseController__UpdateType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::__XRBaseController__UpdateType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
// Type: UnityEngine.XR.Interaction.Toolkit::XRBaseController
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 148, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::XRBaseController*
class CORDL_TYPE XRBaseController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using UpdateType = ::UnityEngine::XR::Interaction::Toolkit::__XRBaseController__UpdateType;

  /// @brief Field <anchorControlDeadzone>k__BackingField, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get__anchorControlDeadzone_k__BackingField,
                      put = __cordl_internal_set__anchorControlDeadzone_k__BackingField)) float_t _anchorControlDeadzone_k__BackingField;

  /// @brief Field <anchorControlOffAxisDeadzone>k__BackingField, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get__anchorControlOffAxisDeadzone_k__BackingField,
                      put = __cordl_internal_set__anchorControlOffAxisDeadzone_k__BackingField)) float_t _anchorControlOffAxisDeadzone_k__BackingField;

  __declspec(property(get = get_activateInteractionState))::UnityEngine::XR::Interaction::Toolkit::InteractionState activateInteractionState;

  __declspec(property(get = get_anchorControlDeadzone, put = set_anchorControlDeadzone)) float_t anchorControlDeadzone;

  __declspec(property(get = get_anchorControlOffAxisDeadzone, put = set_anchorControlOffAxisDeadzone)) float_t anchorControlOffAxisDeadzone;

  __declspec(property(get = get_animateModel, put = set_animateModel)) bool animateModel;

  __declspec(property(get = get_currentControllerState, put = set_currentControllerState))::UnityEngine::XR::Interaction::Toolkit::XRControllerState* currentControllerState;

  __declspec(property(get = get_enableInputActions, put = set_enableInputActions)) bool enableInputActions;

  __declspec(property(get = get_enableInputTracking, put = set_enableInputTracking)) bool enableInputTracking;

  __declspec(property(get = get_hideControllerModel, put = set_hideControllerModel)) bool hideControllerModel;

  /// @brief Field m_ActivateInteractionState, offset 0x5c, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActivateInteractionState,
                      put = __cordl_internal_set_m_ActivateInteractionState))::UnityEngine::XR::Interaction::Toolkit::InteractionState m_ActivateInteractionState;

  /// @brief Field m_AnimateModel, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AnimateModel, put = __cordl_internal_set_m_AnimateModel)) bool m_AnimateModel;

  /// @brief Field m_ControllerState, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ControllerState, put = __cordl_internal_set_m_ControllerState))::UnityEngine::XR::Interaction::Toolkit::XRControllerState* m_ControllerState;

  /// @brief Field m_CreateControllerState, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CreateControllerState, put = __cordl_internal_set_m_CreateControllerState)) bool m_CreateControllerState;

  /// @brief Field m_EnableInputActions, offset 0x1d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableInputActions, put = __cordl_internal_set_m_EnableInputActions)) bool m_EnableInputActions;

  /// @brief Field m_EnableInputTracking, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableInputTracking, put = __cordl_internal_set_m_EnableInputTracking)) bool m_EnableInputTracking;

  /// @brief Field m_HasWarnedAnimatorMissing, offset 0x88, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasWarnedAnimatorMissing, put = __cordl_internal_set_m_HasWarnedAnimatorMissing)) bool m_HasWarnedAnimatorMissing;

  /// @brief Field m_HideControllerModel, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HideControllerModel, put = __cordl_internal_set_m_HideControllerModel)) bool m_HideControllerModel;

  /// @brief Field m_Model, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Model, put = __cordl_internal_set_m_Model))::UnityW<::UnityEngine::Transform> m_Model;

  /// @brief Field m_ModelAnimator, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ModelAnimator, put = __cordl_internal_set_m_ModelAnimator))::UnityW<::UnityEngine::Animator> m_ModelAnimator;

  /// @brief Field m_ModelDeSelectTransition, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ModelDeSelectTransition, put = __cordl_internal_set_m_ModelDeSelectTransition))::StringW m_ModelDeSelectTransition;

  /// @brief Field m_ModelParent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ModelParent, put = __cordl_internal_set_m_ModelParent))::UnityW<::UnityEngine::Transform> m_ModelParent;

  /// @brief Field m_ModelPrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ModelPrefab, put = __cordl_internal_set_m_ModelPrefab))::UnityW<::UnityEngine::Transform> m_ModelPrefab;

  /// @brief Field m_ModelSelectTransition, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ModelSelectTransition, put = __cordl_internal_set_m_ModelSelectTransition))::StringW m_ModelSelectTransition;

  /// @brief Field m_PerformSetup, offset 0x89, size 0x1
  __declspec(property(get = __cordl_internal_get_m_PerformSetup, put = __cordl_internal_set_m_PerformSetup)) bool m_PerformSetup;

  /// @brief Field m_SelectInteractionState, offset 0x54, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelectInteractionState,
                      put = __cordl_internal_set_m_SelectInteractionState))::UnityEngine::XR::Interaction::Toolkit::InteractionState m_SelectInteractionState;

  /// @brief Field m_UIPressInteractionState, offset 0x64, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UIPressInteractionState,
                      put = __cordl_internal_set_m_UIPressInteractionState))::UnityEngine::XR::Interaction::Toolkit::InteractionState m_UIPressInteractionState;

  /// @brief Field m_UpdateTrackingType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_UpdateTrackingType,
                      put = __cordl_internal_set_m_UpdateTrackingType))::UnityEngine::XR::Interaction::Toolkit::__XRBaseController__UpdateType m_UpdateTrackingType;

  __declspec(property(get = get_model, put = set_model))::UnityW<::UnityEngine::Transform> model;

  __declspec(property(get = get_modelDeSelectTransition, put = set_modelDeSelectTransition))::StringW modelDeSelectTransition;

  __declspec(property(get = get_modelParent, put = set_modelParent))::UnityW<::UnityEngine::Transform> modelParent;

  __declspec(property(get = get_modelPrefab, put = set_modelPrefab))::UnityW<::UnityEngine::Transform> modelPrefab;

  __declspec(property(get = get_modelSelectTransition, put = set_modelSelectTransition))::StringW modelSelectTransition;

  __declspec(property(get = get_modelTransform, put = set_modelTransform))::UnityW<::UnityEngine::Transform> modelTransform;

  __declspec(property(get = get_selectInteractionState))::UnityEngine::XR::Interaction::Toolkit::InteractionState selectInteractionState;

  __declspec(property(get = get_uiPressInteractionState))::UnityEngine::XR::Interaction::Toolkit::InteractionState uiPressInteractionState;

  __declspec(property(get = get_updateTrackingType, put = set_updateTrackingType))::UnityEngine::XR::Interaction::Toolkit::__XRBaseController__UpdateType updateTrackingType;

  /// @brief Method ApplyControllerState, addr 0x2598aa4, size 0xa8, virtual true, abstract: false, final false
  inline void ApplyControllerState(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase,
                                   ::UnityEngine::XR::Interaction::Toolkit::XRControllerState* controllerState);

  /// @brief Method Awake, addr 0x25984ec, size 0x1e0, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method FixedUpdate, addr 0x2598a58, size 0x4c, virtual true, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method GetControllerState, addr 0x2598d18, size 0x2c, virtual true, abstract: false, final false
  inline bool GetControllerState(ByRef<::UnityEngine::XR::Interaction::Toolkit::XRControllerState*> controllerState);

  /// @brief Method GetModelPrefab, addr 0x25988e4, size 0x88, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> GetModelPrefab();

  static inline ::UnityEngine::XR::Interaction::Toolkit::XRBaseController* New_ctor();

  /// @brief Method OnBeforeRender, addr 0x2598a08, size 0x50, virtual true, abstract: false, final false
  inline void OnBeforeRender();

  /// @brief Method OnDisable, addr 0x2597614, size 0x74, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x25973e8, size 0x74, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method SendHapticImpulse, addr 0x2598d10, size 0x8, virtual true, abstract: false, final false
  inline bool SendHapticImpulse(float_t amplitude, float_t duration);

  /// @brief Method SetControllerState, addr 0x2598d44, size 0xc, virtual true, abstract: false, final false
  inline void SetControllerState(::UnityEngine::XR::Interaction::Toolkit::XRControllerState* controllerState);

  /// @brief Method SetupControllerState, addr 0x2598474, size 0x6c, virtual false, abstract: false, final false
  inline void SetupControllerState();

  /// @brief Method SetupModel, addr 0x25986d8, size 0x154, virtual false, abstract: false, final false
  inline void SetupModel();

  /// @brief Method Update, addr 0x25986cc, size 0xc, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateController, addr 0x259896c, size 0x9c, virtual true, abstract: false, final false
  inline void UpdateController();

  /// @brief Method UpdateControllerModelAnimation, addr 0x2598b4c, size 0x1c4, virtual true, abstract: false, final false
  inline void UpdateControllerModelAnimation();

  /// @brief Method UpdateInput, addr 0x2597f24, size 0x4, virtual true, abstract: false, final false
  inline void UpdateInput(::UnityEngine::XR::Interaction::Toolkit::XRControllerState* controllerState);

  /// @brief Method UpdateTrackingInput, addr 0x2597b20, size 0x4, virtual true, abstract: false, final false
  inline void UpdateTrackingInput(::UnityEngine::XR::Interaction::Toolkit::XRControllerState* controllerState);

  constexpr float_t const& __cordl_internal_get__anchorControlDeadzone_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__anchorControlDeadzone_k__BackingField();

  constexpr float_t const& __cordl_internal_get__anchorControlOffAxisDeadzone_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__anchorControlOffAxisDeadzone_k__BackingField();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionState const& __cordl_internal_get_m_ActivateInteractionState() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionState& __cordl_internal_get_m_ActivateInteractionState();

  constexpr bool const& __cordl_internal_get_m_AnimateModel() const;

  constexpr bool& __cordl_internal_get_m_AnimateModel();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::XRControllerState*& __cordl_internal_get_m_ControllerState();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::XRControllerState*> const& __cordl_internal_get_m_ControllerState() const;

  constexpr bool const& __cordl_internal_get_m_CreateControllerState() const;

  constexpr bool& __cordl_internal_get_m_CreateControllerState();

  constexpr bool const& __cordl_internal_get_m_EnableInputActions() const;

  constexpr bool& __cordl_internal_get_m_EnableInputActions();

  constexpr bool const& __cordl_internal_get_m_EnableInputTracking() const;

  constexpr bool& __cordl_internal_get_m_EnableInputTracking();

  constexpr bool const& __cordl_internal_get_m_HasWarnedAnimatorMissing() const;

  constexpr bool& __cordl_internal_get_m_HasWarnedAnimatorMissing();

  constexpr bool const& __cordl_internal_get_m_HideControllerModel() const;

  constexpr bool& __cordl_internal_get_m_HideControllerModel();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_Model() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_Model();

  constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_m_ModelAnimator() const;

  constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_m_ModelAnimator();

  constexpr ::StringW const& __cordl_internal_get_m_ModelDeSelectTransition() const;

  constexpr ::StringW& __cordl_internal_get_m_ModelDeSelectTransition();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_ModelParent() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_ModelParent();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_ModelPrefab() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_ModelPrefab();

  constexpr ::StringW const& __cordl_internal_get_m_ModelSelectTransition() const;

  constexpr ::StringW& __cordl_internal_get_m_ModelSelectTransition();

  constexpr bool const& __cordl_internal_get_m_PerformSetup() const;

  constexpr bool& __cordl_internal_get_m_PerformSetup();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionState const& __cordl_internal_get_m_SelectInteractionState() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionState& __cordl_internal_get_m_SelectInteractionState();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionState const& __cordl_internal_get_m_UIPressInteractionState() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionState& __cordl_internal_get_m_UIPressInteractionState();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRBaseController__UpdateType const& __cordl_internal_get_m_UpdateTrackingType() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRBaseController__UpdateType& __cordl_internal_get_m_UpdateTrackingType();

  constexpr void __cordl_internal_set__anchorControlDeadzone_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__anchorControlOffAxisDeadzone_k__BackingField(float_t value);

  constexpr void __cordl_internal_set_m_ActivateInteractionState(::UnityEngine::XR::Interaction::Toolkit::InteractionState value);

  constexpr void __cordl_internal_set_m_AnimateModel(bool value);

  constexpr void __cordl_internal_set_m_ControllerState(::UnityEngine::XR::Interaction::Toolkit::XRControllerState* value);

  constexpr void __cordl_internal_set_m_CreateControllerState(bool value);

  constexpr void __cordl_internal_set_m_EnableInputActions(bool value);

  constexpr void __cordl_internal_set_m_EnableInputTracking(bool value);

  constexpr void __cordl_internal_set_m_HasWarnedAnimatorMissing(bool value);

  constexpr void __cordl_internal_set_m_HideControllerModel(bool value);

  constexpr void __cordl_internal_set_m_Model(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_m_ModelAnimator(::UnityW<::UnityEngine::Animator> value);

  constexpr void __cordl_internal_set_m_ModelDeSelectTransition(::StringW value);

  constexpr void __cordl_internal_set_m_ModelParent(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_m_ModelPrefab(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_m_ModelSelectTransition(::StringW value);

  constexpr void __cordl_internal_set_m_PerformSetup(bool value);

  constexpr void __cordl_internal_set_m_SelectInteractionState(::UnityEngine::XR::Interaction::Toolkit::InteractionState value);

  constexpr void __cordl_internal_set_m_UIPressInteractionState(::UnityEngine::XR::Interaction::Toolkit::InteractionState value);

  constexpr void __cordl_internal_set_m_UpdateTrackingType(::UnityEngine::XR::Interaction::Toolkit::__XRBaseController__UpdateType value);

  /// @brief Method .ctor, addr 0x2598240, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_activateInteractionState, addr 0x259844c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::InteractionState get_activateInteractionState();

  /// @brief Method get_anchorControlDeadzone, addr 0x2598d5c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_anchorControlDeadzone();

  /// @brief Method get_anchorControlOffAxisDeadzone, addr 0x2598d6c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_anchorControlOffAxisDeadzone();

  /// @brief Method get_animateModel, addr 0x2598358, size 0x8, virtual false, abstract: false, final false
  inline bool get_animateModel();

  /// @brief Method get_currentControllerState, addr 0x259845c, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::XRControllerState* get_currentControllerState();

  /// @brief Method get_enableInputActions, addr 0x2598280, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableInputActions();

  /// @brief Method get_enableInputTracking, addr 0x259826c, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableInputTracking();

  /// @brief Method get_hideControllerModel, addr 0x259838c, size 0x8, virtual false, abstract: false, final false
  inline bool get_hideControllerModel();

  /// @brief Method get_model, addr 0x2598348, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_model();

  /// @brief Method get_modelDeSelectTransition, addr 0x259837c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_modelDeSelectTransition();

  /// @brief Method get_modelParent, addr 0x25982a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_modelParent();

  /// @brief Method get_modelPrefab, addr 0x2598294, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_modelPrefab();

  /// @brief Method get_modelSelectTransition, addr 0x259836c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_modelSelectTransition();

  /// @brief Method get_modelTransform, addr 0x2598d50, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_modelTransform();

  /// @brief Method get_selectInteractionState, addr 0x2598444, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::InteractionState get_selectInteractionState();

  /// @brief Method get_uiPressInteractionState, addr 0x2598454, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::InteractionState get_uiPressInteractionState();

  /// @brief Method get_updateTrackingType, addr 0x259825c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::__XRBaseController__UpdateType get_updateTrackingType();

  /// @brief Method set_anchorControlDeadzone, addr 0x2598d64, size 0x8, virtual false, abstract: false, final false
  inline void set_anchorControlDeadzone(float_t value);

  /// @brief Method set_anchorControlOffAxisDeadzone, addr 0x2598d74, size 0x8, virtual false, abstract: false, final false
  inline void set_anchorControlOffAxisDeadzone(float_t value);

  /// @brief Method set_animateModel, addr 0x2598360, size 0xc, virtual false, abstract: false, final false
  inline void set_animateModel(bool value);

  /// @brief Method set_currentControllerState, addr 0x25984e0, size 0xc, virtual false, abstract: false, final false
  inline void set_currentControllerState(::UnityEngine::XR::Interaction::Toolkit::XRControllerState* value);

  /// @brief Method set_enableInputActions, addr 0x2598288, size 0xc, virtual false, abstract: false, final false
  inline void set_enableInputActions(bool value);

  /// @brief Method set_enableInputTracking, addr 0x2598274, size 0xc, virtual false, abstract: false, final false
  inline void set_enableInputTracking(bool value);

  /// @brief Method set_hideControllerModel, addr 0x2598394, size 0xb0, virtual false, abstract: false, final false
  inline void set_hideControllerModel(bool value);

  /// @brief Method set_model, addr 0x2598350, size 0x8, virtual false, abstract: false, final false
  inline void set_model(::UnityEngine::Transform* value);

  /// @brief Method set_modelDeSelectTransition, addr 0x2598384, size 0x8, virtual false, abstract: false, final false
  inline void set_modelDeSelectTransition(::StringW value);

  /// @brief Method set_modelParent, addr 0x25982ac, size 0x9c, virtual false, abstract: false, final false
  inline void set_modelParent(::UnityEngine::Transform* value);

  /// @brief Method set_modelPrefab, addr 0x259829c, size 0x8, virtual false, abstract: false, final false
  inline void set_modelPrefab(::UnityEngine::Transform* value);

  /// @brief Method set_modelSelectTransition, addr 0x2598374, size 0x8, virtual false, abstract: false, final false
  inline void set_modelSelectTransition(::StringW value);

  /// @brief Method set_modelTransform, addr 0x2598d58, size 0x4, virtual false, abstract: false, final false
  inline void set_modelTransform(::UnityEngine::Transform* value);

  /// @brief Method set_updateTrackingType, addr 0x2598264, size 0x8, virtual false, abstract: false, final false
  inline void set_updateTrackingType(::UnityEngine::XR::Interaction::Toolkit::__XRBaseController__UpdateType value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRBaseController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRBaseController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRBaseController(XRBaseController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRBaseController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRBaseController(XRBaseController const&) = delete;

  /// @brief Field m_UpdateTrackingType, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::__XRBaseController__UpdateType ___m_UpdateTrackingType;

  /// @brief Field m_EnableInputTracking, offset: 0x1c, size: 0x1, def value: None
  bool ___m_EnableInputTracking;

  /// @brief Field m_EnableInputActions, offset: 0x1d, size: 0x1, def value: None
  bool ___m_EnableInputActions;

  /// @brief Field m_ModelPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___m_ModelPrefab;

  /// @brief Field m_ModelParent, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___m_ModelParent;

  /// @brief Field m_Model, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___m_Model;

  /// @brief Field m_AnimateModel, offset: 0x38, size: 0x1, def value: None
  bool ___m_AnimateModel;

  /// @brief Field m_ModelSelectTransition, offset: 0x40, size: 0x8, def value: None
  ::StringW ___m_ModelSelectTransition;

  /// @brief Field m_ModelDeSelectTransition, offset: 0x48, size: 0x8, def value: None
  ::StringW ___m_ModelDeSelectTransition;

  /// @brief Field m_HideControllerModel, offset: 0x50, size: 0x1, def value: None
  bool ___m_HideControllerModel;

  /// @brief Field m_SelectInteractionState, offset: 0x54, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::InteractionState ___m_SelectInteractionState;

  /// @brief Field m_ActivateInteractionState, offset: 0x5c, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::InteractionState ___m_ActivateInteractionState;

  /// @brief Field m_UIPressInteractionState, offset: 0x64, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::InteractionState ___m_UIPressInteractionState;

  /// @brief Field m_ControllerState, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::XRControllerState* ___m_ControllerState;

  /// @brief Field m_CreateControllerState, offset: 0x78, size: 0x1, def value: None
  bool ___m_CreateControllerState;

  /// @brief Field m_ModelAnimator, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animator> ___m_ModelAnimator;

  /// @brief Field m_HasWarnedAnimatorMissing, offset: 0x88, size: 0x1, def value: None
  bool ___m_HasWarnedAnimatorMissing;

  /// @brief Field m_PerformSetup, offset: 0x89, size: 0x1, def value: None
  bool ___m_PerformSetup;

  /// @brief Field <anchorControlDeadzone>k__BackingField, offset: 0x8c, size: 0x4, def value: None
  float_t ____anchorControlDeadzone_k__BackingField;

  /// @brief Field <anchorControlOffAxisDeadzone>k__BackingField, offset: 0x90, size: 0x4, def value: None
  float_t ____anchorControlOffAxisDeadzone_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::XRBaseController, 0x98>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ___m_UpdateTrackingType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ___m_EnableInputTracking) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ___m_EnableInputActions) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ___m_ModelPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ___m_ModelParent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ___m_Model) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ___m_AnimateModel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ___m_ModelSelectTransition) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ___m_ModelDeSelectTransition) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ___m_HideControllerModel) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ___m_SelectInteractionState) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ___m_ActivateInteractionState) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ___m_UIPressInteractionState) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ___m_ControllerState) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ___m_CreateControllerState) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ___m_ModelAnimator) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ___m_HasWarnedAnimatorMissing) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ___m_PerformSetup) == 0x89, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ____anchorControlDeadzone_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ____anchorControlOffAxisDeadzone_k__BackingField) == 0x90, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::__XRBaseController__UpdateType, "UnityEngine.XR.Interaction.Toolkit", "XRBaseController/UpdateType");
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::XRBaseController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::XRBaseController*, "UnityEngine.XR.Interaction.Toolkit", "XRBaseController");
