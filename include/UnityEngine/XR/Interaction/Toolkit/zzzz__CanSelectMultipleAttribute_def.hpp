#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(CanSelectMultipleAttribute)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class CanSelectMultipleAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute);
// Type: UnityEngine.XR.Interaction.Toolkit::CanSelectMultipleAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::CanSelectMultipleAttribute*
class CORDL_TYPE CanSelectMultipleAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <allowMultiple>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__allowMultiple_k__BackingField, put = __cordl_internal_set__allowMultiple_k__BackingField)) bool _allowMultiple_k__BackingField;

  __declspec(property(get = get_allowMultiple)) bool allowMultiple;

  static inline ::UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute* New_ctor(bool allowMultiple);

  constexpr bool const& __cordl_internal_get__allowMultiple_k__BackingField() const;

  constexpr bool& __cordl_internal_get__allowMultiple_k__BackingField();

  constexpr void __cordl_internal_set__allowMultiple_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x2596f88, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool allowMultiple);

  /// @brief Method get_allowMultiple, addr 0x2596f80, size 0x8, virtual false, abstract: false, final false
  inline bool get_allowMultiple();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CanSelectMultipleAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CanSelectMultipleAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CanSelectMultipleAttribute(CanSelectMultipleAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CanSelectMultipleAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CanSelectMultipleAttribute(CanSelectMultipleAttribute const&) = delete;

  /// @brief Field <allowMultiple>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____allowMultiple_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute, ____allowMultiple_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute*, "UnityEngine.XR.Interaction.Toolkit", "CanSelectMultipleAttribute");
