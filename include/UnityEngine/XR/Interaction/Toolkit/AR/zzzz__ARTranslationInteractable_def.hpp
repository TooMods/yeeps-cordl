#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ARTranslationInteractable)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AR {
class ARTranslationInteractable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::AR::ARTranslationInteractable);
// Type: UnityEngine.XR.Interaction.Toolkit.AR::ARTranslationInteractable
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::AR {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.AR::ARTranslationInteractable*
class CORDL_TYPE ARTranslationInteractable : public ::System::Object {
public:
  // Declarations
  static inline ::UnityEngine::XR::Interaction::Toolkit::AR::ARTranslationInteractable* New_ctor();

  /// @brief Method .ctor, addr 0x2a2a5a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ARTranslationInteractable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ARTranslationInteractable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ARTranslationInteractable(ARTranslationInteractable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ARTranslationInteractable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ARTranslationInteractable(ARTranslationInteractable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::AR::ARTranslationInteractable, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::AR
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::AR::ARTranslationInteractable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AR::ARTranslationInteractable*, "UnityEngine.XR.Interaction.Toolkit.AR", "ARTranslationInteractable");
