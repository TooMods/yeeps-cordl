#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__BaseInteractionEventArgs_def.hpp"
CORDL_MODULE_EXPORT(ActivateEventArgs)
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRActivateInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRActivateInteractor;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class ActivateEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs);
// Type: UnityEngine.XR.Interaction.Toolkit::ActivateEventArgs
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::ActivateEventArgs*
class CORDL_TYPE ActivateEventArgs : public ::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs {
public:
  // Declarations
  __declspec(property(get = get_interactableObject, put = set_interactableObject))::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable* interactableObject;

  __declspec(property(get = get_interactorObject, put = set_interactorObject))::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractor* interactorObject;

  static inline ::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs* New_ctor();

  /// @brief Method .ctor, addr 0x2cea2ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_interactableObject, addr 0x2cfeb8c, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable* get_interactableObject();

  /// @brief Method get_interactorObject, addr 0x2cfeb18, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractor* get_interactorObject();

  /// @brief Method set_interactableObject, addr 0x2cfebf8, size 0x8, virtual false, abstract: false, final false
  inline void set_interactableObject(::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable* value);

  /// @brief Method set_interactorObject, addr 0x2cfeb84, size 0x8, virtual false, abstract: false, final false
  inline void set_interactorObject(::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractor* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ActivateEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ActivateEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ActivateEventArgs(ActivateEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ActivateEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ActivateEventArgs(ActivateEventArgs const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs, 0x20>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*, "UnityEngine.XR.Interaction.Toolkit", "ActivateEventArgs");
