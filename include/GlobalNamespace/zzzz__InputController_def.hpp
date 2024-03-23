#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(InputController)
namespace UnityEngine::XR::Interaction::Toolkit {
class XRController;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class InputController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::InputController);
// Type: ::InputController
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::InputController*
class CORDL_TYPE InputController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field canTriggerMenu, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_canTriggerMenu, put = __cordl_internal_set_canTriggerMenu)) bool canTriggerMenu;

  /// @brief Field controller, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_controller, put = __cordl_internal_set_controller))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController> controller;

  /// @brief Field keyboardIndexFingerKey, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_keyboardIndexFingerKey, put = __cordl_internal_set_keyboardIndexFingerKey))::UnityEngine::KeyCode keyboardIndexFingerKey;

  /// @brief Field keyboardMiddleFingerKey, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_keyboardMiddleFingerKey, put = __cordl_internal_set_keyboardMiddleFingerKey))::UnityEngine::KeyCode keyboardMiddleFingerKey;

  /// @brief Field keyboardThumbFingerKey, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_keyboardThumbFingerKey, put = __cordl_internal_set_keyboardThumbFingerKey))::UnityEngine::KeyCode keyboardThumbFingerKey;

  /// @brief Field menuKey, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_menuKey, put = __cordl_internal_set_menuKey))::UnityEngine::KeyCode menuKey;

  /// @brief Method DoHaptic, addr 0x29d8440, size 0x24, virtual false, abstract: false, final false
  inline void DoHaptic(float_t amplitude, float_t duration);

  /// @brief Method ExtractHandPoseValues, addr 0x29d7e4c, size 0x268, virtual false, abstract: false, final false
  inline void ExtractHandPoseValues(ByRef<float_t> indexFingerRatio, ByRef<float_t> middleFingerRatio, ByRef<float_t> thumbFingerRatio);

  /// @brief Method GetJoystickInput, addr 0x29d81fc, size 0xe4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetJoystickInput();

  /// @brief Method IsAnyButtonActive, addr 0x29d82e0, size 0x160, virtual false, abstract: false, final false
  inline bool IsAnyButtonActive();

  /// @brief Method IsMenuInputActive, addr 0x29d8158, size 0xa4, virtual false, abstract: false, final false
  inline bool IsMenuInputActive();

  /// @brief Method IsSelectInputActive, addr 0x29d80b4, size 0xa4, virtual false, abstract: false, final false
  inline bool IsSelectInputActive();

  static inline ::GlobalNamespace::InputController* New_ctor();

  constexpr bool const& __cordl_internal_get_canTriggerMenu() const;

  constexpr bool& __cordl_internal_get_canTriggerMenu();

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController> const& __cordl_internal_get_controller() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>& __cordl_internal_get_controller();

  constexpr ::UnityEngine::KeyCode const& __cordl_internal_get_keyboardIndexFingerKey() const;

  constexpr ::UnityEngine::KeyCode& __cordl_internal_get_keyboardIndexFingerKey();

  constexpr ::UnityEngine::KeyCode const& __cordl_internal_get_keyboardMiddleFingerKey() const;

  constexpr ::UnityEngine::KeyCode& __cordl_internal_get_keyboardMiddleFingerKey();

  constexpr ::UnityEngine::KeyCode const& __cordl_internal_get_keyboardThumbFingerKey() const;

  constexpr ::UnityEngine::KeyCode& __cordl_internal_get_keyboardThumbFingerKey();

  constexpr ::UnityEngine::KeyCode const& __cordl_internal_get_menuKey() const;

  constexpr ::UnityEngine::KeyCode& __cordl_internal_get_menuKey();

  constexpr void __cordl_internal_set_canTriggerMenu(bool value);

  constexpr void __cordl_internal_set_controller(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController> value);

  constexpr void __cordl_internal_set_keyboardIndexFingerKey(::UnityEngine::KeyCode value);

  constexpr void __cordl_internal_set_keyboardMiddleFingerKey(::UnityEngine::KeyCode value);

  constexpr void __cordl_internal_set_keyboardThumbFingerKey(::UnityEngine::KeyCode value);

  constexpr void __cordl_internal_set_menuKey(::UnityEngine::KeyCode value);

  /// @brief Method .ctor, addr 0x29d8464, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputController(InputController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputController(InputController const&) = delete;

  /// @brief Field controller, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController> ___controller;

  /// @brief Field keyboardIndexFingerKey, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::KeyCode ___keyboardIndexFingerKey;

  /// @brief Field keyboardMiddleFingerKey, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::KeyCode ___keyboardMiddleFingerKey;

  /// @brief Field keyboardThumbFingerKey, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::KeyCode ___keyboardThumbFingerKey;

  /// @brief Field canTriggerMenu, offset: 0x2c, size: 0x1, def value: None
  bool ___canTriggerMenu;

  /// @brief Field menuKey, offset: 0x30, size: 0x4, def value: None
  ::UnityEngine::KeyCode ___menuKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::InputController, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::InputController, ___controller) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputController, ___keyboardIndexFingerKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputController, ___keyboardMiddleFingerKey) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputController, ___keyboardThumbFingerKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputController, ___canTriggerMenu) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputController, ___menuKey) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::InputController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InputController*, "", "InputController");
