#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRGrabInteractable_def.hpp"
CORDL_MODULE_EXPORT(XRThoughtBubbleInteractable)
// Forward declare root types
namespace GlobalNamespace {
class XRThoughtBubbleInteractable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::XRThoughtBubbleInteractable);
// Type: ::XRThoughtBubbleInteractable
// SizeInfo { instance_size: 760, native_size: -1, calculated_instance_size: 760, calculated_native_size: 760, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::XRThoughtBubbleInteractable*
class CORDL_TYPE XRThoughtBubbleInteractable : public ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable {
public:
  // Declarations
  static inline ::GlobalNamespace::XRThoughtBubbleInteractable* New_ctor();

  /// @brief Method .ctor, addr 0x10608dc, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRThoughtBubbleInteractable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRThoughtBubbleInteractable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRThoughtBubbleInteractable(XRThoughtBubbleInteractable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRThoughtBubbleInteractable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRThoughtBubbleInteractable(XRThoughtBubbleInteractable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::XRThoughtBubbleInteractable, 0x2f8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::XRThoughtBubbleInteractable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::XRThoughtBubbleInteractable*, "", "XRThoughtBubbleInteractable");
