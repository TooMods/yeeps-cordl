#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRDirectInteractor_def.hpp"
CORDL_MODULE_EXPORT(XRDirectInteractorSingleHover)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRHoverInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractable;
}
// Forward declare root types
namespace GlobalNamespace {
class XRDirectInteractorSingleHover;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::XRDirectInteractorSingleHover);
// Type: ::XRDirectInteractorSingleHover
// SizeInfo { instance_size: 664, native_size: -1, calculated_instance_size: 664, calculated_native_size: 664, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::XRDirectInteractorSingleHover*
class CORDL_TYPE XRDirectInteractorSingleHover : public ::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor {
public:
  // Declarations
  /// @brief Method CanHover, addr 0x29d9ad0, size 0x1fc, virtual true, abstract: false, final false
  inline bool CanHover(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* interactable);

  /// @brief Method GetValidTargets, addr 0x29d9824, size 0x2ac, virtual true, abstract: false, final false
  inline void GetValidTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* targets);

  static inline ::GlobalNamespace::XRDirectInteractorSingleHover* New_ctor();

  /// @brief Method .ctor, addr 0x29d9ccc, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRDirectInteractorSingleHover();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRDirectInteractorSingleHover", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRDirectInteractorSingleHover(XRDirectInteractorSingleHover&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRDirectInteractorSingleHover", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRDirectInteractorSingleHover(XRDirectInteractorSingleHover const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::XRDirectInteractorSingleHover, 0x298>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::XRDirectInteractorSingleHover);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::XRDirectInteractorSingleHover*, "", "XRDirectInteractorSingleHover");
