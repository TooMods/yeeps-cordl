#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__BaseRegistrationEventArgs_def.hpp"
CORDL_MODULE_EXPORT(InteractionGroupRegisteredEventArgs)
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractionGroup;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractionGroupRegisteredEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs);
// Type: UnityEngine.XR.Interaction.Toolkit::InteractionGroupRegisteredEventArgs
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::InteractionGroupRegisteredEventArgs*
class CORDL_TYPE InteractionGroupRegisteredEventArgs : public ::UnityEngine::XR::Interaction::Toolkit::BaseRegistrationEventArgs {
public:
  // Declarations
  /// @brief Field <containingGroupObject>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__containingGroupObject_k__BackingField,
                      put = __cordl_internal_set__containingGroupObject_k__BackingField))::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* _containingGroupObject_k__BackingField;

  /// @brief Field <interactionGroupObject>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__interactionGroupObject_k__BackingField,
                      put = __cordl_internal_set__interactionGroupObject_k__BackingField))::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* _interactionGroupObject_k__BackingField;

  __declspec(property(get = get_containingGroupObject, put = set_containingGroupObject))::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* containingGroupObject;

  __declspec(property(get = get_interactionGroupObject, put = set_interactionGroupObject))::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* interactionGroupObject;

  static inline ::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs* New_ctor();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*& __cordl_internal_get__containingGroupObject_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*> const& __cordl_internal_get__containingGroupObject_k__BackingField() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*& __cordl_internal_get__interactionGroupObject_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*> const& __cordl_internal_get__interactionGroupObject_k__BackingField() const;

  constexpr void __cordl_internal_set__containingGroupObject_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* value);

  constexpr void __cordl_internal_set__interactionGroupObject_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* value);

  /// @brief Method .ctor, addr 0x2cfed68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_containingGroupObject, addr 0x2cfed58, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* get_containingGroupObject();

  /// @brief Method get_interactionGroupObject, addr 0x2cfed48, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* get_interactionGroupObject();

  /// @brief Method set_containingGroupObject, addr 0x2cfed60, size 0x8, virtual false, abstract: false, final false
  inline void set_containingGroupObject(::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* value);

  /// @brief Method set_interactionGroupObject, addr 0x2cfed50, size 0x8, virtual false, abstract: false, final false
  inline void set_interactionGroupObject(::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InteractionGroupRegisteredEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InteractionGroupRegisteredEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InteractionGroupRegisteredEventArgs(InteractionGroupRegisteredEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InteractionGroupRegisteredEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InteractionGroupRegisteredEventArgs(InteractionGroupRegisteredEventArgs const&) = delete;

  /// @brief Field <interactionGroupObject>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* ____interactionGroupObject_k__BackingField;

  /// @brief Field <containingGroupObject>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* ____containingGroupObject_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs, ____interactionGroupObject_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs, ____containingGroupObject_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*, "UnityEngine.XR.Interaction.Toolkit", "InteractionGroupRegisteredEventArgs");
