#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IXRSelectInteractor)
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
class IXRSelectInteractor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor);
// Type: UnityEngine.XR.Interaction.Toolkit::IXRSelectInteractor
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::IXRSelectInteractor*
class CORDL_TYPE IXRSelectInteractor {
public:
  // Declarations
  __declspec(property(get = get_firstInteractableSelected))::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* firstInteractableSelected;

  __declspec(property(get = get_hasSelection)) bool hasSelection;

  __declspec(property(get = get_interactablesSelected))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*>* interactablesSelected;

  __declspec(property(get = get_isSelectActive)) bool isSelectActive;

  __declspec(property(get = get_keepSelectedTargetValid)) bool keepSelectedTargetValid;

  __declspec(property(get = get_selectEntered))::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* selectEntered;

  __declspec(property(get = get_selectExited))::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* selectExited;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXRInteractor"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*() noexcept;

  /// @brief Method CanSelect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool CanSelect(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* interactable);

  /// @brief Method GetAttachPoseOnSelect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Pose GetAttachPoseOnSelect(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* interactable);

  /// @brief Method GetLocalAttachPoseOnSelect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Pose GetLocalAttachPoseOnSelect(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* interactable);

  /// @brief Method IsSelecting, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsSelecting(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* interactable);

  /// @brief Method OnSelectEntered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* args);

  /// @brief Method OnSelectEntering, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnSelectEntering(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* args);

  /// @brief Method OnSelectExited, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* args);

  /// @brief Method OnSelectExiting, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* args);

  /// @brief Method get_firstInteractableSelected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* get_firstInteractableSelected();

  /// @brief Method get_hasSelection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_hasSelection();

  /// @brief Method get_interactablesSelected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*>* get_interactablesSelected();

  /// @brief Method get_isSelectActive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isSelectActive();

  /// @brief Method get_keepSelectedTargetValid, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_keepSelectedTargetValid();

  /// @brief Method get_selectEntered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* get_selectEntered();

  /// @brief Method get_selectExited, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* get_selectExited();

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXRInteractor"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* i___UnityEngine__XR__Interaction__Toolkit__IXRInteractor() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IXRSelectInteractor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IXRSelectInteractor(IXRSelectInteractor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IXRSelectInteractor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IXRSelectInteractor(IXRSelectInteractor const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*, "UnityEngine.XR.Interaction.Toolkit", "IXRSelectInteractor");
