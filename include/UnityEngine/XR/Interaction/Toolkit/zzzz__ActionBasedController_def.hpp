#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputActionProperty_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseController_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ActionBasedController)
namespace UnityEngine::InputSystem {
struct InputActionProperty;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRControllerState;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class ActionBasedController;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController);
// Type: UnityEngine.XR.Interaction.Toolkit::ActionBasedController
// SizeInfo { instance_size: 472, native_size: -1, calculated_instance_size: 472, calculated_native_size: 472, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::ActionBasedController*
class CORDL_TYPE ActionBasedController : public ::UnityEngine::XR::Interaction::Toolkit::XRBaseController {
public:
  // Declarations
  __declspec(property(get = get_activateAction, put = set_activateAction))::UnityEngine::InputSystem::InputActionProperty activateAction;

  __declspec(property(get = get_activateActionValue, put = set_activateActionValue))::UnityEngine::InputSystem::InputActionProperty activateActionValue;

  __declspec(property(get = get_buttonPressPoint, put = set_buttonPressPoint)) float_t buttonPressPoint;

  __declspec(property(get = get_directionalAnchorRotationAction, put = set_directionalAnchorRotationAction))::UnityEngine::InputSystem::InputActionProperty directionalAnchorRotationAction;

  __declspec(property(get = get_hapticDeviceAction, put = set_hapticDeviceAction))::UnityEngine::InputSystem::InputActionProperty hapticDeviceAction;

  /// @brief Field m_ActivateAction, offset 0x110, size 0x18
  __declspec(property(get = __cordl_internal_get_m_ActivateAction, put = __cordl_internal_set_m_ActivateAction))::UnityEngine::InputSystem::InputActionProperty m_ActivateAction;

  /// @brief Field m_ActivateActionValue, offset 0x128, size 0x18
  __declspec(property(get = __cordl_internal_get_m_ActivateActionValue, put = __cordl_internal_set_m_ActivateActionValue))::UnityEngine::InputSystem::InputActionProperty m_ActivateActionValue;

  /// @brief Field m_ButtonPressPoint, offset 0x1d4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ButtonPressPoint, put = __cordl_internal_set_m_ButtonPressPoint)) float_t m_ButtonPressPoint;

  /// @brief Field m_DirectionalAnchorRotationAction, offset 0x1a0, size 0x18
  __declspec(property(get = __cordl_internal_get_m_DirectionalAnchorRotationAction,
                      put = __cordl_internal_set_m_DirectionalAnchorRotationAction))::UnityEngine::InputSystem::InputActionProperty m_DirectionalAnchorRotationAction;

  /// @brief Field m_HapticDeviceAction, offset 0x170, size 0x18
  __declspec(property(get = __cordl_internal_get_m_HapticDeviceAction, put = __cordl_internal_set_m_HapticDeviceAction))::UnityEngine::InputSystem::InputActionProperty m_HapticDeviceAction;

  /// @brief Field m_HasCheckedDisabledInputReferenceActions, offset 0x1d1, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasCheckedDisabledInputReferenceActions,
                      put = __cordl_internal_set_m_HasCheckedDisabledInputReferenceActions)) bool m_HasCheckedDisabledInputReferenceActions;

  /// @brief Field m_HasCheckedDisabledTrackingInputReferenceActions, offset 0x1d0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasCheckedDisabledTrackingInputReferenceActions,
                      put = __cordl_internal_set_m_HasCheckedDisabledTrackingInputReferenceActions)) bool m_HasCheckedDisabledTrackingInputReferenceActions;

  /// @brief Field m_PositionAction, offset 0x98, size 0x18
  __declspec(property(get = __cordl_internal_get_m_PositionAction, put = __cordl_internal_set_m_PositionAction))::UnityEngine::InputSystem::InputActionProperty m_PositionAction;

  /// @brief Field m_RotateAnchorAction, offset 0x188, size 0x18
  __declspec(property(get = __cordl_internal_get_m_RotateAnchorAction, put = __cordl_internal_set_m_RotateAnchorAction))::UnityEngine::InputSystem::InputActionProperty m_RotateAnchorAction;

  /// @brief Field m_RotationAction, offset 0xb0, size 0x18
  __declspec(property(get = __cordl_internal_get_m_RotationAction, put = __cordl_internal_set_m_RotationAction))::UnityEngine::InputSystem::InputActionProperty m_RotationAction;

  /// @brief Field m_SelectAction, offset 0xe0, size 0x18
  __declspec(property(get = __cordl_internal_get_m_SelectAction, put = __cordl_internal_set_m_SelectAction))::UnityEngine::InputSystem::InputActionProperty m_SelectAction;

  /// @brief Field m_SelectActionValue, offset 0xf8, size 0x18
  __declspec(property(get = __cordl_internal_get_m_SelectActionValue, put = __cordl_internal_set_m_SelectActionValue))::UnityEngine::InputSystem::InputActionProperty m_SelectActionValue;

  /// @brief Field m_TrackingStateAction, offset 0xc8, size 0x18
  __declspec(property(get = __cordl_internal_get_m_TrackingStateAction, put = __cordl_internal_set_m_TrackingStateAction))::UnityEngine::InputSystem::InputActionProperty m_TrackingStateAction;

  /// @brief Field m_TranslateAnchorAction, offset 0x1b8, size 0x18
  __declspec(property(get = __cordl_internal_get_m_TranslateAnchorAction, put = __cordl_internal_set_m_TranslateAnchorAction))::UnityEngine::InputSystem::InputActionProperty m_TranslateAnchorAction;

  /// @brief Field m_UIPressAction, offset 0x140, size 0x18
  __declspec(property(get = __cordl_internal_get_m_UIPressAction, put = __cordl_internal_set_m_UIPressAction))::UnityEngine::InputSystem::InputActionProperty m_UIPressAction;

  /// @brief Field m_UIPressActionValue, offset 0x158, size 0x18
  __declspec(property(get = __cordl_internal_get_m_UIPressActionValue, put = __cordl_internal_set_m_UIPressActionValue))::UnityEngine::InputSystem::InputActionProperty m_UIPressActionValue;

  __declspec(property(get = get_positionAction, put = set_positionAction))::UnityEngine::InputSystem::InputActionProperty positionAction;

  __declspec(property(get = get_rotateAnchorAction, put = set_rotateAnchorAction))::UnityEngine::InputSystem::InputActionProperty rotateAnchorAction;

  __declspec(property(get = get_rotationAction, put = set_rotationAction))::UnityEngine::InputSystem::InputActionProperty rotationAction;

  __declspec(property(get = get_selectAction, put = set_selectAction))::UnityEngine::InputSystem::InputActionProperty selectAction;

  __declspec(property(get = get_selectActionValue, put = set_selectActionValue))::UnityEngine::InputSystem::InputActionProperty selectActionValue;

  __declspec(property(get = get_trackingStateAction, put = set_trackingStateAction))::UnityEngine::InputSystem::InputActionProperty trackingStateAction;

  __declspec(property(get = get_translateAnchorAction, put = set_translateAnchorAction))::UnityEngine::InputSystem::InputActionProperty translateAnchorAction;

  __declspec(property(get = get_uiPressAction, put = set_uiPressAction))::UnityEngine::InputSystem::InputActionProperty uiPressAction;

  __declspec(property(get = get_uiPressActionValue, put = set_uiPressActionValue))::UnityEngine::InputSystem::InputActionProperty uiPressActionValue;

  /// @brief Method DisableAllDirectActions, addr 0x2597688, size 0x1a0, virtual false, abstract: false, final false
  inline void DisableAllDirectActions();

  /// @brief Method EnableAllDirectActions, addr 0x259745c, size 0x1a0, virtual false, abstract: false, final false
  inline void EnableAllDirectActions();

  /// @brief Method IsDisabledReferenceAction, addr 0x2597b24, size 0xcc, virtual false, abstract: false, final false
  static inline bool IsDisabledReferenceAction(::UnityEngine::InputSystem::InputActionProperty property);

  /// @brief Method IsPressed, addr 0x2597f6c, size 0x2c, virtual true, abstract: false, final false
  inline bool IsPressed(::UnityEngine::InputSystem::InputAction* action);

  static inline ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController* New_ctor();

  /// @brief Method OnDisable, addr 0x25975fc, size 0x18, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x25973d0, size 0x18, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method ReadValue, addr 0x2597f98, size 0x1ac, virtual true, abstract: false, final false
  inline float_t ReadValue(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method SendHapticImpulse, addr 0x2598144, size 0xc8, virtual true, abstract: false, final false
  inline bool SendHapticImpulse(float_t amplitude, float_t duration);

  /// @brief Method SetInputActionProperty, addr 0x2596ff4, size 0x98, virtual false, abstract: false, final false
  inline void SetInputActionProperty(ByRef<::UnityEngine::InputSystem::InputActionProperty> property, ::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method UpdateInput, addr 0x2597bf0, size 0x334, virtual true, abstract: false, final false
  inline void UpdateInput(::UnityEngine::XR::Interaction::Toolkit::XRControllerState* controllerState);

  /// @brief Method UpdateTrackingInput, addr 0x2597828, size 0x2f8, virtual true, abstract: false, final false
  inline void UpdateTrackingInput(::UnityEngine::XR::Interaction::Toolkit::XRControllerState* controllerState);

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_ActivateAction() const;

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_ActivateAction();

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_ActivateActionValue() const;

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_ActivateActionValue();

  constexpr float_t const& __cordl_internal_get_m_ButtonPressPoint() const;

  constexpr float_t& __cordl_internal_get_m_ButtonPressPoint();

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_DirectionalAnchorRotationAction() const;

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_DirectionalAnchorRotationAction();

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_HapticDeviceAction() const;

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_HapticDeviceAction();

  constexpr bool const& __cordl_internal_get_m_HasCheckedDisabledInputReferenceActions() const;

  constexpr bool& __cordl_internal_get_m_HasCheckedDisabledInputReferenceActions();

  constexpr bool const& __cordl_internal_get_m_HasCheckedDisabledTrackingInputReferenceActions() const;

  constexpr bool& __cordl_internal_get_m_HasCheckedDisabledTrackingInputReferenceActions();

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_PositionAction() const;

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_PositionAction();

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_RotateAnchorAction() const;

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_RotateAnchorAction();

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_RotationAction() const;

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_RotationAction();

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_SelectAction() const;

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_SelectAction();

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_SelectActionValue() const;

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_SelectActionValue();

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_TrackingStateAction() const;

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_TrackingStateAction();

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_TranslateAnchorAction() const;

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_TranslateAnchorAction();

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_UIPressAction() const;

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_UIPressAction();

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_UIPressActionValue() const;

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_UIPressActionValue();

  constexpr void __cordl_internal_set_m_ActivateAction(::UnityEngine::InputSystem::InputActionProperty value);

  constexpr void __cordl_internal_set_m_ActivateActionValue(::UnityEngine::InputSystem::InputActionProperty value);

  constexpr void __cordl_internal_set_m_ButtonPressPoint(float_t value);

  constexpr void __cordl_internal_set_m_DirectionalAnchorRotationAction(::UnityEngine::InputSystem::InputActionProperty value);

  constexpr void __cordl_internal_set_m_HapticDeviceAction(::UnityEngine::InputSystem::InputActionProperty value);

  constexpr void __cordl_internal_set_m_HasCheckedDisabledInputReferenceActions(bool value);

  constexpr void __cordl_internal_set_m_HasCheckedDisabledTrackingInputReferenceActions(bool value);

  constexpr void __cordl_internal_set_m_PositionAction(::UnityEngine::InputSystem::InputActionProperty value);

  constexpr void __cordl_internal_set_m_RotateAnchorAction(::UnityEngine::InputSystem::InputActionProperty value);

  constexpr void __cordl_internal_set_m_RotationAction(::UnityEngine::InputSystem::InputActionProperty value);

  constexpr void __cordl_internal_set_m_SelectAction(::UnityEngine::InputSystem::InputActionProperty value);

  constexpr void __cordl_internal_set_m_SelectActionValue(::UnityEngine::InputSystem::InputActionProperty value);

  constexpr void __cordl_internal_set_m_TrackingStateAction(::UnityEngine::InputSystem::InputActionProperty value);

  constexpr void __cordl_internal_set_m_TranslateAnchorAction(::UnityEngine::InputSystem::InputActionProperty value);

  constexpr void __cordl_internal_set_m_UIPressAction(::UnityEngine::InputSystem::InputActionProperty value);

  constexpr void __cordl_internal_set_m_UIPressActionValue(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method .ctor, addr 0x259821c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_activateAction, addr 0x25971a0, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_activateAction();

  /// @brief Method get_activateActionValue, addr 0x25971e4, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_activateActionValue();

  /// @brief Method get_buttonPressPoint, addr 0x259820c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_buttonPressPoint();

  /// @brief Method get_directionalAnchorRotationAction, addr 0x2597344, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_directionalAnchorRotationAction();

  /// @brief Method get_hapticDeviceAction, addr 0x25972b8, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_hapticDeviceAction();

  /// @brief Method get_positionAction, addr 0x2596fb0, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_positionAction();

  /// @brief Method get_rotateAnchorAction, addr 0x25972fc, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_rotateAnchorAction();

  /// @brief Method get_rotationAction, addr 0x259708c, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_rotationAction();

  /// @brief Method get_selectAction, addr 0x2597114, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_selectAction();

  /// @brief Method get_selectActionValue, addr 0x2597158, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_selectActionValue();

  /// @brief Method get_trackingStateAction, addr 0x25970d0, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_trackingStateAction();

  /// @brief Method get_translateAnchorAction, addr 0x2597388, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_translateAnchorAction();

  /// @brief Method get_uiPressAction, addr 0x259722c, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_uiPressAction();

  /// @brief Method get_uiPressActionValue, addr 0x2597270, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_uiPressActionValue();

  /// @brief Method set_activateAction, addr 0x25971b4, size 0x30, virtual false, abstract: false, final false
  inline void set_activateAction(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method set_activateActionValue, addr 0x25971fc, size 0x30, virtual false, abstract: false, final false
  inline void set_activateActionValue(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method set_buttonPressPoint, addr 0x2598214, size 0x8, virtual false, abstract: false, final false
  inline void set_buttonPressPoint(float_t value);

  /// @brief Method set_directionalAnchorRotationAction, addr 0x2597358, size 0x30, virtual false, abstract: false, final false
  inline void set_directionalAnchorRotationAction(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method set_hapticDeviceAction, addr 0x25972cc, size 0x30, virtual false, abstract: false, final false
  inline void set_hapticDeviceAction(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method set_positionAction, addr 0x2596fc4, size 0x30, virtual false, abstract: false, final false
  inline void set_positionAction(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method set_rotateAnchorAction, addr 0x2597314, size 0x30, virtual false, abstract: false, final false
  inline void set_rotateAnchorAction(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method set_rotationAction, addr 0x25970a0, size 0x30, virtual false, abstract: false, final false
  inline void set_rotationAction(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method set_selectAction, addr 0x2597128, size 0x30, virtual false, abstract: false, final false
  inline void set_selectAction(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method set_selectActionValue, addr 0x2597170, size 0x30, virtual false, abstract: false, final false
  inline void set_selectActionValue(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method set_trackingStateAction, addr 0x25970e4, size 0x30, virtual false, abstract: false, final false
  inline void set_trackingStateAction(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method set_translateAnchorAction, addr 0x25973a0, size 0x30, virtual false, abstract: false, final false
  inline void set_translateAnchorAction(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method set_uiPressAction, addr 0x2597240, size 0x30, virtual false, abstract: false, final false
  inline void set_uiPressAction(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method set_uiPressActionValue, addr 0x2597288, size 0x30, virtual false, abstract: false, final false
  inline void set_uiPressActionValue(::UnityEngine::InputSystem::InputActionProperty value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ActionBasedController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ActionBasedController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ActionBasedController(ActionBasedController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ActionBasedController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ActionBasedController(ActionBasedController const&) = delete;

  /// @brief Field m_PositionAction, offset: 0x98, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_PositionAction;

  /// @brief Field m_RotationAction, offset: 0xb0, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_RotationAction;

  /// @brief Field m_TrackingStateAction, offset: 0xc8, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_TrackingStateAction;

  /// @brief Field m_SelectAction, offset: 0xe0, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_SelectAction;

  /// @brief Field m_SelectActionValue, offset: 0xf8, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_SelectActionValue;

  /// @brief Field m_ActivateAction, offset: 0x110, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_ActivateAction;

  /// @brief Field m_ActivateActionValue, offset: 0x128, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_ActivateActionValue;

  /// @brief Field m_UIPressAction, offset: 0x140, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_UIPressAction;

  /// @brief Field m_UIPressActionValue, offset: 0x158, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_UIPressActionValue;

  /// @brief Field m_HapticDeviceAction, offset: 0x170, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_HapticDeviceAction;

  /// @brief Field m_RotateAnchorAction, offset: 0x188, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_RotateAnchorAction;

  /// @brief Field m_DirectionalAnchorRotationAction, offset: 0x1a0, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_DirectionalAnchorRotationAction;

  /// @brief Field m_TranslateAnchorAction, offset: 0x1b8, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_TranslateAnchorAction;

  /// @brief Field m_HasCheckedDisabledTrackingInputReferenceActions, offset: 0x1d0, size: 0x1, def value: None
  bool ___m_HasCheckedDisabledTrackingInputReferenceActions;

  /// @brief Field m_HasCheckedDisabledInputReferenceActions, offset: 0x1d1, size: 0x1, def value: None
  bool ___m_HasCheckedDisabledInputReferenceActions;

  /// @brief Field m_ButtonPressPoint, offset: 0x1d4, size: 0x4, def value: None
  float_t ___m_ButtonPressPoint;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController, 0x1d8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController, ___m_PositionAction) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController, ___m_RotationAction) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController, ___m_TrackingStateAction) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController, ___m_SelectAction) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController, ___m_SelectActionValue) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController, ___m_ActivateAction) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController, ___m_ActivateActionValue) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController, ___m_UIPressAction) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController, ___m_UIPressActionValue) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController, ___m_HapticDeviceAction) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController, ___m_RotateAnchorAction) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController, ___m_DirectionalAnchorRotationAction) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController, ___m_TranslateAnchorAction) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController, ___m_HasCheckedDisabledTrackingInputReferenceActions) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController, ___m_HasCheckedDisabledInputReferenceActions) == 0x1d1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController, ___m_ButtonPressPoint) == 0x1d4, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*, "UnityEngine.XR.Interaction.Toolkit", "ActionBasedController");
