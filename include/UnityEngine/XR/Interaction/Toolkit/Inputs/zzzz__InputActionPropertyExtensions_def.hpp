#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(InputActionPropertyExtensions)
namespace UnityEngine::InputSystem {
struct InputActionProperty;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
class InputActionPropertyExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionPropertyExtensions);
// Type: UnityEngine.XR.Interaction.Toolkit.Inputs::InputActionPropertyExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Inputs::InputActionPropertyExtensions*
class CORDL_TYPE InputActionPropertyExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method DisableDirectAction, addr 0x2ff5b1c, size 0x98, virtual false, abstract: false, final false
  static inline void DisableDirectAction(::UnityEngine::InputSystem::InputActionProperty property);

  /// @brief Method EnableDirectAction, addr 0x2ff5a84, size 0x98, virtual false, abstract: false, final false
  static inline void EnableDirectAction(::UnityEngine::InputSystem::InputActionProperty property);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionPropertyExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputActionPropertyExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputActionPropertyExtensions(InputActionPropertyExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputActionPropertyExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputActionPropertyExtensions(InputActionPropertyExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionPropertyExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Inputs
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionPropertyExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionPropertyExtensions*, "UnityEngine.XR.Interaction.Toolkit.Inputs", "InputActionPropertyExtensions");
