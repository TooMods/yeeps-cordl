#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IXRInteractionStrengthInteractable)
namespace Unity::XR::CoreUtils::Bindings::Variables {
template <typename T> class IReadOnlyBindableVariable_1;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRInteractionUpdateOrder__UpdatePhase;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractionStrengthInteractable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable);
// Type: UnityEngine.XR.Interaction.Toolkit::IXRInteractionStrengthInteractable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::IXRInteractionStrengthInteractable*
class CORDL_TYPE IXRInteractionStrengthInteractable {
public:
  // Declarations
  __declspec(property(get = get_largestInteractionStrength))::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<float_t>* largestInteractionStrength;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXRInteractable"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*() noexcept;

  /// @brief Method GetInteractionStrength, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t GetInteractionStrength(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor);

  /// @brief Method ProcessInteractionStrength, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ProcessInteractionStrength(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase);

  /// @brief Method get_largestInteractionStrength, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<float_t>* get_largestInteractionStrength();

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXRInteractable"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* i___UnityEngine__XR__Interaction__Toolkit__IXRInteractable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IXRInteractionStrengthInteractable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IXRInteractionStrengthInteractable(IXRInteractionStrengthInteractable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IXRInteractionStrengthInteractable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IXRInteractionStrengthInteractable(IXRInteractionStrengthInteractable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable*, "UnityEngine.XR.Interaction.Toolkit", "IXRInteractionStrengthInteractable");
