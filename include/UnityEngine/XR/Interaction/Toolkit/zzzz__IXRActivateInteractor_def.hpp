#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IXRActivateInteractor)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRActivateInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractor;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRActivateInteractor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractor);
// Type: UnityEngine.XR.Interaction.Toolkit::IXRActivateInteractor
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::IXRActivateInteractor*
class CORDL_TYPE IXRActivateInteractor {
public:
  // Declarations
  __declspec(property(get = get_shouldActivate)) bool shouldActivate;

  __declspec(property(get = get_shouldDeactivate)) bool shouldDeactivate;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXRInteractor"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*() noexcept;

  /// @brief Method GetActivateTargets, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void GetActivateTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable*>* targets);

  /// @brief Method get_shouldActivate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_shouldActivate();

  /// @brief Method get_shouldDeactivate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_shouldDeactivate();

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXRInteractor"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* i___UnityEngine__XR__Interaction__Toolkit__IXRInteractor() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IXRActivateInteractor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IXRActivateInteractor(IXRActivateInteractor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IXRActivateInteractor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IXRActivateInteractor(IXRActivateInteractor const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractor*, "UnityEngine.XR.Interaction.Toolkit", "IXRActivateInteractor");
