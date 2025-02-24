#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ScriptableSettingsPathAttribute)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class ScriptableSettingsPathAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::ScriptableSettingsPathAttribute);
// Type: UnityEngine.XR.Interaction.Toolkit.Utilities::ScriptableSettingsPathAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Utilities::ScriptableSettingsPathAttribute*
class CORDL_TYPE ScriptableSettingsPathAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <path>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__path_k__BackingField, put = __cordl_internal_set__path_k__BackingField))::StringW _path_k__BackingField;

  __declspec(property(get = get_path, put = set_path))::StringW path;

  static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::ScriptableSettingsPathAttribute* New_ctor(::StringW path);

  constexpr ::StringW const& __cordl_internal_get__path_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__path_k__BackingField();

  constexpr void __cordl_internal_set__path_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x301fc38, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW path);

  /// @brief Method get_path, addr 0x301fc28, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_path();

  /// @brief Method set_path, addr 0x301fc30, size 0x8, virtual false, abstract: false, final false
  inline void set_path(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableSettingsPathAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableSettingsPathAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableSettingsPathAttribute(ScriptableSettingsPathAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableSettingsPathAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableSettingsPathAttribute(ScriptableSettingsPathAttribute const&) = delete;

  /// @brief Field <path>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____path_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Utilities::ScriptableSettingsPathAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::ScriptableSettingsPathAttribute, ____path_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Utilities
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Utilities::ScriptableSettingsPathAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Utilities::ScriptableSettingsPathAttribute*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "ScriptableSettingsPathAttribute");
