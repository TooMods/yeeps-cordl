#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IXRHoverInteractor)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverEnterEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverExitEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverExitEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRHoverInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractor;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRHoverInteractor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor);
// Type: UnityEngine.XR.Interaction.Toolkit::IXRHoverInteractor
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::IXRHoverInteractor*
class CORDL_TYPE IXRHoverInteractor {
public:
  // Declarations
  __declspec(property(get = get_hasHover)) bool hasHover;

  __declspec(property(get = get_hoverEntered))::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* hoverEntered;

  __declspec(property(get = get_hoverExited))::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* hoverExited;

  __declspec(property(get = get_interactablesHovered))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*>* interactablesHovered;

  __declspec(property(get = get_isHoverActive)) bool isHoverActive;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXRInteractor"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*() noexcept;

  /// @brief Method CanHover, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool CanHover(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* interactable);

  /// @brief Method IsHovering, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsHovering(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* interactable);

  /// @brief Method OnHoverEntered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs* args);

  /// @brief Method OnHoverEntering, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnHoverEntering(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs* args);

  /// @brief Method OnHoverExited, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs* args);

  /// @brief Method OnHoverExiting, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnHoverExiting(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs* args);

  /// @brief Method get_hasHover, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_hasHover();

  /// @brief Method get_hoverEntered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* get_hoverEntered();

  /// @brief Method get_hoverExited, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* get_hoverExited();

  /// @brief Method get_interactablesHovered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*>* get_interactablesHovered();

  /// @brief Method get_isHoverActive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isHoverActive();

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXRInteractor"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* i___UnityEngine__XR__Interaction__Toolkit__IXRInteractor() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IXRHoverInteractor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IXRHoverInteractor(IXRHoverInteractor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IXRHoverInteractor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IXRHoverInteractor(IXRHoverInteractor const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*, "UnityEngine.XR.Interaction.Toolkit", "IXRHoverInteractor");
