#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CurrencyDisplay)
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class CurrencyDisplay;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CurrencyDisplay);
// Type: ::CurrencyDisplay
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CurrencyDisplay*
class CORDL_TYPE CurrencyDisplay : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field currencyAmountText, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_currencyAmountText, put = __cordl_internal_set_currencyAmountText))::UnityW<::UnityEngine::UI::Text> currencyAmountText;

  /// @brief Field currencyIcon, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_currencyIcon, put = __cordl_internal_set_currencyIcon))::UnityW<::UnityEngine::UI::Image> currencyIcon;

  /// @brief Field overrideColor, offset 0x28, size 0x14
  __declspec(property(get = __cordl_internal_get_overrideColor, put = __cordl_internal_set_overrideColor))::System::Nullable_1<::UnityEngine::Color> overrideColor;

  /// @brief Method ClearOverrideColor, addr 0x15446a0, size 0xc0, virtual false, abstract: false, final false
  inline void ClearOverrideColor();

  /// @brief Method Display, addr 0x1542798, size 0x138, virtual false, abstract: false, final false
  inline void Display(int32_t amount);

  static inline ::GlobalNamespace::CurrencyDisplay* New_ctor();

  /// @brief Method SetOverrideColor, addr 0x1544760, size 0xf0, virtual false, abstract: false, final false
  inline void SetOverrideColor(::UnityEngine::Color color);

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_currencyAmountText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_currencyAmountText();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_currencyIcon() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_currencyIcon();

  constexpr ::System::Nullable_1<::UnityEngine::Color> const& __cordl_internal_get_overrideColor() const;

  constexpr ::System::Nullable_1<::UnityEngine::Color>& __cordl_internal_get_overrideColor();

  constexpr void __cordl_internal_set_currencyAmountText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_currencyIcon(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_overrideColor(::System::Nullable_1<::UnityEngine::Color> value);

  /// @brief Method .ctor, addr 0x15473a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CurrencyDisplay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CurrencyDisplay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CurrencyDisplay(CurrencyDisplay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CurrencyDisplay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CurrencyDisplay(CurrencyDisplay const&) = delete;

  /// @brief Field currencyAmountText, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___currencyAmountText;

  /// @brief Field currencyIcon, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___currencyIcon;

  /// @brief Field overrideColor, offset: 0x28, size: 0x14, def value: None
  ::System::Nullable_1<::UnityEngine::Color> ___overrideColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CurrencyDisplay, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CurrencyDisplay, ___currencyAmountText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CurrencyDisplay, ___currencyIcon) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CurrencyDisplay, ___overrideColor) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CurrencyDisplay);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CurrencyDisplay*, "", "CurrencyDisplay");
