#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__BaseRegistrationEventArgs_def.hpp"
CORDL_MODULE_EXPORT(InteractableUnregisteredEventArgs)
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRBaseInteractable;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractableUnregisteredEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs);
// Type: UnityEngine.XR.Interaction.Toolkit::InteractableUnregisteredEventArgs
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::InteractableUnregisteredEventArgs*
class CORDL_TYPE InteractableUnregisteredEventArgs : public ::UnityEngine::XR::Interaction::Toolkit::BaseRegistrationEventArgs {
public:
  // Declarations
  /// @brief Field <interactableObject>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__interactableObject_k__BackingField,
                      put = __cordl_internal_set__interactableObject_k__BackingField))::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* _interactableObject_k__BackingField;

  __declspec(property(get = get_interactable, put = set_interactable))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable> interactable;

  __declspec(property(get = get_interactableObject, put = set_interactableObject))::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactableObject;

  static inline ::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs* New_ctor();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*& __cordl_internal_get__interactableObject_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*> const& __cordl_internal_get__interactableObject_k__BackingField() const;

  constexpr void __cordl_internal_set__interactableObject_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* value);

  /// @brief Method .ctor, addr 0x2cff000, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_interactable, addr 0x2cfef7c, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable> get_interactable();

  /// @brief Method get_interactableObject, addr 0x2cfef6c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* get_interactableObject();

  /// @brief Method set_interactable, addr 0x2cfeff8, size 0x8, virtual false, abstract: false, final false
  inline void set_interactable(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* value);

  /// @brief Method set_interactableObject, addr 0x2cfef74, size 0x8, virtual false, abstract: false, final false
  inline void set_interactableObject(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InteractableUnregisteredEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InteractableUnregisteredEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InteractableUnregisteredEventArgs(InteractableUnregisteredEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InteractableUnregisteredEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InteractableUnregisteredEventArgs(InteractableUnregisteredEventArgs const&) = delete;

  /// @brief Field <interactableObject>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* ____interactableObject_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs, ____interactableObject_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*, "UnityEngine.XR.Interaction.Toolkit", "InteractableUnregisteredEventArgs");
