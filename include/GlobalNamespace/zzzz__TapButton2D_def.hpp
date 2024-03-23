#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ButtonController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TapButton2D)
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class TapButton2D;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TapButton2D);
// Type: ::TapButton2D
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TapButton2D*
class CORDL_TYPE TapButton2D : public ::GlobalNamespace::ButtonController {
public:
  // Declarations
  /// @brief Field blockScaling, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_blockScaling, put = __cordl_internal_set_blockScaling)) bool blockScaling;

  /// @brief Field button, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_button, put = __cordl_internal_set_button))::UnityW<::UnityEngine::UI::Button> button;

  /// @brief Field iconImage, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_iconImage, put = __cordl_internal_set_iconImage))::UnityW<::UnityEngine::UI::Image> iconImage;

  /// @brief Field messageText, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_messageText, put = __cordl_internal_set_messageText))::UnityW<::UnityEngine::UI::Text> messageText;

  /// @brief Field targetScale, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_targetScale, put = __cordl_internal_set_targetScale)) float_t targetScale;

  /// @brief Method Deflate, addr 0x29d7b30, size 0x18, virtual false, abstract: false, final false
  inline void Deflate();

  /// @brief Method Inflate, addr 0x29d7b14, size 0x1c, virtual false, abstract: false, final false
  inline void Inflate();

  static inline ::GlobalNamespace::TapButton2D* New_ctor();

  /// @brief Method OnDisable, addr 0x29d7e1c, size 0x18, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method SetIcon, addr 0x29d7d4c, size 0x98, virtual true, abstract: false, final false
  inline void SetIcon(::UnityEngine::Sprite* newIcon);

  /// @brief Method SetInteractable, addr 0x29d7de4, size 0x38, virtual true, abstract: false, final false
  inline void SetInteractable(bool newInteractable);

  /// @brief Method SetMessage, addr 0x29d7cac, size 0xa0, virtual true, abstract: false, final false
  inline void SetMessage(::StringW newMessage);

  /// @brief Method Update, addr 0x29d7b48, size 0x164, virtual false, abstract: false, final false
  inline void Update();

  constexpr bool const& __cordl_internal_get_blockScaling() const;

  constexpr bool& __cordl_internal_get_blockScaling();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_button() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_button();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_iconImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_iconImage();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_messageText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_messageText();

  constexpr float_t const& __cordl_internal_get_targetScale() const;

  constexpr float_t& __cordl_internal_get_targetScale();

  constexpr void __cordl_internal_set_blockScaling(bool value);

  constexpr void __cordl_internal_set_button(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set_iconImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_messageText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_targetScale(float_t value);

  /// @brief Method .ctor, addr 0x29d7e34, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TapButton2D();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TapButton2D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TapButton2D(TapButton2D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TapButton2D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TapButton2D(TapButton2D const&) = delete;

  /// @brief Field button, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ___button;

  /// @brief Field messageText, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___messageText;

  /// @brief Field iconImage, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___iconImage;

  /// @brief Field blockScaling, offset: 0x50, size: 0x1, def value: None
  bool ___blockScaling;

  /// @brief Field targetScale, offset: 0x54, size: 0x4, def value: None
  float_t ___targetScale;

  /// @brief Field pressedScaleInfalteAmount offset 0xffffffff size 0x4
  static constexpr float_t pressedScaleInfalteAmount{ 0.175 };

  /// @brief Field scaleLerpSpeed offset 0xffffffff size 0x4
  static constexpr float_t scaleLerpSpeed{ 7.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TapButton2D, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TapButton2D, ___button) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TapButton2D, ___messageText) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TapButton2D, ___iconImage) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TapButton2D, ___blockScaling) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TapButton2D, ___targetScale) == 0x54, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TapButton2D);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TapButton2D*, "", "TapButton2D");
