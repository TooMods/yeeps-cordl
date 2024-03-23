#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__BaseInteractionEventArgs_def.hpp"
CORDL_MODULE_EXPORT(DeactivateEventArgs)
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRActivateInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRActivateInteractor;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class DeactivateEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs);
// Type: UnityEngine.XR.Interaction.Toolkit::DeactivateEventArgs
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::DeactivateEventArgs*
class CORDL_TYPE DeactivateEventArgs : public ::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs {
public:
  // Declarations
  __declspec(property(get = get_interactableObject, put = set_interactableObject))::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable* interactableObject;

  __declspec(property(get = get_interactorObject, put = set_interactorObject))::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractor* interactorObject;

  static inline ::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs* New_ctor();

  /// @brief Method .ctor, addr 0x2cea310, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_interactableObject, addr 0x2cfecbc, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable* get_interactableObject();

  /// @brief Method get_interactorObject, addr 0x2cfec48, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractor* get_interactorObject();

  /// @brief Method set_interactableObject, addr 0x2cfed28, size 0x8, virtual false, abstract: false, final false
  inline void set_interactableObject(::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable* value);

  /// @brief Method set_interactorObject, addr 0x2cfecb4, size 0x8, virtual false, abstract: false, final false
  inline void set_interactorObject(::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractor* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeactivateEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeactivateEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeactivateEventArgs(DeactivateEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeactivateEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeactivateEventArgs(DeactivateEventArgs const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs, 0x20>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*, "UnityEngine.XR.Interaction.Toolkit", "DeactivateEventArgs");
