#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Theme/zzzz__BaseAffordanceTheme_1_def.hpp"
CORDL_MODULE_EXPORT(Vector4AffordanceTheme)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
class Vector4AffordanceTheme;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector4AffordanceTheme);
// Type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives::Vector4AffordanceTheme
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives::Vector4AffordanceTheme*
class CORDL_TYPE Vector4AffordanceTheme : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<::Unity::Mathematics::float4> {
public:
  // Declarations
  static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector4AffordanceTheme* New_ctor();

  /// @brief Method .ctor, addr 0x2a2ab94, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector4AffordanceTheme();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector4AffordanceTheme", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector4AffordanceTheme(Vector4AffordanceTheme&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector4AffordanceTheme", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector4AffordanceTheme(Vector4AffordanceTheme const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector4AffordanceTheme, 0x20>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector4AffordanceTheme);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector4AffordanceTheme*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives",
                       "Vector4AffordanceTheme");
