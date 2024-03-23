#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Theme/zzzz__BaseAffordanceTheme_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloatAffordanceTheme)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
class FloatAffordanceTheme;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceTheme);
// Type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives::FloatAffordanceTheme
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives::FloatAffordanceTheme*
class CORDL_TYPE FloatAffordanceTheme : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<float_t> {
public:
  // Declarations
  static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceTheme* New_ctor();

  /// @brief Method .ctor, addr 0x2a2a7d4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatAffordanceTheme();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatAffordanceTheme", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatAffordanceTheme(FloatAffordanceTheme&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatAffordanceTheme", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatAffordanceTheme(FloatAffordanceTheme const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceTheme, 0x20>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceTheme);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceTheme*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives",
                       "FloatAffordanceTheme");
