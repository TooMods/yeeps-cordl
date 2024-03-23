#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__BaseRegistrationEventArgs_def.hpp"
CORDL_MODULE_EXPORT(InteractionGroupUnregisteredEventArgs)
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractionGroup;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractionGroupUnregisteredEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs);
// Type: UnityEngine.XR.Interaction.Toolkit::InteractionGroupUnregisteredEventArgs
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::InteractionGroupUnregisteredEventArgs*
class CORDL_TYPE InteractionGroupUnregisteredEventArgs : public ::UnityEngine::XR::Interaction::Toolkit::BaseRegistrationEventArgs {
public:
  // Declarations
  /// @brief Field <interactionGroupObject>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__interactionGroupObject_k__BackingField,
                      put = __cordl_internal_set__interactionGroupObject_k__BackingField))::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* _interactionGroupObject_k__BackingField;

  __declspec(property(get = get_interactionGroupObject, put = set_interactionGroupObject))::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* interactionGroupObject;

  static inline ::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs* New_ctor();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*& __cordl_internal_get__interactionGroupObject_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*> const& __cordl_internal_get__interactionGroupObject_k__BackingField() const;

  constexpr void __cordl_internal_set__interactionGroupObject_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* value);

  /// @brief Method .ctor, addr 0x2cfeec8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_interactionGroupObject, addr 0x2cfeeb8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* get_interactionGroupObject();

  /// @brief Method set_interactionGroupObject, addr 0x2cfeec0, size 0x8, virtual false, abstract: false, final false
  inline void set_interactionGroupObject(::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InteractionGroupUnregisteredEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InteractionGroupUnregisteredEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InteractionGroupUnregisteredEventArgs(InteractionGroupUnregisteredEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InteractionGroupUnregisteredEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InteractionGroupUnregisteredEventArgs(InteractionGroupUnregisteredEventArgs const&) = delete;

  /// @brief Field <interactionGroupObject>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* ____interactionGroupObject_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs, ____interactionGroupObject_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*, "UnityEngine.XR.Interaction.Toolkit", "InteractionGroupUnregisteredEventArgs");
