#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__MouseModel_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__NavigationModel_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TouchModel_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TrackedDeviceModel_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__UIInputModule_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__XRUIInputModule_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRUIInputModule)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::InputSystem {
class InputActionReference;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class IUIInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct TouchModel;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct TrackedDeviceModel;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct __XRUIInputModule__ActiveInputMode;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct __XRUIInputModule__RegisteredInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct __XRUIInputModule__RegisteredTouch;
}
namespace UnityEngine {
struct Touch;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct __XRUIInputModule__ActiveInputMode;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class XRUIInputModule;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct __XRUIInputModule__RegisteredInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct __XRUIInputModule__RegisteredTouch;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__ActiveInputMode);
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule);
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredInteractor);
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredTouch);
// Type: ::RegisteredInteractor
// SizeInfo { instance_size: 328, native_size: -1, calculated_instance_size: 328, calculated_native_size: 344, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: true
// CS Name: ::XRUIInputModule::RegisteredInteractor
struct CORDL_TYPE __XRUIInputModule__RegisteredInteractor {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2fe9670, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* interactor, int32_t deviceIndex);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRUIInputModule__RegisteredInteractor();

  // Ctor Parameters [CppParam { name: "interactor", ty: "::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*", modifiers: "", def_value: None }, CppParam { name: "model", ty:
  // "::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel", modifiers: "", def_value: None }]
  constexpr __XRUIInputModule__RegisteredInteractor(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* interactor,
                                                    ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel model) noexcept;

  /// @brief Field interactor, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* interactor;

  /// @brief Field model, offset: 0x8, size: 0x140, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel model;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x148 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredInteractor, 0x148>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredInteractor, interactor) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredInteractor, model) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::UI
// Type: ::RegisteredTouch
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 192, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: true
// CS Name: ::XRUIInputModule::RegisteredTouch
struct CORDL_TYPE __XRUIInputModule__RegisteredTouch {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2feaa5c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Touch touch, int32_t deviceIndex);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRUIInputModule__RegisteredTouch();

  // Ctor Parameters [CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "touchId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "model",
  // ty: "::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel", modifiers: "", def_value: None }]
  constexpr __XRUIInputModule__RegisteredTouch(bool isValid, int32_t touchId, ::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel model) noexcept;

  /// @brief Field isValid, offset: 0x0, size: 0x1, def value: None
  bool isValid;

  /// @brief Field touchId, offset: 0x4, size: 0x4, def value: None
  int32_t touchId;

  /// @brief Field model, offset: 0x8, size: 0xa8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel model;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xb0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredTouch, 0xb0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredTouch, isValid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredTouch, touchId) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredTouch, model) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::UI
// Type: ::ActiveInputMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: true
// CS Name: ::XRUIInputModule::ActiveInputMode
struct CORDL_TYPE __XRUIInputModule__ActiveInputMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XRUIInputModule__ActiveInputMode_Unwrapped
  enum struct ____XRUIInputModule__ActiveInputMode_Unwrapped : int32_t {
    __E_InputManagerBindings = static_cast<int32_t>(0x0),
    __E_InputSystemActions = static_cast<int32_t>(0x1),
    __E_Both = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XRUIInputModule__ActiveInputMode_Unwrapped() const noexcept {
    return static_cast<____XRUIInputModule__ActiveInputMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRUIInputModule__ActiveInputMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XRUIInputModule__ActiveInputMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Both value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__ActiveInputMode const Both;

  /// @brief Field InputManagerBindings value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__ActiveInputMode const InputManagerBindings;

  /// @brief Field InputSystemActions value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__ActiveInputMode const InputSystemActions;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__ActiveInputMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__ActiveInputMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::UI
// Type: UnityEngine.XR.Interaction.Toolkit.UI::XRUIInputModule
// SizeInfo { instance_size: 888, native_size: -1, calculated_instance_size: 888, calculated_native_size: 888, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.UI::XRUIInputModule*
class CORDL_TYPE XRUIInputModule : public ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule {
public:
  // Declarations
  using ActiveInputMode = ::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__ActiveInputMode;

  using RegisteredInteractor = ::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredInteractor;

  using RegisteredTouch = ::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredTouch;

  __declspec(property(get = get_activeInputMode, put = set_activeInputMode))::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__ActiveInputMode activeInputMode;

  __declspec(property(get = get_cancelAction, put = set_cancelAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> cancelAction;

  __declspec(property(get = get_cancelButton, put = set_cancelButton))::StringW cancelButton;

  __declspec(property(get = get_enableBuiltinActionsAsFallback, put = set_enableBuiltinActionsAsFallback)) bool enableBuiltinActionsAsFallback;

  __declspec(property(get = get_enableGamepadInput, put = set_enableGamepadInput)) bool enableGamepadInput;

  __declspec(property(get = get_enableJoystickInput, put = set_enableJoystickInput)) bool enableJoystickInput;

  __declspec(property(get = get_enableMouseInput, put = set_enableMouseInput)) bool enableMouseInput;

  __declspec(property(get = get_enableTouchInput, put = set_enableTouchInput)) bool enableTouchInput;

  __declspec(property(get = get_enableXRInput, put = set_enableXRInput)) bool enableXRInput;

  __declspec(property(get = get_horizontalAxis, put = set_horizontalAxis))::StringW horizontalAxis;

  __declspec(property(get = get_leftClickAction, put = set_leftClickAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> leftClickAction;

  /// @brief Field m_ActiveInputMode, offset 0x118, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ActiveInputMode,
                      put = __cordl_internal_set_m_ActiveInputMode))::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__ActiveInputMode m_ActiveInputMode;

  /// @brief Field m_CancelAction, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CancelAction, put = __cordl_internal_set_m_CancelAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_CancelAction;

  /// @brief Field m_CancelButton, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CancelButton, put = __cordl_internal_set_m_CancelButton))::StringW m_CancelButton;

  /// @brief Field m_EnableBuiltinActionsAsFallback, offset 0x168, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableBuiltinActionsAsFallback, put = __cordl_internal_set_m_EnableBuiltinActionsAsFallback)) bool m_EnableBuiltinActionsAsFallback;

  /// @brief Field m_EnableGamepadInput, offset 0x169, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableGamepadInput, put = __cordl_internal_set_m_EnableGamepadInput)) bool m_EnableGamepadInput;

  /// @brief Field m_EnableJoystickInput, offset 0x16a, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableJoystickInput, put = __cordl_internal_set_m_EnableJoystickInput)) bool m_EnableJoystickInput;

  /// @brief Field m_EnableMouseInput, offset 0x121, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableMouseInput, put = __cordl_internal_set_m_EnableMouseInput)) bool m_EnableMouseInput;

  /// @brief Field m_EnableTouchInput, offset 0x122, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableTouchInput, put = __cordl_internal_set_m_EnableTouchInput)) bool m_EnableTouchInput;

  /// @brief Field m_EnableXRInput, offset 0x120, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableXRInput, put = __cordl_internal_set_m_EnableXRInput)) bool m_EnableXRInput;

  /// @brief Field m_HorizontalAxis, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HorizontalAxis, put = __cordl_internal_set_m_HorizontalAxis))::StringW m_HorizontalAxis;

  /// @brief Field m_LeftClickAction, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LeftClickAction, put = __cordl_internal_set_m_LeftClickAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_LeftClickAction;

  /// @brief Field m_MaxTrackedDeviceRaycastDistance, offset 0x11c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxTrackedDeviceRaycastDistance, put = __cordl_internal_set_m_MaxTrackedDeviceRaycastDistance)) float_t m_MaxTrackedDeviceRaycastDistance;

  /// @brief Field m_MiddleClickAction, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MiddleClickAction, put = __cordl_internal_set_m_MiddleClickAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_MiddleClickAction;

  /// @brief Field m_MouseState, offset 0x198, size 0x1b0
  __declspec(property(get = __cordl_internal_get_m_MouseState, put = __cordl_internal_set_m_MouseState))::UnityEngine::XR::Interaction::Toolkit::UI::MouseModel m_MouseState;

  /// @brief Field m_NavigateAction, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NavigateAction, put = __cordl_internal_set_m_NavigateAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_NavigateAction;

  /// @brief Field m_NavigationState, offset 0x348, size 0x20
  __declspec(property(get = __cordl_internal_get_m_NavigationState, put = __cordl_internal_set_m_NavigationState))::UnityEngine::XR::Interaction::Toolkit::UI::NavigationModel m_NavigationState;

  /// @brief Field m_PointAction, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PointAction, put = __cordl_internal_set_m_PointAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_PointAction;

  /// @brief Field m_RegisteredInteractors, offset 0x370, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RegisteredInteractors, put = __cordl_internal_set_m_RegisteredInteractors))::System::Collections::Generic::List_1<
      ::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredInteractor>* m_RegisteredInteractors;

  /// @brief Field m_RegisteredTouches, offset 0x368, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_RegisteredTouches,
      put = __cordl_internal_set_m_RegisteredTouches))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredTouch>* m_RegisteredTouches;

  /// @brief Field m_RightClickAction, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RightClickAction, put = __cordl_internal_set_m_RightClickAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_RightClickAction;

  /// @brief Field m_RollingPointerId, offset 0x190, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RollingPointerId, put = __cordl_internal_set_m_RollingPointerId)) int32_t m_RollingPointerId;

  /// @brief Field m_ScrollWheelAction, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScrollWheelAction, put = __cordl_internal_set_m_ScrollWheelAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_ScrollWheelAction;

  /// @brief Field m_SubmitAction, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SubmitAction, put = __cordl_internal_set_m_SubmitAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> m_SubmitAction;

  /// @brief Field m_SubmitButton, offset 0x180, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SubmitButton, put = __cordl_internal_set_m_SubmitButton))::StringW m_SubmitButton;

  /// @brief Field m_UseBuiltInInputSystemActions, offset 0x194, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseBuiltInInputSystemActions, put = __cordl_internal_set_m_UseBuiltInInputSystemActions)) bool m_UseBuiltInInputSystemActions;

  /// @brief Field m_VerticalAxis, offset 0x178, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VerticalAxis, put = __cordl_internal_set_m_VerticalAxis))::StringW m_VerticalAxis;

  __declspec(property(get = get_maxRaycastDistance, put = set_maxRaycastDistance)) float_t maxRaycastDistance;

  __declspec(property(get = get_middleClickAction, put = set_middleClickAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> middleClickAction;

  __declspec(property(get = get_navigateAction, put = set_navigateAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> navigateAction;

  __declspec(property(get = get_pointAction, put = set_pointAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> pointAction;

  __declspec(property(get = get_rightClickAction, put = set_rightClickAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> rightClickAction;

  __declspec(property(get = get_scrollWheelAction, put = set_scrollWheelAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> scrollWheelAction;

  __declspec(property(get = get_submitAction, put = set_submitAction))::UnityW<::UnityEngine::InputSystem::InputActionReference> submitAction;

  __declspec(property(get = get_submitButton, put = set_submitButton))::StringW submitButton;

  __declspec(property(get = get_verticalAxis, put = set_verticalAxis))::StringW verticalAxis;

  /// @brief Method DisableAllActions, addr 0x2fe947c, size 0x4c, virtual false, abstract: false, final false
  inline void DisableAllActions();

  /// @brief Method DisableInputAction, addr 0x2feab64, size 0x9c, virtual false, abstract: false, final false
  static inline void DisableInputAction(::UnityEngine::InputSystem::InputActionReference* inputAction);

  /// @brief Method DoProcess, addr 0x2fe99f4, size 0x24c, virtual true, abstract: false, final false
  inline void DoProcess();

  /// @brief Method EnableAllActions, addr 0x2fe9400, size 0x4c, virtual false, abstract: false, final false
  inline void EnableAllActions();

  /// @brief Method EnableInputAction, addr 0x2feaac8, size 0x9c, virtual false, abstract: false, final false
  static inline void EnableInputAction(::UnityEngine::InputSystem::InputActionReference* inputAction);

  /// @brief Method GetInteractor, addr 0x2fe9808, size 0xc8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* GetInteractor(int32_t pointerId);

  /// @brief Method GetTrackedDeviceModel, addr 0x2fe98d0, size 0x124, virtual false, abstract: false, final false
  inline bool GetTrackedDeviceModel(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* interactor, ByRef<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel> model);

  /// @brief Method InputActionReferencesAreSet, addr 0x2fe9174, size 0x188, virtual false, abstract: false, final false
  inline bool InputActionReferencesAreSet();

  /// @brief Method IsActionEnabled, addr 0x2fea9bc, size 0xa0, virtual false, abstract: false, final false
  static inline bool IsActionEnabled(::UnityEngine::InputSystem::InputActionReference* inputAction);

  static inline ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule* New_ctor();

  /// @brief Method OnDisable, addr 0x2fe944c, size 0x30, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x2fe9364, size 0x9c, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method ProcessMouse, addr 0x2fea1c8, size 0x3cc, virtual false, abstract: false, final false
  inline void ProcessMouse();

  /// @brief Method ProcessNavigation, addr 0x2fea594, size 0x428, virtual false, abstract: false, final false
  inline void ProcessNavigation();

  /// @brief Method ProcessTouches, addr 0x2fe9c40, size 0x588, virtual false, abstract: false, final false
  inline bool ProcessTouches();

  /// @brief Method RegisterInteractor, addr 0x2fe94c8, size 0x1a8, virtual false, abstract: false, final false
  inline void RegisterInteractor(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* interactor);

  /// @brief Method SetInputAction, addr 0x2fe8f78, size 0x114, virtual false, abstract: false, final false
  inline void SetInputAction(ByRef<::UnityEngine::InputSystem::InputActionReference*> inputAction, ::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method UnregisterInteractor, addr 0x2fe96c4, size 0x144, virtual false, abstract: false, final false
  inline void UnregisterInteractor(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* interactor);

  constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__ActiveInputMode const& __cordl_internal_get_m_ActiveInputMode() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__ActiveInputMode& __cordl_internal_get_m_ActiveInputMode();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_CancelAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_CancelAction();

  constexpr ::StringW const& __cordl_internal_get_m_CancelButton() const;

  constexpr ::StringW& __cordl_internal_get_m_CancelButton();

  constexpr bool const& __cordl_internal_get_m_EnableBuiltinActionsAsFallback() const;

  constexpr bool& __cordl_internal_get_m_EnableBuiltinActionsAsFallback();

  constexpr bool const& __cordl_internal_get_m_EnableGamepadInput() const;

  constexpr bool& __cordl_internal_get_m_EnableGamepadInput();

  constexpr bool const& __cordl_internal_get_m_EnableJoystickInput() const;

  constexpr bool& __cordl_internal_get_m_EnableJoystickInput();

  constexpr bool const& __cordl_internal_get_m_EnableMouseInput() const;

  constexpr bool& __cordl_internal_get_m_EnableMouseInput();

  constexpr bool const& __cordl_internal_get_m_EnableTouchInput() const;

  constexpr bool& __cordl_internal_get_m_EnableTouchInput();

  constexpr bool const& __cordl_internal_get_m_EnableXRInput() const;

  constexpr bool& __cordl_internal_get_m_EnableXRInput();

  constexpr ::StringW const& __cordl_internal_get_m_HorizontalAxis() const;

  constexpr ::StringW& __cordl_internal_get_m_HorizontalAxis();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_LeftClickAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_LeftClickAction();

  constexpr float_t const& __cordl_internal_get_m_MaxTrackedDeviceRaycastDistance() const;

  constexpr float_t& __cordl_internal_get_m_MaxTrackedDeviceRaycastDistance();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_MiddleClickAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_MiddleClickAction();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::MouseModel const& __cordl_internal_get_m_MouseState() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::MouseModel& __cordl_internal_get_m_MouseState();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_NavigateAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_NavigateAction();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::NavigationModel const& __cordl_internal_get_m_NavigationState() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::NavigationModel& __cordl_internal_get_m_NavigationState();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_PointAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_PointAction();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredInteractor>*& __cordl_internal_get_m_RegisteredInteractors();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredInteractor>*> const&
  __cordl_internal_get_m_RegisteredInteractors() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredTouch>*& __cordl_internal_get_m_RegisteredTouches();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredTouch>*> const&
  __cordl_internal_get_m_RegisteredTouches() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_RightClickAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_RightClickAction();

  constexpr int32_t const& __cordl_internal_get_m_RollingPointerId() const;

  constexpr int32_t& __cordl_internal_get_m_RollingPointerId();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_ScrollWheelAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_ScrollWheelAction();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_SubmitAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_SubmitAction();

  constexpr ::StringW const& __cordl_internal_get_m_SubmitButton() const;

  constexpr ::StringW& __cordl_internal_get_m_SubmitButton();

  constexpr bool const& __cordl_internal_get_m_UseBuiltInInputSystemActions() const;

  constexpr bool& __cordl_internal_get_m_UseBuiltInInputSystemActions();

  constexpr ::StringW const& __cordl_internal_get_m_VerticalAxis() const;

  constexpr ::StringW& __cordl_internal_get_m_VerticalAxis();

  constexpr void __cordl_internal_set_m_ActiveInputMode(::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__ActiveInputMode value);

  constexpr void __cordl_internal_set_m_CancelAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_CancelButton(::StringW value);

  constexpr void __cordl_internal_set_m_EnableBuiltinActionsAsFallback(bool value);

  constexpr void __cordl_internal_set_m_EnableGamepadInput(bool value);

  constexpr void __cordl_internal_set_m_EnableJoystickInput(bool value);

  constexpr void __cordl_internal_set_m_EnableMouseInput(bool value);

  constexpr void __cordl_internal_set_m_EnableTouchInput(bool value);

  constexpr void __cordl_internal_set_m_EnableXRInput(bool value);

  constexpr void __cordl_internal_set_m_HorizontalAxis(::StringW value);

  constexpr void __cordl_internal_set_m_LeftClickAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_MaxTrackedDeviceRaycastDistance(float_t value);

  constexpr void __cordl_internal_set_m_MiddleClickAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_MouseState(::UnityEngine::XR::Interaction::Toolkit::UI::MouseModel value);

  constexpr void __cordl_internal_set_m_NavigateAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_NavigationState(::UnityEngine::XR::Interaction::Toolkit::UI::NavigationModel value);

  constexpr void __cordl_internal_set_m_PointAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_RegisteredInteractors(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredInteractor>* value);

  constexpr void __cordl_internal_set_m_RegisteredTouches(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredTouch>* value);

  constexpr void __cordl_internal_set_m_RightClickAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_RollingPointerId(int32_t value);

  constexpr void __cordl_internal_set_m_ScrollWheelAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_SubmitAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set_m_SubmitButton(::StringW value);

  constexpr void __cordl_internal_set_m_UseBuiltInInputSystemActions(bool value);

  constexpr void __cordl_internal_set_m_VerticalAxis(::StringW value);

  /// @brief Method .ctor, addr 0x2feac10, size 0x15c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_activeInputMode, addr 0x2fe8f14, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__ActiveInputMode get_activeInputMode();

  /// @brief Method get_cancelAction, addr 0x2fe911c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_cancelAction();

  /// @brief Method get_cancelButton, addr 0x2fe9354, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_cancelButton();

  /// @brief Method get_enableBuiltinActionsAsFallback, addr 0x2fe9134, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableBuiltinActionsAsFallback();

  /// @brief Method get_enableGamepadInput, addr 0x2fe92fc, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableGamepadInput();

  /// @brief Method get_enableJoystickInput, addr 0x2fe9310, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableJoystickInput();

  /// @brief Method get_enableMouseInput, addr 0x2fe8f38, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableMouseInput();

  /// @brief Method get_enableTouchInput, addr 0x2fe8f4c, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableTouchInput();

  /// @brief Method get_enableXRInput, addr 0x2fe8f24, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableXRInput();

  /// @brief Method get_horizontalAxis, addr 0x2fe9324, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_horizontalAxis();

  /// @brief Method get_leftClickAction, addr 0x2fe908c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_leftClickAction();

  /// @brief Method get_maxRaycastDistance, addr 0x2feac00, size 0x8, virtual false, abstract: false, final false
  inline float_t get_maxRaycastDistance();

  /// @brief Method get_middleClickAction, addr 0x2fe90a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_middleClickAction();

  /// @brief Method get_navigateAction, addr 0x2fe90ec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_navigateAction();

  /// @brief Method get_pointAction, addr 0x2fe8f60, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_pointAction();

  /// @brief Method get_rightClickAction, addr 0x2fe90bc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_rightClickAction();

  /// @brief Method get_scrollWheelAction, addr 0x2fe90d4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_scrollWheelAction();

  /// @brief Method get_submitAction, addr 0x2fe9104, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_submitAction();

  /// @brief Method get_submitButton, addr 0x2fe9344, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_submitButton();

  /// @brief Method get_verticalAxis, addr 0x2fe9334, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_verticalAxis();

  /// @brief Method set_activeInputMode, addr 0x2fe8f1c, size 0x8, virtual false, abstract: false, final false
  inline void set_activeInputMode(::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__ActiveInputMode value);

  /// @brief Method set_cancelAction, addr 0x2fe9124, size 0x10, virtual false, abstract: false, final false
  inline void set_cancelAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_cancelButton, addr 0x2fe935c, size 0x8, virtual false, abstract: false, final false
  inline void set_cancelButton(::StringW value);

  /// @brief Method set_enableBuiltinActionsAsFallback, addr 0x2fe913c, size 0x38, virtual false, abstract: false, final false
  inline void set_enableBuiltinActionsAsFallback(bool value);

  /// @brief Method set_enableGamepadInput, addr 0x2fe9304, size 0xc, virtual false, abstract: false, final false
  inline void set_enableGamepadInput(bool value);

  /// @brief Method set_enableJoystickInput, addr 0x2fe9318, size 0xc, virtual false, abstract: false, final false
  inline void set_enableJoystickInput(bool value);

  /// @brief Method set_enableMouseInput, addr 0x2fe8f40, size 0xc, virtual false, abstract: false, final false
  inline void set_enableMouseInput(bool value);

  /// @brief Method set_enableTouchInput, addr 0x2fe8f54, size 0xc, virtual false, abstract: false, final false
  inline void set_enableTouchInput(bool value);

  /// @brief Method set_enableXRInput, addr 0x2fe8f2c, size 0xc, virtual false, abstract: false, final false
  inline void set_enableXRInput(bool value);

  /// @brief Method set_horizontalAxis, addr 0x2fe932c, size 0x8, virtual false, abstract: false, final false
  inline void set_horizontalAxis(::StringW value);

  /// @brief Method set_leftClickAction, addr 0x2fe9094, size 0x10, virtual false, abstract: false, final false
  inline void set_leftClickAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_maxRaycastDistance, addr 0x2feac08, size 0x8, virtual false, abstract: false, final false
  inline void set_maxRaycastDistance(float_t value);

  /// @brief Method set_middleClickAction, addr 0x2fe90ac, size 0x10, virtual false, abstract: false, final false
  inline void set_middleClickAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_navigateAction, addr 0x2fe90f4, size 0x10, virtual false, abstract: false, final false
  inline void set_navigateAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_pointAction, addr 0x2fe8f68, size 0x10, virtual false, abstract: false, final false
  inline void set_pointAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_rightClickAction, addr 0x2fe90c4, size 0x10, virtual false, abstract: false, final false
  inline void set_rightClickAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_scrollWheelAction, addr 0x2fe90dc, size 0x10, virtual false, abstract: false, final false
  inline void set_scrollWheelAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_submitAction, addr 0x2fe910c, size 0x10, virtual false, abstract: false, final false
  inline void set_submitAction(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_submitButton, addr 0x2fe934c, size 0x8, virtual false, abstract: false, final false
  inline void set_submitButton(::StringW value);

  /// @brief Method set_verticalAxis, addr 0x2fe933c, size 0x8, virtual false, abstract: false, final false
  inline void set_verticalAxis(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRUIInputModule();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRUIInputModule", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRUIInputModule(XRUIInputModule&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRUIInputModule", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRUIInputModule(XRUIInputModule const&) = delete;

  /// @brief Field m_ActiveInputMode, offset: 0x118, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__ActiveInputMode ___m_ActiveInputMode;

  /// @brief Field m_MaxTrackedDeviceRaycastDistance, offset: 0x11c, size: 0x4, def value: None
  float_t ___m_MaxTrackedDeviceRaycastDistance;

  /// @brief Field m_EnableXRInput, offset: 0x120, size: 0x1, def value: None
  bool ___m_EnableXRInput;

  /// @brief Field m_EnableMouseInput, offset: 0x121, size: 0x1, def value: None
  bool ___m_EnableMouseInput;

  /// @brief Field m_EnableTouchInput, offset: 0x122, size: 0x1, def value: None
  bool ___m_EnableTouchInput;

  /// @brief Field m_PointAction, offset: 0x128, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_PointAction;

  /// @brief Field m_LeftClickAction, offset: 0x130, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_LeftClickAction;

  /// @brief Field m_MiddleClickAction, offset: 0x138, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_MiddleClickAction;

  /// @brief Field m_RightClickAction, offset: 0x140, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_RightClickAction;

  /// @brief Field m_ScrollWheelAction, offset: 0x148, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_ScrollWheelAction;

  /// @brief Field m_NavigateAction, offset: 0x150, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_NavigateAction;

  /// @brief Field m_SubmitAction, offset: 0x158, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_SubmitAction;

  /// @brief Field m_CancelAction, offset: 0x160, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ___m_CancelAction;

  /// @brief Field m_EnableBuiltinActionsAsFallback, offset: 0x168, size: 0x1, def value: None
  bool ___m_EnableBuiltinActionsAsFallback;

  /// @brief Field m_EnableGamepadInput, offset: 0x169, size: 0x1, def value: None
  bool ___m_EnableGamepadInput;

  /// @brief Field m_EnableJoystickInput, offset: 0x16a, size: 0x1, def value: None
  bool ___m_EnableJoystickInput;

  /// @brief Field m_HorizontalAxis, offset: 0x170, size: 0x8, def value: None
  ::StringW ___m_HorizontalAxis;

  /// @brief Field m_VerticalAxis, offset: 0x178, size: 0x8, def value: None
  ::StringW ___m_VerticalAxis;

  /// @brief Field m_SubmitButton, offset: 0x180, size: 0x8, def value: None
  ::StringW ___m_SubmitButton;

  /// @brief Field m_CancelButton, offset: 0x188, size: 0x8, def value: None
  ::StringW ___m_CancelButton;

  /// @brief Field m_RollingPointerId, offset: 0x190, size: 0x4, def value: None
  int32_t ___m_RollingPointerId;

  /// @brief Field m_UseBuiltInInputSystemActions, offset: 0x194, size: 0x1, def value: None
  bool ___m_UseBuiltInInputSystemActions;

  /// @brief Field m_MouseState, offset: 0x198, size: 0x1b0, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::UI::MouseModel ___m_MouseState;

  /// @brief Field m_NavigationState, offset: 0x348, size: 0x20, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::UI::NavigationModel ___m_NavigationState;

  /// @brief Field m_RegisteredTouches, offset: 0x368, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredTouch>* ___m_RegisteredTouches;

  /// @brief Field m_RegisteredInteractors, offset: 0x370, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredInteractor>* ___m_RegisteredInteractors;

  /// @brief Field kPixelPerLine offset 0xffffffff size 0x4
  static constexpr float_t kPixelPerLine{ 20.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, 0x378>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_ActiveInputMode) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_MaxTrackedDeviceRaycastDistance) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_EnableXRInput) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_EnableMouseInput) == 0x121, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_EnableTouchInput) == 0x122, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_PointAction) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_LeftClickAction) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_MiddleClickAction) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_RightClickAction) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_ScrollWheelAction) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_NavigateAction) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_SubmitAction) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_CancelAction) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_EnableBuiltinActionsAsFallback) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_EnableGamepadInput) == 0x169, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_EnableJoystickInput) == 0x16a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_HorizontalAxis) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_VerticalAxis) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_SubmitButton) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_CancelButton) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_RollingPointerId) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_UseBuiltInInputSystemActions) == 0x194, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_MouseState) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_NavigationState) == 0x348, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_RegisteredTouches) == 0x368, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_RegisteredInteractors) == 0x370, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__ActiveInputMode, "UnityEngine.XR.Interaction.Toolkit.UI", "XRUIInputModule/ActiveInputMode");
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*, "UnityEngine.XR.Interaction.Toolkit.UI", "XRUIInputModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredInteractor, "UnityEngine.XR.Interaction.Toolkit.UI", "XRUIInputModule/RegisteredInteractor");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredTouch, "UnityEngine.XR.Interaction.Toolkit.UI", "XRUIInputModule/RegisteredTouch");
