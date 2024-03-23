#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ButtonController_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleButtonController)
namespace GlobalNamespace {
class PushButtonDriver;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRSimpleInteractable;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class SimpleButtonController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SimpleButtonController);
// Type: ::SimpleButtonController
// SizeInfo { instance_size: 216, native_size: -1, calculated_instance_size: 216, calculated_native_size: 209, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SimpleButtonController*
class CORDL_TYPE SimpleButtonController : public ::GlobalNamespace::ButtonController {
public:
  // Declarations
  /// @brief Field hoveredColor, offset 0x70, size 0x10
  __declspec(property(get = __cordl_internal_get_hoveredColor, put = __cordl_internal_set_hoveredColor))::UnityEngine::Color hoveredColor;

  /// @brief Field iconImage, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_iconImage, put = __cordl_internal_set_iconImage))::UnityW<::UnityEngine::UI::Image> iconImage;

  /// @brief Field interactionLayers, offset 0xb0, size 0x4
  __declspec(property(get = __cordl_internal_get_interactionLayers, put = __cordl_internal_set_interactionLayers)) int32_t interactionLayers;

  /// @brief Field isInitialized, offset 0xd0, size 0x1
  __declspec(property(get = __cordl_internal_get_isInitialized, put = __cordl_internal_set_isInitialized)) bool isInitialized;

  /// @brief Field isSimpleButtonPressed, offset 0xc8, size 0x1
  __declspec(property(get = __cordl_internal_get_isSimpleButtonPressed, put = __cordl_internal_set_isSimpleButtonPressed)) bool isSimpleButtonPressed;

  /// @brief Field maintainSameVisualsWhenNotInteractable, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_maintainSameVisualsWhenNotInteractable,
                      put = __cordl_internal_set_maintainSameVisualsWhenNotInteractable)) bool maintainSameVisualsWhenNotInteractable;

  /// @brief Field material, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material))::UnityW<::UnityEngine::Material> material;

  /// @brief Field meshRenderer, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_meshRenderer, put = __cordl_internal_set_meshRenderer))::UnityW<::UnityEngine::MeshRenderer> meshRenderer;

  /// @brief Field messageText, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_messageText, put = __cordl_internal_set_messageText))::UnityW<::UnityEngine::UI::Text> messageText;

  /// @brief Field nextValidPressTime, offset 0xcc, size 0x4
  __declspec(property(get = __cordl_internal_get_nextValidPressTime, put = __cordl_internal_set_nextValidPressTime)) float_t nextValidPressTime;

  /// @brief Field nonInteractableColor, offset 0x90, size 0x10
  __declspec(property(get = __cordl_internal_get_nonInteractableColor, put = __cordl_internal_set_nonInteractableColor))::UnityEngine::Color nonInteractableColor;

  /// @brief Field playerMustFaceButton, offset 0xb4, size 0x1
  __declspec(property(get = __cordl_internal_get_playerMustFaceButton, put = __cordl_internal_set_playerMustFaceButton)) bool playerMustFaceButton;

  /// @brief Field pressSoundKey, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_pressSoundKey, put = __cordl_internal_set_pressSoundKey))::StringW pressSoundKey;

  /// @brief Field pressedColor, offset 0x80, size 0x10
  __declspec(property(get = __cordl_internal_get_pressedColor, put = __cordl_internal_set_pressedColor))::UnityEngine::Color pressedColor;

  /// @brief Field pushButtonDriver, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_pushButtonDriver, put = __cordl_internal_set_pushButtonDriver))::UnityW<::GlobalNamespace::PushButtonDriver> pushButtonDriver;

  /// @brief Field releaseSoundKey, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_releaseSoundKey, put = __cordl_internal_set_releaseSoundKey))::StringW releaseSoundKey;

  /// @brief Field simpleInteractable, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_simpleInteractable,
                      put = __cordl_internal_set_simpleInteractable))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRSimpleInteractable> simpleInteractable;

  /// @brief Field unhoveredColor, offset 0x60, size 0x10
  __declspec(property(get = __cordl_internal_get_unhoveredColor, put = __cordl_internal_set_unhoveredColor))::UnityEngine::Color unhoveredColor;

  /// @brief Method CanPlayerPressButton, addr 0x29d7854, size 0x1e4, virtual false, abstract: false, final false
  inline bool CanPlayerPressButton();

  /// @brief Method Initialize, addr 0x29d71d4, size 0x130, virtual false, abstract: false, final false
  inline void Initialize();

  static inline ::GlobalNamespace::SimpleButtonController* New_ctor();

  /// @brief Method OnHoverEntered, addr 0x29d7aec, size 0xc, virtual true, abstract: false, final false
  inline void OnHoverEntered();

  /// @brief Method OnHoverExited, addr 0x29d7af8, size 0x8, virtual true, abstract: false, final false
  inline void OnHoverExited();

  /// @brief Method OnPressEntered, addr 0x29d76c8, size 0x18c, virtual true, abstract: false, final false
  inline void OnPressEntered();

  /// @brief Method OnPressExited, addr 0x29d7a38, size 0xb4, virtual true, abstract: false, final false
  inline void OnPressExited();

  /// @brief Method RefreshVisuals, addr 0x29d7304, size 0x110, virtual false, abstract: false, final false
  inline void RefreshVisuals();

  /// @brief Method SetIcon, addr 0x29d75e8, size 0xe0, virtual true, abstract: false, final false
  inline void SetIcon(::UnityEngine::Sprite* newIcon);

  /// @brief Method SetInteractable, addr 0x29d7424, size 0x128, virtual true, abstract: false, final false
  inline void SetInteractable(bool newInteractable);

  /// @brief Method SetMessage, addr 0x29d754c, size 0x9c, virtual true, abstract: false, final false
  inline void SetMessage(::StringW newMessage);

  /// @brief Method Start, addr 0x29d7414, size 0x10, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_hoveredColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_hoveredColor();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_iconImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_iconImage();

  constexpr int32_t const& __cordl_internal_get_interactionLayers() const;

  constexpr int32_t& __cordl_internal_get_interactionLayers();

  constexpr bool const& __cordl_internal_get_isInitialized() const;

  constexpr bool& __cordl_internal_get_isInitialized();

  constexpr bool const& __cordl_internal_get_isSimpleButtonPressed() const;

  constexpr bool& __cordl_internal_get_isSimpleButtonPressed();

  constexpr bool const& __cordl_internal_get_maintainSameVisualsWhenNotInteractable() const;

  constexpr bool& __cordl_internal_get_maintainSameVisualsWhenNotInteractable();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_meshRenderer() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_meshRenderer();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_messageText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_messageText();

  constexpr float_t const& __cordl_internal_get_nextValidPressTime() const;

  constexpr float_t& __cordl_internal_get_nextValidPressTime();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_nonInteractableColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_nonInteractableColor();

  constexpr bool const& __cordl_internal_get_playerMustFaceButton() const;

  constexpr bool& __cordl_internal_get_playerMustFaceButton();

  constexpr ::StringW const& __cordl_internal_get_pressSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_pressSoundKey();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_pressedColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_pressedColor();

  constexpr ::UnityW<::GlobalNamespace::PushButtonDriver> const& __cordl_internal_get_pushButtonDriver() const;

  constexpr ::UnityW<::GlobalNamespace::PushButtonDriver>& __cordl_internal_get_pushButtonDriver();

  constexpr ::StringW const& __cordl_internal_get_releaseSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_releaseSoundKey();

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRSimpleInteractable> const& __cordl_internal_get_simpleInteractable() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRSimpleInteractable>& __cordl_internal_get_simpleInteractable();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_unhoveredColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_unhoveredColor();

  constexpr void __cordl_internal_set_hoveredColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_iconImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_interactionLayers(int32_t value);

  constexpr void __cordl_internal_set_isInitialized(bool value);

  constexpr void __cordl_internal_set_isSimpleButtonPressed(bool value);

  constexpr void __cordl_internal_set_maintainSameVisualsWhenNotInteractable(bool value);

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_meshRenderer(::UnityW<::UnityEngine::MeshRenderer> value);

  constexpr void __cordl_internal_set_messageText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_nextValidPressTime(float_t value);

  constexpr void __cordl_internal_set_nonInteractableColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_playerMustFaceButton(bool value);

  constexpr void __cordl_internal_set_pressSoundKey(::StringW value);

  constexpr void __cordl_internal_set_pressedColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_pushButtonDriver(::UnityW<::GlobalNamespace::PushButtonDriver> value);

  constexpr void __cordl_internal_set_releaseSoundKey(::StringW value);

  constexpr void __cordl_internal_set_simpleInteractable(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRSimpleInteractable> value);

  constexpr void __cordl_internal_set_unhoveredColor(::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x29d7b00, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleButtonController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SimpleButtonController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimpleButtonController(SimpleButtonController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimpleButtonController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimpleButtonController(SimpleButtonController const&) = delete;

  /// @brief Field messageText, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___messageText;

  /// @brief Field iconImage, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___iconImage;

  /// @brief Field pushButtonDriver, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PushButtonDriver> ___pushButtonDriver;

  /// @brief Field maintainSameVisualsWhenNotInteractable, offset: 0x50, size: 0x1, def value: None
  bool ___maintainSameVisualsWhenNotInteractable;

  /// @brief Field meshRenderer, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ___meshRenderer;

  /// @brief Field unhoveredColor, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Color ___unhoveredColor;

  /// @brief Field hoveredColor, offset: 0x70, size: 0x10, def value: None
  ::UnityEngine::Color ___hoveredColor;

  /// @brief Field pressedColor, offset: 0x80, size: 0x10, def value: None
  ::UnityEngine::Color ___pressedColor;

  /// @brief Field nonInteractableColor, offset: 0x90, size: 0x10, def value: None
  ::UnityEngine::Color ___nonInteractableColor;

  /// @brief Field material, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  /// @brief Field simpleInteractable, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRSimpleInteractable> ___simpleInteractable;

  /// @brief Field interactionLayers, offset: 0xb0, size: 0x4, def value: None
  int32_t ___interactionLayers;

  /// @brief Field playerMustFaceButton, offset: 0xb4, size: 0x1, def value: None
  bool ___playerMustFaceButton;

  /// @brief Field pressSoundKey, offset: 0xb8, size: 0x8, def value: None
  ::StringW ___pressSoundKey;

  /// @brief Field releaseSoundKey, offset: 0xc0, size: 0x8, def value: None
  ::StringW ___releaseSoundKey;

  /// @brief Field isSimpleButtonPressed, offset: 0xc8, size: 0x1, def value: None
  bool ___isSimpleButtonPressed;

  /// @brief Field nextValidPressTime, offset: 0xcc, size: 0x4, def value: None
  float_t ___nextValidPressTime;

  /// @brief Field isInitialized, offset: 0xd0, size: 0x1, def value: None
  bool ___isInitialized;

  /// @brief Field disabledIconAlpha offset 0xffffffff size 0x4
  static constexpr float_t disabledIconAlpha{ 0.3 };

  /// @brief Field pressCooldown offset 0xffffffff size 0x4
  static constexpr float_t pressCooldown{ 0.5 };

  /// @brief Field repeatPressCooldown offset 0xffffffff size 0x4
  static constexpr float_t repeatPressCooldown{ 0.1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SimpleButtonController, 0xd8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleButtonController, ___messageText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleButtonController, ___iconImage) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleButtonController, ___pushButtonDriver) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleButtonController, ___maintainSameVisualsWhenNotInteractable) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleButtonController, ___meshRenderer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleButtonController, ___unhoveredColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleButtonController, ___hoveredColor) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleButtonController, ___pressedColor) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleButtonController, ___nonInteractableColor) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleButtonController, ___material) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleButtonController, ___simpleInteractable) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleButtonController, ___interactionLayers) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleButtonController, ___playerMustFaceButton) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleButtonController, ___pressSoundKey) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleButtonController, ___releaseSoundKey) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleButtonController, ___isSimpleButtonPressed) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleButtonController, ___nextValidPressTime) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleButtonController, ___isInitialized) == 0xd0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SimpleButtonController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SimpleButtonController*, "", "SimpleButtonController");
