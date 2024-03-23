#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XRHoverInteractorExtensions)
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRHoverInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRHoverInteractor;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class XRHoverInteractorExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::XRHoverInteractorExtensions);
// Type: UnityEngine.XR.Interaction.Toolkit::XRHoverInteractorExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::XRHoverInteractorExtensions*
class CORDL_TYPE XRHoverInteractorExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetOldestInteractableHovered, addr 0x25a6dbc, size 0x14c, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* GetOldestInteractableHovered(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* interactor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRHoverInteractorExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRHoverInteractorExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRHoverInteractorExtensions(XRHoverInteractorExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRHoverInteractorExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRHoverInteractorExtensions(XRHoverInteractorExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::XRHoverInteractorExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::XRHoverInteractorExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::XRHoverInteractorExtensions*, "UnityEngine.XR.Interaction.Toolkit", "XRHoverInteractorExtensions");
