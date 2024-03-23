#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/CoreUtils/Datums/zzzz__DatumProperty_2_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Theme/Primitives/zzzz__ColorAffordanceThemeDatum_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Theme/Primitives/zzzz__ColorAffordanceTheme_def.hpp"
CORDL_MODULE_EXPORT(ColorAffordanceThemeDatumProperty)
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
class ColorAffordanceThemeDatum;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
class ColorAffordanceTheme;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
class ColorAffordanceThemeDatumProperty;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty);
// Type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives::ColorAffordanceThemeDatumProperty
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives::ColorAffordanceThemeDatumProperty*
class CORDL_TYPE ColorAffordanceThemeDatumProperty
    : public ::Unity::XR::CoreUtils::Datums::DatumProperty_2<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceTheme*,
                                                             ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatum>> {
public:
  // Declarations
  static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty*
  New_ctor(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatum* datum);

  static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty*
  New_ctor(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceTheme* value);

  /// @brief Method .ctor, addr 0x2a2a734, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatum* datum);

  /// @brief Method .ctor, addr 0x2a2a6dc, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceTheme* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorAffordanceThemeDatumProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorAffordanceThemeDatumProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorAffordanceThemeDatumProperty(ColorAffordanceThemeDatumProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorAffordanceThemeDatumProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorAffordanceThemeDatumProperty(ColorAffordanceThemeDatumProperty const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty, 0x28>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty*,
                       "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives", "ColorAffordanceThemeDatumProperty");
