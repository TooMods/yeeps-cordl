#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputActionProperty_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ContinuousMoveProviderBase_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(ActionBasedContinuousMoveProvider)
namespace UnityEngine::InputSystem {
struct InputActionProperty;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class ActionBasedContinuousMoveProvider;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::ActionBasedContinuousMoveProvider);
// Type: UnityEngine.XR.Interaction.Toolkit::ActionBasedContinuousMoveProvider
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::ActionBasedContinuousMoveProvider*
class CORDL_TYPE ActionBasedContinuousMoveProvider : public ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase {
public:
  // Declarations
  __declspec(property(get = get_leftHandMoveAction, put = set_leftHandMoveAction))::UnityEngine::InputSystem::InputActionProperty leftHandMoveAction;

  /// @brief Field m_LeftHandMoveAction, offset 0x70, size 0x18
  __declspec(property(get = __cordl_internal_get_m_LeftHandMoveAction, put = __cordl_internal_set_m_LeftHandMoveAction))::UnityEngine::InputSystem::InputActionProperty m_LeftHandMoveAction;

  /// @brief Field m_RightHandMoveAction, offset 0x88, size 0x18
  __declspec(property(get = __cordl_internal_get_m_RightHandMoveAction, put = __cordl_internal_set_m_RightHandMoveAction))::UnityEngine::InputSystem::InputActionProperty m_RightHandMoveAction;

  __declspec(property(get = get_rightHandMoveAction, put = set_rightHandMoveAction))::UnityEngine::InputSystem::InputActionProperty rightHandMoveAction;

  static inline ::UnityEngine::XR::Interaction::Toolkit::ActionBasedContinuousMoveProvider* New_ctor();

  /// @brief Method OnDisable, addr 0x3014cec, size 0x50, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x3014c9c, size 0x50, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method ReadInput, addr 0x3014d3c, size 0xf4, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 ReadInput();

  /// @brief Method SetInputActionProperty, addr 0x3014bc0, size 0x98, virtual false, abstract: false, final false
  inline void SetInputActionProperty(ByRef<::UnityEngine::InputSystem::InputActionProperty> property, ::UnityEngine::InputSystem::InputActionProperty value);

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_LeftHandMoveAction() const;

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_LeftHandMoveAction();

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_RightHandMoveAction() const;

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_RightHandMoveAction();

  constexpr void __cordl_internal_set_m_LeftHandMoveAction(::UnityEngine::InputSystem::InputActionProperty value);

  constexpr void __cordl_internal_set_m_RightHandMoveAction(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method .ctor, addr 0x3014e30, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_leftHandMoveAction, addr 0x3014b7c, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_leftHandMoveAction();

  /// @brief Method get_rightHandMoveAction, addr 0x3014c58, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_rightHandMoveAction();

  /// @brief Method set_leftHandMoveAction, addr 0x3014b90, size 0x30, virtual false, abstract: false, final false
  inline void set_leftHandMoveAction(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method set_rightHandMoveAction, addr 0x3014c6c, size 0x30, virtual false, abstract: false, final false
  inline void set_rightHandMoveAction(::UnityEngine::InputSystem::InputActionProperty value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ActionBasedContinuousMoveProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ActionBasedContinuousMoveProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ActionBasedContinuousMoveProvider(ActionBasedContinuousMoveProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ActionBasedContinuousMoveProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ActionBasedContinuousMoveProvider(ActionBasedContinuousMoveProvider const&) = delete;

  /// @brief Field m_LeftHandMoveAction, offset: 0x70, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_LeftHandMoveAction;

  /// @brief Field m_RightHandMoveAction, offset: 0x88, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_RightHandMoveAction;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::ActionBasedContinuousMoveProvider, 0xa0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedContinuousMoveProvider, ___m_LeftHandMoveAction) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedContinuousMoveProvider, ___m_RightHandMoveAction) == 0x88, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::ActionBasedContinuousMoveProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::ActionBasedContinuousMoveProvider*, "UnityEngine.XR.Interaction.Toolkit", "ActionBasedContinuousMoveProvider");
