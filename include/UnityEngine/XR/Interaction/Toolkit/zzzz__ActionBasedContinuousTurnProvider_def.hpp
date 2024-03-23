#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputActionProperty_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ContinuousTurnProviderBase_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(ActionBasedContinuousTurnProvider)
namespace UnityEngine::InputSystem {
struct InputActionProperty;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class ActionBasedContinuousTurnProvider;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::ActionBasedContinuousTurnProvider);
// Type: UnityEngine.XR.Interaction.Toolkit::ActionBasedContinuousTurnProvider
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::ActionBasedContinuousTurnProvider*
class CORDL_TYPE ActionBasedContinuousTurnProvider : public ::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase {
public:
  // Declarations
  __declspec(property(get = get_leftHandTurnAction, put = set_leftHandTurnAction))::UnityEngine::InputSystem::InputActionProperty leftHandTurnAction;

  /// @brief Field m_LeftHandTurnAction, offset 0x48, size 0x18
  __declspec(property(get = __cordl_internal_get_m_LeftHandTurnAction, put = __cordl_internal_set_m_LeftHandTurnAction))::UnityEngine::InputSystem::InputActionProperty m_LeftHandTurnAction;

  /// @brief Field m_RightHandTurnAction, offset 0x60, size 0x18
  __declspec(property(get = __cordl_internal_get_m_RightHandTurnAction, put = __cordl_internal_set_m_RightHandTurnAction))::UnityEngine::InputSystem::InputActionProperty m_RightHandTurnAction;

  __declspec(property(get = get_rightHandTurnAction, put = set_rightHandTurnAction))::UnityEngine::InputSystem::InputActionProperty rightHandTurnAction;

  static inline ::UnityEngine::XR::Interaction::Toolkit::ActionBasedContinuousTurnProvider* New_ctor();

  /// @brief Method OnDisable, addr 0x3014fd8, size 0x50, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x3014f88, size 0x50, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method ReadInput, addr 0x3015028, size 0xf4, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 ReadInput();

  /// @brief Method SetInputActionProperty, addr 0x3014eac, size 0x98, virtual false, abstract: false, final false
  inline void SetInputActionProperty(ByRef<::UnityEngine::InputSystem::InputActionProperty> property, ::UnityEngine::InputSystem::InputActionProperty value);

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_LeftHandTurnAction() const;

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_LeftHandTurnAction();

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_RightHandTurnAction() const;

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_RightHandTurnAction();

  constexpr void __cordl_internal_set_m_LeftHandTurnAction(::UnityEngine::InputSystem::InputActionProperty value);

  constexpr void __cordl_internal_set_m_RightHandTurnAction(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method .ctor, addr 0x301511c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_leftHandTurnAction, addr 0x3014e68, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_leftHandTurnAction();

  /// @brief Method get_rightHandTurnAction, addr 0x3014f44, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_rightHandTurnAction();

  /// @brief Method set_leftHandTurnAction, addr 0x3014e7c, size 0x30, virtual false, abstract: false, final false
  inline void set_leftHandTurnAction(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method set_rightHandTurnAction, addr 0x3014f58, size 0x30, virtual false, abstract: false, final false
  inline void set_rightHandTurnAction(::UnityEngine::InputSystem::InputActionProperty value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ActionBasedContinuousTurnProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ActionBasedContinuousTurnProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ActionBasedContinuousTurnProvider(ActionBasedContinuousTurnProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ActionBasedContinuousTurnProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ActionBasedContinuousTurnProvider(ActionBasedContinuousTurnProvider const&) = delete;

  /// @brief Field m_LeftHandTurnAction, offset: 0x48, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_LeftHandTurnAction;

  /// @brief Field m_RightHandTurnAction, offset: 0x60, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_RightHandTurnAction;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::ActionBasedContinuousTurnProvider, 0x78>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedContinuousTurnProvider, ___m_LeftHandTurnAction) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedContinuousTurnProvider, ___m_RightHandTurnAction) == 0x60, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::ActionBasedContinuousTurnProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::ActionBasedContinuousTurnProvider*, "UnityEngine.XR.Interaction.Toolkit", "ActionBasedContinuousTurnProvider");
