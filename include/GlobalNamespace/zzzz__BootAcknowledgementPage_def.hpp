#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BootAcknowledgementPage)
namespace GlobalNamespace {
class InputController;
}
namespace GlobalNamespace {
class ProgressIndicator;
}
namespace GlobalNamespace {
class __BootAcknowledgementPage__OnAccepted;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace GlobalNamespace {
class BootAcknowledgementPage;
}
namespace GlobalNamespace {
class __BootAcknowledgementPage__OnAccepted;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BootAcknowledgementPage);
MARK_REF_PTR_T(::GlobalNamespace::__BootAcknowledgementPage__OnAccepted);
// Type: ::OnAccepted
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BootAcknowledgementPage::OnAccepted*
class CORDL_TYPE __BootAcknowledgementPage__OnAccepted : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x159a624, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x159a644, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x159a610, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::GlobalNamespace::__BootAcknowledgementPage__OnAccepted* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x159a554, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BootAcknowledgementPage__OnAccepted();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BootAcknowledgementPage__OnAccepted", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BootAcknowledgementPage__OnAccepted(__BootAcknowledgementPage__OnAccepted&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BootAcknowledgementPage__OnAccepted", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BootAcknowledgementPage__OnAccepted(__BootAcknowledgementPage__OnAccepted const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BootAcknowledgementPage__OnAccepted, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BootAcknowledgementPage
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BootAcknowledgementPage*
class CORDL_TYPE BootAcknowledgementPage : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using OnAccepted = ::GlobalNamespace::__BootAcknowledgementPage__OnAccepted;

  /// @brief Field acceptDuration, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_acceptDuration, put = __cordl_internal_set_acceptDuration)) float_t acceptDuration;

  /// @brief Field acceptProgressIndicator, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_acceptProgressIndicator, put = __cordl_internal_set_acceptProgressIndicator))::UnityW<::GlobalNamespace::ProgressIndicator> acceptProgressIndicator;

  /// @brief Field acceptRatio, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_acceptRatio, put = __cordl_internal_set_acceptRatio)) float_t acceptRatio;

  /// @brief Field completeHapticDuration, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_completeHapticDuration, put = __cordl_internal_set_completeHapticDuration)) float_t completeHapticDuration;

  /// @brief Field completeHapticIntensity, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_completeHapticIntensity, put = __cordl_internal_set_completeHapticIntensity)) float_t completeHapticIntensity;

  /// @brief Field completeSoundKey, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_completeSoundKey, put = __cordl_internal_set_completeSoundKey))::StringW completeSoundKey;

  /// @brief Field contentHeight, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_contentHeight, put = __cordl_internal_set_contentHeight)) float_t contentHeight;

  /// @brief Field contentViewportHeight, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_contentViewportHeight, put = __cordl_internal_set_contentViewportHeight)) float_t contentViewportHeight;

  /// @brief Field currentScrollPosition, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_currentScrollPosition, put = __cordl_internal_set_currentScrollPosition)) float_t currentScrollPosition;

  /// @brief Field holdButtonHapticIntensity, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_holdButtonHapticIntensity, put = __cordl_internal_set_holdButtonHapticIntensity)) float_t holdButtonHapticIntensity;

  /// @brief Field inputControllers, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_inputControllers,
                      put = __cordl_internal_set_inputControllers))::ArrayW<::UnityW<::GlobalNamespace::InputController>, ::Array<::UnityW<::GlobalNamespace::InputController>>*> inputControllers;

  /// @brief Field isAccepted, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_isAccepted, put = __cordl_internal_set_isAccepted)) bool isAccepted;

  /// @brief Field onAcceptedCallback, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_onAcceptedCallback, put = __cordl_internal_set_onAcceptedCallback))::GlobalNamespace::__BootAcknowledgementPage__OnAccepted* onAcceptedCallback;

  /// @brief Field progressSound, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_progressSound, put = __cordl_internal_set_progressSound))::UnityW<::UnityEngine::AudioSource> progressSound;

  /// @brief Field progressSoundKey, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_progressSoundKey, put = __cordl_internal_set_progressSoundKey))::StringW progressSoundKey;

  /// @brief Field scrollBarRect, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_scrollBarRect, put = __cordl_internal_set_scrollBarRect))::UnityW<::UnityEngine::RectTransform> scrollBarRect;

  /// @brief Field scrollContent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_scrollContent, put = __cordl_internal_set_scrollContent))::UnityW<::UnityEngine::RectTransform> scrollContent;

  /// @brief Field scrollHandleHeight, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_scrollHandleHeight, put = __cordl_internal_set_scrollHandleHeight)) float_t scrollHandleHeight;

  /// @brief Field scrollHandleRect, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_scrollHandleRect, put = __cordl_internal_set_scrollHandleRect))::UnityW<::UnityEngine::RectTransform> scrollHandleRect;

  /// @brief Field scrollSensitivity, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_scrollSensitivity, put = __cordl_internal_set_scrollSensitivity)) float_t scrollSensitivity;

  /// @brief Field scrollViewportRect, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_scrollViewportRect, put = __cordl_internal_set_scrollViewportRect))::UnityW<::UnityEngine::RectTransform> scrollViewportRect;

  /// @brief Method Clear, addr 0x1599e54, size 0x34, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Display, addr 0x1599d94, size 0xc0, virtual false, abstract: false, final false
  inline void Display(::GlobalNamespace::__BootAcknowledgementPage__OnAccepted* onAcceptedCallback);

  static inline ::GlobalNamespace::BootAcknowledgementPage* New_ctor();

  /// @brief Method SetScrollPosition, addr 0x1599e88, size 0xa0, virtual false, abstract: false, final false
  inline void SetScrollPosition(float_t newScrollPosition);

  /// @brief Method Update, addr 0x1599f28, size 0x604, virtual false, abstract: false, final false
  inline void Update();

  constexpr float_t const& __cordl_internal_get_acceptDuration() const;

  constexpr float_t& __cordl_internal_get_acceptDuration();

  constexpr ::UnityW<::GlobalNamespace::ProgressIndicator> const& __cordl_internal_get_acceptProgressIndicator() const;

  constexpr ::UnityW<::GlobalNamespace::ProgressIndicator>& __cordl_internal_get_acceptProgressIndicator();

  constexpr float_t const& __cordl_internal_get_acceptRatio() const;

  constexpr float_t& __cordl_internal_get_acceptRatio();

  constexpr float_t const& __cordl_internal_get_completeHapticDuration() const;

  constexpr float_t& __cordl_internal_get_completeHapticDuration();

  constexpr float_t const& __cordl_internal_get_completeHapticIntensity() const;

  constexpr float_t& __cordl_internal_get_completeHapticIntensity();

  constexpr ::StringW const& __cordl_internal_get_completeSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_completeSoundKey();

  constexpr float_t const& __cordl_internal_get_contentHeight() const;

  constexpr float_t& __cordl_internal_get_contentHeight();

  constexpr float_t const& __cordl_internal_get_contentViewportHeight() const;

  constexpr float_t& __cordl_internal_get_contentViewportHeight();

  constexpr float_t const& __cordl_internal_get_currentScrollPosition() const;

  constexpr float_t& __cordl_internal_get_currentScrollPosition();

  constexpr float_t const& __cordl_internal_get_holdButtonHapticIntensity() const;

  constexpr float_t& __cordl_internal_get_holdButtonHapticIntensity();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::InputController>, ::Array<::UnityW<::GlobalNamespace::InputController>>*> const& __cordl_internal_get_inputControllers() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::InputController>, ::Array<::UnityW<::GlobalNamespace::InputController>>*>& __cordl_internal_get_inputControllers();

  constexpr bool const& __cordl_internal_get_isAccepted() const;

  constexpr bool& __cordl_internal_get_isAccepted();

  constexpr ::GlobalNamespace::__BootAcknowledgementPage__OnAccepted*& __cordl_internal_get_onAcceptedCallback();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BootAcknowledgementPage__OnAccepted*> const& __cordl_internal_get_onAcceptedCallback() const;

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_progressSound() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_progressSound();

  constexpr ::StringW const& __cordl_internal_get_progressSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_progressSoundKey();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_scrollBarRect() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_scrollBarRect();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_scrollContent() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_scrollContent();

  constexpr float_t const& __cordl_internal_get_scrollHandleHeight() const;

  constexpr float_t& __cordl_internal_get_scrollHandleHeight();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_scrollHandleRect() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_scrollHandleRect();

  constexpr float_t const& __cordl_internal_get_scrollSensitivity() const;

  constexpr float_t& __cordl_internal_get_scrollSensitivity();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_scrollViewportRect() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_scrollViewportRect();

  constexpr void __cordl_internal_set_acceptDuration(float_t value);

  constexpr void __cordl_internal_set_acceptProgressIndicator(::UnityW<::GlobalNamespace::ProgressIndicator> value);

  constexpr void __cordl_internal_set_acceptRatio(float_t value);

  constexpr void __cordl_internal_set_completeHapticDuration(float_t value);

  constexpr void __cordl_internal_set_completeHapticIntensity(float_t value);

  constexpr void __cordl_internal_set_completeSoundKey(::StringW value);

  constexpr void __cordl_internal_set_contentHeight(float_t value);

  constexpr void __cordl_internal_set_contentViewportHeight(float_t value);

  constexpr void __cordl_internal_set_currentScrollPosition(float_t value);

  constexpr void __cordl_internal_set_holdButtonHapticIntensity(float_t value);

  constexpr void __cordl_internal_set_inputControllers(::ArrayW<::UnityW<::GlobalNamespace::InputController>, ::Array<::UnityW<::GlobalNamespace::InputController>>*> value);

  constexpr void __cordl_internal_set_isAccepted(bool value);

  constexpr void __cordl_internal_set_onAcceptedCallback(::GlobalNamespace::__BootAcknowledgementPage__OnAccepted* value);

  constexpr void __cordl_internal_set_progressSound(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set_progressSoundKey(::StringW value);

  constexpr void __cordl_internal_set_scrollBarRect(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_scrollContent(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_scrollHandleHeight(float_t value);

  constexpr void __cordl_internal_set_scrollHandleRect(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_scrollSensitivity(float_t value);

  constexpr void __cordl_internal_set_scrollViewportRect(::UnityW<::UnityEngine::RectTransform> value);

  /// @brief Method .ctor, addr 0x159a52c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BootAcknowledgementPage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BootAcknowledgementPage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BootAcknowledgementPage(BootAcknowledgementPage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BootAcknowledgementPage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BootAcknowledgementPage(BootAcknowledgementPage const&) = delete;

  /// @brief Field scrollViewportRect, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___scrollViewportRect;

  /// @brief Field scrollContent, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___scrollContent;

  /// @brief Field currentScrollPosition, offset: 0x28, size: 0x4, def value: None
  float_t ___currentScrollPosition;

  /// @brief Field scrollBarRect, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___scrollBarRect;

  /// @brief Field scrollHandleRect, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___scrollHandleRect;

  /// @brief Field scrollSensitivity, offset: 0x40, size: 0x4, def value: None
  float_t ___scrollSensitivity;

  /// @brief Field contentHeight, offset: 0x44, size: 0x4, def value: None
  float_t ___contentHeight;

  /// @brief Field contentViewportHeight, offset: 0x48, size: 0x4, def value: None
  float_t ___contentViewportHeight;

  /// @brief Field scrollHandleHeight, offset: 0x4c, size: 0x4, def value: None
  float_t ___scrollHandleHeight;

  /// @brief Field acceptProgressIndicator, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ProgressIndicator> ___acceptProgressIndicator;

  /// @brief Field acceptDuration, offset: 0x58, size: 0x4, def value: None
  float_t ___acceptDuration;

  /// @brief Field acceptRatio, offset: 0x5c, size: 0x4, def value: None
  float_t ___acceptRatio;

  /// @brief Field isAccepted, offset: 0x60, size: 0x1, def value: None
  bool ___isAccepted;

  /// @brief Field holdButtonHapticIntensity, offset: 0x64, size: 0x4, def value: None
  float_t ___holdButtonHapticIntensity;

  /// @brief Field completeHapticIntensity, offset: 0x68, size: 0x4, def value: None
  float_t ___completeHapticIntensity;

  /// @brief Field completeHapticDuration, offset: 0x6c, size: 0x4, def value: None
  float_t ___completeHapticDuration;

  /// @brief Field progressSoundKey, offset: 0x70, size: 0x8, def value: None
  ::StringW ___progressSoundKey;

  /// @brief Field progressSound, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ___progressSound;

  /// @brief Field completeSoundKey, offset: 0x80, size: 0x8, def value: None
  ::StringW ___completeSoundKey;

  /// @brief Field inputControllers, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::InputController>, ::Array<::UnityW<::GlobalNamespace::InputController>>*> ___inputControllers;

  /// @brief Field onAcceptedCallback, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::__BootAcknowledgementPage__OnAccepted* ___onAcceptedCallback;

  /// @brief Field joystickDeadzone offset 0xffffffff size 0x4
  static constexpr float_t joystickDeadzone{ 0.2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BootAcknowledgementPage, 0x98>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BootAcknowledgementPage, ___scrollViewportRect) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootAcknowledgementPage, ___scrollContent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootAcknowledgementPage, ___currentScrollPosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootAcknowledgementPage, ___scrollBarRect) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootAcknowledgementPage, ___scrollHandleRect) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootAcknowledgementPage, ___scrollSensitivity) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootAcknowledgementPage, ___contentHeight) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootAcknowledgementPage, ___contentViewportHeight) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootAcknowledgementPage, ___scrollHandleHeight) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootAcknowledgementPage, ___acceptProgressIndicator) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootAcknowledgementPage, ___acceptDuration) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootAcknowledgementPage, ___acceptRatio) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootAcknowledgementPage, ___isAccepted) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootAcknowledgementPage, ___holdButtonHapticIntensity) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootAcknowledgementPage, ___completeHapticIntensity) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootAcknowledgementPage, ___completeHapticDuration) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootAcknowledgementPage, ___progressSoundKey) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootAcknowledgementPage, ___progressSound) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootAcknowledgementPage, ___completeSoundKey) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootAcknowledgementPage, ___inputControllers) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootAcknowledgementPage, ___onAcceptedCallback) == 0x90, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BootAcknowledgementPage);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BootAcknowledgementPage*, "", "BootAcknowledgementPage");
NEED_NO_BOX(::GlobalNamespace::__BootAcknowledgementPage__OnAccepted);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BootAcknowledgementPage__OnAccepted*, "", "BootAcknowledgementPage/OnAccepted");
