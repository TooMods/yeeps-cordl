#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ScriptableSettingsPathAttribute)
// Forward declare root types
namespace Unity::XR::CoreUtils {
class ScriptableSettingsPathAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::ScriptableSettingsPathAttribute);
// Type: Unity.XR.CoreUtils::ScriptableSettingsPathAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::ScriptableSettingsPathAttribute*
class CORDL_TYPE ScriptableSettingsPathAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_Path))::StringW Path;

  /// @brief Field m_Path, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Path, put = __cordl_internal_set_m_Path))::StringW m_Path;

  static inline ::Unity::XR::CoreUtils::ScriptableSettingsPathAttribute* New_ctor(::StringW path);

  constexpr ::StringW const& __cordl_internal_get_m_Path() const;

  constexpr ::StringW& __cordl_internal_get_m_Path();

  constexpr void __cordl_internal_set_m_Path(::StringW value);

  /// @brief Method .ctor, addr 0x2872878, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW path);

  /// @brief Method get_Path, addr 0x2872870, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Path();

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

  /// @brief Field m_Path, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_Path;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::ScriptableSettingsPathAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::XR::CoreUtils::ScriptableSettingsPathAttribute, ___m_Path) == 0x10, "Offset mismatch!");

} // namespace Unity::XR::CoreUtils
NEED_NO_BOX(::Unity::XR::CoreUtils::ScriptableSettingsPathAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::ScriptableSettingsPathAttribute*, "Unity.XR.CoreUtils", "ScriptableSettingsPathAttribute");
