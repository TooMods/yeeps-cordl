#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IXRTargetPriorityInteractor)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRSelectInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct TargetPriorityMode;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRTargetPriorityInteractor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor);
// Type: UnityEngine.XR.Interaction.Toolkit::IXRTargetPriorityInteractor
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::IXRTargetPriorityInteractor*
class CORDL_TYPE IXRTargetPriorityInteractor {
public:
  // Declarations
  __declspec(property(get = get_targetPriorityMode))::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode targetPriorityMode;

  __declspec(property(get = get_targetsForSelection))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*>* targetsForSelection;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXRInteractor"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*() noexcept;

  /// @brief Method get_targetPriorityMode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode get_targetPriorityMode();

  /// @brief Method get_targetsForSelection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*>* get_targetsForSelection();

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXRInteractor"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* i___UnityEngine__XR__Interaction__Toolkit__IXRInteractor() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IXRTargetPriorityInteractor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IXRTargetPriorityInteractor(IXRTargetPriorityInteractor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IXRTargetPriorityInteractor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IXRTargetPriorityInteractor(IXRTargetPriorityInteractor const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor*, "UnityEngine.XR.Interaction.Toolkit", "IXRTargetPriorityInteractor");
