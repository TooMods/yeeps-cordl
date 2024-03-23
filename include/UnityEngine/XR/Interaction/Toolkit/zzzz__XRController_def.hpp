#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InputHelpers_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseController_def.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XRController)
namespace UnityEngine::Experimental::XR::Interaction {
class BasePoseProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRControllerState;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __InputHelpers__Axis2D;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __InputHelpers__Button;
}
namespace UnityEngine::XR {
struct InputDevice;
}
namespace UnityEngine::XR {
struct XRNode;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class XRController;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::XRController);
// Type: UnityEngine.XR.Interaction.Toolkit::XRController
// SizeInfo { instance_size: 216, native_size: -1, calculated_instance_size: 216, calculated_native_size: 216, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::XRController*
class CORDL_TYPE XRController : public ::UnityEngine::XR::Interaction::Toolkit::XRBaseController {
public:
  // Declarations
  __declspec(property(get = get_activateUsage, put = set_activateUsage))::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button activateUsage;

  __declspec(property(get = get_axisToPressThreshold, put = set_axisToPressThreshold)) float_t axisToPressThreshold;

  __declspec(property(get = get_controllerNode, put = set_controllerNode))::UnityEngine::XR::XRNode controllerNode;

  __declspec(property(get = get_directionalAnchorRotation, put = set_directionalAnchorRotation))::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Axis2D directionalAnchorRotation;

  __declspec(property(get = get_inputDevice))::UnityEngine::XR::InputDevice inputDevice;

  /// @brief Field m_ActivateUsage, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ActivateUsage, put = __cordl_internal_set_m_ActivateUsage))::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button m_ActivateUsage;

  /// @brief Field m_AxisToPressThreshold, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AxisToPressThreshold, put = __cordl_internal_set_m_AxisToPressThreshold)) float_t m_AxisToPressThreshold;

  /// @brief Field m_ControllerNode, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ControllerNode, put = __cordl_internal_set_m_ControllerNode))::UnityEngine::XR::XRNode m_ControllerNode;

  /// @brief Field m_DirectionalAnchorRotation, offset 0xbc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DirectionalAnchorRotation,
                      put = __cordl_internal_set_m_DirectionalAnchorRotation))::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Axis2D m_DirectionalAnchorRotation;

  /// @brief Field m_InputDevice, offset 0xc8, size 0x10
  __declspec(property(get = __cordl_internal_get_m_InputDevice, put = __cordl_internal_set_m_InputDevice))::UnityEngine::XR::InputDevice m_InputDevice;

  /// @brief Field m_InputDeviceControllerNode, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_m_InputDeviceControllerNode, put = __cordl_internal_set_m_InputDeviceControllerNode))::UnityEngine::XR::XRNode m_InputDeviceControllerNode;

  /// @brief Field m_MoveObjectIn, offset 0xb4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MoveObjectIn, put = __cordl_internal_set_m_MoveObjectIn))::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button m_MoveObjectIn;

  /// @brief Field m_MoveObjectOut, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MoveObjectOut, put = __cordl_internal_set_m_MoveObjectOut))::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button m_MoveObjectOut;

  /// @brief Field m_PoseProvider, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PoseProvider, put = __cordl_internal_set_m_PoseProvider))::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider> m_PoseProvider;

  /// @brief Field m_RotateAnchorLeft, offset 0xac, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RotateAnchorLeft, put = __cordl_internal_set_m_RotateAnchorLeft))::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button m_RotateAnchorLeft;

  /// @brief Field m_RotateAnchorRight, offset 0xb0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RotateAnchorRight,
                      put = __cordl_internal_set_m_RotateAnchorRight))::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button m_RotateAnchorRight;

  /// @brief Field m_SelectUsage, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SelectUsage, put = __cordl_internal_set_m_SelectUsage))::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button m_SelectUsage;

  /// @brief Field m_UIPressUsage, offset 0xa4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_UIPressUsage, put = __cordl_internal_set_m_UIPressUsage))::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button m_UIPressUsage;

  __declspec(property(get = get_moveObjectIn, put = set_moveObjectIn))::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button moveObjectIn;

  __declspec(property(get = get_moveObjectOut, put = set_moveObjectOut))::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button moveObjectOut;

  __declspec(property(get = get_poseProvider, put = set_poseProvider))::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider> poseProvider;

  __declspec(property(get = get_rotateObjectLeft, put = set_rotateObjectLeft))::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button rotateObjectLeft;

  __declspec(property(get = get_rotateObjectRight, put = set_rotateObjectRight))::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button rotateObjectRight;

  __declspec(property(get = get_selectUsage, put = set_selectUsage))::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button selectUsage;

  __declspec(property(get = get_uiPressUsage, put = set_uiPressUsage))::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button uiPressUsage;

  /// @brief Method IsPressed, addr 0x25991d4, size 0xa4, virtual true, abstract: false, final false
  inline bool IsPressed(::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button button);

  static inline ::UnityEngine::XR::Interaction::Toolkit::XRController* New_ctor();

  /// @brief Method ReadValue, addr 0x2599278, size 0x8c, virtual true, abstract: false, final false
  inline float_t ReadValue(::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button button);

  /// @brief Method SendHapticImpulse, addr 0x2599304, size 0x94, virtual true, abstract: false, final false
  inline bool SendHapticImpulse(float_t amplitude, float_t duration);

  /// @brief Method UpdateInput, addr 0x2599080, size 0x154, virtual true, abstract: false, final false
  inline void UpdateInput(::UnityEngine::XR::Interaction::Toolkit::XRControllerState* controllerState);

  /// @brief Method UpdateTrackingInput, addr 0x2598e7c, size 0x204, virtual true, abstract: false, final false
  inline void UpdateTrackingInput(::UnityEngine::XR::Interaction::Toolkit::XRControllerState* controllerState);

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button const& __cordl_internal_get_m_ActivateUsage() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button& __cordl_internal_get_m_ActivateUsage();

  constexpr float_t const& __cordl_internal_get_m_AxisToPressThreshold() const;

  constexpr float_t& __cordl_internal_get_m_AxisToPressThreshold();

  constexpr ::UnityEngine::XR::XRNode const& __cordl_internal_get_m_ControllerNode() const;

  constexpr ::UnityEngine::XR::XRNode& __cordl_internal_get_m_ControllerNode();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Axis2D const& __cordl_internal_get_m_DirectionalAnchorRotation() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Axis2D& __cordl_internal_get_m_DirectionalAnchorRotation();

  constexpr ::UnityEngine::XR::InputDevice const& __cordl_internal_get_m_InputDevice() const;

  constexpr ::UnityEngine::XR::InputDevice& __cordl_internal_get_m_InputDevice();

  constexpr ::UnityEngine::XR::XRNode const& __cordl_internal_get_m_InputDeviceControllerNode() const;

  constexpr ::UnityEngine::XR::XRNode& __cordl_internal_get_m_InputDeviceControllerNode();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button const& __cordl_internal_get_m_MoveObjectIn() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button& __cordl_internal_get_m_MoveObjectIn();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button const& __cordl_internal_get_m_MoveObjectOut() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button& __cordl_internal_get_m_MoveObjectOut();

  constexpr ::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider> const& __cordl_internal_get_m_PoseProvider() const;

  constexpr ::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider>& __cordl_internal_get_m_PoseProvider();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button const& __cordl_internal_get_m_RotateAnchorLeft() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button& __cordl_internal_get_m_RotateAnchorLeft();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button const& __cordl_internal_get_m_RotateAnchorRight() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button& __cordl_internal_get_m_RotateAnchorRight();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button const& __cordl_internal_get_m_SelectUsage() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button& __cordl_internal_get_m_SelectUsage();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button const& __cordl_internal_get_m_UIPressUsage() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button& __cordl_internal_get_m_UIPressUsage();

  constexpr void __cordl_internal_set_m_ActivateUsage(::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button value);

  constexpr void __cordl_internal_set_m_AxisToPressThreshold(float_t value);

  constexpr void __cordl_internal_set_m_ControllerNode(::UnityEngine::XR::XRNode value);

  constexpr void __cordl_internal_set_m_DirectionalAnchorRotation(::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Axis2D value);

  constexpr void __cordl_internal_set_m_InputDevice(::UnityEngine::XR::InputDevice value);

  constexpr void __cordl_internal_set_m_InputDeviceControllerNode(::UnityEngine::XR::XRNode value);

  constexpr void __cordl_internal_set_m_MoveObjectIn(::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button value);

  constexpr void __cordl_internal_set_m_MoveObjectOut(::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button value);

  constexpr void __cordl_internal_set_m_PoseProvider(::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider> value);

  constexpr void __cordl_internal_set_m_RotateAnchorLeft(::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button value);

  constexpr void __cordl_internal_set_m_RotateAnchorRight(::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button value);

  constexpr void __cordl_internal_set_m_SelectUsage(::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button value);

  constexpr void __cordl_internal_set_m_UIPressUsage(::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button value);

  /// @brief Method .ctor, addr 0x2599398, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_activateUsage, addr 0x2598d9c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button get_activateUsage();

  /// @brief Method get_axisToPressThreshold, addr 0x2598dbc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_axisToPressThreshold();

  /// @brief Method get_controllerNode, addr 0x2598d7c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::XRNode get_controllerNode();

  /// @brief Method get_directionalAnchorRotation, addr 0x2598e0c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Axis2D get_directionalAnchorRotation();

  /// @brief Method get_inputDevice, addr 0x2598e2c, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::InputDevice get_inputDevice();

  /// @brief Method get_moveObjectIn, addr 0x2598dec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button get_moveObjectIn();

  /// @brief Method get_moveObjectOut, addr 0x2598dfc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button get_moveObjectOut();

  /// @brief Method get_poseProvider, addr 0x2598e1c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider> get_poseProvider();

  /// @brief Method get_rotateObjectLeft, addr 0x2598dcc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button get_rotateObjectLeft();

  /// @brief Method get_rotateObjectRight, addr 0x2598ddc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button get_rotateObjectRight();

  /// @brief Method get_selectUsage, addr 0x2598d8c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button get_selectUsage();

  /// @brief Method get_uiPressUsage, addr 0x2598dac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button get_uiPressUsage();

  /// @brief Method set_activateUsage, addr 0x2598da4, size 0x8, virtual false, abstract: false, final false
  inline void set_activateUsage(::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button value);

  /// @brief Method set_axisToPressThreshold, addr 0x2598dc4, size 0x8, virtual false, abstract: false, final false
  inline void set_axisToPressThreshold(float_t value);

  /// @brief Method set_controllerNode, addr 0x2598d84, size 0x8, virtual false, abstract: false, final false
  inline void set_controllerNode(::UnityEngine::XR::XRNode value);

  /// @brief Method set_directionalAnchorRotation, addr 0x2598e14, size 0x8, virtual false, abstract: false, final false
  inline void set_directionalAnchorRotation(::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Axis2D value);

  /// @brief Method set_moveObjectIn, addr 0x2598df4, size 0x8, virtual false, abstract: false, final false
  inline void set_moveObjectIn(::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button value);

  /// @brief Method set_moveObjectOut, addr 0x2598e04, size 0x8, virtual false, abstract: false, final false
  inline void set_moveObjectOut(::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button value);

  /// @brief Method set_poseProvider, addr 0x2598e24, size 0x8, virtual false, abstract: false, final false
  inline void set_poseProvider(::UnityEngine::Experimental::XR::Interaction::BasePoseProvider* value);

  /// @brief Method set_rotateObjectLeft, addr 0x2598dd4, size 0x8, virtual false, abstract: false, final false
  inline void set_rotateObjectLeft(::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button value);

  /// @brief Method set_rotateObjectRight, addr 0x2598de4, size 0x8, virtual false, abstract: false, final false
  inline void set_rotateObjectRight(::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button value);

  /// @brief Method set_selectUsage, addr 0x2598d94, size 0x8, virtual false, abstract: false, final false
  inline void set_selectUsage(::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button value);

  /// @brief Method set_uiPressUsage, addr 0x2598db4, size 0x8, virtual false, abstract: false, final false
  inline void set_uiPressUsage(::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRController(XRController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRController(XRController const&) = delete;

  /// @brief Field m_ControllerNode, offset: 0x94, size: 0x4, def value: None
  ::UnityEngine::XR::XRNode ___m_ControllerNode;

  /// @brief Field m_InputDeviceControllerNode, offset: 0x98, size: 0x4, def value: None
  ::UnityEngine::XR::XRNode ___m_InputDeviceControllerNode;

  /// @brief Field m_SelectUsage, offset: 0x9c, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button ___m_SelectUsage;

  /// @brief Field m_ActivateUsage, offset: 0xa0, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button ___m_ActivateUsage;

  /// @brief Field m_UIPressUsage, offset: 0xa4, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button ___m_UIPressUsage;

  /// @brief Field m_AxisToPressThreshold, offset: 0xa8, size: 0x4, def value: None
  float_t ___m_AxisToPressThreshold;

  /// @brief Field m_RotateAnchorLeft, offset: 0xac, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button ___m_RotateAnchorLeft;

  /// @brief Field m_RotateAnchorRight, offset: 0xb0, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button ___m_RotateAnchorRight;

  /// @brief Field m_MoveObjectIn, offset: 0xb4, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button ___m_MoveObjectIn;

  /// @brief Field m_MoveObjectOut, offset: 0xb8, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button ___m_MoveObjectOut;

  /// @brief Field m_DirectionalAnchorRotation, offset: 0xbc, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Axis2D ___m_DirectionalAnchorRotation;

  /// @brief Field m_PoseProvider, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider> ___m_PoseProvider;

  /// @brief Field m_InputDevice, offset: 0xc8, size: 0x10, def value: None
  ::UnityEngine::XR::InputDevice ___m_InputDevice;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::XRController, 0xd8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRController, ___m_ControllerNode) == 0x94, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRController, ___m_InputDeviceControllerNode) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRController, ___m_SelectUsage) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRController, ___m_ActivateUsage) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRController, ___m_UIPressUsage) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRController, ___m_AxisToPressThreshold) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRController, ___m_RotateAnchorLeft) == 0xac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRController, ___m_RotateAnchorRight) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRController, ___m_MoveObjectIn) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRController, ___m_MoveObjectOut) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRController, ___m_DirectionalAnchorRotation) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRController, ___m_PoseProvider) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRController, ___m_InputDevice) == 0xc8, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::XRController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::XRController*, "UnityEngine.XR.Interaction.Toolkit", "XRController");
