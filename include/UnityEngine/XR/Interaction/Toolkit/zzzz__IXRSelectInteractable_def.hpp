#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IXRSelectInteractable)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRSelectInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct InteractableSelectMode;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectEnterEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectExitEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectExitEvent;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRSelectInteractable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable);
// Type: UnityEngine.XR.Interaction.Toolkit::IXRSelectInteractable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::IXRSelectInteractable*
class CORDL_TYPE IXRSelectInteractable {
public:
  // Declarations
  __declspec(property(get = get_firstInteractorSelecting))::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* firstInteractorSelecting;

  __declspec(property(get = get_firstSelectEntered))::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* firstSelectEntered;

  __declspec(property(get = get_interactorsSelecting))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>* interactorsSelecting;

  __declspec(property(get = get_isSelected)) bool isSelected;

  __declspec(property(get = get_lastSelectExited))::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* lastSelectExited;

  __declspec(property(get = get_selectEntered))::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* selectEntered;

  __declspec(property(get = get_selectExited))::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* selectExited;

  __declspec(property(get = get_selectMode))::UnityEngine::XR::Interaction::Toolkit::InteractableSelectMode selectMode;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXRInteractable"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*() noexcept;

  /// @brief Method GetAttachPoseOnSelect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Pose GetAttachPoseOnSelect(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor);

  /// @brief Method GetLocalAttachPoseOnSelect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Pose GetLocalAttachPoseOnSelect(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor);

  /// @brief Method IsSelectableBy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsSelectableBy(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor);

  /// @brief Method OnSelectEntered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* args);

  /// @brief Method OnSelectEntering, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnSelectEntering(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* args);

  /// @brief Method OnSelectExited, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* args);

  /// @brief Method OnSelectExiting, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* args);

  /// @brief Method get_firstInteractorSelecting, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* get_firstInteractorSelecting();

  /// @brief Method get_firstSelectEntered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* get_firstSelectEntered();

  /// @brief Method get_interactorsSelecting, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>* get_interactorsSelecting();

  /// @brief Method get_isSelected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isSelected();

  /// @brief Method get_lastSelectExited, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* get_lastSelectExited();

  /// @brief Method get_selectEntered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* get_selectEntered();

  /// @brief Method get_selectExited, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* get_selectExited();

  /// @brief Method get_selectMode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::InteractableSelectMode get_selectMode();

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXRInteractable"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* i___UnityEngine__XR__Interaction__Toolkit__IXRInteractable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IXRSelectInteractable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IXRSelectInteractable(IXRSelectInteractable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IXRSelectInteractable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IXRSelectInteractable(IXRSelectInteractable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*, "UnityEngine.XR.Interaction.Toolkit", "IXRSelectInteractable");
