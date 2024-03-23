#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ProgressIndicator_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ProgressBar)
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace GlobalNamespace {
class ProgressBar;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ProgressBar);
// Type: ::ProgressBar
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ProgressBar*
class CORDL_TYPE ProgressBar : public ::GlobalNamespace::ProgressIndicator {
public:
  // Declarations
  /// @brief Field fill, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_fill, put = __cordl_internal_set_fill))::UnityW<::UnityEngine::UI::Image> fill;

  /// @brief Field fillRect, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_fillRect, put = __cordl_internal_set_fillRect))::UnityW<::UnityEngine::RectTransform> fillRect;

  static inline ::GlobalNamespace::ProgressBar* New_ctor();

  /// @brief Method SetColor, addr 0xf2034c, size 0x24, virtual true, abstract: false, final false
  inline void SetColor(::UnityEngine::Color color);

  /// @brief Method SetProgress, addr 0xf2032c, size 0x20, virtual true, abstract: false, final false
  inline void SetProgress(float_t progress);

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_fill() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_fill();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_fillRect() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_fillRect();

  constexpr void __cordl_internal_set_fill(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_fillRect(::UnityW<::UnityEngine::RectTransform> value);

  /// @brief Method .ctor, addr 0xf20370, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProgressBar();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProgressBar", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProgressBar(ProgressBar&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProgressBar", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProgressBar(ProgressBar const&) = delete;

  /// @brief Field fill, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___fill;

  /// @brief Field fillRect, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___fillRect;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ProgressBar, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressBar, ___fill) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressBar, ___fillRect) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ProgressBar);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ProgressBar*, "", "ProgressBar");
