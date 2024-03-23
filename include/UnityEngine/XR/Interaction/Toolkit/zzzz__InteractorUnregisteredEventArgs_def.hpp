#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__BaseRegistrationEventArgs_def.hpp"
CORDL_MODULE_EXPORT(InteractorUnregisteredEventArgs)
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRBaseInteractor;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractorUnregisteredEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs);
// Type: UnityEngine.XR.Interaction.Toolkit::InteractorUnregisteredEventArgs
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::InteractorUnregisteredEventArgs*
class CORDL_TYPE InteractorUnregisteredEventArgs : public ::UnityEngine::XR::Interaction::Toolkit::BaseRegistrationEventArgs {
public:
  // Declarations
  /// @brief Field <interactorObject>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__interactorObject_k__BackingField,
                      put = __cordl_internal_set__interactorObject_k__BackingField))::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* _interactorObject_k__BackingField;

  __declspec(property(get = get_interactor, put = set_interactor))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor> interactor;

  __declspec(property(get = get_interactorObject, put = set_interactorObject))::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactorObject;

  static inline ::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs* New_ctor();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*& __cordl_internal_get__interactorObject_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*> const& __cordl_internal_get__interactorObject_k__BackingField() const;

  constexpr void __cordl_internal_set__interactorObject_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* value);

  /// @brief Method .ctor, addr 0x2cfef64, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_interactor, addr 0x2cfeee0, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor> get_interactor();

  /// @brief Method get_interactorObject, addr 0x2cfeed0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* get_interactorObject();

  /// @brief Method set_interactor, addr 0x2cfef5c, size 0x8, virtual false, abstract: false, final false
  inline void set_interactor(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* value);

  /// @brief Method set_interactorObject, addr 0x2cfeed8, size 0x8, virtual false, abstract: false, final false
  inline void set_interactorObject(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InteractorUnregisteredEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InteractorUnregisteredEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InteractorUnregisteredEventArgs(InteractorUnregisteredEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InteractorUnregisteredEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InteractorUnregisteredEventArgs(InteractorUnregisteredEventArgs const&) = delete;

  /// @brief Field <interactorObject>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* ____interactorObject_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs, ____interactorObject_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*, "UnityEngine.XR.Interaction.Toolkit", "InteractorUnregisteredEventArgs");
