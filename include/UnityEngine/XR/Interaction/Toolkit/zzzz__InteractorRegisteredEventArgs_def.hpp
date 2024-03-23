#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__BaseRegistrationEventArgs_def.hpp"
CORDL_MODULE_EXPORT(InteractorRegisteredEventArgs)
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractionGroup;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRBaseInteractor;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractorRegisteredEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs);
// Type: UnityEngine.XR.Interaction.Toolkit::InteractorRegisteredEventArgs
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::InteractorRegisteredEventArgs*
class CORDL_TYPE InteractorRegisteredEventArgs : public ::UnityEngine::XR::Interaction::Toolkit::BaseRegistrationEventArgs {
public:
  // Declarations
  /// @brief Field <containingGroupObject>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__containingGroupObject_k__BackingField,
                      put = __cordl_internal_set__containingGroupObject_k__BackingField))::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* _containingGroupObject_k__BackingField;

  /// @brief Field <interactorObject>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__interactorObject_k__BackingField,
                      put = __cordl_internal_set__interactorObject_k__BackingField))::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* _interactorObject_k__BackingField;

  __declspec(property(get = get_containingGroupObject, put = set_containingGroupObject))::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* containingGroupObject;

  __declspec(property(get = get_interactor, put = set_interactor))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor> interactor;

  __declspec(property(get = get_interactorObject, put = set_interactorObject))::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactorObject;

  static inline ::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs* New_ctor();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*& __cordl_internal_get__containingGroupObject_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*> const& __cordl_internal_get__containingGroupObject_k__BackingField() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*& __cordl_internal_get__interactorObject_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*> const& __cordl_internal_get__interactorObject_k__BackingField() const;

  constexpr void __cordl_internal_set__containingGroupObject_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* value);

  constexpr void __cordl_internal_set__interactorObject_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* value);

  /// @brief Method .ctor, addr 0x2cfee14, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_containingGroupObject, addr 0x2cfed80, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* get_containingGroupObject();

  /// @brief Method get_interactor, addr 0x2cfed90, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor> get_interactor();

  /// @brief Method get_interactorObject, addr 0x2cfed70, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* get_interactorObject();

  /// @brief Method set_containingGroupObject, addr 0x2cfed88, size 0x8, virtual false, abstract: false, final false
  inline void set_containingGroupObject(::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* value);

  /// @brief Method set_interactor, addr 0x2cfee0c, size 0x8, virtual false, abstract: false, final false
  inline void set_interactor(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* value);

  /// @brief Method set_interactorObject, addr 0x2cfed78, size 0x8, virtual false, abstract: false, final false
  inline void set_interactorObject(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InteractorRegisteredEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InteractorRegisteredEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InteractorRegisteredEventArgs(InteractorRegisteredEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InteractorRegisteredEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InteractorRegisteredEventArgs(InteractorRegisteredEventArgs const&) = delete;

  /// @brief Field <interactorObject>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* ____interactorObject_k__BackingField;

  /// @brief Field <containingGroupObject>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* ____containingGroupObject_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs, ____interactorObject_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs, ____containingGroupObject_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*, "UnityEngine.XR.Interaction.Toolkit", "InteractorRegisteredEventArgs");
