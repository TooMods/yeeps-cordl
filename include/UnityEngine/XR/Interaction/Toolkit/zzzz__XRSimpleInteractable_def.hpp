#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseInteractable_def.hpp"
CORDL_MODULE_EXPORT(XRSimpleInteractable)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class XRSimpleInteractable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::XRSimpleInteractable);
// Type: UnityEngine.XR.Interaction.Toolkit::XRSimpleInteractable
// SizeInfo { instance_size: 408, native_size: -1, calculated_instance_size: 408, calculated_native_size: 408, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::XRSimpleInteractable*
class CORDL_TYPE XRSimpleInteractable : public ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable {
public:
  // Declarations
  static inline ::UnityEngine::XR::Interaction::Toolkit::XRSimpleInteractable* New_ctor();

  /// @brief Method .ctor, addr 0x25a6c48, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRSimpleInteractable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRSimpleInteractable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRSimpleInteractable(XRSimpleInteractable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRSimpleInteractable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRSimpleInteractable(XRSimpleInteractable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::XRSimpleInteractable, 0x198>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::XRSimpleInteractable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::XRSimpleInteractable*, "UnityEngine.XR.Interaction.Toolkit", "XRSimpleInteractable");
