#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XInput/zzzz__XInputController_def.hpp"
CORDL_MODULE_EXPORT(XboxOneGamepadAndroid)
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class XboxOneGamepadAndroid;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Android::XboxOneGamepadAndroid);
// Type: UnityEngine.InputSystem.Android::XboxOneGamepadAndroid
// SizeInfo { instance_size: 528, native_size: -1, calculated_instance_size: 528, calculated_native_size: 524, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Android::XboxOneGamepadAndroid*
class CORDL_TYPE XboxOneGamepadAndroid : public ::UnityEngine::InputSystem::XInput::XInputController {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::Android::XboxOneGamepadAndroid* New_ctor();

  /// @brief Method .ctor, addr 0x1e000dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XboxOneGamepadAndroid();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XboxOneGamepadAndroid", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XboxOneGamepadAndroid(XboxOneGamepadAndroid&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XboxOneGamepadAndroid", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XboxOneGamepadAndroid(XboxOneGamepadAndroid const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::XboxOneGamepadAndroid, 0x210>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android
NEED_NO_BOX(::UnityEngine::InputSystem::Android::XboxOneGamepadAndroid);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::XboxOneGamepadAndroid*, "UnityEngine.InputSystem.Android", "XboxOneGamepadAndroid");
