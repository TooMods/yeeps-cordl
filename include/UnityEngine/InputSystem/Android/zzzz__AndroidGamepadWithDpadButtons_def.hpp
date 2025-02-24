#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Android/zzzz__AndroidGamepad_def.hpp"
CORDL_MODULE_EXPORT(AndroidGamepadWithDpadButtons)
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidGamepadWithDpadButtons;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Android::AndroidGamepadWithDpadButtons);
// Type: UnityEngine.InputSystem.Android::AndroidGamepadWithDpadButtons
// SizeInfo { instance_size: 496, native_size: -1, calculated_instance_size: 496, calculated_native_size: 496, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Android::AndroidGamepadWithDpadButtons*
class CORDL_TYPE AndroidGamepadWithDpadButtons : public ::UnityEngine::InputSystem::Android::AndroidGamepad {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::Android::AndroidGamepadWithDpadButtons* New_ctor();

  /// @brief Method .ctor, addr 0x1e000c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidGamepadWithDpadButtons();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidGamepadWithDpadButtons", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidGamepadWithDpadButtons(AndroidGamepadWithDpadButtons&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidGamepadWithDpadButtons", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidGamepadWithDpadButtons(AndroidGamepadWithDpadButtons const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::AndroidGamepadWithDpadButtons, 0x1f0>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android
NEED_NO_BOX(::UnityEngine::InputSystem::Android::AndroidGamepadWithDpadButtons);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::AndroidGamepadWithDpadButtons*, "UnityEngine.InputSystem.Android", "AndroidGamepadWithDpadButtons");
