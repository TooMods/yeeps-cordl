#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Theme/Primitives/zzzz__ColorBlendMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Theme/zzzz__BaseAffordanceTheme_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ColorAffordanceTheme)
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
struct ColorBlendMode;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme {
template <typename T> class BaseAffordanceTheme_1;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
class ColorAffordanceTheme;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceTheme);
// Type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives::ColorAffordanceTheme
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives::ColorAffordanceTheme*
class CORDL_TYPE ColorAffordanceTheme : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<::UnityEngine::Color> {
public:
  // Declarations
  __declspec(property(get = get_blendAmount, put = set_blendAmount)) float_t blendAmount;

  __declspec(property(get = get_colorBlendMode, put = set_colorBlendMode))::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode colorBlendMode;

  /// @brief Field m_BlendAmount, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BlendAmount, put = __cordl_internal_set_m_BlendAmount)) float_t m_BlendAmount;

  /// @brief Field m_ColorBlendMode, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ColorBlendMode,
                      put = __cordl_internal_set_m_ColorBlendMode))::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode m_ColorBlendMode;

  /// @brief Method CopyFrom, addr 0x2a2a5d0, size 0xbc, virtual true, abstract: false, final false
  inline void CopyFrom(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<::UnityEngine::Color>* other);

  static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceTheme* New_ctor();

  constexpr float_t const& __cordl_internal_get_m_BlendAmount() const;

  constexpr float_t& __cordl_internal_get_m_BlendAmount();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode const& __cordl_internal_get_m_ColorBlendMode() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode& __cordl_internal_get_m_ColorBlendMode();

  constexpr void __cordl_internal_set_m_BlendAmount(float_t value);

  constexpr void __cordl_internal_set_m_ColorBlendMode(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode value);

  /// @brief Method .ctor, addr 0x2a2a68c, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_blendAmount, addr 0x2a2a5c0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_blendAmount();

  /// @brief Method get_colorBlendMode, addr 0x2a2a5b0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode get_colorBlendMode();

  /// @brief Method set_blendAmount, addr 0x2a2a5c8, size 0x8, virtual false, abstract: false, final false
  inline void set_blendAmount(float_t value);

  /// @brief Method set_colorBlendMode, addr 0x2a2a5b8, size 0x8, virtual false, abstract: false, final false
  inline void set_colorBlendMode(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorAffordanceTheme();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorAffordanceTheme", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorAffordanceTheme(ColorAffordanceTheme&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorAffordanceTheme", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorAffordanceTheme(ColorAffordanceTheme const&) = delete;

  /// @brief Field m_ColorBlendMode, offset: 0x20, size: 0x1, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode ___m_ColorBlendMode;

  /// @brief Field m_BlendAmount, offset: 0x24, size: 0x4, def value: None
  float_t ___m_BlendAmount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceTheme, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceTheme, ___m_ColorBlendMode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceTheme, ___m_BlendAmount) == 0x24, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceTheme);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceTheme*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives",
                       "ColorAffordanceTheme");
