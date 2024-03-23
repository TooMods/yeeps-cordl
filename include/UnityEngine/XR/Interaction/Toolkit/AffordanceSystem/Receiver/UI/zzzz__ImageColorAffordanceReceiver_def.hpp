#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/Primitives/zzzz__ColorAffordanceReceiver_def.hpp"
CORDL_MODULE_EXPORT(ImageColorAffordanceReceiver)
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::UI {
class ImageColorAffordanceReceiver;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::UI::ImageColorAffordanceReceiver);
// Type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.UI::ImageColorAffordanceReceiver
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 187, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::UI {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.UI::ImageColorAffordanceReceiver*
class CORDL_TYPE ImageColorAffordanceReceiver : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver {
public:
  // Declarations
  __declspec(property(get = get_canvasGroup, put = set_canvasGroup))::UnityW<::UnityEngine::CanvasGroup> canvasGroup;

  __declspec(property(get = get_ignoreAlpha, put = set_ignoreAlpha)) bool ignoreAlpha;

  __declspec(property(get = get_image, put = set_image))::UnityW<::UnityEngine::UI::Image> image;

  /// @brief Field m_CanvasGroup, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CanvasGroup, put = __cordl_internal_set_m_CanvasGroup))::UnityW<::UnityEngine::CanvasGroup> m_CanvasGroup;

  /// @brief Field m_HasCanvasGroup, offset 0xba, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasCanvasGroup, put = __cordl_internal_set_m_HasCanvasGroup)) bool m_HasCanvasGroup;

  /// @brief Field m_HasImage, offset 0xb9, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasImage, put = __cordl_internal_set_m_HasImage)) bool m_HasImage;

  /// @brief Field m_IgnoreAlpha, offset 0xb8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IgnoreAlpha, put = __cordl_internal_set_m_IgnoreAlpha)) bool m_IgnoreAlpha;

  /// @brief Field m_Image, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Image, put = __cordl_internal_set_m_Image))::UnityW<::UnityEngine::UI::Image> m_Image;

  /// @brief Method GetCurrentValueForCapture, addr 0x2a2f824, size 0x74, virtual true, abstract: false, final false
  inline ::UnityEngine::Color GetCurrentValueForCapture();

  static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::UI::ImageColorAffordanceReceiver* New_ctor();

  /// @brief Method OnAffordanceValueUpdated, addr 0x2a2f6c4, size 0xd0, virtual true, abstract: false, final false
  inline void OnAffordanceValueUpdated(::UnityEngine::Color newValue);

  /// @brief Method OnEnable, addr 0x2a2f614, size 0xb0, virtual true, abstract: false, final false
  inline void OnEnable();

  constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get_m_CanvasGroup() const;

  constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get_m_CanvasGroup();

  constexpr bool const& __cordl_internal_get_m_HasCanvasGroup() const;

  constexpr bool& __cordl_internal_get_m_HasCanvasGroup();

  constexpr bool const& __cordl_internal_get_m_HasImage() const;

  constexpr bool& __cordl_internal_get_m_HasImage();

  constexpr bool const& __cordl_internal_get_m_IgnoreAlpha() const;

  constexpr bool& __cordl_internal_get_m_IgnoreAlpha();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_m_Image() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_m_Image();

  constexpr void __cordl_internal_set_m_CanvasGroup(::UnityW<::UnityEngine::CanvasGroup> value);

  constexpr void __cordl_internal_set_m_HasCanvasGroup(bool value);

  constexpr void __cordl_internal_set_m_HasImage(bool value);

  constexpr void __cordl_internal_set_m_IgnoreAlpha(bool value);

  constexpr void __cordl_internal_set_m_Image(::UnityW<::UnityEngine::UI::Image> value);

  /// @brief Method .ctor, addr 0x2a2f898, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_canvasGroup, addr 0x2a2f5f0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::CanvasGroup> get_canvasGroup();

  /// @brief Method get_ignoreAlpha, addr 0x2a2f600, size 0x8, virtual false, abstract: false, final false
  inline bool get_ignoreAlpha();

  /// @brief Method get_image, addr 0x2a2f5e0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Image> get_image();

  /// @brief Method set_canvasGroup, addr 0x2a2f5f8, size 0x8, virtual false, abstract: false, final false
  inline void set_canvasGroup(::UnityEngine::CanvasGroup* value);

  /// @brief Method set_ignoreAlpha, addr 0x2a2f608, size 0xc, virtual false, abstract: false, final false
  inline void set_ignoreAlpha(bool value);

  /// @brief Method set_image, addr 0x2a2f5e8, size 0x8, virtual false, abstract: false, final false
  inline void set_image(::UnityEngine::UI::Image* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ImageColorAffordanceReceiver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ImageColorAffordanceReceiver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ImageColorAffordanceReceiver(ImageColorAffordanceReceiver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ImageColorAffordanceReceiver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ImageColorAffordanceReceiver(ImageColorAffordanceReceiver const&) = delete;

  /// @brief Field m_Image, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___m_Image;

  /// @brief Field m_CanvasGroup, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CanvasGroup> ___m_CanvasGroup;

  /// @brief Field m_IgnoreAlpha, offset: 0xb8, size: 0x1, def value: None
  bool ___m_IgnoreAlpha;

  /// @brief Field m_HasImage, offset: 0xb9, size: 0x1, def value: None
  bool ___m_HasImage;

  /// @brief Field m_HasCanvasGroup, offset: 0xba, size: 0x1, def value: None
  bool ___m_HasCanvasGroup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::UI::ImageColorAffordanceReceiver, 0xc0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::UI::ImageColorAffordanceReceiver, ___m_Image) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::UI::ImageColorAffordanceReceiver, ___m_CanvasGroup) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::UI::ImageColorAffordanceReceiver, ___m_IgnoreAlpha) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::UI::ImageColorAffordanceReceiver, ___m_HasImage) == 0xb9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::UI::ImageColorAffordanceReceiver, ___m_HasCanvasGroup) == 0xba, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::UI
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::UI::ImageColorAffordanceReceiver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::UI::ImageColorAffordanceReceiver*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.UI",
                       "ImageColorAffordanceReceiver");
