#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LoadingScreen)
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class LoadingScreen;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LoadingScreen);
// Type: ::LoadingScreen
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 117, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LoadingScreen*
class CORDL_TYPE LoadingScreen : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::LoadingScreen>> {
public:
  // Declarations
  /// @brief Field angleCorrectionEndThreshold, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_angleCorrectionEndThreshold, put = __cordl_internal_set_angleCorrectionEndThreshold)) float_t angleCorrectionEndThreshold;

  /// @brief Field angleCorrectionSpeed, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_angleCorrectionSpeed, put = __cordl_internal_set_angleCorrectionSpeed)) float_t angleCorrectionSpeed;

  /// @brief Field angleCorrectionStartThreshold, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_angleCorrectionStartThreshold, put = __cordl_internal_set_angleCorrectionStartThreshold)) float_t angleCorrectionStartThreshold;

  /// @brief Field camera, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_camera, put = __cordl_internal_set_camera))::UnityW<::UnityEngine::Camera> camera;

  /// @brief Field cameraTransform, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraTransform, put = __cordl_internal_set_cameraTransform))::UnityW<::UnityEngine::Transform> cameraTransform;

  /// @brief Field canvasAnchor, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_canvasAnchor, put = __cordl_internal_set_canvasAnchor))::UnityW<::UnityEngine::Transform> canvasAnchor;

  /// @brief Field endBackgroundColor, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get_endBackgroundColor, put = __cordl_internal_set_endBackgroundColor))::UnityEngine::Color endBackgroundColor;

  /// @brief Field fadeInDuration, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_fadeInDuration, put = __cordl_internal_set_fadeInDuration)) float_t fadeInDuration;

  /// @brief Field fadeInTimer, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_fadeInTimer, put = __cordl_internal_set_fadeInTimer)) float_t fadeInTimer;

  /// @brief Field hasLoadingScreen, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_hasLoadingScreen, put = setStaticF_hasLoadingScreen)) bool hasLoadingScreen;

  /// @brief Field isCorrectingAngle, offset 0x74, size 0x1
  __declspec(property(get = __cordl_internal_get_isCorrectingAngle, put = __cordl_internal_set_isCorrectingAngle)) bool isCorrectingAngle;

  /// @brief Field loadingScreenIndicatorIcons, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_loadingScreenIndicatorIcons,
                      put = __cordl_internal_set_loadingScreenIndicatorIcons))::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*> loadingScreenIndicatorIcons;

  /// @brief Field message, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_message, put = setStaticF_message))::StringW message;

  /// @brief Field messageText, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_messageText, put = __cordl_internal_set_messageText))::UnityW<::UnityEngine::UI::Text> messageText;

  /// @brief Field startBackgroundColor, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get_startBackgroundColor, put = __cordl_internal_set_startBackgroundColor))::UnityEngine::Color startBackgroundColor;

  /// @brief Method DestroySelf, addr 0x2f6cf1c, size 0x6c, virtual false, abstract: false, final false
  inline void DestroySelf();

  /// @brief Method LateUpdate, addr 0x2f6cf88, size 0x2c0, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::LoadingScreen* New_ctor();

  /// @brief Method RemoveLoadingScreen, addr 0x2f6cddc, size 0x140, virtual false, abstract: false, final false
  static inline void RemoveLoadingScreen();

  /// @brief Method SetFadeInRatio, addr 0x2f6cc38, size 0xcc, virtual false, abstract: false, final false
  inline void SetFadeInRatio(float_t ratio);

  /// @brief Method SetLoadingMessage, addr 0x2f6cd04, size 0xd8, virtual false, abstract: false, final false
  static inline void SetLoadingMessage(::StringW message);

  /// @brief Method Start, addr 0x2f6cacc, size 0x16c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TryGetLoadingMessage, addr 0x2f6d248, size 0x70, virtual false, abstract: false, final false
  static inline bool TryGetLoadingMessage(ByRef<::StringW> message);

  constexpr float_t const& __cordl_internal_get_angleCorrectionEndThreshold() const;

  constexpr float_t& __cordl_internal_get_angleCorrectionEndThreshold();

  constexpr float_t const& __cordl_internal_get_angleCorrectionSpeed() const;

  constexpr float_t& __cordl_internal_get_angleCorrectionSpeed();

  constexpr float_t const& __cordl_internal_get_angleCorrectionStartThreshold() const;

  constexpr float_t& __cordl_internal_get_angleCorrectionStartThreshold();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_camera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_camera();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_cameraTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_cameraTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_canvasAnchor() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_canvasAnchor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_endBackgroundColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_endBackgroundColor();

  constexpr float_t const& __cordl_internal_get_fadeInDuration() const;

  constexpr float_t& __cordl_internal_get_fadeInDuration();

  constexpr float_t const& __cordl_internal_get_fadeInTimer() const;

  constexpr float_t& __cordl_internal_get_fadeInTimer();

  constexpr bool const& __cordl_internal_get_isCorrectingAngle() const;

  constexpr bool& __cordl_internal_get_isCorrectingAngle();

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*> const& __cordl_internal_get_loadingScreenIndicatorIcons() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*>& __cordl_internal_get_loadingScreenIndicatorIcons();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_messageText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_messageText();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_startBackgroundColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_startBackgroundColor();

  constexpr void __cordl_internal_set_angleCorrectionEndThreshold(float_t value);

  constexpr void __cordl_internal_set_angleCorrectionSpeed(float_t value);

  constexpr void __cordl_internal_set_angleCorrectionStartThreshold(float_t value);

  constexpr void __cordl_internal_set_camera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set_cameraTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_canvasAnchor(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_endBackgroundColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_fadeInDuration(float_t value);

  constexpr void __cordl_internal_set_fadeInTimer(float_t value);

  constexpr void __cordl_internal_set_isCorrectingAngle(bool value);

  constexpr void __cordl_internal_set_loadingScreenIndicatorIcons(::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*> value);

  constexpr void __cordl_internal_set_messageText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_startBackgroundColor(::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x2f6d2b8, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  static inline bool getStaticF_hasLoadingScreen();

  static inline ::StringW getStaticF_message();

  static inline void setStaticF_hasLoadingScreen(bool value);

  static inline void setStaticF_message(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LoadingScreen();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LoadingScreen", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LoadingScreen(LoadingScreen&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LoadingScreen", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LoadingScreen(LoadingScreen const&) = delete;

  /// @brief Field canvasAnchor, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___canvasAnchor;

  /// @brief Field cameraTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___cameraTransform;

  /// @brief Field camera, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___camera;

  /// @brief Field messageText, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___messageText;

  /// @brief Field loadingScreenIndicatorIcons, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*> ___loadingScreenIndicatorIcons;

  /// @brief Field fadeInDuration, offset: 0x40, size: 0x4, def value: None
  float_t ___fadeInDuration;

  /// @brief Field fadeInTimer, offset: 0x44, size: 0x4, def value: None
  float_t ___fadeInTimer;

  /// @brief Field startBackgroundColor, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Color ___startBackgroundColor;

  /// @brief Field endBackgroundColor, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::Color ___endBackgroundColor;

  /// @brief Field angleCorrectionStartThreshold, offset: 0x68, size: 0x4, def value: None
  float_t ___angleCorrectionStartThreshold;

  /// @brief Field angleCorrectionEndThreshold, offset: 0x6c, size: 0x4, def value: None
  float_t ___angleCorrectionEndThreshold;

  /// @brief Field angleCorrectionSpeed, offset: 0x70, size: 0x4, def value: None
  float_t ___angleCorrectionSpeed;

  /// @brief Field isCorrectingAngle, offset: 0x74, size: 0x1, def value: None
  bool ___isCorrectingAngle;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Loading Screen: " };

  /// @brief Field displayMessage offset 0xffffffff size 0x1
  static constexpr bool displayMessage{ false };

  /// @brief Field doBackgroundColorChange offset 0xffffffff size 0x1
  static constexpr bool doBackgroundColorChange{ false };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LoadingScreen, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LoadingScreen, ___canvasAnchor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LoadingScreen, ___cameraTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LoadingScreen, ___camera) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LoadingScreen, ___messageText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LoadingScreen, ___loadingScreenIndicatorIcons) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LoadingScreen, ___fadeInDuration) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LoadingScreen, ___fadeInTimer) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LoadingScreen, ___startBackgroundColor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LoadingScreen, ___endBackgroundColor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LoadingScreen, ___angleCorrectionStartThreshold) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LoadingScreen, ___angleCorrectionEndThreshold) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LoadingScreen, ___angleCorrectionSpeed) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LoadingScreen, ___isCorrectingAngle) == 0x74, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LoadingScreen);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LoadingScreen*, "", "LoadingScreen");
