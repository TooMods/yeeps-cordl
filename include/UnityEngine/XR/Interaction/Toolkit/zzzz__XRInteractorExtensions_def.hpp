#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XRInteractorExtensions)
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractor;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractorExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::XRInteractorExtensions);
// Type: UnityEngine.XR.Interaction.Toolkit::XRInteractorExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::XRInteractorExtensions*
class CORDL_TYPE XRInteractorExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsBlockedByInteractionWithinGroup, addr 0x25a6f08, size 0xe8, virtual false, abstract: false, final false
  static inline bool IsBlockedByInteractionWithinGroup(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRInteractorExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRInteractorExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRInteractorExtensions(XRInteractorExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRInteractorExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRInteractorExtensions(XRInteractorExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::XRInteractorExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::XRInteractorExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::XRInteractorExtensions*, "UnityEngine.XR.Interaction.Toolkit", "XRInteractorExtensions");
