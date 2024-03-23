#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XRSelectInteractableExtensions)
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRSelectInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRSelectInteractor;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class XRSelectInteractableExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::XRSelectInteractableExtensions);
// Type: UnityEngine.XR.Interaction.Toolkit::XRSelectInteractableExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::XRSelectInteractableExtensions*
class CORDL_TYPE XRSelectInteractableExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetOldestInteractorSelecting, addr 0x259aaa0, size 0x14c, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* GetOldestInteractorSelecting(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* interactable);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRSelectInteractableExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRSelectInteractableExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRSelectInteractableExtensions(XRSelectInteractableExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRSelectInteractableExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRSelectInteractableExtensions(XRSelectInteractableExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::XRSelectInteractableExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::XRSelectInteractableExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::XRSelectInteractableExtensions*, "UnityEngine.XR.Interaction.Toolkit", "XRSelectInteractableExtensions");
