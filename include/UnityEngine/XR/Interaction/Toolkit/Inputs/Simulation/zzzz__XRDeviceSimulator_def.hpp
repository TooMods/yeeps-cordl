#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRDeviceSimulator_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRSimulatedControllerState_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRSimulatedHMDState_def.hpp"
#include "UnityEngine/XR/zzzz__InputTrackingState_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__CursorLockMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRDeviceSimulator)
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
namespace UnityEngine::InputSystem {
class InputActionAsset;
}
namespace UnityEngine::InputSystem {
class InputActionReference;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
struct InputDeviceChange;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem {
struct __InputAction__CallbackContext;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
struct XRSimulatedControllerState;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
class XRSimulatedController;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
struct XRSimulatedHMDState;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
class XRSimulatedHMD;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
struct __XRDeviceSimulator__Axis2DTargets;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
struct __XRDeviceSimulator__Space;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
struct __XRDeviceSimulator__TargetedDevices;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
struct __XRDeviceSimulator__TransformationMode;
}
namespace UnityEngine::XR {
struct InputTrackingState;
}
namespace UnityEngine {
struct CursorLockMode;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
struct __XRDeviceSimulator__Axis2DTargets;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
struct __XRDeviceSimulator__Space;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
struct __XRDeviceSimulator__TargetedDevices;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
struct __XRDeviceSimulator__TransformationMode;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
class XRDeviceSimulator;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Axis2DTargets);
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space);
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices);
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TransformationMode);
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator);
// Type: ::Space
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
// Is value type: true
// CS Name: ::XRDeviceSimulator::Space
struct CORDL_TYPE __XRDeviceSimulator__Space {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XRDeviceSimulator__Space_Unwrapped
  enum struct ____XRDeviceSimulator__Space_Unwrapped : int32_t {
    __E_Local = static_cast<int32_t>(0x0),
    __E_Parent = static_cast<int32_t>(0x1),
    __E_Screen = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XRDeviceSimulator__Space_Unwrapped() const noexcept {
    return static_cast<____XRDeviceSimulator__Space_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRDeviceSimulator__Space();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XRDeviceSimulator__Space(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Local value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space const Local;

  /// @brief Field Parent value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space const Parent;

  /// @brief Field Screen value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space const Screen;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation
// Type: ::TransformationMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
// Is value type: true
// CS Name: ::XRDeviceSimulator::TransformationMode
struct CORDL_TYPE __XRDeviceSimulator__TransformationMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XRDeviceSimulator__TransformationMode_Unwrapped
  enum struct ____XRDeviceSimulator__TransformationMode_Unwrapped : int32_t {
    __E_Translate = static_cast<int32_t>(0x0),
    __E_Rotate = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XRDeviceSimulator__TransformationMode_Unwrapped() const noexcept {
    return static_cast<____XRDeviceSimulator__TransformationMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRDeviceSimulator__TransformationMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XRDeviceSimulator__TransformationMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Rotate value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TransformationMode const Rotate;

  /// @brief Field Translate value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TransformationMode const Translate;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TransformationMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TransformationMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation
// Type: ::TargetedDevices
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
// Is value type: true
// CS Name: ::XRDeviceSimulator::TargetedDevices
struct CORDL_TYPE __XRDeviceSimulator__TargetedDevices {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XRDeviceSimulator__TargetedDevices_Unwrapped
  enum struct ____XRDeviceSimulator__TargetedDevices_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_FPS = static_cast<int32_t>(0x1),
    __E_LeftController = static_cast<int32_t>(0x2),
    __E_RightController = static_cast<int32_t>(0x4),
    __E_HMD = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XRDeviceSimulator__TargetedDevices_Unwrapped() const noexcept {
    return static_cast<____XRDeviceSimulator__TargetedDevices_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRDeviceSimulator__TargetedDevices();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XRDeviceSimulator__TargetedDevices(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field FPS value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices const FPS;

  /// @brief Field HMD value: static_cast<int32_t>(0x8)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices const HMD;

  /// @brief Field LeftController value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices const LeftController;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices const None;

  /// @brief Field RightController value: static_cast<int32_t>(0x4)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices const RightController;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation
// Type: ::Axis2DTargets
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
// Is value type: true
// CS Name: ::XRDeviceSimulator::Axis2DTargets
struct CORDL_TYPE __XRDeviceSimulator__Axis2DTargets {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XRDeviceSimulator__Axis2DTargets_Unwrapped
  enum struct ____XRDeviceSimulator__Axis2DTargets_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Position = static_cast<int32_t>(0x1),
    __E_Primary2DAxis = static_cast<int32_t>(0x2),
    __E_Secondary2DAxis = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XRDeviceSimulator__Axis2DTargets_Unwrapped() const noexcept {
    return static_cast<____XRDeviceSimulator__Axis2DTargets_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRDeviceSimulator__Axis2DTargets();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XRDeviceSimulator__Axis2DTargets(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Axis2DTargets const None;

  /// @brief Field Position value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Axis2DTargets const Position;

  /// @brief Field Primary2DAxis value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Axis2DTargets const Primary2DAxis;

  /// @brief Field Secondary2DAxis value: static_cast<int32_t>(0x4)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Axis2DTargets const Secondary2DAxis;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Axis2DTargets, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Axis2DTargets, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation
// Type: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation::XRDeviceSimulator
// SizeInfo { instance_size: 864, native_size: -1, calculated_instance_size: 864, calculated_native_size: 857, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation::XRDeviceSimulator*
class CORDL_TYPE XRDeviceSimulator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Axis2DTargets = ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Axis2DTargets;

  using Space = ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space;

  using TargetedDevices = ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices;

  using TransformationMode = ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TransformationMode;

  /// @brief Field <axis2DTargets>k__BackingField, offset 0x1c8, size 0x4
  __declspec(property(get = __cordl_internal_get__axis2DTargets_k__BackingField,
                      put = __cordl_internal_set__axis2DTargets_k__BackingField))::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Axis2DTargets
      _axis2DTargets_k__BackingField;

  /// @brief Field <instance>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance_k__BackingField,
                             put = setStaticF__instance_k__BackingField))::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator> _instance_k__BackingField;

  /// @brief Field <mouseTransformationMode>k__BackingField, offset 0x1c0, size 0x4
  __declspec(property(get = __cordl_internal_get__mouseTransformationMode_k__BackingField,
                      put = __cordl_internal_set__mouseTransformationMode_k__BackingField))::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TransformationMode
      _mouseTransformationMode_k__BackingField;

  /// @brief Field <negateMode>k__BackingField, offset 0x1c4, size 0x1
  __declspec(property(get = __cordl_internal_get__negateMode_k__BackingField, put = __cordl_internal_set__negateMode_k__BackingField)) bool _negateMode_k__BackingField;

  __declspec(property(get = get_axis2DAction, put = set_axis2DAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> axis2DAction;

  __declspec(property(get = get_axis2DTargets, put = set_axis2DTargets))::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Axis2DTargets axis2DTargets;

  __declspec(property(get = get_cameraTransform, put = set_cameraTransform))::UnityW<::UnityEngine::Transform> cameraTransform;

  __declspec(property(get = get_controllerActionAsset, put = set_controllerActionAsset))::UnityW<::UnityEngine::InputSystem::InputActionAsset> controllerActionAsset;

  __declspec(property(get = get_cycleDevicesAction, put = set_cycleDevicesAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> cycleDevicesAction;

  __declspec(property(get = get_desiredCursorLockMode, put = set_desiredCursorLockMode))::UnityEngine::CursorLockMode desiredCursorLockMode;

  __declspec(property(get = get_deviceSimulatorActionAsset, put = set_deviceSimulatorActionAsset))::UnityW<::UnityEngine::InputSystem::InputActionAsset> deviceSimulatorActionAsset;

  __declspec(property(get = get_deviceSimulatorUI, put = set_deviceSimulatorUI))::UnityW<::UnityEngine::GameObject> deviceSimulatorUI;

  __declspec(property(get = get_gripAction, put = set_gripAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> gripAction;

  __declspec(property(get = get_gripAmount, put = set_gripAmount)) float_t gripAmount;

  __declspec(property(get = get_hmdIsTracked, put = set_hmdIsTracked)) bool hmdIsTracked;

  __declspec(property(get = get_hmdTrackingState, put = set_hmdTrackingState))::UnityEngine::XR::InputTrackingState hmdTrackingState;

  __declspec(property(get = get_keyboardBodyTranslateMultiplier, put = set_keyboardBodyTranslateMultiplier)) float_t keyboardBodyTranslateMultiplier;

  __declspec(property(get = get_keyboardTranslateSpace,
                      put = set_keyboardTranslateSpace))::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space keyboardTranslateSpace;

  __declspec(property(get = get_keyboardXTranslateAction, put = set_keyboardXTranslateAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> keyboardXTranslateAction;

  __declspec(property(get = get_keyboardXTranslateSpeed, put = set_keyboardXTranslateSpeed)) float_t keyboardXTranslateSpeed;

  __declspec(property(get = get_keyboardYTranslateAction, put = set_keyboardYTranslateAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> keyboardYTranslateAction;

  __declspec(property(get = get_keyboardYTranslateSpeed, put = set_keyboardYTranslateSpeed)) float_t keyboardYTranslateSpeed;

  __declspec(property(get = get_keyboardZTranslateAction, put = set_keyboardZTranslateAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> keyboardZTranslateAction;

  __declspec(property(get = get_keyboardZTranslateSpeed, put = set_keyboardZTranslateSpeed)) float_t keyboardZTranslateSpeed;

  __declspec(property(get = get_leftControllerIsTracked, put = set_leftControllerIsTracked)) bool leftControllerIsTracked;

  __declspec(property(get = get_leftControllerTrackingState, put = set_leftControllerTrackingState))::UnityEngine::XR::InputTrackingState leftControllerTrackingState;

  /// @brief Field m_Axis2DAction, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Axis2DAction, put = __cordl_internal_set_m_Axis2DAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_Axis2DAction;

  /// @brief Field m_Axis2DInput, offset 0x204, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Axis2DInput, put = __cordl_internal_set_m_Axis2DInput))::UnityEngine::Vector2 m_Axis2DInput;

  /// @brief Field m_CachedCamera, offset 0x1d0, size 0x10
  __declspec(property(get = __cordl_internal_get_m_CachedCamera,
                      put = __cordl_internal_set_m_CachedCamera))::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>, ::UnityW<::UnityEngine::Camera>> m_CachedCamera;

  /// @brief Field m_CameraTransform, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CameraTransform, put = __cordl_internal_set_m_CameraTransform))::UnityW<::UnityEngine::Transform> m_CameraTransform;

  /// @brief Field m_CenterEyeEuler, offset 0x238, size 0xc
  __declspec(property(get = __cordl_internal_get_m_CenterEyeEuler, put = __cordl_internal_set_m_CenterEyeEuler))::UnityEngine::Vector3 m_CenterEyeEuler;

  /// @brief Field m_ControllerActionAsset, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ControllerActionAsset,
                      put = __cordl_internal_set_m_ControllerActionAsset))::UnityW<::UnityEngine::InputSystem::InputActionAsset> m_ControllerActionAsset;

  /// @brief Field m_CycleDevicesAction, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CycleDevicesAction, put = __cordl_internal_set_m_CycleDevicesAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_CycleDevicesAction;

  /// @brief Field m_DesiredCursorLockMode, offset 0x18c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DesiredCursorLockMode, put = __cordl_internal_set_m_DesiredCursorLockMode))::UnityEngine::CursorLockMode m_DesiredCursorLockMode;

  /// @brief Field m_DeviceSimulatorActionAsset, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DeviceSimulatorActionAsset,
                      put = __cordl_internal_set_m_DeviceSimulatorActionAsset))::UnityW<::UnityEngine::InputSystem::InputActionAsset> m_DeviceSimulatorActionAsset;

  /// @brief Field m_DeviceSimulatorUI, offset 0x198, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DeviceSimulatorUI, put = __cordl_internal_set_m_DeviceSimulatorUI))::UnityW<::UnityEngine::GameObject> m_DeviceSimulatorUI;

  /// @brief Field m_GripAction, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GripAction, put = __cordl_internal_set_m_GripAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_GripAction;

  /// @brief Field m_GripAmount, offset 0x1a0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_GripAmount, put = __cordl_internal_set_m_GripAmount)) float_t m_GripAmount;

  /// @brief Field m_GripInput, offset 0x214, size 0x1
  __declspec(property(get = __cordl_internal_get_m_GripInput, put = __cordl_internal_set_m_GripInput)) bool m_GripInput;

  /// @brief Field m_HMDDevice, offset 0x340, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HMDDevice, put = __cordl_internal_set_m_HMDDevice))::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD* m_HMDDevice;

  /// @brief Field m_HMDIsTracked, offset 0x1a8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HMDIsTracked, put = __cordl_internal_set_m_HMDIsTracked)) bool m_HMDIsTracked;

  /// @brief Field m_HMDState, offset 0x244, size 0x78
  __declspec(property(get = __cordl_internal_get_m_HMDState, put = __cordl_internal_set_m_HMDState))::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState m_HMDState;

  /// @brief Field m_HMDTrackingState, offset 0x1ac, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HMDTrackingState, put = __cordl_internal_set_m_HMDTrackingState))::UnityEngine::XR::InputTrackingState m_HMDTrackingState;

  /// @brief Field m_KeyboardBodyTranslateMultiplier, offset 0x16c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_KeyboardBodyTranslateMultiplier, put = __cordl_internal_set_m_KeyboardBodyTranslateMultiplier)) float_t m_KeyboardBodyTranslateMultiplier;

  /// @brief Field m_KeyboardTranslateSpace, offset 0x158, size 0x4
  __declspec(property(get = __cordl_internal_get_m_KeyboardTranslateSpace,
                      put = __cordl_internal_set_m_KeyboardTranslateSpace))::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space m_KeyboardTranslateSpace;

  /// @brief Field m_KeyboardXTranslateAction, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_KeyboardXTranslateAction,
                      put = __cordl_internal_set_m_KeyboardXTranslateAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_KeyboardXTranslateAction;

  /// @brief Field m_KeyboardXTranslateInput, offset 0x1e0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_KeyboardXTranslateInput, put = __cordl_internal_set_m_KeyboardXTranslateInput)) float_t m_KeyboardXTranslateInput;

  /// @brief Field m_KeyboardXTranslateSpeed, offset 0x160, size 0x4
  __declspec(property(get = __cordl_internal_get_m_KeyboardXTranslateSpeed, put = __cordl_internal_set_m_KeyboardXTranslateSpeed)) float_t m_KeyboardXTranslateSpeed;

  /// @brief Field m_KeyboardYTranslateAction, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_KeyboardYTranslateAction,
                      put = __cordl_internal_set_m_KeyboardYTranslateAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_KeyboardYTranslateAction;

  /// @brief Field m_KeyboardYTranslateInput, offset 0x1e4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_KeyboardYTranslateInput, put = __cordl_internal_set_m_KeyboardYTranslateInput)) float_t m_KeyboardYTranslateInput;

  /// @brief Field m_KeyboardYTranslateSpeed, offset 0x164, size 0x4
  __declspec(property(get = __cordl_internal_get_m_KeyboardYTranslateSpeed, put = __cordl_internal_set_m_KeyboardYTranslateSpeed)) float_t m_KeyboardYTranslateSpeed;

  /// @brief Field m_KeyboardZTranslateAction, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_KeyboardZTranslateAction,
                      put = __cordl_internal_set_m_KeyboardZTranslateAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_KeyboardZTranslateAction;

  /// @brief Field m_KeyboardZTranslateInput, offset 0x1e8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_KeyboardZTranslateInput, put = __cordl_internal_set_m_KeyboardZTranslateInput)) float_t m_KeyboardZTranslateInput;

  /// @brief Field m_KeyboardZTranslateSpeed, offset 0x168, size 0x4
  __declspec(property(get = __cordl_internal_get_m_KeyboardZTranslateSpeed, put = __cordl_internal_set_m_KeyboardZTranslateSpeed)) float_t m_KeyboardZTranslateSpeed;

  /// @brief Field m_LeftControllerDevice, offset 0x348, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LeftControllerDevice,
                      put = __cordl_internal_set_m_LeftControllerDevice))::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController* m_LeftControllerDevice;

  /// @brief Field m_LeftControllerEuler, offset 0x220, size 0xc
  __declspec(property(get = __cordl_internal_get_m_LeftControllerEuler, put = __cordl_internal_set_m_LeftControllerEuler))::UnityEngine::Vector3 m_LeftControllerEuler;

  /// @brief Field m_LeftControllerIsTracked, offset 0x1b0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_LeftControllerIsTracked, put = __cordl_internal_set_m_LeftControllerIsTracked)) bool m_LeftControllerIsTracked;

  /// @brief Field m_LeftControllerState, offset 0x2bc, size 0x40
  __declspec(property(get = __cordl_internal_get_m_LeftControllerState,
                      put = __cordl_internal_set_m_LeftControllerState))::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState m_LeftControllerState;

  /// @brief Field m_LeftControllerTrackingState, offset 0x1b4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LeftControllerTrackingState,
                      put = __cordl_internal_set_m_LeftControllerTrackingState))::UnityEngine::XR::InputTrackingState m_LeftControllerTrackingState;

  /// @brief Field m_ManipulateHeadAction, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ManipulateHeadAction,
                      put = __cordl_internal_set_m_ManipulateHeadAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_ManipulateHeadAction;

  /// @brief Field m_ManipulateLeftAction, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ManipulateLeftAction,
                      put = __cordl_internal_set_m_ManipulateLeftAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_ManipulateLeftAction;

  /// @brief Field m_ManipulateRightAction, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ManipulateRightAction,
                      put = __cordl_internal_set_m_ManipulateRightAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_ManipulateRightAction;

  /// @brief Field m_ManipulatedRestingHandAxis2D, offset 0x21f, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ManipulatedRestingHandAxis2D, put = __cordl_internal_set_m_ManipulatedRestingHandAxis2D)) bool m_ManipulatedRestingHandAxis2D;

  /// @brief Field m_MenuAction, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MenuAction, put = __cordl_internal_set_m_MenuAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_MenuAction;

  /// @brief Field m_MenuInput, offset 0x218, size 0x1
  __declspec(property(get = __cordl_internal_get_m_MenuInput, put = __cordl_internal_set_m_MenuInput)) bool m_MenuInput;

  /// @brief Field m_MouseDeltaAction, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MouseDeltaAction, put = __cordl_internal_set_m_MouseDeltaAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_MouseDeltaAction;

  /// @brief Field m_MouseDeltaInput, offset 0x1ec, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MouseDeltaInput, put = __cordl_internal_set_m_MouseDeltaInput))::UnityEngine::Vector2 m_MouseDeltaInput;

  /// @brief Field m_MouseScrollAction, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MouseScrollAction, put = __cordl_internal_set_m_MouseScrollAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_MouseScrollAction;

  /// @brief Field m_MouseScrollInput, offset 0x1f4, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MouseScrollInput, put = __cordl_internal_set_m_MouseScrollInput))::UnityEngine::Vector2 m_MouseScrollInput;

  /// @brief Field m_MouseScrollRotateSensitivity, offset 0x184, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MouseScrollRotateSensitivity, put = __cordl_internal_set_m_MouseScrollRotateSensitivity)) float_t m_MouseScrollRotateSensitivity;

  /// @brief Field m_MouseScrollTranslateSensitivity, offset 0x178, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MouseScrollTranslateSensitivity, put = __cordl_internal_set_m_MouseScrollTranslateSensitivity)) float_t m_MouseScrollTranslateSensitivity;

  /// @brief Field m_MouseTranslateSpace, offset 0x15c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MouseTranslateSpace,
                      put = __cordl_internal_set_m_MouseTranslateSpace))::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space m_MouseTranslateSpace;

  /// @brief Field m_MouseXRotateSensitivity, offset 0x17c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MouseXRotateSensitivity, put = __cordl_internal_set_m_MouseXRotateSensitivity)) float_t m_MouseXRotateSensitivity;

  /// @brief Field m_MouseXTranslateSensitivity, offset 0x170, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MouseXTranslateSensitivity, put = __cordl_internal_set_m_MouseXTranslateSensitivity)) float_t m_MouseXTranslateSensitivity;

  /// @brief Field m_MouseYRotateInvert, offset 0x188, size 0x1
  __declspec(property(get = __cordl_internal_get_m_MouseYRotateInvert, put = __cordl_internal_set_m_MouseYRotateInvert)) bool m_MouseYRotateInvert;

  /// @brief Field m_MouseYRotateSensitivity, offset 0x180, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MouseYRotateSensitivity, put = __cordl_internal_set_m_MouseYRotateSensitivity)) float_t m_MouseYRotateSensitivity;

  /// @brief Field m_MouseYTranslateSensitivity, offset 0x174, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MouseYTranslateSensitivity, put = __cordl_internal_set_m_MouseYTranslateSensitivity)) float_t m_MouseYTranslateSensitivity;

  /// @brief Field m_NegateModeAction, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NegateModeAction, put = __cordl_internal_set_m_NegateModeAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_NegateModeAction;

  /// @brief Field m_OnInputDeviceChangeSubscribed, offset 0x358, size 0x1
  __declspec(property(get = __cordl_internal_get_m_OnInputDeviceChangeSubscribed, put = __cordl_internal_set_m_OnInputDeviceChangeSubscribed)) bool m_OnInputDeviceChangeSubscribed;

  /// @brief Field m_Primary2DAxisClickAction, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Primary2DAxisClickAction,
                      put = __cordl_internal_set_m_Primary2DAxisClickAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_Primary2DAxisClickAction;

  /// @brief Field m_Primary2DAxisClickInput, offset 0x219, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Primary2DAxisClickInput, put = __cordl_internal_set_m_Primary2DAxisClickInput)) bool m_Primary2DAxisClickInput;

  /// @brief Field m_Primary2DAxisTouchAction, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Primary2DAxisTouchAction,
                      put = __cordl_internal_set_m_Primary2DAxisTouchAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_Primary2DAxisTouchAction;

  /// @brief Field m_Primary2DAxisTouchInput, offset 0x21b, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Primary2DAxisTouchInput, put = __cordl_internal_set_m_Primary2DAxisTouchInput)) bool m_Primary2DAxisTouchInput;

  /// @brief Field m_PrimaryButtonAction, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PrimaryButtonAction,
                      put = __cordl_internal_set_m_PrimaryButtonAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_PrimaryButtonAction;

  /// @brief Field m_PrimaryButtonInput, offset 0x216, size 0x1
  __declspec(property(get = __cordl_internal_get_m_PrimaryButtonInput, put = __cordl_internal_set_m_PrimaryButtonInput)) bool m_PrimaryButtonInput;

  /// @brief Field m_PrimaryTouchAction, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PrimaryTouchAction, put = __cordl_internal_set_m_PrimaryTouchAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_PrimaryTouchAction;

  /// @brief Field m_PrimaryTouchInput, offset 0x21d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_PrimaryTouchInput, put = __cordl_internal_set_m_PrimaryTouchInput)) bool m_PrimaryTouchInput;

  /// @brief Field m_RemoveOtherHMDDevices, offset 0x190, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RemoveOtherHMDDevices, put = __cordl_internal_set_m_RemoveOtherHMDDevices)) bool m_RemoveOtherHMDDevices;

  /// @brief Field m_ResetAction, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ResetAction, put = __cordl_internal_set_m_ResetAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_ResetAction;

  /// @brief Field m_ResetInput, offset 0x200, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ResetInput, put = __cordl_internal_set_m_ResetInput)) bool m_ResetInput;

  /// @brief Field m_RestingHandAxis2DAction, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RestingHandAxis2DAction,
                      put = __cordl_internal_set_m_RestingHandAxis2DAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_RestingHandAxis2DAction;

  /// @brief Field m_RestingHandAxis2DInput, offset 0x20c, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RestingHandAxis2DInput, put = __cordl_internal_set_m_RestingHandAxis2DInput))::UnityEngine::Vector2 m_RestingHandAxis2DInput;

  /// @brief Field m_RightControllerDevice, offset 0x350, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RightControllerDevice,
                      put = __cordl_internal_set_m_RightControllerDevice))::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController* m_RightControllerDevice;

  /// @brief Field m_RightControllerEuler, offset 0x22c, size 0xc
  __declspec(property(get = __cordl_internal_get_m_RightControllerEuler, put = __cordl_internal_set_m_RightControllerEuler))::UnityEngine::Vector3 m_RightControllerEuler;

  /// @brief Field m_RightControllerIsTracked, offset 0x1b8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RightControllerIsTracked, put = __cordl_internal_set_m_RightControllerIsTracked)) bool m_RightControllerIsTracked;

  /// @brief Field m_RightControllerState, offset 0x2fc, size 0x40
  __declspec(property(get = __cordl_internal_get_m_RightControllerState,
                      put = __cordl_internal_set_m_RightControllerState))::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState m_RightControllerState;

  /// @brief Field m_RightControllerTrackingState, offset 0x1bc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RightControllerTrackingState,
                      put = __cordl_internal_set_m_RightControllerTrackingState))::UnityEngine::XR::InputTrackingState m_RightControllerTrackingState;

  /// @brief Field m_RotateModeOverrideAction, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RotateModeOverrideAction,
                      put = __cordl_internal_set_m_RotateModeOverrideAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_RotateModeOverrideAction;

  /// @brief Field m_RotateModeOverrideInput, offset 0x1fc, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RotateModeOverrideInput, put = __cordl_internal_set_m_RotateModeOverrideInput)) bool m_RotateModeOverrideInput;

  /// @brief Field m_Secondary2DAxisClickAction, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Secondary2DAxisClickAction,
                      put = __cordl_internal_set_m_Secondary2DAxisClickAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_Secondary2DAxisClickAction;

  /// @brief Field m_Secondary2DAxisClickInput, offset 0x21a, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Secondary2DAxisClickInput, put = __cordl_internal_set_m_Secondary2DAxisClickInput)) bool m_Secondary2DAxisClickInput;

  /// @brief Field m_Secondary2DAxisTouchAction, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Secondary2DAxisTouchAction,
                      put = __cordl_internal_set_m_Secondary2DAxisTouchAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_Secondary2DAxisTouchAction;

  /// @brief Field m_Secondary2DAxisTouchInput, offset 0x21c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Secondary2DAxisTouchInput, put = __cordl_internal_set_m_Secondary2DAxisTouchInput)) bool m_Secondary2DAxisTouchInput;

  /// @brief Field m_SecondaryButtonAction, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SecondaryButtonAction,
                      put = __cordl_internal_set_m_SecondaryButtonAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_SecondaryButtonAction;

  /// @brief Field m_SecondaryButtonInput, offset 0x217, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SecondaryButtonInput, put = __cordl_internal_set_m_SecondaryButtonInput)) bool m_SecondaryButtonInput;

  /// @brief Field m_SecondaryTouchAction, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SecondaryTouchAction,
                      put = __cordl_internal_set_m_SecondaryTouchAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_SecondaryTouchAction;

  /// @brief Field m_SecondaryTouchInput, offset 0x21e, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SecondaryTouchInput, put = __cordl_internal_set_m_SecondaryTouchInput)) bool m_SecondaryTouchInput;

  /// @brief Field m_StopManipulationAction, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StopManipulationAction,
                      put = __cordl_internal_set_m_StopManipulationAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_StopManipulationAction;

  /// @brief Field m_TargetedDeviceInput, offset 0x1cc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TargetedDeviceInput,
                      put = __cordl_internal_set_m_TargetedDeviceInput))::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices m_TargetedDeviceInput;

  /// @brief Field m_ToggleCursorLockAction, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ToggleCursorLockAction,
                      put = __cordl_internal_set_m_ToggleCursorLockAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_ToggleCursorLockAction;

  /// @brief Field m_ToggleDevicePositionTargetAction, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ToggleDevicePositionTargetAction,
                      put = __cordl_internal_set_m_ToggleDevicePositionTargetAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_ToggleDevicePositionTargetAction;

  /// @brief Field m_ToggleManipulateBodyAction, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ToggleManipulateBodyAction,
                      put = __cordl_internal_set_m_ToggleManipulateBodyAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_ToggleManipulateBodyAction;

  /// @brief Field m_ToggleManipulateLeftAction, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ToggleManipulateLeftAction,
                      put = __cordl_internal_set_m_ToggleManipulateLeftAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_ToggleManipulateLeftAction;

  /// @brief Field m_ToggleManipulateRightAction, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ToggleManipulateRightAction,
                      put = __cordl_internal_set_m_ToggleManipulateRightAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_ToggleManipulateRightAction;

  /// @brief Field m_ToggleMouseTransformationModeAction, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ToggleMouseTransformationModeAction,
                      put = __cordl_internal_set_m_ToggleMouseTransformationModeAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_ToggleMouseTransformationModeAction;

  /// @brief Field m_TogglePrimary2DAxisTargetAction, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TogglePrimary2DAxisTargetAction,
                      put = __cordl_internal_set_m_TogglePrimary2DAxisTargetAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_TogglePrimary2DAxisTargetAction;

  /// @brief Field m_ToggleSecondary2DAxisTargetAction, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ToggleSecondary2DAxisTargetAction,
                      put = __cordl_internal_set_m_ToggleSecondary2DAxisTargetAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_ToggleSecondary2DAxisTargetAction;

  /// @brief Field m_TriggerAction, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TriggerAction, put = __cordl_internal_set_m_TriggerAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_TriggerAction;

  /// @brief Field m_TriggerAmount, offset 0x1a4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TriggerAmount, put = __cordl_internal_set_m_TriggerAmount)) float_t m_TriggerAmount;

  /// @brief Field m_TriggerInput, offset 0x215, size 0x1
  __declspec(property(get = __cordl_internal_get_m_TriggerInput, put = __cordl_internal_set_m_TriggerInput)) bool m_TriggerInput;

  /// @brief Field m_XConstraintAction, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_XConstraintAction, put = __cordl_internal_set_m_XConstraintAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_XConstraintAction;

  /// @brief Field m_XConstraintInput, offset 0x1fd, size 0x1
  __declspec(property(get = __cordl_internal_get_m_XConstraintInput, put = __cordl_internal_set_m_XConstraintInput)) bool m_XConstraintInput;

  /// @brief Field m_YConstraintAction, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_YConstraintAction, put = __cordl_internal_set_m_YConstraintAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_YConstraintAction;

  /// @brief Field m_YConstraintInput, offset 0x1fe, size 0x1
  __declspec(property(get = __cordl_internal_get_m_YConstraintInput, put = __cordl_internal_set_m_YConstraintInput)) bool m_YConstraintInput;

  /// @brief Field m_ZConstraintAction, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ZConstraintAction, put = __cordl_internal_set_m_ZConstraintAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_ZConstraintAction;

  /// @brief Field m_ZConstraintInput, offset 0x1ff, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ZConstraintInput, put = __cordl_internal_set_m_ZConstraintInput)) bool m_ZConstraintInput;

  __declspec(property(get = get_manipulateHeadAction, put = set_manipulateHeadAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> manipulateHeadAction;

  __declspec(property(get = get_manipulateLeftAction, put = set_manipulateLeftAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> manipulateLeftAction;

  __declspec(property(get = get_manipulateRightAction, put = set_manipulateRightAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> manipulateRightAction;

  __declspec(property(get = get_manipulatingFPS)) bool manipulatingFPS;

  __declspec(property(get = get_manipulatingLeftController)) bool manipulatingLeftController;

  __declspec(property(get = get_manipulatingRightController)) bool manipulatingRightController;

  __declspec(property(get = get_menuAction, put = set_menuAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> menuAction;

  __declspec(property(get = get_mouseDeltaAction, put = set_mouseDeltaAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> mouseDeltaAction;

  __declspec(property(get = get_mouseScrollAction, put = set_mouseScrollAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> mouseScrollAction;

  __declspec(property(get = get_mouseScrollRotateSensitivity, put = set_mouseScrollRotateSensitivity)) float_t mouseScrollRotateSensitivity;

  __declspec(property(get = get_mouseScrollTranslateSensitivity, put = set_mouseScrollTranslateSensitivity)) float_t mouseScrollTranslateSensitivity;

  __declspec(property(get = get_mouseTransformationMode,
                      put = set_mouseTransformationMode))::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TransformationMode mouseTransformationMode;

  __declspec(property(get = get_mouseTranslateSpace, put = set_mouseTranslateSpace))::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space mouseTranslateSpace;

  __declspec(property(get = get_mouseXRotateSensitivity, put = set_mouseXRotateSensitivity)) float_t mouseXRotateSensitivity;

  __declspec(property(get = get_mouseXTranslateSensitivity, put = set_mouseXTranslateSensitivity)) float_t mouseXTranslateSensitivity;

  __declspec(property(get = get_mouseYRotateInvert, put = set_mouseYRotateInvert)) bool mouseYRotateInvert;

  __declspec(property(get = get_mouseYRotateSensitivity, put = set_mouseYRotateSensitivity)) float_t mouseYRotateSensitivity;

  __declspec(property(get = get_mouseYTranslateSensitivity, put = set_mouseYTranslateSensitivity)) float_t mouseYTranslateSensitivity;

  __declspec(property(get = get_negateMode, put = set_negateMode)) bool negateMode;

  __declspec(property(get = get_negateModeAction, put = set_negateModeAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> negateModeAction;

  __declspec(property(get = get_primary2DAxisClickAction, put = set_primary2DAxisClickAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> primary2DAxisClickAction;

  __declspec(property(get = get_primary2DAxisTouchAction, put = set_primary2DAxisTouchAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> primary2DAxisTouchAction;

  __declspec(property(get = get_primaryButtonAction, put = set_primaryButtonAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> primaryButtonAction;

  __declspec(property(get = get_primaryTouchAction, put = set_primaryTouchAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> primaryTouchAction;

  __declspec(property(get = get_removeOtherHMDDevices, put = set_removeOtherHMDDevices)) bool removeOtherHMDDevices;

  __declspec(property(get = get_resetAction, put = set_resetAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> resetAction;

  __declspec(property(get = get_restingHandAxis2DAction, put = set_restingHandAxis2DAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> restingHandAxis2DAction;

  __declspec(property(get = get_rightControllerIsTracked, put = set_rightControllerIsTracked)) bool rightControllerIsTracked;

  __declspec(property(get = get_rightControllerTrackingState, put = set_rightControllerTrackingState))::UnityEngine::XR::InputTrackingState rightControllerTrackingState;

  __declspec(property(get = get_rotateModeOverrideAction, put = set_rotateModeOverrideAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> rotateModeOverrideAction;

  /// @brief Field s_LeftControllerDefaultInitialPosition, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_s_LeftControllerDefaultInitialPosition,
                             put = setStaticF_s_LeftControllerDefaultInitialPosition))::UnityEngine::Vector3 s_LeftControllerDefaultInitialPosition;

  /// @brief Field s_RightControllerDefaultInitialPosition, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_s_RightControllerDefaultInitialPosition,
                             put = setStaticF_s_RightControllerDefaultInitialPosition))::UnityEngine::Vector3 s_RightControllerDefaultInitialPosition;

  __declspec(property(get = get_secondary2DAxisClickAction, put = set_secondary2DAxisClickAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> secondary2DAxisClickAction;

  __declspec(property(get = get_secondary2DAxisTouchAction, put = set_secondary2DAxisTouchAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> secondary2DAxisTouchAction;

  __declspec(property(get = get_secondaryButtonAction, put = set_secondaryButtonAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> secondaryButtonAction;

  __declspec(property(get = get_secondaryTouchAction, put = set_secondaryTouchAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> secondaryTouchAction;

  __declspec(property(get = get_stopManipulationAction, put = set_stopManipulationAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> stopManipulationAction;

  __declspec(property(get = get_targetedDeviceInput,
                      put = set_targetedDeviceInput))::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices targetedDeviceInput;

  __declspec(property(get = get_toggleCursorLockAction, put = set_toggleCursorLockAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> toggleCursorLockAction;

  __declspec(property(get = get_toggleDevicePositionTargetAction,
                      put = set_toggleDevicePositionTargetAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> toggleDevicePositionTargetAction;

  __declspec(property(get = get_toggleManipulateBodyAction, put = set_toggleManipulateBodyAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> toggleManipulateBodyAction;

  __declspec(property(get = get_toggleManipulateLeftAction, put = set_toggleManipulateLeftAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> toggleManipulateLeftAction;

  __declspec(property(get = get_toggleManipulateRightAction, put = set_toggleManipulateRightAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> toggleManipulateRightAction;

  __declspec(property(get = get_toggleMouseTransformationModeAction,
                      put = set_toggleMouseTransformationModeAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> toggleMouseTransformationModeAction;

  __declspec(property(get = get_togglePrimary2DAxisTargetAction, put = set_togglePrimary2DAxisTargetAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> togglePrimary2DAxisTargetAction;

  __declspec(property(get = get_toggleSecondary2DAxisTargetAction,
                      put = set_toggleSecondary2DAxisTargetAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> toggleSecondary2DAxisTargetAction;

  __declspec(property(get = get_triggerAction, put = set_triggerAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> triggerAction;

  __declspec(property(get = get_triggerAmount, put = set_triggerAmount)) float_t triggerAmount;

  __declspec(property(get = get_xConstraintAction, put = set_xConstraintAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> xConstraintAction;

  __declspec(property(get = get_yConstraintAction, put = set_yConstraintAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> yConstraintAction;

  __declspec(property(get = get_zConstraintAction, put = set_zConstraintAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> zConstraintAction;

  /// @brief Method AddDevices, addr 0x2ffd650, size 0x644, virtual true, abstract: false, final false
  inline void AddDevices();

  /// @brief Method Awake, addr 0x2ffa5d0, size 0x634, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method FindCameraTransform, addr 0x2ffafbc, size 0x1fc, virtual false, abstract: false, final false
  inline bool FindCameraTransform();

  /// @brief Method GetAxes, addr 0x2ffcac4, size 0x3d8, virtual false, abstract: false, final false
  static inline void GetAxes(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space translateSpace, ::UnityEngine::Transform* cameraTransform,
                             ByRef<::UnityEngine::Vector3> right, ByRef<::UnityEngine::Vector3> up, ByRef<::UnityEngine::Vector3> forward);

  /// @brief Method GetDeltaRotation, addr 0x2ffce9c, size 0xf0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion GetDeltaRotation(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space translateSpace,
                                                           ByRef<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState> state,
                                                           ByRef<::UnityEngine::Quaternion> inverseCameraParentRotation);

  /// @brief Method GetDeltaRotation, addr 0x2ffcf8c, size 0xe8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion GetDeltaRotation(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space translateSpace,
                                                           ByRef<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState> state,
                                                           ByRef<::UnityEngine::Quaternion> inverseCameraParentRotation);

  /// @brief Method GetInputAction, addr 0x2ffdf18, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputAction* GetInputAction(::UnityEngine::InputSystem::InputActionReference* actionReference);

  /// @brief Method GetResetScale, addr 0x2ffd074, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetResetScale();

  /// @brief Method Negate, addr 0x2ffe058, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::CursorLockMode Negate(::UnityEngine::CursorLockMode mode);

  /// @brief Method Negate, addr 0x2ffe040, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TransformationMode
  Negate(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TransformationMode mode);

  static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator* New_ctor();

  /// @brief Method OnAxis2DCanceled, addr 0x2ffe730, size 0x54, virtual false, abstract: false, final false
  inline void OnAxis2DCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnAxis2DPerformed, addr 0x2ffe65c, size 0xd4, virtual false, abstract: false, final false
  inline void OnAxis2DPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnCycleDevicePerformed, addr 0x2ffe314, size 0x68, virtual false, abstract: false, final false
  inline void OnCycleDevicePerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnDisable, addr 0x2ffb1b8, size 0x27c, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x2ffac04, size 0x3b8, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnGripCanceled, addr 0x2ffe8b8, size 0x8, virtual false, abstract: false, final false
  inline void OnGripCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnGripPerformed, addr 0x2ffe8ac, size 0xc, virtual false, abstract: false, final false
  inline void OnGripPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnInputDeviceChange, addr 0x2ffdd78, size 0xfc, virtual false, abstract: false, final false
  inline void OnInputDeviceChange(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::InputDeviceChange change);

  /// @brief Method OnKeyboardXTranslateCanceled, addr 0x2ffe0c8, size 0x8, virtual false, abstract: false, final false
  inline void OnKeyboardXTranslateCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnKeyboardXTranslatePerformed, addr 0x2ffe06c, size 0x5c, virtual false, abstract: false, final false
  inline void OnKeyboardXTranslatePerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnKeyboardYTranslateCanceled, addr 0x2ffe12c, size 0x8, virtual false, abstract: false, final false
  inline void OnKeyboardYTranslateCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnKeyboardYTranslatePerformed, addr 0x2ffe0d0, size 0x5c, virtual false, abstract: false, final false
  inline void OnKeyboardYTranslatePerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnKeyboardZTranslateCanceled, addr 0x2ffe190, size 0x8, virtual false, abstract: false, final false
  inline void OnKeyboardZTranslateCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnKeyboardZTranslatePerformed, addr 0x2ffe134, size 0x5c, virtual false, abstract: false, final false
  inline void OnKeyboardZTranslatePerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnManipulateHeadCanceled, addr 0x2ffe2f0, size 0x24, virtual false, abstract: false, final false
  inline void OnManipulateHeadCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnManipulateHeadPerformed, addr 0x2ffe2cc, size 0x24, virtual false, abstract: false, final false
  inline void OnManipulateHeadPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnManipulateLeftCanceled, addr 0x2ffe1bc, size 0x24, virtual false, abstract: false, final false
  inline void OnManipulateLeftCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnManipulateLeftPerformed, addr 0x2ffe198, size 0x24, virtual false, abstract: false, final false
  inline void OnManipulateLeftPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnManipulateRightCanceled, addr 0x2ffe204, size 0x24, virtual false, abstract: false, final false
  inline void OnManipulateRightCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnManipulateRightPerformed, addr 0x2ffe1e0, size 0x24, virtual false, abstract: false, final false
  inline void OnManipulateRightPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnMenuCanceled, addr 0x2ffe908, size 0x8, virtual false, abstract: false, final false
  inline void OnMenuCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnMenuPerformed, addr 0x2ffe8fc, size 0xc, virtual false, abstract: false, final false
  inline void OnMenuPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnMouseDeltaCanceled, addr 0x2ffe3e4, size 0x54, virtual false, abstract: false, final false
  inline void OnMouseDeltaCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnMouseDeltaPerformed, addr 0x2ffe384, size 0x60, virtual false, abstract: false, final false
  inline void OnMouseDeltaPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnMouseScrollCanceled, addr 0x2ffe498, size 0x54, virtual false, abstract: false, final false
  inline void OnMouseScrollCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnMouseScrollPerformed, addr 0x2ffe438, size 0x60, virtual false, abstract: false, final false
  inline void OnMouseScrollPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnNegateModeCanceled, addr 0x2ffe56c, size 0x8, virtual false, abstract: false, final false
  inline void OnNegateModeCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnNegateModePerformed, addr 0x2ffe560, size 0xc, virtual false, abstract: false, final false
  inline void OnNegateModePerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnPrimary2DAxisClickCanceled, addr 0x2ffe91c, size 0x8, virtual false, abstract: false, final false
  inline void OnPrimary2DAxisClickCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnPrimary2DAxisClickPerformed, addr 0x2ffe910, size 0xc, virtual false, abstract: false, final false
  inline void OnPrimary2DAxisClickPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnPrimary2DAxisTouchCanceled, addr 0x2ffe944, size 0x8, virtual false, abstract: false, final false
  inline void OnPrimary2DAxisTouchCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnPrimary2DAxisTouchPerformed, addr 0x2ffe938, size 0xc, virtual false, abstract: false, final false
  inline void OnPrimary2DAxisTouchPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnPrimaryButtonCanceled, addr 0x2ffe8e0, size 0x8, virtual false, abstract: false, final false
  inline void OnPrimaryButtonCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnPrimaryButtonPerformed, addr 0x2ffe8d4, size 0xc, virtual false, abstract: false, final false
  inline void OnPrimaryButtonPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnPrimaryTouchCanceled, addr 0x2ffe96c, size 0x8, virtual false, abstract: false, final false
  inline void OnPrimaryTouchCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnPrimaryTouchPerformed, addr 0x2ffe960, size 0xc, virtual false, abstract: false, final false
  inline void OnPrimaryTouchPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnResetCanceled, addr 0x2ffe5bc, size 0x8, virtual false, abstract: false, final false
  inline void OnResetCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnResetPerformed, addr 0x2ffe5b0, size 0xc, virtual false, abstract: false, final false
  inline void OnResetPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnRestingHandAxis2DCanceled, addr 0x2ffe858, size 0x54, virtual false, abstract: false, final false
  inline void OnRestingHandAxis2DCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnRestingHandAxis2DPerformed, addr 0x2ffe784, size 0xd4, virtual false, abstract: false, final false
  inline void OnRestingHandAxis2DPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnRotateModeOverrideCanceled, addr 0x2ffe4f8, size 0x8, virtual false, abstract: false, final false
  inline void OnRotateModeOverrideCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnRotateModeOverridePerformed, addr 0x2ffe4ec, size 0xc, virtual false, abstract: false, final false
  inline void OnRotateModeOverridePerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnSecondary2DAxisClickCanceled, addr 0x2ffe930, size 0x8, virtual false, abstract: false, final false
  inline void OnSecondary2DAxisClickCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnSecondary2DAxisClickPerformed, addr 0x2ffe924, size 0xc, virtual false, abstract: false, final false
  inline void OnSecondary2DAxisClickPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnSecondary2DAxisTouchCanceled, addr 0x2ffe958, size 0x8, virtual false, abstract: false, final false
  inline void OnSecondary2DAxisTouchCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnSecondary2DAxisTouchPerformed, addr 0x2ffe94c, size 0xc, virtual false, abstract: false, final false
  inline void OnSecondary2DAxisTouchPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnSecondaryButtonCanceled, addr 0x2ffe8f4, size 0x8, virtual false, abstract: false, final false
  inline void OnSecondaryButtonCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnSecondaryButtonPerformed, addr 0x2ffe8e8, size 0xc, virtual false, abstract: false, final false
  inline void OnSecondaryButtonPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnSecondaryTouchCanceled, addr 0x2ffe980, size 0x8, virtual false, abstract: false, final false
  inline void OnSecondaryTouchCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnSecondaryTouchPerformed, addr 0x2ffe974, size 0xc, virtual false, abstract: false, final false
  inline void OnSecondaryTouchPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnStopManipulationPerformed, addr 0x2ffe37c, size 0x8, virtual false, abstract: false, final false
  inline void OnStopManipulationPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnToggleCursorLockPerformed, addr 0x2ffe5c4, size 0x2c, virtual false, abstract: false, final false
  inline void OnToggleCursorLockPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnToggleDevicePositionTargetPerformed, addr 0x2ffe5f0, size 0x24, virtual false, abstract: false, final false
  inline void OnToggleDevicePositionTargetPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnToggleManipulateBodyPerformed, addr 0x2ffe2c0, size 0xc, virtual false, abstract: false, final false
  inline void OnToggleManipulateBodyPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnToggleManipulateLeftPerformed, addr 0x2ffe228, size 0x4c, virtual false, abstract: false, final false
  inline void OnToggleManipulateLeftPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnToggleManipulateRightPerformed, addr 0x2ffe274, size 0x4c, virtual false, abstract: false, final false
  inline void OnToggleManipulateRightPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnToggleMouseTransformationModePerformed, addr 0x2ffe500, size 0x60, virtual false, abstract: false, final false
  inline void OnToggleMouseTransformationModePerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnTogglePrimary2DAxisTargetPerformed, addr 0x2ffe614, size 0x24, virtual false, abstract: false, final false
  inline void OnTogglePrimary2DAxisTargetPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnToggleSecondary2DAxisTargetPerformed, addr 0x2ffe638, size 0x24, virtual false, abstract: false, final false
  inline void OnToggleSecondary2DAxisTargetPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnTriggerCanceled, addr 0x2ffe8cc, size 0x8, virtual false, abstract: false, final false
  inline void OnTriggerCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnTriggerPerformed, addr 0x2ffe8c0, size 0xc, virtual false, abstract: false, final false
  inline void OnTriggerPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnXConstraintCanceled, addr 0x2ffe580, size 0x8, virtual false, abstract: false, final false
  inline void OnXConstraintCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnXConstraintPerformed, addr 0x2ffe574, size 0xc, virtual false, abstract: false, final false
  inline void OnXConstraintPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnYConstraintCanceled, addr 0x2ffe594, size 0x8, virtual false, abstract: false, final false
  inline void OnYConstraintCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnYConstraintPerformed, addr 0x2ffe588, size 0xc, virtual false, abstract: false, final false
  inline void OnYConstraintPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnZConstraintCanceled, addr 0x2ffe5a8, size 0x8, virtual false, abstract: false, final false
  inline void OnZConstraintCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnZConstraintPerformed, addr 0x2ffe59c, size 0xc, virtual false, abstract: false, final false
  inline void OnZConstraintPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method ProcessAnalogButtonControlInput, addr 0x2ffd5fc, size 0x54, virtual true, abstract: false, final false
  inline void ProcessAnalogButtonControlInput(ByRef<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState> controllerState);

  /// @brief Method ProcessAxis2DControlInput, addr 0x2ffd184, size 0x2fc, virtual true, abstract: false, final false
  inline void ProcessAxis2DControlInput();

  /// @brief Method ProcessButtonControlInput, addr 0x2ffd480, size 0x17c, virtual true, abstract: false, final false
  inline void ProcessButtonControlInput(ByRef<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState> controllerState);

  /// @brief Method ProcessControlInput, addr 0x2ffd10c, size 0x78, virtual true, abstract: false, final false
  inline void ProcessControlInput();

  /// @brief Method ProcessPoseInput, addr 0x2ffb56c, size 0x1558, virtual true, abstract: false, final false
  inline void ProcessPoseInput();

  /// @brief Method RemoveDevices, addr 0x2ffdc94, size 0xe4, virtual true, abstract: false, final false
  inline void RemoveDevices();

  /// @brief Method Subscribe, addr 0x2ffde74, size 0xa4, virtual false, abstract: false, final false
  static inline void Subscribe(::UnityEngine::InputSystem::InputActionReference* reference, ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* performed,
                               ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* canceled);

  /// @brief Method SubscribeAxis2DAction, addr 0x2ff8a1c, size 0xe8, virtual false, abstract: false, final false
  inline void SubscribeAxis2DAction();

  /// @brief Method SubscribeCycleDevicesAction, addr 0x2ff6ec0, size 0xb4, virtual false, abstract: false, final false
  inline void SubscribeCycleDevicesAction();

  /// @brief Method SubscribeGripAction, addr 0x2ff8e1c, size 0xe8, virtual false, abstract: false, final false
  inline void SubscribeGripAction();

  /// @brief Method SubscribeKeyboardXTranslateAction, addr 0x2ff5e2c, size 0xe8, virtual false, abstract: false, final false
  inline void SubscribeKeyboardXTranslateAction();

  /// @brief Method SubscribeKeyboardYTranslateAction, addr 0x2ff602c, size 0xe8, virtual false, abstract: false, final false
  inline void SubscribeKeyboardYTranslateAction();

  /// @brief Method SubscribeKeyboardZTranslateAction, addr 0x2ff622c, size 0xe8, virtual false, abstract: false, final false
  inline void SubscribeKeyboardZTranslateAction();

  /// @brief Method SubscribeManipulateHeadAction, addr 0x2ff6cf4, size 0xe8, virtual false, abstract: false, final false
  inline void SubscribeManipulateHeadAction();

  /// @brief Method SubscribeManipulateLeftAction, addr 0x2ff642c, size 0xe8, virtual false, abstract: false, final false
  inline void SubscribeManipulateLeftAction();

  /// @brief Method SubscribeManipulateRightAction, addr 0x2ff662c, size 0xe8, virtual false, abstract: false, final false
  inline void SubscribeManipulateRightAction();

  /// @brief Method SubscribeMenuAction, addr 0x2ff961c, size 0xe8, virtual false, abstract: false, final false
  inline void SubscribeMenuAction();

  /// @brief Method SubscribeMouseDeltaAction, addr 0x2ff7224, size 0xe8, virtual false, abstract: false, final false
  inline void SubscribeMouseDeltaAction();

  /// @brief Method SubscribeMouseScrollAction, addr 0x2ff7424, size 0xe8, virtual false, abstract: false, final false
  inline void SubscribeMouseScrollAction();

  /// @brief Method SubscribeNegateModeAction, addr 0x2ff79bc, size 0xe8, virtual false, abstract: false, final false
  inline void SubscribeNegateModeAction();

  /// @brief Method SubscribePrimary2DAxisClickAction, addr 0x2ff981c, size 0xe8, virtual false, abstract: false, final false
  inline void SubscribePrimary2DAxisClickAction();

  /// @brief Method SubscribePrimary2DAxisTouchAction, addr 0x2ff9c1c, size 0xe8, virtual false, abstract: false, final false
  inline void SubscribePrimary2DAxisTouchAction();

  /// @brief Method SubscribePrimaryButtonAction, addr 0x2ff921c, size 0xe8, virtual false, abstract: false, final false
  inline void SubscribePrimaryButtonAction();

  /// @brief Method SubscribePrimaryTouchAction, addr 0x2ffa01c, size 0xe8, virtual false, abstract: false, final false
  inline void SubscribePrimaryTouchAction();

  /// @brief Method SubscribeResetAction, addr 0x2ff81bc, size 0xe8, virtual false, abstract: false, final false
  inline void SubscribeResetAction();

  /// @brief Method SubscribeRestingHandAxis2DAction, addr 0x2ff8c1c, size 0xe8, virtual false, abstract: false, final false
  inline void SubscribeRestingHandAxis2DAction();

  /// @brief Method SubscribeRotateModeOverrideAction, addr 0x2ff7624, size 0xe8, virtual false, abstract: false, final false
  inline void SubscribeRotateModeOverrideAction();

  /// @brief Method SubscribeSecondary2DAxisClickAction, addr 0x2ff9a1c, size 0xe8, virtual false, abstract: false, final false
  inline void SubscribeSecondary2DAxisClickAction();

  /// @brief Method SubscribeSecondary2DAxisTouchAction, addr 0x2ff9e1c, size 0xe8, virtual false, abstract: false, final false
  inline void SubscribeSecondary2DAxisTouchAction();

  /// @brief Method SubscribeSecondaryButtonAction, addr 0x2ff941c, size 0xe8, virtual false, abstract: false, final false
  inline void SubscribeSecondaryButtonAction();

  /// @brief Method SubscribeSecondaryTouchAction, addr 0x2ffa21c, size 0xe8, virtual false, abstract: false, final false
  inline void SubscribeSecondaryTouchAction();

  /// @brief Method SubscribeStopManipulationAction, addr 0x2ff7058, size 0xb4, virtual false, abstract: false, final false
  inline void SubscribeStopManipulationAction();

  /// @brief Method SubscribeToggleCursorLockAction, addr 0x2ff8388, size 0xb4, virtual false, abstract: false, final false
  inline void SubscribeToggleCursorLockAction();

  /// @brief Method SubscribeToggleDevicePositionTargetAction, addr 0x2ff8520, size 0xb4, virtual false, abstract: false, final false
  inline void SubscribeToggleDevicePositionTargetAction();

  /// @brief Method SubscribeToggleManipulateBodyAction, addr 0x2ff6b28, size 0xb4, virtual false, abstract: false, final false
  inline void SubscribeToggleManipulateBodyAction();

  /// @brief Method SubscribeToggleManipulateLeftAction, addr 0x2ff67f8, size 0xb4, virtual false, abstract: false, final false
  inline void SubscribeToggleManipulateLeftAction();

  /// @brief Method SubscribeToggleManipulateRightAction, addr 0x2ff6990, size 0xb4, virtual false, abstract: false, final false
  inline void SubscribeToggleManipulateRightAction();

  /// @brief Method SubscribeToggleMouseTransformationModeAction, addr 0x2ff77f0, size 0xb4, virtual false, abstract: false, final false
  inline void SubscribeToggleMouseTransformationModeAction();

  /// @brief Method SubscribeTogglePrimary2DAxisTargetAction, addr 0x2ff86b8, size 0xb4, virtual false, abstract: false, final false
  inline void SubscribeTogglePrimary2DAxisTargetAction();

  /// @brief Method SubscribeToggleSecondary2DAxisTargetAction, addr 0x2ff8850, size 0xb4, virtual false, abstract: false, final false
  inline void SubscribeToggleSecondary2DAxisTargetAction();

  /// @brief Method SubscribeTriggerAction, addr 0x2ff901c, size 0xe8, virtual false, abstract: false, final false
  inline void SubscribeTriggerAction();

  /// @brief Method SubscribeXConstraintAction, addr 0x2ff7bbc, size 0xe8, virtual false, abstract: false, final false
  inline void SubscribeXConstraintAction();

  /// @brief Method SubscribeYConstraintAction, addr 0x2ff7dbc, size 0xe8, virtual false, abstract: false, final false
  inline void SubscribeYConstraintAction();

  /// @brief Method SubscribeZConstraintAction, addr 0x2ff7fbc, size 0xe8, virtual false, abstract: false, final false
  inline void SubscribeZConstraintAction();

  /// @brief Method TryExecuteCommand, addr 0x2ffe988, size 0x6c, virtual false, abstract: false, final false
  static inline bool TryExecuteCommand(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand> commandPtr, ByRef<int64_t> result);

  /// @brief Method Unsubscribe, addr 0x2ffdf9c, size 0xa4, virtual false, abstract: false, final false
  static inline void Unsubscribe(::UnityEngine::InputSystem::InputActionReference* reference, ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* performed,
                                 ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* canceled);

  /// @brief Method UnsubscribeAxis2DAction, addr 0x2ff8934, size 0xe8, virtual false, abstract: false, final false
  inline void UnsubscribeAxis2DAction();

  /// @brief Method UnsubscribeCycleDevicesAction, addr 0x2ff6e0c, size 0xb4, virtual false, abstract: false, final false
  inline void UnsubscribeCycleDevicesAction();

  /// @brief Method UnsubscribeGripAction, addr 0x2ff8d34, size 0xe8, virtual false, abstract: false, final false
  inline void UnsubscribeGripAction();

  /// @brief Method UnsubscribeKeyboardXTranslateAction, addr 0x2ff5d44, size 0xe8, virtual false, abstract: false, final false
  inline void UnsubscribeKeyboardXTranslateAction();

  /// @brief Method UnsubscribeKeyboardYTranslateAction, addr 0x2ff5f44, size 0xe8, virtual false, abstract: false, final false
  inline void UnsubscribeKeyboardYTranslateAction();

  /// @brief Method UnsubscribeKeyboardZTranslateAction, addr 0x2ff6144, size 0xe8, virtual false, abstract: false, final false
  inline void UnsubscribeKeyboardZTranslateAction();

  /// @brief Method UnsubscribeManipulateHeadAction, addr 0x2ff6c0c, size 0xe8, virtual false, abstract: false, final false
  inline void UnsubscribeManipulateHeadAction();

  /// @brief Method UnsubscribeManipulateLeftAction, addr 0x2ff6344, size 0xe8, virtual false, abstract: false, final false
  inline void UnsubscribeManipulateLeftAction();

  /// @brief Method UnsubscribeManipulateRightAction, addr 0x2ff6544, size 0xe8, virtual false, abstract: false, final false
  inline void UnsubscribeManipulateRightAction();

  /// @brief Method UnsubscribeMenuAction, addr 0x2ff9534, size 0xe8, virtual false, abstract: false, final false
  inline void UnsubscribeMenuAction();

  /// @brief Method UnsubscribeMouseDeltaAction, addr 0x2ff713c, size 0xe8, virtual false, abstract: false, final false
  inline void UnsubscribeMouseDeltaAction();

  /// @brief Method UnsubscribeMouseScrollAction, addr 0x2ff733c, size 0xe8, virtual false, abstract: false, final false
  inline void UnsubscribeMouseScrollAction();

  /// @brief Method UnsubscribeNegateModeAction, addr 0x2ff78d4, size 0xe8, virtual false, abstract: false, final false
  inline void UnsubscribeNegateModeAction();

  /// @brief Method UnsubscribePrimary2DAxisClickAction, addr 0x2ff9734, size 0xe8, virtual false, abstract: false, final false
  inline void UnsubscribePrimary2DAxisClickAction();

  /// @brief Method UnsubscribePrimary2DAxisTouchAction, addr 0x2ff9b34, size 0xe8, virtual false, abstract: false, final false
  inline void UnsubscribePrimary2DAxisTouchAction();

  /// @brief Method UnsubscribePrimaryButtonAction, addr 0x2ff9134, size 0xe8, virtual false, abstract: false, final false
  inline void UnsubscribePrimaryButtonAction();

  /// @brief Method UnsubscribePrimaryTouchAction, addr 0x2ff9f34, size 0xe8, virtual false, abstract: false, final false
  inline void UnsubscribePrimaryTouchAction();

  /// @brief Method UnsubscribeResetAction, addr 0x2ff80d4, size 0xe8, virtual false, abstract: false, final false
  inline void UnsubscribeResetAction();

  /// @brief Method UnsubscribeRestingHandAxis2DAction, addr 0x2ff8b34, size 0xe8, virtual false, abstract: false, final false
  inline void UnsubscribeRestingHandAxis2DAction();

  /// @brief Method UnsubscribeRotateModeOverrideAction, addr 0x2ff753c, size 0xe8, virtual false, abstract: false, final false
  inline void UnsubscribeRotateModeOverrideAction();

  /// @brief Method UnsubscribeSecondary2DAxisClickAction, addr 0x2ff9934, size 0xe8, virtual false, abstract: false, final false
  inline void UnsubscribeSecondary2DAxisClickAction();

  /// @brief Method UnsubscribeSecondary2DAxisTouchAction, addr 0x2ff9d34, size 0xe8, virtual false, abstract: false, final false
  inline void UnsubscribeSecondary2DAxisTouchAction();

  /// @brief Method UnsubscribeSecondaryButtonAction, addr 0x2ff9334, size 0xe8, virtual false, abstract: false, final false
  inline void UnsubscribeSecondaryButtonAction();

  /// @brief Method UnsubscribeSecondaryTouchAction, addr 0x2ffa134, size 0xe8, virtual false, abstract: false, final false
  inline void UnsubscribeSecondaryTouchAction();

  /// @brief Method UnsubscribeStopManipulationAction, addr 0x2ff6fa4, size 0xb4, virtual false, abstract: false, final false
  inline void UnsubscribeStopManipulationAction();

  /// @brief Method UnsubscribeToggleCursorLockAction, addr 0x2ff82d4, size 0xb4, virtual false, abstract: false, final false
  inline void UnsubscribeToggleCursorLockAction();

  /// @brief Method UnsubscribeToggleDevicePositionTargetAction, addr 0x2ff846c, size 0xb4, virtual false, abstract: false, final false
  inline void UnsubscribeToggleDevicePositionTargetAction();

  /// @brief Method UnsubscribeToggleManipulateBodyAction, addr 0x2ff6a74, size 0xb4, virtual false, abstract: false, final false
  inline void UnsubscribeToggleManipulateBodyAction();

  /// @brief Method UnsubscribeToggleManipulateLeftAction, addr 0x2ff6744, size 0xb4, virtual false, abstract: false, final false
  inline void UnsubscribeToggleManipulateLeftAction();

  /// @brief Method UnsubscribeToggleManipulateRightAction, addr 0x2ff68dc, size 0xb4, virtual false, abstract: false, final false
  inline void UnsubscribeToggleManipulateRightAction();

  /// @brief Method UnsubscribeToggleMouseTransformationModeAction, addr 0x2ff773c, size 0xb4, virtual false, abstract: false, final false
  inline void UnsubscribeToggleMouseTransformationModeAction();

  /// @brief Method UnsubscribeTogglePrimary2DAxisTargetAction, addr 0x2ff8604, size 0xb4, virtual false, abstract: false, final false
  inline void UnsubscribeTogglePrimary2DAxisTargetAction();

  /// @brief Method UnsubscribeToggleSecondary2DAxisTargetAction, addr 0x2ff879c, size 0xb4, virtual false, abstract: false, final false
  inline void UnsubscribeToggleSecondary2DAxisTargetAction();

  /// @brief Method UnsubscribeTriggerAction, addr 0x2ff8f34, size 0xe8, virtual false, abstract: false, final false
  inline void UnsubscribeTriggerAction();

  /// @brief Method UnsubscribeXConstraintAction, addr 0x2ff7ad4, size 0xe8, virtual false, abstract: false, final false
  inline void UnsubscribeXConstraintAction();

  /// @brief Method UnsubscribeYConstraintAction, addr 0x2ff7cd4, size 0xe8, virtual false, abstract: false, final false
  inline void UnsubscribeYConstraintAction();

  /// @brief Method UnsubscribeZConstraintAction, addr 0x2ff7ed4, size 0xe8, virtual false, abstract: false, final false
  inline void UnsubscribeZConstraintAction();

  /// @brief Method Update, addr 0x2ffb434, size 0x138, virtual true, abstract: false, final false
  inline void Update();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Axis2DTargets const& __cordl_internal_get__axis2DTargets_k__BackingField() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Axis2DTargets& __cordl_internal_get__axis2DTargets_k__BackingField();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TransformationMode const& __cordl_internal_get__mouseTransformationMode_k__BackingField() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TransformationMode& __cordl_internal_get__mouseTransformationMode_k__BackingField();

  constexpr bool const& __cordl_internal_get__negateMode_k__BackingField() const;

  constexpr bool& __cordl_internal_get__negateMode_k__BackingField();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_Axis2DAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_Axis2DAction();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_Axis2DInput() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_Axis2DInput();

  constexpr ::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>, ::UnityW<::UnityEngine::Camera>> const& __cordl_internal_get_m_CachedCamera() const;

  constexpr ::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>, ::UnityW<::UnityEngine::Camera>>& __cordl_internal_get_m_CachedCamera();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_CameraTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_CameraTransform();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_CenterEyeEuler() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_CenterEyeEuler();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset> const& __cordl_internal_get_m_ControllerActionAsset() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset>& __cordl_internal_get_m_ControllerActionAsset();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_CycleDevicesAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_CycleDevicesAction();

  constexpr ::UnityEngine::CursorLockMode const& __cordl_internal_get_m_DesiredCursorLockMode() const;

  constexpr ::UnityEngine::CursorLockMode& __cordl_internal_get_m_DesiredCursorLockMode();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset> const& __cordl_internal_get_m_DeviceSimulatorActionAsset() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset>& __cordl_internal_get_m_DeviceSimulatorActionAsset();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_DeviceSimulatorUI() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_DeviceSimulatorUI();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_GripAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_GripAction();

  constexpr float_t const& __cordl_internal_get_m_GripAmount() const;

  constexpr float_t& __cordl_internal_get_m_GripAmount();

  constexpr bool const& __cordl_internal_get_m_GripInput() const;

  constexpr bool& __cordl_internal_get_m_GripInput();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD*& __cordl_internal_get_m_HMDDevice();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD*> const& __cordl_internal_get_m_HMDDevice() const;

  constexpr bool const& __cordl_internal_get_m_HMDIsTracked() const;

  constexpr bool& __cordl_internal_get_m_HMDIsTracked();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState const& __cordl_internal_get_m_HMDState() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState& __cordl_internal_get_m_HMDState();

  constexpr ::UnityEngine::XR::InputTrackingState const& __cordl_internal_get_m_HMDTrackingState() const;

  constexpr ::UnityEngine::XR::InputTrackingState& __cordl_internal_get_m_HMDTrackingState();

  constexpr float_t const& __cordl_internal_get_m_KeyboardBodyTranslateMultiplier() const;

  constexpr float_t& __cordl_internal_get_m_KeyboardBodyTranslateMultiplier();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space const& __cordl_internal_get_m_KeyboardTranslateSpace() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space& __cordl_internal_get_m_KeyboardTranslateSpace();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_KeyboardXTranslateAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_KeyboardXTranslateAction();

  constexpr float_t const& __cordl_internal_get_m_KeyboardXTranslateInput() const;

  constexpr float_t& __cordl_internal_get_m_KeyboardXTranslateInput();

  constexpr float_t const& __cordl_internal_get_m_KeyboardXTranslateSpeed() const;

  constexpr float_t& __cordl_internal_get_m_KeyboardXTranslateSpeed();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_KeyboardYTranslateAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_KeyboardYTranslateAction();

  constexpr float_t const& __cordl_internal_get_m_KeyboardYTranslateInput() const;

  constexpr float_t& __cordl_internal_get_m_KeyboardYTranslateInput();

  constexpr float_t const& __cordl_internal_get_m_KeyboardYTranslateSpeed() const;

  constexpr float_t& __cordl_internal_get_m_KeyboardYTranslateSpeed();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_KeyboardZTranslateAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_KeyboardZTranslateAction();

  constexpr float_t const& __cordl_internal_get_m_KeyboardZTranslateInput() const;

  constexpr float_t& __cordl_internal_get_m_KeyboardZTranslateInput();

  constexpr float_t const& __cordl_internal_get_m_KeyboardZTranslateSpeed() const;

  constexpr float_t& __cordl_internal_get_m_KeyboardZTranslateSpeed();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*& __cordl_internal_get_m_LeftControllerDevice();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*> const& __cordl_internal_get_m_LeftControllerDevice() const;

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_LeftControllerEuler() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_LeftControllerEuler();

  constexpr bool const& __cordl_internal_get_m_LeftControllerIsTracked() const;

  constexpr bool& __cordl_internal_get_m_LeftControllerIsTracked();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState const& __cordl_internal_get_m_LeftControllerState() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState& __cordl_internal_get_m_LeftControllerState();

  constexpr ::UnityEngine::XR::InputTrackingState const& __cordl_internal_get_m_LeftControllerTrackingState() const;

  constexpr ::UnityEngine::XR::InputTrackingState& __cordl_internal_get_m_LeftControllerTrackingState();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_ManipulateHeadAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_ManipulateHeadAction();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_ManipulateLeftAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_ManipulateLeftAction();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_ManipulateRightAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_ManipulateRightAction();

  constexpr bool const& __cordl_internal_get_m_ManipulatedRestingHandAxis2D() const;

  constexpr bool& __cordl_internal_get_m_ManipulatedRestingHandAxis2D();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_MenuAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_MenuAction();

  constexpr bool const& __cordl_internal_get_m_MenuInput() const;

  constexpr bool& __cordl_internal_get_m_MenuInput();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_MouseDeltaAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_MouseDeltaAction();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_MouseDeltaInput() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_MouseDeltaInput();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_MouseScrollAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_MouseScrollAction();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_MouseScrollInput() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_MouseScrollInput();

  constexpr float_t const& __cordl_internal_get_m_MouseScrollRotateSensitivity() const;

  constexpr float_t& __cordl_internal_get_m_MouseScrollRotateSensitivity();

  constexpr float_t const& __cordl_internal_get_m_MouseScrollTranslateSensitivity() const;

  constexpr float_t& __cordl_internal_get_m_MouseScrollTranslateSensitivity();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space const& __cordl_internal_get_m_MouseTranslateSpace() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space& __cordl_internal_get_m_MouseTranslateSpace();

  constexpr float_t const& __cordl_internal_get_m_MouseXRotateSensitivity() const;

  constexpr float_t& __cordl_internal_get_m_MouseXRotateSensitivity();

  constexpr float_t const& __cordl_internal_get_m_MouseXTranslateSensitivity() const;

  constexpr float_t& __cordl_internal_get_m_MouseXTranslateSensitivity();

  constexpr bool const& __cordl_internal_get_m_MouseYRotateInvert() const;

  constexpr bool& __cordl_internal_get_m_MouseYRotateInvert();

  constexpr float_t const& __cordl_internal_get_m_MouseYRotateSensitivity() const;

  constexpr float_t& __cordl_internal_get_m_MouseYRotateSensitivity();

  constexpr float_t const& __cordl_internal_get_m_MouseYTranslateSensitivity() const;

  constexpr float_t& __cordl_internal_get_m_MouseYTranslateSensitivity();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_NegateModeAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_NegateModeAction();

  constexpr bool const& __cordl_internal_get_m_OnInputDeviceChangeSubscribed() const;

  constexpr bool& __cordl_internal_get_m_OnInputDeviceChangeSubscribed();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_Primary2DAxisClickAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_Primary2DAxisClickAction();

  constexpr bool const& __cordl_internal_get_m_Primary2DAxisClickInput() const;

  constexpr bool& __cordl_internal_get_m_Primary2DAxisClickInput();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_Primary2DAxisTouchAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_Primary2DAxisTouchAction();

  constexpr bool const& __cordl_internal_get_m_Primary2DAxisTouchInput() const;

  constexpr bool& __cordl_internal_get_m_Primary2DAxisTouchInput();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_PrimaryButtonAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_PrimaryButtonAction();

  constexpr bool const& __cordl_internal_get_m_PrimaryButtonInput() const;

  constexpr bool& __cordl_internal_get_m_PrimaryButtonInput();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_PrimaryTouchAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_PrimaryTouchAction();

  constexpr bool const& __cordl_internal_get_m_PrimaryTouchInput() const;

  constexpr bool& __cordl_internal_get_m_PrimaryTouchInput();

  constexpr bool const& __cordl_internal_get_m_RemoveOtherHMDDevices() const;

  constexpr bool& __cordl_internal_get_m_RemoveOtherHMDDevices();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_ResetAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_ResetAction();

  constexpr bool const& __cordl_internal_get_m_ResetInput() const;

  constexpr bool& __cordl_internal_get_m_ResetInput();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_RestingHandAxis2DAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_RestingHandAxis2DAction();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_RestingHandAxis2DInput() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_RestingHandAxis2DInput();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*& __cordl_internal_get_m_RightControllerDevice();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*> const& __cordl_internal_get_m_RightControllerDevice() const;

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_RightControllerEuler() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_RightControllerEuler();

  constexpr bool const& __cordl_internal_get_m_RightControllerIsTracked() const;

  constexpr bool& __cordl_internal_get_m_RightControllerIsTracked();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState const& __cordl_internal_get_m_RightControllerState() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState& __cordl_internal_get_m_RightControllerState();

  constexpr ::UnityEngine::XR::InputTrackingState const& __cordl_internal_get_m_RightControllerTrackingState() const;

  constexpr ::UnityEngine::XR::InputTrackingState& __cordl_internal_get_m_RightControllerTrackingState();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_RotateModeOverrideAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_RotateModeOverrideAction();

  constexpr bool const& __cordl_internal_get_m_RotateModeOverrideInput() const;

  constexpr bool& __cordl_internal_get_m_RotateModeOverrideInput();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_Secondary2DAxisClickAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_Secondary2DAxisClickAction();

  constexpr bool const& __cordl_internal_get_m_Secondary2DAxisClickInput() const;

  constexpr bool& __cordl_internal_get_m_Secondary2DAxisClickInput();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_Secondary2DAxisTouchAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_Secondary2DAxisTouchAction();

  constexpr bool const& __cordl_internal_get_m_Secondary2DAxisTouchInput() const;

  constexpr bool& __cordl_internal_get_m_Secondary2DAxisTouchInput();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_SecondaryButtonAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_SecondaryButtonAction();

  constexpr bool const& __cordl_internal_get_m_SecondaryButtonInput() const;

  constexpr bool& __cordl_internal_get_m_SecondaryButtonInput();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_SecondaryTouchAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_SecondaryTouchAction();

  constexpr bool const& __cordl_internal_get_m_SecondaryTouchInput() const;

  constexpr bool& __cordl_internal_get_m_SecondaryTouchInput();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_StopManipulationAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_StopManipulationAction();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices const& __cordl_internal_get_m_TargetedDeviceInput() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices& __cordl_internal_get_m_TargetedDeviceInput();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_ToggleCursorLockAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_ToggleCursorLockAction();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_ToggleDevicePositionTargetAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_ToggleDevicePositionTargetAction();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_ToggleManipulateBodyAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_ToggleManipulateBodyAction();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_ToggleManipulateLeftAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_ToggleManipulateLeftAction();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_ToggleManipulateRightAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_ToggleManipulateRightAction();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_ToggleMouseTransformationModeAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_ToggleMouseTransformationModeAction();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_TogglePrimary2DAxisTargetAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_TogglePrimary2DAxisTargetAction();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_ToggleSecondary2DAxisTargetAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_ToggleSecondary2DAxisTargetAction();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_TriggerAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_TriggerAction();

  constexpr float_t const& __cordl_internal_get_m_TriggerAmount() const;

  constexpr float_t& __cordl_internal_get_m_TriggerAmount();

  constexpr bool const& __cordl_internal_get_m_TriggerInput() const;

  constexpr bool& __cordl_internal_get_m_TriggerInput();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_XConstraintAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_XConstraintAction();

  constexpr bool const& __cordl_internal_get_m_XConstraintInput() const;

  constexpr bool& __cordl_internal_get_m_XConstraintInput();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_YConstraintAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_YConstraintAction();

  constexpr bool const& __cordl_internal_get_m_YConstraintInput() const;

  constexpr bool& __cordl_internal_get_m_YConstraintInput();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_ZConstraintAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_ZConstraintAction();

  constexpr bool const& __cordl_internal_get_m_ZConstraintInput() const;

  constexpr bool& __cordl_internal_get_m_ZConstraintInput();

  constexpr void __cordl_internal_set__axis2DTargets_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Axis2DTargets value);

  constexpr void __cordl_internal_set__mouseTransformationMode_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TransformationMode value);

  constexpr void __cordl_internal_set__negateMode_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_Axis2DAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_Axis2DInput(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_CachedCamera(::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>, ::UnityW<::UnityEngine::Camera>> value);

  constexpr void __cordl_internal_set_m_CameraTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_m_CenterEyeEuler(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_ControllerActionAsset(::UnityW<::UnityEngine::InputSystem::InputActionAsset> value);

  constexpr void __cordl_internal_set_m_CycleDevicesAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_DesiredCursorLockMode(::UnityEngine::CursorLockMode value);

  constexpr void __cordl_internal_set_m_DeviceSimulatorActionAsset(::UnityW<::UnityEngine::InputSystem::InputActionAsset> value);

  constexpr void __cordl_internal_set_m_DeviceSimulatorUI(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_GripAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_GripAmount(float_t value);

  constexpr void __cordl_internal_set_m_GripInput(bool value);

  constexpr void __cordl_internal_set_m_HMDDevice(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD* value);

  constexpr void __cordl_internal_set_m_HMDIsTracked(bool value);

  constexpr void __cordl_internal_set_m_HMDState(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState value);

  constexpr void __cordl_internal_set_m_HMDTrackingState(::UnityEngine::XR::InputTrackingState value);

  constexpr void __cordl_internal_set_m_KeyboardBodyTranslateMultiplier(float_t value);

  constexpr void __cordl_internal_set_m_KeyboardTranslateSpace(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space value);

  constexpr void __cordl_internal_set_m_KeyboardXTranslateAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_KeyboardXTranslateInput(float_t value);

  constexpr void __cordl_internal_set_m_KeyboardXTranslateSpeed(float_t value);

  constexpr void __cordl_internal_set_m_KeyboardYTranslateAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_KeyboardYTranslateInput(float_t value);

  constexpr void __cordl_internal_set_m_KeyboardYTranslateSpeed(float_t value);

  constexpr void __cordl_internal_set_m_KeyboardZTranslateAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_KeyboardZTranslateInput(float_t value);

  constexpr void __cordl_internal_set_m_KeyboardZTranslateSpeed(float_t value);

  constexpr void __cordl_internal_set_m_LeftControllerDevice(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController* value);

  constexpr void __cordl_internal_set_m_LeftControllerEuler(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_LeftControllerIsTracked(bool value);

  constexpr void __cordl_internal_set_m_LeftControllerState(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState value);

  constexpr void __cordl_internal_set_m_LeftControllerTrackingState(::UnityEngine::XR::InputTrackingState value);

  constexpr void __cordl_internal_set_m_ManipulateHeadAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_ManipulateLeftAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_ManipulateRightAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_ManipulatedRestingHandAxis2D(bool value);

  constexpr void __cordl_internal_set_m_MenuAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_MenuInput(bool value);

  constexpr void __cordl_internal_set_m_MouseDeltaAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_MouseDeltaInput(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_MouseScrollAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_MouseScrollInput(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_MouseScrollRotateSensitivity(float_t value);

  constexpr void __cordl_internal_set_m_MouseScrollTranslateSensitivity(float_t value);

  constexpr void __cordl_internal_set_m_MouseTranslateSpace(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space value);

  constexpr void __cordl_internal_set_m_MouseXRotateSensitivity(float_t value);

  constexpr void __cordl_internal_set_m_MouseXTranslateSensitivity(float_t value);

  constexpr void __cordl_internal_set_m_MouseYRotateInvert(bool value);

  constexpr void __cordl_internal_set_m_MouseYRotateSensitivity(float_t value);

  constexpr void __cordl_internal_set_m_MouseYTranslateSensitivity(float_t value);

  constexpr void __cordl_internal_set_m_NegateModeAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_OnInputDeviceChangeSubscribed(bool value);

  constexpr void __cordl_internal_set_m_Primary2DAxisClickAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_Primary2DAxisClickInput(bool value);

  constexpr void __cordl_internal_set_m_Primary2DAxisTouchAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_Primary2DAxisTouchInput(bool value);

  constexpr void __cordl_internal_set_m_PrimaryButtonAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_PrimaryButtonInput(bool value);

  constexpr void __cordl_internal_set_m_PrimaryTouchAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_PrimaryTouchInput(bool value);

  constexpr void __cordl_internal_set_m_RemoveOtherHMDDevices(bool value);

  constexpr void __cordl_internal_set_m_ResetAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_ResetInput(bool value);

  constexpr void __cordl_internal_set_m_RestingHandAxis2DAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_RestingHandAxis2DInput(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_RightControllerDevice(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController* value);

  constexpr void __cordl_internal_set_m_RightControllerEuler(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_RightControllerIsTracked(bool value);

  constexpr void __cordl_internal_set_m_RightControllerState(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState value);

  constexpr void __cordl_internal_set_m_RightControllerTrackingState(::UnityEngine::XR::InputTrackingState value);

  constexpr void __cordl_internal_set_m_RotateModeOverrideAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_RotateModeOverrideInput(bool value);

  constexpr void __cordl_internal_set_m_Secondary2DAxisClickAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_Secondary2DAxisClickInput(bool value);

  constexpr void __cordl_internal_set_m_Secondary2DAxisTouchAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_Secondary2DAxisTouchInput(bool value);

  constexpr void __cordl_internal_set_m_SecondaryButtonAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_SecondaryButtonInput(bool value);

  constexpr void __cordl_internal_set_m_SecondaryTouchAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_SecondaryTouchInput(bool value);

  constexpr void __cordl_internal_set_m_StopManipulationAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_TargetedDeviceInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices value);

  constexpr void __cordl_internal_set_m_ToggleCursorLockAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_ToggleDevicePositionTargetAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_ToggleManipulateBodyAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_ToggleManipulateLeftAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_ToggleManipulateRightAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_ToggleMouseTransformationModeAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_TogglePrimary2DAxisTargetAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_ToggleSecondary2DAxisTargetAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_TriggerAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_TriggerAmount(float_t value);

  constexpr void __cordl_internal_set_m_TriggerInput(bool value);

  constexpr void __cordl_internal_set_m_XConstraintAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_XConstraintInput(bool value);

  constexpr void __cordl_internal_set_m_YConstraintAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_YConstraintInput(bool value);

  constexpr void __cordl_internal_set_m_ZConstraintAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_ZConstraintInput(bool value);

  /// @brief Method .ctor, addr 0x2ffe9f4, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator> getStaticF__instance_k__BackingField();

  static inline ::UnityEngine::Vector3 getStaticF_s_LeftControllerDefaultInitialPosition();

  static inline ::UnityEngine::Vector3 getStaticF_s_RightControllerDefaultInitialPosition();

  /// @brief Method get_axis2DAction, addr 0x2ff8904, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_axis2DAction();

  /// @brief Method get_axis2DTargets, addr 0x2ffa4cc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Axis2DTargets get_axis2DTargets();

  /// @brief Method get_cameraTransform, addr 0x2ffa304, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_cameraTransform();

  /// @brief Method get_controllerActionAsset, addr 0x2ff5d04, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionAsset> get_controllerActionAsset();

  /// @brief Method get_cycleDevicesAction, addr 0x2ff6ddc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_cycleDevicesAction();

  /// @brief Method get_desiredCursorLockMode, addr 0x2ffa3e8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::CursorLockMode get_desiredCursorLockMode();

  /// @brief Method get_deviceSimulatorActionAsset, addr 0x2ff5cf4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionAsset> get_deviceSimulatorActionAsset();

  /// @brief Method get_deviceSimulatorUI, addr 0x2ffa40c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_deviceSimulatorUI();

  /// @brief Method get_gripAction, addr 0x2ff8d04, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_gripAction();

  /// @brief Method get_gripAmount, addr 0x2ffa41c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_gripAmount();

  /// @brief Method get_hmdIsTracked, addr 0x2ffa43c, size 0x8, virtual false, abstract: false, final false
  inline bool get_hmdIsTracked();

  /// @brief Method get_hmdTrackingState, addr 0x2ffa450, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::InputTrackingState get_hmdTrackingState();

  /// @brief Method get_instance, addr 0x2ffa50c, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator> get_instance();

  /// @brief Method get_keyboardBodyTranslateMultiplier, addr 0x2ffa364, size 0x8, virtual false, abstract: false, final false
  inline float_t get_keyboardBodyTranslateMultiplier();

  /// @brief Method get_keyboardTranslateSpace, addr 0x2ffa314, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space get_keyboardTranslateSpace();

  /// @brief Method get_keyboardXTranslateAction, addr 0x2ff5d14, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_keyboardXTranslateAction();

  /// @brief Method get_keyboardXTranslateSpeed, addr 0x2ffa334, size 0x8, virtual false, abstract: false, final false
  inline float_t get_keyboardXTranslateSpeed();

  /// @brief Method get_keyboardYTranslateAction, addr 0x2ff5f14, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_keyboardYTranslateAction();

  /// @brief Method get_keyboardYTranslateSpeed, addr 0x2ffa344, size 0x8, virtual false, abstract: false, final false
  inline float_t get_keyboardYTranslateSpeed();

  /// @brief Method get_keyboardZTranslateAction, addr 0x2ff6114, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_keyboardZTranslateAction();

  /// @brief Method get_keyboardZTranslateSpeed, addr 0x2ffa354, size 0x8, virtual false, abstract: false, final false
  inline float_t get_keyboardZTranslateSpeed();

  /// @brief Method get_leftControllerIsTracked, addr 0x2ffa460, size 0x8, virtual false, abstract: false, final false
  inline bool get_leftControllerIsTracked();

  /// @brief Method get_leftControllerTrackingState, addr 0x2ffa474, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::InputTrackingState get_leftControllerTrackingState();

  /// @brief Method get_manipulateHeadAction, addr 0x2ff6bdc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_manipulateHeadAction();

  /// @brief Method get_manipulateLeftAction, addr 0x2ff6314, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_manipulateLeftAction();

  /// @brief Method get_manipulateRightAction, addr 0x2ff6514, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_manipulateRightAction();

  /// @brief Method get_manipulatingFPS, addr 0x2ffa4fc, size 0x10, virtual false, abstract: false, final false
  inline bool get_manipulatingFPS();

  /// @brief Method get_manipulatingLeftController, addr 0x2ffa4dc, size 0x10, virtual false, abstract: false, final false
  inline bool get_manipulatingLeftController();

  /// @brief Method get_manipulatingRightController, addr 0x2ffa4ec, size 0x10, virtual false, abstract: false, final false
  inline bool get_manipulatingRightController();

  /// @brief Method get_menuAction, addr 0x2ff9504, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_menuAction();

  /// @brief Method get_mouseDeltaAction, addr 0x2ff710c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_mouseDeltaAction();

  /// @brief Method get_mouseScrollAction, addr 0x2ff730c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_mouseScrollAction();

  /// @brief Method get_mouseScrollRotateSensitivity, addr 0x2ffa3c4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_mouseScrollRotateSensitivity();

  /// @brief Method get_mouseScrollTranslateSensitivity, addr 0x2ffa394, size 0x8, virtual false, abstract: false, final false
  inline float_t get_mouseScrollTranslateSensitivity();

  /// @brief Method get_mouseTransformationMode, addr 0x2ffa4a8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TransformationMode get_mouseTransformationMode();

  /// @brief Method get_mouseTranslateSpace, addr 0x2ffa324, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space get_mouseTranslateSpace();

  /// @brief Method get_mouseXRotateSensitivity, addr 0x2ffa3a4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_mouseXRotateSensitivity();

  /// @brief Method get_mouseXTranslateSensitivity, addr 0x2ffa374, size 0x8, virtual false, abstract: false, final false
  inline float_t get_mouseXTranslateSensitivity();

  /// @brief Method get_mouseYRotateInvert, addr 0x2ffa3d4, size 0x8, virtual false, abstract: false, final false
  inline bool get_mouseYRotateInvert();

  /// @brief Method get_mouseYRotateSensitivity, addr 0x2ffa3b4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_mouseYRotateSensitivity();

  /// @brief Method get_mouseYTranslateSensitivity, addr 0x2ffa384, size 0x8, virtual false, abstract: false, final false
  inline float_t get_mouseYTranslateSensitivity();

  /// @brief Method get_negateMode, addr 0x2ffa4b8, size 0x8, virtual false, abstract: false, final false
  inline bool get_negateMode();

  /// @brief Method get_negateModeAction, addr 0x2ff78a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_negateModeAction();

  /// @brief Method get_primary2DAxisClickAction, addr 0x2ff9704, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_primary2DAxisClickAction();

  /// @brief Method get_primary2DAxisTouchAction, addr 0x2ff9b04, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_primary2DAxisTouchAction();

  /// @brief Method get_primaryButtonAction, addr 0x2ff9104, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_primaryButtonAction();

  /// @brief Method get_primaryTouchAction, addr 0x2ff9f04, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_primaryTouchAction();

  /// @brief Method get_removeOtherHMDDevices, addr 0x2ffa3f8, size 0x8, virtual false, abstract: false, final false
  inline bool get_removeOtherHMDDevices();

  /// @brief Method get_resetAction, addr 0x2ff80a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_resetAction();

  /// @brief Method get_restingHandAxis2DAction, addr 0x2ff8b04, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_restingHandAxis2DAction();

  /// @brief Method get_rightControllerIsTracked, addr 0x2ffa484, size 0x8, virtual false, abstract: false, final false
  inline bool get_rightControllerIsTracked();

  /// @brief Method get_rightControllerTrackingState, addr 0x2ffa498, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::InputTrackingState get_rightControllerTrackingState();

  /// @brief Method get_rotateModeOverrideAction, addr 0x2ff750c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_rotateModeOverrideAction();

  /// @brief Method get_secondary2DAxisClickAction, addr 0x2ff9904, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_secondary2DAxisClickAction();

  /// @brief Method get_secondary2DAxisTouchAction, addr 0x2ff9d04, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_secondary2DAxisTouchAction();

  /// @brief Method get_secondaryButtonAction, addr 0x2ff9304, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_secondaryButtonAction();

  /// @brief Method get_secondaryTouchAction, addr 0x2ffa104, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_secondaryTouchAction();

  /// @brief Method get_stopManipulationAction, addr 0x2ff6f74, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_stopManipulationAction();

  /// @brief Method get_targetedDeviceInput, addr 0x2ffa5c0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices get_targetedDeviceInput();

  /// @brief Method get_toggleCursorLockAction, addr 0x2ff82a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_toggleCursorLockAction();

  /// @brief Method get_toggleDevicePositionTargetAction, addr 0x2ff843c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_toggleDevicePositionTargetAction();

  /// @brief Method get_toggleManipulateBodyAction, addr 0x2ff6a44, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_toggleManipulateBodyAction();

  /// @brief Method get_toggleManipulateLeftAction, addr 0x2ff6714, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_toggleManipulateLeftAction();

  /// @brief Method get_toggleManipulateRightAction, addr 0x2ff68ac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_toggleManipulateRightAction();

  /// @brief Method get_toggleMouseTransformationModeAction, addr 0x2ff770c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_toggleMouseTransformationModeAction();

  /// @brief Method get_togglePrimary2DAxisTargetAction, addr 0x2ff85d4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_togglePrimary2DAxisTargetAction();

  /// @brief Method get_toggleSecondary2DAxisTargetAction, addr 0x2ff876c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_toggleSecondary2DAxisTargetAction();

  /// @brief Method get_triggerAction, addr 0x2ff8f04, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_triggerAction();

  /// @brief Method get_triggerAmount, addr 0x2ffa42c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_triggerAmount();

  /// @brief Method get_xConstraintAction, addr 0x2ff7aa4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_xConstraintAction();

  /// @brief Method get_yConstraintAction, addr 0x2ff7ca4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_yConstraintAction();

  /// @brief Method get_zConstraintAction, addr 0x2ff7ea4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_zConstraintAction();

  static inline void setStaticF__instance_k__BackingField(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator> value);

  static inline void setStaticF_s_LeftControllerDefaultInitialPosition(::UnityEngine::Vector3 value);

  static inline void setStaticF_s_RightControllerDefaultInitialPosition(::UnityEngine::Vector3 value);

  /// @brief Method set_axis2DAction, addr 0x2ff890c, size 0x28, virtual false, abstract: false, final false
  inline void set_axis2DAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_axis2DTargets, addr 0x2ffa4d4, size 0x8, virtual false, abstract: false, final false
  inline void set_axis2DTargets(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Axis2DTargets value);

  /// @brief Method set_cameraTransform, addr 0x2ffa30c, size 0x8, virtual false, abstract: false, final false
  inline void set_cameraTransform(::UnityEngine::Transform* value);

  /// @brief Method set_controllerActionAsset, addr 0x2ff5d0c, size 0x8, virtual false, abstract: false, final false
  inline void set_controllerActionAsset(::UnityEngine::InputSystem::InputActionAsset* value);

  /// @brief Method set_cycleDevicesAction, addr 0x2ff6de4, size 0x28, virtual false, abstract: false, final false
  inline void set_cycleDevicesAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_desiredCursorLockMode, addr 0x2ffa3f0, size 0x8, virtual false, abstract: false, final false
  inline void set_desiredCursorLockMode(::UnityEngine::CursorLockMode value);

  /// @brief Method set_deviceSimulatorActionAsset, addr 0x2ff5cfc, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceSimulatorActionAsset(::UnityEngine::InputSystem::InputActionAsset* value);

  /// @brief Method set_deviceSimulatorUI, addr 0x2ffa414, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceSimulatorUI(::UnityEngine::GameObject* value);

  /// @brief Method set_gripAction, addr 0x2ff8d0c, size 0x28, virtual false, abstract: false, final false
  inline void set_gripAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_gripAmount, addr 0x2ffa424, size 0x8, virtual false, abstract: false, final false
  inline void set_gripAmount(float_t value);

  /// @brief Method set_hmdIsTracked, addr 0x2ffa444, size 0xc, virtual false, abstract: false, final false
  inline void set_hmdIsTracked(bool value);

  /// @brief Method set_hmdTrackingState, addr 0x2ffa458, size 0x8, virtual false, abstract: false, final false
  inline void set_hmdTrackingState(::UnityEngine::XR::InputTrackingState value);

  /// @brief Method set_instance, addr 0x2ffa564, size 0x5c, virtual false, abstract: false, final false
  static inline void set_instance(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator* value);

  /// @brief Method set_keyboardBodyTranslateMultiplier, addr 0x2ffa36c, size 0x8, virtual false, abstract: false, final false
  inline void set_keyboardBodyTranslateMultiplier(float_t value);

  /// @brief Method set_keyboardTranslateSpace, addr 0x2ffa31c, size 0x8, virtual false, abstract: false, final false
  inline void set_keyboardTranslateSpace(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space value);

  /// @brief Method set_keyboardXTranslateAction, addr 0x2ff5d1c, size 0x28, virtual false, abstract: false, final false
  inline void set_keyboardXTranslateAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_keyboardXTranslateSpeed, addr 0x2ffa33c, size 0x8, virtual false, abstract: false, final false
  inline void set_keyboardXTranslateSpeed(float_t value);

  /// @brief Method set_keyboardYTranslateAction, addr 0x2ff5f1c, size 0x28, virtual false, abstract: false, final false
  inline void set_keyboardYTranslateAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_keyboardYTranslateSpeed, addr 0x2ffa34c, size 0x8, virtual false, abstract: false, final false
  inline void set_keyboardYTranslateSpeed(float_t value);

  /// @brief Method set_keyboardZTranslateAction, addr 0x2ff611c, size 0x28, virtual false, abstract: false, final false
  inline void set_keyboardZTranslateAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_keyboardZTranslateSpeed, addr 0x2ffa35c, size 0x8, virtual false, abstract: false, final false
  inline void set_keyboardZTranslateSpeed(float_t value);

  /// @brief Method set_leftControllerIsTracked, addr 0x2ffa468, size 0xc, virtual false, abstract: false, final false
  inline void set_leftControllerIsTracked(bool value);

  /// @brief Method set_leftControllerTrackingState, addr 0x2ffa47c, size 0x8, virtual false, abstract: false, final false
  inline void set_leftControllerTrackingState(::UnityEngine::XR::InputTrackingState value);

  /// @brief Method set_manipulateHeadAction, addr 0x2ff6be4, size 0x28, virtual false, abstract: false, final false
  inline void set_manipulateHeadAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_manipulateLeftAction, addr 0x2ff631c, size 0x28, virtual false, abstract: false, final false
  inline void set_manipulateLeftAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_manipulateRightAction, addr 0x2ff651c, size 0x28, virtual false, abstract: false, final false
  inline void set_manipulateRightAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_menuAction, addr 0x2ff950c, size 0x28, virtual false, abstract: false, final false
  inline void set_menuAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_mouseDeltaAction, addr 0x2ff7114, size 0x28, virtual false, abstract: false, final false
  inline void set_mouseDeltaAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_mouseScrollAction, addr 0x2ff7314, size 0x28, virtual false, abstract: false, final false
  inline void set_mouseScrollAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_mouseScrollRotateSensitivity, addr 0x2ffa3cc, size 0x8, virtual false, abstract: false, final false
  inline void set_mouseScrollRotateSensitivity(float_t value);

  /// @brief Method set_mouseScrollTranslateSensitivity, addr 0x2ffa39c, size 0x8, virtual false, abstract: false, final false
  inline void set_mouseScrollTranslateSensitivity(float_t value);

  /// @brief Method set_mouseTransformationMode, addr 0x2ffa4b0, size 0x8, virtual false, abstract: false, final false
  inline void set_mouseTransformationMode(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TransformationMode value);

  /// @brief Method set_mouseTranslateSpace, addr 0x2ffa32c, size 0x8, virtual false, abstract: false, final false
  inline void set_mouseTranslateSpace(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space value);

  /// @brief Method set_mouseXRotateSensitivity, addr 0x2ffa3ac, size 0x8, virtual false, abstract: false, final false
  inline void set_mouseXRotateSensitivity(float_t value);

  /// @brief Method set_mouseXTranslateSensitivity, addr 0x2ffa37c, size 0x8, virtual false, abstract: false, final false
  inline void set_mouseXTranslateSensitivity(float_t value);

  /// @brief Method set_mouseYRotateInvert, addr 0x2ffa3dc, size 0xc, virtual false, abstract: false, final false
  inline void set_mouseYRotateInvert(bool value);

  /// @brief Method set_mouseYRotateSensitivity, addr 0x2ffa3bc, size 0x8, virtual false, abstract: false, final false
  inline void set_mouseYRotateSensitivity(float_t value);

  /// @brief Method set_mouseYTranslateSensitivity, addr 0x2ffa38c, size 0x8, virtual false, abstract: false, final false
  inline void set_mouseYTranslateSensitivity(float_t value);

  /// @brief Method set_negateMode, addr 0x2ffa4c0, size 0xc, virtual false, abstract: false, final false
  inline void set_negateMode(bool value);

  /// @brief Method set_negateModeAction, addr 0x2ff78ac, size 0x28, virtual false, abstract: false, final false
  inline void set_negateModeAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_primary2DAxisClickAction, addr 0x2ff970c, size 0x28, virtual false, abstract: false, final false
  inline void set_primary2DAxisClickAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_primary2DAxisTouchAction, addr 0x2ff9b0c, size 0x28, virtual false, abstract: false, final false
  inline void set_primary2DAxisTouchAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_primaryButtonAction, addr 0x2ff910c, size 0x28, virtual false, abstract: false, final false
  inline void set_primaryButtonAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_primaryTouchAction, addr 0x2ff9f0c, size 0x28, virtual false, abstract: false, final false
  inline void set_primaryTouchAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_removeOtherHMDDevices, addr 0x2ffa400, size 0xc, virtual false, abstract: false, final false
  inline void set_removeOtherHMDDevices(bool value);

  /// @brief Method set_resetAction, addr 0x2ff80ac, size 0x28, virtual false, abstract: false, final false
  inline void set_resetAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_restingHandAxis2DAction, addr 0x2ff8b0c, size 0x28, virtual false, abstract: false, final false
  inline void set_restingHandAxis2DAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_rightControllerIsTracked, addr 0x2ffa48c, size 0xc, virtual false, abstract: false, final false
  inline void set_rightControllerIsTracked(bool value);

  /// @brief Method set_rightControllerTrackingState, addr 0x2ffa4a0, size 0x8, virtual false, abstract: false, final false
  inline void set_rightControllerTrackingState(::UnityEngine::XR::InputTrackingState value);

  /// @brief Method set_rotateModeOverrideAction, addr 0x2ff7514, size 0x28, virtual false, abstract: false, final false
  inline void set_rotateModeOverrideAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_secondary2DAxisClickAction, addr 0x2ff990c, size 0x28, virtual false, abstract: false, final false
  inline void set_secondary2DAxisClickAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_secondary2DAxisTouchAction, addr 0x2ff9d0c, size 0x28, virtual false, abstract: false, final false
  inline void set_secondary2DAxisTouchAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_secondaryButtonAction, addr 0x2ff930c, size 0x28, virtual false, abstract: false, final false
  inline void set_secondaryButtonAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_secondaryTouchAction, addr 0x2ffa10c, size 0x28, virtual false, abstract: false, final false
  inline void set_secondaryTouchAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_stopManipulationAction, addr 0x2ff6f7c, size 0x28, virtual false, abstract: false, final false
  inline void set_stopManipulationAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_targetedDeviceInput, addr 0x2ffa5c8, size 0x8, virtual false, abstract: false, final false
  inline void set_targetedDeviceInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices value);

  /// @brief Method set_toggleCursorLockAction, addr 0x2ff82ac, size 0x28, virtual false, abstract: false, final false
  inline void set_toggleCursorLockAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_toggleDevicePositionTargetAction, addr 0x2ff8444, size 0x28, virtual false, abstract: false, final false
  inline void set_toggleDevicePositionTargetAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_toggleManipulateBodyAction, addr 0x2ff6a4c, size 0x28, virtual false, abstract: false, final false
  inline void set_toggleManipulateBodyAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_toggleManipulateLeftAction, addr 0x2ff671c, size 0x28, virtual false, abstract: false, final false
  inline void set_toggleManipulateLeftAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_toggleManipulateRightAction, addr 0x2ff68b4, size 0x28, virtual false, abstract: false, final false
  inline void set_toggleManipulateRightAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_toggleMouseTransformationModeAction, addr 0x2ff7714, size 0x28, virtual false, abstract: false, final false
  inline void set_toggleMouseTransformationModeAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_togglePrimary2DAxisTargetAction, addr 0x2ff85dc, size 0x28, virtual false, abstract: false, final false
  inline void set_togglePrimary2DAxisTargetAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_toggleSecondary2DAxisTargetAction, addr 0x2ff8774, size 0x28, virtual false, abstract: false, final false
  inline void set_toggleSecondary2DAxisTargetAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_triggerAction, addr 0x2ff8f0c, size 0x28, virtual false, abstract: false, final false
  inline void set_triggerAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_triggerAmount, addr 0x2ffa434, size 0x8, virtual false, abstract: false, final false
  inline void set_triggerAmount(float_t value);

  /// @brief Method set_xConstraintAction, addr 0x2ff7aac, size 0x28, virtual false, abstract: false, final false
  inline void set_xConstraintAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_yConstraintAction, addr 0x2ff7cac, size 0x28, virtual false, abstract: false, final false
  inline void set_yConstraintAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_zConstraintAction, addr 0x2ff7eac, size 0x28, virtual false, abstract: false, final false
  inline void set_zConstraintAction(::UnityEngine::InputSystem::InputActionReference* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRDeviceSimulator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRDeviceSimulator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRDeviceSimulator(XRDeviceSimulator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRDeviceSimulator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRDeviceSimulator(XRDeviceSimulator const&) = delete;

  /// @brief Field m_DeviceSimulatorActionAsset, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionAsset> ___m_DeviceSimulatorActionAsset;

  /// @brief Field m_ControllerActionAsset, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionAsset> ___m_ControllerActionAsset;

  /// @brief Field m_KeyboardXTranslateAction, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_KeyboardXTranslateAction;

  /// @brief Field m_KeyboardYTranslateAction, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_KeyboardYTranslateAction;

  /// @brief Field m_KeyboardZTranslateAction, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_KeyboardZTranslateAction;

  /// @brief Field m_ManipulateLeftAction, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_ManipulateLeftAction;

  /// @brief Field m_ManipulateRightAction, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_ManipulateRightAction;

  /// @brief Field m_ToggleManipulateLeftAction, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_ToggleManipulateLeftAction;

  /// @brief Field m_ToggleManipulateRightAction, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_ToggleManipulateRightAction;

  /// @brief Field m_ToggleManipulateBodyAction, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_ToggleManipulateBodyAction;

  /// @brief Field m_ManipulateHeadAction, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_ManipulateHeadAction;

  /// @brief Field m_CycleDevicesAction, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_CycleDevicesAction;

  /// @brief Field m_StopManipulationAction, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_StopManipulationAction;

  /// @brief Field m_MouseDeltaAction, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_MouseDeltaAction;

  /// @brief Field m_MouseScrollAction, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_MouseScrollAction;

  /// @brief Field m_RotateModeOverrideAction, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_RotateModeOverrideAction;

  /// @brief Field m_ToggleMouseTransformationModeAction, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_ToggleMouseTransformationModeAction;

  /// @brief Field m_NegateModeAction, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_NegateModeAction;

  /// @brief Field m_XConstraintAction, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_XConstraintAction;

  /// @brief Field m_YConstraintAction, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_YConstraintAction;

  /// @brief Field m_ZConstraintAction, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_ZConstraintAction;

  /// @brief Field m_ResetAction, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_ResetAction;

  /// @brief Field m_ToggleCursorLockAction, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_ToggleCursorLockAction;

  /// @brief Field m_ToggleDevicePositionTargetAction, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_ToggleDevicePositionTargetAction;

  /// @brief Field m_TogglePrimary2DAxisTargetAction, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_TogglePrimary2DAxisTargetAction;

  /// @brief Field m_ToggleSecondary2DAxisTargetAction, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_ToggleSecondary2DAxisTargetAction;

  /// @brief Field m_Axis2DAction, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_Axis2DAction;

  /// @brief Field m_RestingHandAxis2DAction, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_RestingHandAxis2DAction;

  /// @brief Field m_GripAction, offset: 0xf8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_GripAction;

  /// @brief Field m_TriggerAction, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_TriggerAction;

  /// @brief Field m_PrimaryButtonAction, offset: 0x108, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_PrimaryButtonAction;

  /// @brief Field m_SecondaryButtonAction, offset: 0x110, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_SecondaryButtonAction;

  /// @brief Field m_MenuAction, offset: 0x118, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_MenuAction;

  /// @brief Field m_Primary2DAxisClickAction, offset: 0x120, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_Primary2DAxisClickAction;

  /// @brief Field m_Secondary2DAxisClickAction, offset: 0x128, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_Secondary2DAxisClickAction;

  /// @brief Field m_Primary2DAxisTouchAction, offset: 0x130, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_Primary2DAxisTouchAction;

  /// @brief Field m_Secondary2DAxisTouchAction, offset: 0x138, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_Secondary2DAxisTouchAction;

  /// @brief Field m_PrimaryTouchAction, offset: 0x140, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_PrimaryTouchAction;

  /// @brief Field m_SecondaryTouchAction, offset: 0x148, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_SecondaryTouchAction;

  /// @brief Field m_CameraTransform, offset: 0x150, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___m_CameraTransform;

  /// @brief Field m_KeyboardTranslateSpace, offset: 0x158, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space ___m_KeyboardTranslateSpace;

  /// @brief Field m_MouseTranslateSpace, offset: 0x15c, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space ___m_MouseTranslateSpace;

  /// @brief Field m_KeyboardXTranslateSpeed, offset: 0x160, size: 0x4, def value: None
  float_t ___m_KeyboardXTranslateSpeed;

  /// @brief Field m_KeyboardYTranslateSpeed, offset: 0x164, size: 0x4, def value: None
  float_t ___m_KeyboardYTranslateSpeed;

  /// @brief Field m_KeyboardZTranslateSpeed, offset: 0x168, size: 0x4, def value: None
  float_t ___m_KeyboardZTranslateSpeed;

  /// @brief Field m_KeyboardBodyTranslateMultiplier, offset: 0x16c, size: 0x4, def value: None
  float_t ___m_KeyboardBodyTranslateMultiplier;

  /// @brief Field m_MouseXTranslateSensitivity, offset: 0x170, size: 0x4, def value: None
  float_t ___m_MouseXTranslateSensitivity;

  /// @brief Field m_MouseYTranslateSensitivity, offset: 0x174, size: 0x4, def value: None
  float_t ___m_MouseYTranslateSensitivity;

  /// @brief Field m_MouseScrollTranslateSensitivity, offset: 0x178, size: 0x4, def value: None
  float_t ___m_MouseScrollTranslateSensitivity;

  /// @brief Field m_MouseXRotateSensitivity, offset: 0x17c, size: 0x4, def value: None
  float_t ___m_MouseXRotateSensitivity;

  /// @brief Field m_MouseYRotateSensitivity, offset: 0x180, size: 0x4, def value: None
  float_t ___m_MouseYRotateSensitivity;

  /// @brief Field m_MouseScrollRotateSensitivity, offset: 0x184, size: 0x4, def value: None
  float_t ___m_MouseScrollRotateSensitivity;

  /// @brief Field m_MouseYRotateInvert, offset: 0x188, size: 0x1, def value: None
  bool ___m_MouseYRotateInvert;

  /// @brief Field m_DesiredCursorLockMode, offset: 0x18c, size: 0x4, def value: None
  ::UnityEngine::CursorLockMode ___m_DesiredCursorLockMode;

  /// @brief Field m_RemoveOtherHMDDevices, offset: 0x190, size: 0x1, def value: None
  bool ___m_RemoveOtherHMDDevices;

  /// @brief Field m_DeviceSimulatorUI, offset: 0x198, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_DeviceSimulatorUI;

  /// @brief Field m_GripAmount, offset: 0x1a0, size: 0x4, def value: None
  float_t ___m_GripAmount;

  /// @brief Field m_TriggerAmount, offset: 0x1a4, size: 0x4, def value: None
  float_t ___m_TriggerAmount;

  /// @brief Field m_HMDIsTracked, offset: 0x1a8, size: 0x1, def value: None
  bool ___m_HMDIsTracked;

  /// @brief Field m_HMDTrackingState, offset: 0x1ac, size: 0x4, def value: None
  ::UnityEngine::XR::InputTrackingState ___m_HMDTrackingState;

  /// @brief Field m_LeftControllerIsTracked, offset: 0x1b0, size: 0x1, def value: None
  bool ___m_LeftControllerIsTracked;

  /// @brief Field m_LeftControllerTrackingState, offset: 0x1b4, size: 0x4, def value: None
  ::UnityEngine::XR::InputTrackingState ___m_LeftControllerTrackingState;

  /// @brief Field m_RightControllerIsTracked, offset: 0x1b8, size: 0x1, def value: None
  bool ___m_RightControllerIsTracked;

  /// @brief Field m_RightControllerTrackingState, offset: 0x1bc, size: 0x4, def value: None
  ::UnityEngine::XR::InputTrackingState ___m_RightControllerTrackingState;

  /// @brief Field <mouseTransformationMode>k__BackingField, offset: 0x1c0, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TransformationMode ____mouseTransformationMode_k__BackingField;

  /// @brief Field <negateMode>k__BackingField, offset: 0x1c4, size: 0x1, def value: None
  bool ____negateMode_k__BackingField;

  /// @brief Field <axis2DTargets>k__BackingField, offset: 0x1c8, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Axis2DTargets ____axis2DTargets_k__BackingField;

  /// @brief Field m_TargetedDeviceInput, offset: 0x1cc, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices ___m_TargetedDeviceInput;

  /// @brief Field m_CachedCamera, offset: 0x1d0, size: 0x10, def value: None
  ::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>, ::UnityW<::UnityEngine::Camera>> ___m_CachedCamera;

  /// @brief Field m_KeyboardXTranslateInput, offset: 0x1e0, size: 0x4, def value: None
  float_t ___m_KeyboardXTranslateInput;

  /// @brief Field m_KeyboardYTranslateInput, offset: 0x1e4, size: 0x4, def value: None
  float_t ___m_KeyboardYTranslateInput;

  /// @brief Field m_KeyboardZTranslateInput, offset: 0x1e8, size: 0x4, def value: None
  float_t ___m_KeyboardZTranslateInput;

  /// @brief Field m_MouseDeltaInput, offset: 0x1ec, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_MouseDeltaInput;

  /// @brief Field m_MouseScrollInput, offset: 0x1f4, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_MouseScrollInput;

  /// @brief Field m_RotateModeOverrideInput, offset: 0x1fc, size: 0x1, def value: None
  bool ___m_RotateModeOverrideInput;

  /// @brief Field m_XConstraintInput, offset: 0x1fd, size: 0x1, def value: None
  bool ___m_XConstraintInput;

  /// @brief Field m_YConstraintInput, offset: 0x1fe, size: 0x1, def value: None
  bool ___m_YConstraintInput;

  /// @brief Field m_ZConstraintInput, offset: 0x1ff, size: 0x1, def value: None
  bool ___m_ZConstraintInput;

  /// @brief Field m_ResetInput, offset: 0x200, size: 0x1, def value: None
  bool ___m_ResetInput;

  /// @brief Field m_Axis2DInput, offset: 0x204, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_Axis2DInput;

  /// @brief Field m_RestingHandAxis2DInput, offset: 0x20c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_RestingHandAxis2DInput;

  /// @brief Field m_GripInput, offset: 0x214, size: 0x1, def value: None
  bool ___m_GripInput;

  /// @brief Field m_TriggerInput, offset: 0x215, size: 0x1, def value: None
  bool ___m_TriggerInput;

  /// @brief Field m_PrimaryButtonInput, offset: 0x216, size: 0x1, def value: None
  bool ___m_PrimaryButtonInput;

  /// @brief Field m_SecondaryButtonInput, offset: 0x217, size: 0x1, def value: None
  bool ___m_SecondaryButtonInput;

  /// @brief Field m_MenuInput, offset: 0x218, size: 0x1, def value: None
  bool ___m_MenuInput;

  /// @brief Field m_Primary2DAxisClickInput, offset: 0x219, size: 0x1, def value: None
  bool ___m_Primary2DAxisClickInput;

  /// @brief Field m_Secondary2DAxisClickInput, offset: 0x21a, size: 0x1, def value: None
  bool ___m_Secondary2DAxisClickInput;

  /// @brief Field m_Primary2DAxisTouchInput, offset: 0x21b, size: 0x1, def value: None
  bool ___m_Primary2DAxisTouchInput;

  /// @brief Field m_Secondary2DAxisTouchInput, offset: 0x21c, size: 0x1, def value: None
  bool ___m_Secondary2DAxisTouchInput;

  /// @brief Field m_PrimaryTouchInput, offset: 0x21d, size: 0x1, def value: None
  bool ___m_PrimaryTouchInput;

  /// @brief Field m_SecondaryTouchInput, offset: 0x21e, size: 0x1, def value: None
  bool ___m_SecondaryTouchInput;

  /// @brief Field m_ManipulatedRestingHandAxis2D, offset: 0x21f, size: 0x1, def value: None
  bool ___m_ManipulatedRestingHandAxis2D;

  /// @brief Field m_LeftControllerEuler, offset: 0x220, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_LeftControllerEuler;

  /// @brief Field m_RightControllerEuler, offset: 0x22c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_RightControllerEuler;

  /// @brief Field m_CenterEyeEuler, offset: 0x238, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_CenterEyeEuler;

  /// @brief Field m_HMDState, offset: 0x244, size: 0x78, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState ___m_HMDState;

  /// @brief Field m_LeftControllerState, offset: 0x2bc, size: 0x40, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState ___m_LeftControllerState;

  /// @brief Field m_RightControllerState, offset: 0x2fc, size: 0x40, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState ___m_RightControllerState;

  /// @brief Field m_HMDDevice, offset: 0x340, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD* ___m_HMDDevice;

  /// @brief Field m_LeftControllerDevice, offset: 0x348, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController* ___m_LeftControllerDevice;

  /// @brief Field m_RightControllerDevice, offset: 0x350, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController* ___m_RightControllerDevice;

  /// @brief Field m_OnInputDeviceChangeSubscribed, offset: 0x358, size: 0x1, def value: None
  bool ___m_OnInputDeviceChangeSubscribed;

  /// @brief Field k_CameraMaxXAngle offset 0xffffffff size 0x4
  static constexpr float_t k_CameraMaxXAngle{ 80.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, 0x360>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_DeviceSimulatorActionAsset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_ControllerActionAsset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_KeyboardXTranslateAction) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_KeyboardYTranslateAction) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_KeyboardZTranslateAction) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_ManipulateLeftAction) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_ManipulateRightAction) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_ToggleManipulateLeftAction) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_ToggleManipulateRightAction) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_ToggleManipulateBodyAction) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_ManipulateHeadAction) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_CycleDevicesAction) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_StopManipulationAction) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_MouseDeltaAction) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_MouseScrollAction) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_RotateModeOverrideAction) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_ToggleMouseTransformationModeAction) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_NegateModeAction) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_XConstraintAction) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_YConstraintAction) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_ZConstraintAction) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_ResetAction) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_ToggleCursorLockAction) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_ToggleDevicePositionTargetAction) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_TogglePrimary2DAxisTargetAction) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_ToggleSecondary2DAxisTargetAction) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_Axis2DAction) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_RestingHandAxis2DAction) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_GripAction) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_TriggerAction) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_PrimaryButtonAction) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_SecondaryButtonAction) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_MenuAction) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_Primary2DAxisClickAction) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_Secondary2DAxisClickAction) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_Primary2DAxisTouchAction) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_Secondary2DAxisTouchAction) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_PrimaryTouchAction) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_SecondaryTouchAction) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_CameraTransform) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_KeyboardTranslateSpace) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_MouseTranslateSpace) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_KeyboardXTranslateSpeed) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_KeyboardYTranslateSpeed) == 0x164, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_KeyboardZTranslateSpeed) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_KeyboardBodyTranslateMultiplier) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_MouseXTranslateSensitivity) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_MouseYTranslateSensitivity) == 0x174, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_MouseScrollTranslateSensitivity) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_MouseXRotateSensitivity) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_MouseYRotateSensitivity) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_MouseScrollRotateSensitivity) == 0x184, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_MouseYRotateInvert) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_DesiredCursorLockMode) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_RemoveOtherHMDDevices) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_DeviceSimulatorUI) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_GripAmount) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_TriggerAmount) == 0x1a4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_HMDIsTracked) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_HMDTrackingState) == 0x1ac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_LeftControllerIsTracked) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_LeftControllerTrackingState) == 0x1b4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_RightControllerIsTracked) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_RightControllerTrackingState) == 0x1bc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ____mouseTransformationMode_k__BackingField) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ____negateMode_k__BackingField) == 0x1c4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ____axis2DTargets_k__BackingField) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_TargetedDeviceInput) == 0x1cc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_CachedCamera) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_KeyboardXTranslateInput) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_KeyboardYTranslateInput) == 0x1e4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_KeyboardZTranslateInput) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_MouseDeltaInput) == 0x1ec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_MouseScrollInput) == 0x1f4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_RotateModeOverrideInput) == 0x1fc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_XConstraintInput) == 0x1fd, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_YConstraintInput) == 0x1fe, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_ZConstraintInput) == 0x1ff, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_ResetInput) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_Axis2DInput) == 0x204, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_RestingHandAxis2DInput) == 0x20c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_GripInput) == 0x214, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_TriggerInput) == 0x215, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_PrimaryButtonInput) == 0x216, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_SecondaryButtonInput) == 0x217, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_MenuInput) == 0x218, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_Primary2DAxisClickInput) == 0x219, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_Secondary2DAxisClickInput) == 0x21a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_Primary2DAxisTouchInput) == 0x21b, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_Secondary2DAxisTouchInput) == 0x21c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_PrimaryTouchInput) == 0x21d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_SecondaryTouchInput) == 0x21e, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_ManipulatedRestingHandAxis2D) == 0x21f, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_LeftControllerEuler) == 0x220, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_RightControllerEuler) == 0x22c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_CenterEyeEuler) == 0x238, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_HMDState) == 0x244, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_LeftControllerState) == 0x2bc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_RightControllerState) == 0x2fc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_HMDDevice) == 0x340, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_LeftControllerDevice) == 0x348, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_RightControllerDevice) == 0x350, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_OnInputDeviceChangeSubscribed) == 0x358, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Axis2DTargets, "UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation",
                       "XRDeviceSimulator/Axis2DTargets");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space, "UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "XRDeviceSimulator/Space");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices, "UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation",
                       "XRDeviceSimulator/TargetedDevices");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TransformationMode, "UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation",
                       "XRDeviceSimulator/TransformationMode");
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "XRDeviceSimulator");
