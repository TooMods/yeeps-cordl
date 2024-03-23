#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IXRActivateInteractable)
namespace UnityEngine::XR::Interaction::Toolkit {
class ActivateEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class ActivateEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class DeactivateEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class DeactivateEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractable;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRActivateInteractable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable);
// Type: UnityEngine.XR.Interaction.Toolkit::IXRActivateInteractable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::IXRActivateInteractable*
class CORDL_TYPE IXRActivateInteractable {
public:
  // Declarations
  __declspec(property(get = get_activated))::UnityEngine::XR::Interaction::Toolkit::ActivateEvent* activated;

  __declspec(property(get = get_deactivated))::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent* deactivated;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXRInteractable"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*() noexcept;

  /// @brief Method OnActivated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnActivated(::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs* args);

  /// @brief Method OnDeactivated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnDeactivated(::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs* args);

  /// @brief Method get_activated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::ActivateEvent* get_activated();

  /// @brief Method get_deactivated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent* get_deactivated();

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXRInteractable"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* i___UnityEngine__XR__Interaction__Toolkit__IXRInteractable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IXRActivateInteractable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IXRActivateInteractable(IXRActivateInteractable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IXRActivateInteractable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IXRActivateInteractable(IXRActivateInteractable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable*, "UnityEngine.XR.Interaction.Toolkit", "IXRActivateInteractable");
