#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputActionProperty_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ConstrainedMoveProvider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GrabMoveProvider)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::InputSystem {
struct InputActionProperty;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRSelectInteractor;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class GrabMoveProvider;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::GrabMoveProvider);
// Type: UnityEngine.XR.Interaction.Toolkit::GrabMoveProvider
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::GrabMoveProvider*
class CORDL_TYPE GrabMoveProvider : public ::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider {
public:
  // Declarations
  /// @brief Field <canMove>k__BackingField, offset 0x88, size 0x1
  __declspec(property(get = __cordl_internal_get__canMove_k__BackingField, put = __cordl_internal_set__canMove_k__BackingField)) bool _canMove_k__BackingField;

  __declspec(property(get = get_canMove, put = set_canMove)) bool canMove;

  __declspec(property(get = get_controllerTransform, put = set_controllerTransform))::UnityW<::UnityEngine::Transform> controllerTransform;

  __declspec(property(get = get_enableMoveWhileSelecting, put = set_enableMoveWhileSelecting)) bool enableMoveWhileSelecting;

  __declspec(property(get = get_grabMoveAction, put = set_grabMoveAction))::UnityEngine::InputSystem::InputActionProperty grabMoveAction;

  /// @brief Field m_ControllerInteractors, offset 0x98, size 0x8
  __declspec(
      property(get = __cordl_internal_get_m_ControllerInteractors,
               put = __cordl_internal_set_m_ControllerInteractors))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>* m_ControllerInteractors;

  /// @brief Field m_ControllerTransform, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ControllerTransform, put = __cordl_internal_set_m_ControllerTransform))::UnityW<::UnityEngine::Transform> m_ControllerTransform;

  /// @brief Field m_EnableMoveWhileSelecting, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableMoveWhileSelecting, put = __cordl_internal_set_m_EnableMoveWhileSelecting)) bool m_EnableMoveWhileSelecting;

  /// @brief Field m_GrabMoveAction, offset 0x70, size 0x18
  __declspec(property(get = __cordl_internal_get_m_GrabMoveAction, put = __cordl_internal_set_m_GrabMoveAction))::UnityEngine::InputSystem::InputActionProperty m_GrabMoveAction;

  /// @brief Field m_IsMoving, offset 0x89, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsMoving, put = __cordl_internal_set_m_IsMoving)) bool m_IsMoving;

  /// @brief Field m_MoveFactor, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MoveFactor, put = __cordl_internal_set_m_MoveFactor)) float_t m_MoveFactor;

  /// @brief Field m_PreviousControllerLocalPosition, offset 0x8c, size 0xc
  __declspec(property(get = __cordl_internal_get_m_PreviousControllerLocalPosition,
                      put = __cordl_internal_set_m_PreviousControllerLocalPosition))::UnityEngine::Vector3 m_PreviousControllerLocalPosition;

  __declspec(property(get = get_moveFactor, put = set_moveFactor)) float_t moveFactor;

  /// @brief Method Awake, addr 0x3016af0, size 0x84, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method ComputeDesiredMove, addr 0x3016c6c, size 0x178, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 ComputeDesiredMove(ByRef<bool> attemptingMove);

  /// @brief Method ControllerHasSelection, addr 0x3016e3c, size 0x1e0, virtual false, abstract: false, final false
  inline bool ControllerHasSelection();

  /// @brief Method GatherControllerInteractors, addr 0x30168fc, size 0xe0, virtual false, abstract: false, final false
  inline void GatherControllerInteractors();

  /// @brief Method IsGrabbing, addr 0x3016de4, size 0x58, virtual false, abstract: false, final false
  inline bool IsGrabbing();

  static inline ::UnityEngine::XR::Interaction::Toolkit::GrabMoveProvider* New_ctor();

  /// @brief Method OnDisable, addr 0x3016c3c, size 0x30, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x3016c0c, size 0x30, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method SetInputActionProperty, addr 0x3016a44, size 0x98, virtual false, abstract: false, final false
  inline void SetInputActionProperty(ByRef<::UnityEngine::InputSystem::InputActionProperty> property, ::UnityEngine::InputSystem::InputActionProperty value);

  constexpr bool const& __cordl_internal_get__canMove_k__BackingField() const;

  constexpr bool& __cordl_internal_get__canMove_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>*& __cordl_internal_get_m_ControllerInteractors();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>*> const&
  __cordl_internal_get_m_ControllerInteractors() const;

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_ControllerTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_ControllerTransform();

  constexpr bool const& __cordl_internal_get_m_EnableMoveWhileSelecting() const;

  constexpr bool& __cordl_internal_get_m_EnableMoveWhileSelecting();

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_GrabMoveAction() const;

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_GrabMoveAction();

  constexpr bool const& __cordl_internal_get_m_IsMoving() const;

  constexpr bool& __cordl_internal_get_m_IsMoving();

  constexpr float_t const& __cordl_internal_get_m_MoveFactor() const;

  constexpr float_t& __cordl_internal_get_m_MoveFactor();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_PreviousControllerLocalPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_PreviousControllerLocalPosition();

  constexpr void __cordl_internal_set__canMove_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_ControllerInteractors(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>* value);

  constexpr void __cordl_internal_set_m_ControllerTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_m_EnableMoveWhileSelecting(bool value);

  constexpr void __cordl_internal_set_m_GrabMoveAction(::UnityEngine::InputSystem::InputActionProperty value);

  constexpr void __cordl_internal_set_m_IsMoving(bool value);

  constexpr void __cordl_internal_set_m_MoveFactor(float_t value);

  constexpr void __cordl_internal_set_m_PreviousControllerLocalPosition(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x301701c, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_canMove, addr 0x3016adc, size 0x8, virtual false, abstract: false, final false
  inline bool get_canMove();

  /// @brief Method get_controllerTransform, addr 0x30168ec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_controllerTransform();

  /// @brief Method get_enableMoveWhileSelecting, addr 0x30169dc, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableMoveWhileSelecting();

  /// @brief Method get_grabMoveAction, addr 0x3016a00, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_grabMoveAction();

  /// @brief Method get_moveFactor, addr 0x30169f0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_moveFactor();

  /// @brief Method set_canMove, addr 0x3016ae4, size 0xc, virtual false, abstract: false, final false
  inline void set_canMove(bool value);

  /// @brief Method set_controllerTransform, addr 0x30168f4, size 0x8, virtual false, abstract: false, final false
  inline void set_controllerTransform(::UnityEngine::Transform* value);

  /// @brief Method set_enableMoveWhileSelecting, addr 0x30169e4, size 0xc, virtual false, abstract: false, final false
  inline void set_enableMoveWhileSelecting(bool value);

  /// @brief Method set_grabMoveAction, addr 0x3016a14, size 0x30, virtual false, abstract: false, final false
  inline void set_grabMoveAction(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method set_moveFactor, addr 0x30169f8, size 0x8, virtual false, abstract: false, final false
  inline void set_moveFactor(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GrabMoveProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GrabMoveProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GrabMoveProvider(GrabMoveProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GrabMoveProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GrabMoveProvider(GrabMoveProvider const&) = delete;

  /// @brief Field m_ControllerTransform, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___m_ControllerTransform;

  /// @brief Field m_EnableMoveWhileSelecting, offset: 0x68, size: 0x1, def value: None
  bool ___m_EnableMoveWhileSelecting;

  /// @brief Field m_MoveFactor, offset: 0x6c, size: 0x4, def value: None
  float_t ___m_MoveFactor;

  /// @brief Field m_GrabMoveAction, offset: 0x70, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_GrabMoveAction;

  /// @brief Field <canMove>k__BackingField, offset: 0x88, size: 0x1, def value: None
  bool ____canMove_k__BackingField;

  /// @brief Field m_IsMoving, offset: 0x89, size: 0x1, def value: None
  bool ___m_IsMoving;

  /// @brief Field m_PreviousControllerLocalPosition, offset: 0x8c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_PreviousControllerLocalPosition;

  /// @brief Field m_ControllerInteractors, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>* ___m_ControllerInteractors;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::GrabMoveProvider, 0xa0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::GrabMoveProvider, ___m_ControllerTransform) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::GrabMoveProvider, ___m_EnableMoveWhileSelecting) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::GrabMoveProvider, ___m_MoveFactor) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::GrabMoveProvider, ___m_GrabMoveAction) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::GrabMoveProvider, ____canMove_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::GrabMoveProvider, ___m_IsMoving) == 0x89, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::GrabMoveProvider, ___m_PreviousControllerLocalPosition) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::GrabMoveProvider, ___m_ControllerInteractors) == 0x98, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::GrabMoveProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::GrabMoveProvider*, "UnityEngine.XR.Interaction.Toolkit", "GrabMoveProvider");
