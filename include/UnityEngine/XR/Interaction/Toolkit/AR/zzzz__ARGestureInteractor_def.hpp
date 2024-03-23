#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ARGestureInteractor)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AR {
class ARGestureInteractor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::AR::ARGestureInteractor);
// Type: UnityEngine.XR.Interaction.Toolkit.AR::ARGestureInteractor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::AR {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.AR::ARGestureInteractor*
class CORDL_TYPE ARGestureInteractor : public ::System::Object {
public:
  // Declarations
  static inline ::UnityEngine::XR::Interaction::Toolkit::AR::ARGestureInteractor* New_ctor();

  /// @brief Method .ctor, addr 0x2a2a5a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ARGestureInteractor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ARGestureInteractor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ARGestureInteractor(ARGestureInteractor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ARGestureInteractor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ARGestureInteractor(ARGestureInteractor const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::AR::ARGestureInteractor, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::AR
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::AR::ARGestureInteractor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AR::ARGestureInteractor*, "UnityEngine.XR.Interaction.Toolkit.AR", "ARGestureInteractor");
