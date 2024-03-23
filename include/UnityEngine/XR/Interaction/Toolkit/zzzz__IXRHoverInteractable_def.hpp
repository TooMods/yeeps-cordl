#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IXRHoverInteractable)
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
class IXRHoverInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractable;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRHoverInteractable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable);
// Type: UnityEngine.XR.Interaction.Toolkit::IXRHoverInteractable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::IXRHoverInteractable*
class CORDL_TYPE IXRHoverInteractable {
public:
  // Declarations
  __declspec(property(get = get_firstHoverEntered))::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* firstHoverEntered;

  __declspec(property(get = get_hoverEntered))::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* hoverEntered;

  __declspec(property(get = get_hoverExited))::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* hoverExited;

  __declspec(property(get = get_interactorsHovering))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*>* interactorsHovering;

  __declspec(property(get = get_isHovered)) bool isHovered;

  __declspec(property(get = get_lastHoverExited))::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* lastHoverExited;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXRInteractable"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*() noexcept;

  /// @brief Method IsHoverableBy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsHoverableBy(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* interactor);

  /// @brief Method OnHoverEntered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs* args);

  /// @brief Method OnHoverEntering, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnHoverEntering(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs* args);

  /// @brief Method OnHoverExited, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs* args);

  /// @brief Method OnHoverExiting, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnHoverExiting(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs* args);

  /// @brief Method get_firstHoverEntered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* get_firstHoverEntered();

  /// @brief Method get_hoverEntered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* get_hoverEntered();

  /// @brief Method get_hoverExited, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* get_hoverExited();

  /// @brief Method get_interactorsHovering, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*>* get_interactorsHovering();

  /// @brief Method get_isHovered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isHovered();

  /// @brief Method get_lastHoverExited, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* get_lastHoverExited();

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXRInteractable"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* i___UnityEngine__XR__Interaction__Toolkit__IXRInteractable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IXRHoverInteractable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IXRHoverInteractable(IXRHoverInteractable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IXRHoverInteractable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IXRHoverInteractable(IXRHoverInteractable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*, "UnityEngine.XR.Interaction.Toolkit", "IXRHoverInteractable");
