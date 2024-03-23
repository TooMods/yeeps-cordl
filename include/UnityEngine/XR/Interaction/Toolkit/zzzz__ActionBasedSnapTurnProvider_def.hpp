#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputActionProperty_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SnapTurnProviderBase_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(ActionBasedSnapTurnProvider)
namespace UnityEngine::InputSystem {
struct InputActionProperty;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class ActionBasedSnapTurnProvider;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::ActionBasedSnapTurnProvider);
// Type: UnityEngine.XR.Interaction.Toolkit::ActionBasedSnapTurnProvider
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::ActionBasedSnapTurnProvider*
class CORDL_TYPE ActionBasedSnapTurnProvider : public ::UnityEngine::XR::Interaction::Toolkit::SnapTurnProviderBase {
public:
  // Declarations
  __declspec(property(get = get_leftHandSnapTurnAction, put = set_leftHandSnapTurnAction))::UnityEngine::InputSystem::InputActionProperty leftHandSnapTurnAction;

  /// @brief Field m_LeftHandSnapTurnAction, offset 0x60, size 0x18
  __declspec(property(get = __cordl_internal_get_m_LeftHandSnapTurnAction,
                      put = __cordl_internal_set_m_LeftHandSnapTurnAction))::UnityEngine::InputSystem::InputActionProperty m_LeftHandSnapTurnAction;

  /// @brief Field m_RightHandSnapTurnAction, offset 0x78, size 0x18
  __declspec(property(get = __cordl_internal_get_m_RightHandSnapTurnAction,
                      put = __cordl_internal_set_m_RightHandSnapTurnAction))::UnityEngine::InputSystem::InputActionProperty m_RightHandSnapTurnAction;

  __declspec(property(get = get_rightHandSnapTurnAction, put = set_rightHandSnapTurnAction))::UnityEngine::InputSystem::InputActionProperty rightHandSnapTurnAction;

  static inline ::UnityEngine::XR::Interaction::Toolkit::ActionBasedSnapTurnProvider* New_ctor();

  /// @brief Method OnDisable, addr 0x30181f0, size 0x50, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x30181a0, size 0x50, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method ReadInput, addr 0x3018240, size 0xf4, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 ReadInput();

  /// @brief Method SetInputActionProperty, addr 0x30180c4, size 0x98, virtual false, abstract: false, final false
  inline void SetInputActionProperty(ByRef<::UnityEngine::InputSystem::InputActionProperty> property, ::UnityEngine::InputSystem::InputActionProperty value);

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_LeftHandSnapTurnAction() const;

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_LeftHandSnapTurnAction();

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_RightHandSnapTurnAction() const;

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_RightHandSnapTurnAction();

  constexpr void __cordl_internal_set_m_LeftHandSnapTurnAction(::UnityEngine::InputSystem::InputActionProperty value);

  constexpr void __cordl_internal_set_m_RightHandSnapTurnAction(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method .ctor, addr 0x3018334, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_leftHandSnapTurnAction, addr 0x3018080, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_leftHandSnapTurnAction();

  /// @brief Method get_rightHandSnapTurnAction, addr 0x301815c, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_rightHandSnapTurnAction();

  /// @brief Method set_leftHandSnapTurnAction, addr 0x3018094, size 0x30, virtual false, abstract: false, final false
  inline void set_leftHandSnapTurnAction(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method set_rightHandSnapTurnAction, addr 0x3018170, size 0x30, virtual false, abstract: false, final false
  inline void set_rightHandSnapTurnAction(::UnityEngine::InputSystem::InputActionProperty value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ActionBasedSnapTurnProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ActionBasedSnapTurnProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ActionBasedSnapTurnProvider(ActionBasedSnapTurnProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ActionBasedSnapTurnProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ActionBasedSnapTurnProvider(ActionBasedSnapTurnProvider const&) = delete;

  /// @brief Field m_LeftHandSnapTurnAction, offset: 0x60, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_LeftHandSnapTurnAction;

  /// @brief Field m_RightHandSnapTurnAction, offset: 0x78, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_RightHandSnapTurnAction;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::ActionBasedSnapTurnProvider, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedSnapTurnProvider, ___m_LeftHandSnapTurnAction) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedSnapTurnProvider, ___m_RightHandSnapTurnAction) == 0x78, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::ActionBasedSnapTurnProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::ActionBasedSnapTurnProvider*, "UnityEngine.XR.Interaction.Toolkit", "ActionBasedSnapTurnProvider");
