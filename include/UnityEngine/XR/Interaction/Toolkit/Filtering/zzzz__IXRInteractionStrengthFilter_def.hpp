#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IXRInteractionStrengthFilter)
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractor;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IXRInteractionStrengthFilter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter);
// Type: UnityEngine.XR.Interaction.Toolkit.Filtering::IXRInteractionStrengthFilter
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Filtering::IXRInteractionStrengthFilter*
class CORDL_TYPE IXRInteractionStrengthFilter {
public:
  // Declarations
  __declspec(property(get = get_canProcess)) bool canProcess;

  /// @brief Method Process, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t Process(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable, float_t interactionStrength);

  /// @brief Method get_canProcess, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_canProcess();

  // Ctor Parameters [CppParam { name: "", ty: "IXRInteractionStrengthFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IXRInteractionStrengthFilter(IXRInteractionStrengthFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IXRInteractionStrengthFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IXRInteractionStrengthFilter(IXRInteractionStrengthFilter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit::Filtering
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "IXRInteractionStrengthFilter");
