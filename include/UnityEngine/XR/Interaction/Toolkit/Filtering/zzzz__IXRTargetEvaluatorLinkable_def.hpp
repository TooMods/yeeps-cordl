#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IXRTargetEvaluatorLinkable)
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractor;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IXRTargetEvaluatorLinkable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable);
// Type: UnityEngine.XR.Interaction.Toolkit.Filtering::IXRTargetEvaluatorLinkable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Filtering::IXRTargetEvaluatorLinkable*
class CORDL_TYPE IXRTargetEvaluatorLinkable {
public:
  // Declarations
  /// @brief Method OnLink, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnLink(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor);

  /// @brief Method OnUnlink, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnUnlink(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor);

  // Ctor Parameters [CppParam { name: "", ty: "IXRTargetEvaluatorLinkable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IXRTargetEvaluatorLinkable(IXRTargetEvaluatorLinkable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IXRTargetEvaluatorLinkable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IXRTargetEvaluatorLinkable(IXRTargetEvaluatorLinkable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit::Filtering
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "IXRTargetEvaluatorLinkable");
