#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__XRController_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XRControllerWithRumble)
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
class XRControllerWithRumble;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::XR::XRControllerWithRumble);
// Type: UnityEngine.InputSystem.XR::XRControllerWithRumble
// SizeInfo { instance_size: 400, native_size: -1, calculated_instance_size: 400, calculated_native_size: 400, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::XR {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.XR::XRControllerWithRumble*
class CORDL_TYPE XRControllerWithRumble : public ::UnityEngine::InputSystem::XR::XRController {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::XR::XRControllerWithRumble* New_ctor();

  /// @brief Method SendImpulse, addr 0x1d385e0, size 0xac, virtual false, abstract: false, final false
  inline void SendImpulse(float_t amplitude, float_t duration);

  /// @brief Method .ctor, addr 0x1d38708, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRControllerWithRumble();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRControllerWithRumble", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRControllerWithRumble(XRControllerWithRumble&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRControllerWithRumble", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRControllerWithRumble(XRControllerWithRumble const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::XRControllerWithRumble, 0x190>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::XR
NEED_NO_BOX(::UnityEngine::InputSystem::XR::XRControllerWithRumble);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::XRControllerWithRumble*, "UnityEngine.InputSystem.XR", "XRControllerWithRumble");
