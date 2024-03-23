#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__BaseInteractionEventArgs_def.hpp"
CORDL_MODULE_EXPORT(SelectEnterEventArgs)
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRSelectInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRSelectInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractionManager;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectEnterEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs);
// Type: UnityEngine.XR.Interaction.Toolkit::SelectEnterEventArgs
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::SelectEnterEventArgs*
class CORDL_TYPE SelectEnterEventArgs : public ::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs {
public:
  // Declarations
  /// @brief Field <manager>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__manager_k__BackingField,
                      put = __cordl_internal_set__manager_k__BackingField))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> _manager_k__BackingField;

  __declspec(property(get = get_interactableObject, put = set_interactableObject))::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* interactableObject;

  __declspec(property(get = get_interactorObject, put = set_interactorObject))::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactorObject;

  __declspec(property(get = get_manager, put = set_manager))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> manager;

  static inline ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* New_ctor();

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const& __cordl_internal_get__manager_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& __cordl_internal_get__manager_k__BackingField();

  constexpr void __cordl_internal_set__manager_k__BackingField(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> value);

  /// @brief Method .ctor, addr 0x2cfea20, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_interactableObject, addr 0x2ceca78, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* get_interactableObject();

  /// @brief Method get_interactorObject, addr 0x2cfe994, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* get_interactorObject();

  /// @brief Method get_manager, addr 0x2cfea10, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> get_manager();

  /// @brief Method set_interactableObject, addr 0x2cfea08, size 0x8, virtual false, abstract: false, final false
  inline void set_interactableObject(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* value);

  /// @brief Method set_interactorObject, addr 0x2cfea00, size 0x8, virtual false, abstract: false, final false
  inline void set_interactorObject(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* value);

  /// @brief Method set_manager, addr 0x2cfea18, size 0x8, virtual false, abstract: false, final false
  inline void set_manager(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectEnterEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SelectEnterEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectEnterEventArgs(SelectEnterEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectEnterEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectEnterEventArgs(SelectEnterEventArgs const&) = delete;

  /// @brief Field <manager>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> ____manager_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs, ____manager_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*, "UnityEngine.XR.Interaction.Toolkit", "SelectEnterEventArgs");
