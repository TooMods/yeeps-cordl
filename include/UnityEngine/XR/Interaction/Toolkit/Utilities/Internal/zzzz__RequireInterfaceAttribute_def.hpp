#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(RequireInterfaceAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Internal {
class RequireInterfaceAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute);
// Type: UnityEngine.XR.Interaction.Toolkit.Utilities.Internal::RequireInterfaceAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Internal {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Utilities.Internal::RequireInterfaceAttribute*
class CORDL_TYPE RequireInterfaceAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  /// @brief Field <interfaceType>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__interfaceType_k__BackingField, put = __cordl_internal_set__interfaceType_k__BackingField))::System::Type* _interfaceType_k__BackingField;

  __declspec(property(get = get_interfaceType))::System::Type* interfaceType;

  static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute* New_ctor(::System::Type* interfaceType);

  constexpr ::System::Type*& __cordl_internal_get__interfaceType_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__interfaceType_k__BackingField() const;

  constexpr void __cordl_internal_set__interfaceType_k__BackingField(::System::Type* value);

  /// @brief Method .ctor, addr 0x3022c48, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* interfaceType);

  /// @brief Method get_interfaceType, addr 0x3022c40, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_interfaceType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RequireInterfaceAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RequireInterfaceAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RequireInterfaceAttribute(RequireInterfaceAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RequireInterfaceAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RequireInterfaceAttribute(RequireInterfaceAttribute const&) = delete;

  /// @brief Field <interfaceType>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____interfaceType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute, ____interfaceType_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Internal
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute*, "UnityEngine.XR.Interaction.Toolkit.Utilities.Internal", "RequireInterfaceAttribute");
