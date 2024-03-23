#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XRHoverInteractableExtensions)
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRHoverInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRHoverInteractor;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class XRHoverInteractableExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::XRHoverInteractableExtensions);
// Type: UnityEngine.XR.Interaction.Toolkit::XRHoverInteractableExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::XRHoverInteractableExtensions*
class CORDL_TYPE XRHoverInteractableExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetOldestInteractorHovering, addr 0x259a954, size 0x14c, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* GetOldestInteractorHovering(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* interactable);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRHoverInteractableExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRHoverInteractableExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRHoverInteractableExtensions(XRHoverInteractableExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRHoverInteractableExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRHoverInteractableExtensions(XRHoverInteractableExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::XRHoverInteractableExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::XRHoverInteractableExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::XRHoverInteractableExtensions*, "UnityEngine.XR.Interaction.Toolkit", "XRHoverInteractableExtensions");
