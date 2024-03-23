#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PatternDetailsDisplayUI)
namespace GlobalNamespace {
class CurrencyDisplay;
}
namespace GlobalNamespace {
class Pattern;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace GlobalNamespace {
class PatternDetailsDisplayUI;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PatternDetailsDisplayUI);
// Type: ::PatternDetailsDisplayUI
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PatternDetailsDisplayUI*
class CORDL_TYPE PatternDetailsDisplayUI : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field canAffordColor, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get_canAffordColor, put = __cordl_internal_set_canAffordColor))::UnityEngine::Color canAffordColor;

  /// @brief Field cannotAffordColor, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get_cannotAffordColor, put = __cordl_internal_set_cannotAffordColor))::UnityEngine::Color cannotAffordColor;

  /// @brief Field currencyDisplay, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_currencyDisplay, put = __cordl_internal_set_currencyDisplay))::UnityW<::GlobalNamespace::CurrencyDisplay> currencyDisplay;

  /// @brief Field nonStuffedTypeIcon, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_nonStuffedTypeIcon, put = __cordl_internal_set_nonStuffedTypeIcon))::UnityW<::UnityEngine::UI::Image> nonStuffedTypeIcon;

  /// @brief Field patternName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_patternName, put = __cordl_internal_set_patternName))::UnityW<::UnityEngine::UI::Text> patternName;

  /// @brief Field stuffingCost, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_stuffingCost, put = __cordl_internal_set_stuffingCost))::UnityW<::UnityEngine::UI::Text> stuffingCost;

  /// @brief Field stuffingIcon, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_stuffingIcon, put = __cordl_internal_set_stuffingIcon))::UnityW<::UnityEngine::UI::Image> stuffingIcon;

  /// @brief Method Clear, addr 0x1550120, size 0x24, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Display, addr 0x154ff08, size 0x1ac, virtual false, abstract: false, final false
  inline void Display(::GlobalNamespace::Pattern* pattern);

  /// @brief Method IsDetailed, addr 0x15501ec, size 0x60, virtual false, abstract: false, final false
  inline bool IsDetailed();

  static inline ::GlobalNamespace::PatternDetailsDisplayUI* New_ctor();

  /// @brief Method SetCanAfford, addr 0x1550144, size 0xa8, virtual false, abstract: false, final false
  inline void SetCanAfford(bool newCanAfford);

  /// @brief Method SetHasCost, addr 0x15500b4, size 0x5c, virtual false, abstract: false, final false
  inline void SetHasCost(bool newHasCost);

  /// @brief Method SetPrice, addr 0x1550110, size 0x10, virtual false, abstract: false, final false
  inline void SetPrice(int32_t price);

  constexpr ::UnityEngine::Color const& __cordl_internal_get_canAffordColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_canAffordColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_cannotAffordColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_cannotAffordColor();

  constexpr ::UnityW<::GlobalNamespace::CurrencyDisplay> const& __cordl_internal_get_currencyDisplay() const;

  constexpr ::UnityW<::GlobalNamespace::CurrencyDisplay>& __cordl_internal_get_currencyDisplay();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_nonStuffedTypeIcon() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_nonStuffedTypeIcon();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_patternName() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_patternName();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_stuffingCost() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_stuffingCost();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_stuffingIcon() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_stuffingIcon();

  constexpr void __cordl_internal_set_canAffordColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_cannotAffordColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_currencyDisplay(::UnityW<::GlobalNamespace::CurrencyDisplay> value);

  constexpr void __cordl_internal_set_nonStuffedTypeIcon(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_patternName(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_stuffingCost(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_stuffingIcon(::UnityW<::UnityEngine::UI::Image> value);

  /// @brief Method .ctor, addr 0x155024c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PatternDetailsDisplayUI();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PatternDetailsDisplayUI", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PatternDetailsDisplayUI(PatternDetailsDisplayUI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PatternDetailsDisplayUI", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PatternDetailsDisplayUI(PatternDetailsDisplayUI const&) = delete;

  /// @brief Field patternName, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___patternName;

  /// @brief Field currencyDisplay, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CurrencyDisplay> ___currencyDisplay;

  /// @brief Field nonStuffedTypeIcon, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___nonStuffedTypeIcon;

  /// @brief Field stuffingIcon, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___stuffingIcon;

  /// @brief Field stuffingCost, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___stuffingCost;

  /// @brief Field canAffordColor, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Color ___canAffordColor;

  /// @brief Field cannotAffordColor, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Color ___cannotAffordColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PatternDetailsDisplayUI, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternDetailsDisplayUI, ___patternName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternDetailsDisplayUI, ___currencyDisplay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternDetailsDisplayUI, ___nonStuffedTypeIcon) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternDetailsDisplayUI, ___stuffingIcon) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternDetailsDisplayUI, ___stuffingCost) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternDetailsDisplayUI, ___canAffordColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternDetailsDisplayUI, ___cannotAffordColor) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PatternDetailsDisplayUI);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PatternDetailsDisplayUI*, "", "PatternDetailsDisplayUI");
