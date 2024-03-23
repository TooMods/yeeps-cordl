#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MobileStandaloneLoginInterface)
namespace GlobalNamespace {
class MobileLoginMenu;
}
namespace GlobalNamespace {
class TapButton2D;
}
namespace GlobalNamespace {
class __MobileStandaloneLoginInterface__OnTransitionComplete;
}
namespace GlobalNamespace {
class __MobileStandaloneLoginInterface___VisibilityTransitionRoutine_d__30;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MobileStandaloneLoginInterface;
}
namespace GlobalNamespace {
class __MobileStandaloneLoginInterface__OnTransitionComplete;
}
namespace GlobalNamespace {
class __MobileStandaloneLoginInterface___VisibilityTransitionRoutine_d__30;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MobileStandaloneLoginInterface);
MARK_REF_PTR_T(::GlobalNamespace::__MobileStandaloneLoginInterface__OnTransitionComplete);
MARK_REF_PTR_T(::GlobalNamespace::__MobileStandaloneLoginInterface___VisibilityTransitionRoutine_d__30);
// Type: ::OnTransitionComplete
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobileStandaloneLoginInterface::OnTransitionComplete*
class CORDL_TYPE __MobileStandaloneLoginInterface__OnTransitionComplete : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2e00c24, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2e00c44, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2e00c10, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::GlobalNamespace::__MobileStandaloneLoginInterface__OnTransitionComplete* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2e00820, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MobileStandaloneLoginInterface__OnTransitionComplete();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MobileStandaloneLoginInterface__OnTransitionComplete", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MobileStandaloneLoginInterface__OnTransitionComplete(__MobileStandaloneLoginInterface__OnTransitionComplete&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MobileStandaloneLoginInterface__OnTransitionComplete", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MobileStandaloneLoginInterface__OnTransitionComplete(__MobileStandaloneLoginInterface__OnTransitionComplete const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MobileStandaloneLoginInterface__OnTransitionComplete, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<VisibilityTransitionRoutine>d__30
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobileStandaloneLoginInterface::<VisibilityTransitionRoutine>d__30*
class CORDL_TYPE __MobileStandaloneLoginInterface___VisibilityTransitionRoutine_d__30 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::MobileStandaloneLoginInterface> __4__this;

  /// @brief Field <p>5__3, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__p_5__3, put = __cordl_internal_set__p_5__3)) float_t _p_5__3;

  /// @brief Field <startVisibilityRatio>5__2, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__startVisibilityRatio_5__2, put = __cordl_internal_set__startVisibilityRatio_5__2)) float_t _startVisibilityRatio_5__2;

  /// @brief Field duration, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_duration, put = __cordl_internal_set_duration)) float_t duration;

  /// @brief Field newVisibilityRatio, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_newVisibilityRatio, put = __cordl_internal_set_newVisibilityRatio)) float_t newVisibilityRatio;

  /// @brief Field onTransitionComplete, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_onTransitionComplete,
                      put = __cordl_internal_set_onTransitionComplete))::GlobalNamespace::__MobileStandaloneLoginInterface__OnTransitionComplete* onTransitionComplete;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2e00c54, size 0xec, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__MobileStandaloneLoginInterface___VisibilityTransitionRoutine_d__30* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2e00d40, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2e00d48, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2e00d88, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2e00c50, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::MobileStandaloneLoginInterface> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MobileStandaloneLoginInterface>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__p_5__3() const;

  constexpr float_t& __cordl_internal_get__p_5__3();

  constexpr float_t const& __cordl_internal_get__startVisibilityRatio_5__2() const;

  constexpr float_t& __cordl_internal_get__startVisibilityRatio_5__2();

  constexpr float_t const& __cordl_internal_get_duration() const;

  constexpr float_t& __cordl_internal_get_duration();

  constexpr float_t const& __cordl_internal_get_newVisibilityRatio() const;

  constexpr float_t& __cordl_internal_get_newVisibilityRatio();

  constexpr ::GlobalNamespace::__MobileStandaloneLoginInterface__OnTransitionComplete*& __cordl_internal_get_onTransitionComplete();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MobileStandaloneLoginInterface__OnTransitionComplete*> const& __cordl_internal_get_onTransitionComplete() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MobileStandaloneLoginInterface> value);

  constexpr void __cordl_internal_set__p_5__3(float_t value);

  constexpr void __cordl_internal_set__startVisibilityRatio_5__2(float_t value);

  constexpr void __cordl_internal_set_duration(float_t value);

  constexpr void __cordl_internal_set_newVisibilityRatio(float_t value);

  constexpr void __cordl_internal_set_onTransitionComplete(::GlobalNamespace::__MobileStandaloneLoginInterface__OnTransitionComplete* value);

  /// @brief Method .ctor, addr 0x2e00bd8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MobileStandaloneLoginInterface___VisibilityTransitionRoutine_d__30();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MobileStandaloneLoginInterface___VisibilityTransitionRoutine_d__30", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MobileStandaloneLoginInterface___VisibilityTransitionRoutine_d__30(__MobileStandaloneLoginInterface___VisibilityTransitionRoutine_d__30&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MobileStandaloneLoginInterface___VisibilityTransitionRoutine_d__30", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MobileStandaloneLoginInterface___VisibilityTransitionRoutine_d__30(__MobileStandaloneLoginInterface___VisibilityTransitionRoutine_d__30 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MobileStandaloneLoginInterface> _____4__this;

  /// @brief Field duration, offset: 0x28, size: 0x4, def value: None
  float_t ___duration;

  /// @brief Field newVisibilityRatio, offset: 0x2c, size: 0x4, def value: None
  float_t ___newVisibilityRatio;

  /// @brief Field onTransitionComplete, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__MobileStandaloneLoginInterface__OnTransitionComplete* ___onTransitionComplete;

  /// @brief Field <startVisibilityRatio>5__2, offset: 0x38, size: 0x4, def value: None
  float_t ____startVisibilityRatio_5__2;

  /// @brief Field <p>5__3, offset: 0x3c, size: 0x4, def value: None
  float_t ____p_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MobileStandaloneLoginInterface___VisibilityTransitionRoutine_d__30, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobileStandaloneLoginInterface___VisibilityTransitionRoutine_d__30, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobileStandaloneLoginInterface___VisibilityTransitionRoutine_d__30, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobileStandaloneLoginInterface___VisibilityTransitionRoutine_d__30, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobileStandaloneLoginInterface___VisibilityTransitionRoutine_d__30, ___duration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobileStandaloneLoginInterface___VisibilityTransitionRoutine_d__30, ___newVisibilityRatio) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobileStandaloneLoginInterface___VisibilityTransitionRoutine_d__30, ___onTransitionComplete) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobileStandaloneLoginInterface___VisibilityTransitionRoutine_d__30, ____startVisibilityRatio_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobileStandaloneLoginInterface___VisibilityTransitionRoutine_d__30, ____p_5__3) == 0x3c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MobileStandaloneLoginInterface
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 124, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobileStandaloneLoginInterface*
class CORDL_TYPE MobileStandaloneLoginInterface : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using OnTransitionComplete = ::GlobalNamespace::__MobileStandaloneLoginInterface__OnTransitionComplete;

  using _VisibilityTransitionRoutine_d__30 = ::GlobalNamespace::__MobileStandaloneLoginInterface___VisibilityTransitionRoutine_d__30;

  /// @brief Field accessDeniedBody, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_accessDeniedBody, put = setStaticF_accessDeniedBody))::StringW accessDeniedBody;

  /// @brief Field accessDeniedBodyText, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_accessDeniedBodyText, put = __cordl_internal_set_accessDeniedBodyText))::UnityW<::UnityEngine::UI::Text> accessDeniedBodyText;

  /// @brief Field accessDeniedRecoverySuggestion, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_accessDeniedRecoverySuggestion, put = setStaticF_accessDeniedRecoverySuggestion))::StringW accessDeniedRecoverySuggestion;

  /// @brief Field accessDeniedRecoverySuggestionText, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_accessDeniedRecoverySuggestionText,
                      put = __cordl_internal_set_accessDeniedRecoverySuggestionText))::UnityW<::UnityEngine::UI::Text> accessDeniedRecoverySuggestionText;

  /// @brief Field accessDeniedShowButtons, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_accessDeniedShowButtons, put = setStaticF_accessDeniedShowButtons)) bool accessDeniedShowButtons;

  /// @brief Field accessDeniedTitle, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_accessDeniedTitle, put = setStaticF_accessDeniedTitle))::StringW accessDeniedTitle;

  /// @brief Field accessDeniedTitleText, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_accessDeniedTitleText, put = __cordl_internal_set_accessDeniedTitleText))::UnityW<::UnityEngine::UI::Text> accessDeniedTitleText;

  /// @brief Field buttonContainer, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_buttonContainer, put = __cordl_internal_set_buttonContainer))::UnityW<::UnityEngine::GameObject> buttonContainer;

  /// @brief Field curVisibilityRatio, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_curVisibilityRatio, put = __cordl_internal_set_curVisibilityRatio)) float_t curVisibilityRatio;

  /// @brief Field curVisibilityTransitionRoutine, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_curVisibilityTransitionRoutine, put = __cordl_internal_set_curVisibilityTransitionRoutine))::UnityEngine::Coroutine* curVisibilityTransitionRoutine;

  /// @brief Field faderImage, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_faderImage, put = __cordl_internal_set_faderImage))::UnityW<::UnityEngine::UI::Image> faderImage;

  /// @brief Field hasLaunchedErrorScene, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_hasLaunchedErrorScene, put = setStaticF_hasLaunchedErrorScene)) bool hasLaunchedErrorScene;

  /// @brief Field loginButton, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_loginButton, put = __cordl_internal_set_loginButton))::UnityW<::GlobalNamespace::TapButton2D> loginButton;

  /// @brief Field loginMenu, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_loginMenu, put = __cordl_internal_set_loginMenu))::UnityW<::GlobalNamespace::MobileLoginMenu> loginMenu;

  /// @brief Field loginSuggestionText, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_loginSuggestionText, put = __cordl_internal_set_loginSuggestionText))::UnityW<::UnityEngine::UI::Text> loginSuggestionText;

  /// @brief Field logoutButton, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_logoutButton, put = __cordl_internal_set_logoutButton))::UnityW<::GlobalNamespace::TapButton2D> logoutButton;

  /// @brief Field restartButton, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_restartButton, put = __cordl_internal_set_restartButton))::UnityW<::GlobalNamespace::TapButton2D> restartButton;

  /// @brief Field revealDuration, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_revealDuration, put = __cordl_internal_set_revealDuration)) float_t revealDuration;

  /// @brief Method Awake, addr 0x2e00174, size 0x8, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Display, addr 0x2e00378, size 0x3ec, virtual false, abstract: false, final false
  inline void Display(::StringW title, ::StringW body, ::StringW recoverySuggestion, bool showButtons, bool isRestart);

  static inline ::GlobalNamespace::MobileStandaloneLoginInterface* New_ctor();

  /// @brief Method OnLinkFlowComplete, addr 0x2e00a60, size 0x84, virtual false, abstract: false, final false
  inline void OnLinkFlowComplete();

  /// @brief Method OnLogoutButtonPressed, addr 0x2e009d8, size 0x88, virtual false, abstract: false, final false
  inline void OnLogoutButtonPressed();

  /// @brief Method OnOpenLoginMenuButtonPressed, addr 0x2e009b8, size 0x20, virtual false, abstract: false, final false
  inline void OnOpenLoginMenuButtonPressed();

  /// @brief Method OnRestartButtonPressed, addr 0x2e00ae4, size 0x68, virtual false, abstract: false, final false
  inline void OnRestartButtonPressed();

  /// @brief Method OnRevealComplete, addr 0x2e009b4, size 0x4, virtual false, abstract: false, final false
  inline void OnRevealComplete();

  /// @brief Method OpenWithAccessDenied, addr 0x2e000d0, size 0xa4, virtual false, abstract: false, final false
  static inline void OpenWithAccessDenied(::StringW title, ::StringW body, ::StringW recoverySuggestion, bool showButtons);

  /// @brief Method SetVisibility, addr 0x2e0017c, size 0x80, virtual false, abstract: false, final false
  inline void SetVisibility(float_t newVisibilityRatio);

  /// @brief Method Start, addr 0x2e001fc, size 0x17c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TransitionVisibility, addr 0x2e008dc, size 0xa0, virtual false, abstract: false, final false
  inline void TransitionVisibility(float_t newVisibilityRatio, float_t duration, bool instant, ::GlobalNamespace::__MobileStandaloneLoginInterface__OnTransitionComplete* onTransitionComplete);

  /// @brief Method VisibilityTransitionRoutine, addr 0x2e00b4c, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* VisibilityTransitionRoutine(float_t newVisibilityRatio, float_t duration,
                                                                         ::GlobalNamespace::__MobileStandaloneLoginInterface__OnTransitionComplete* onTransitionComplete);

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_accessDeniedBodyText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_accessDeniedBodyText();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_accessDeniedRecoverySuggestionText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_accessDeniedRecoverySuggestionText();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_accessDeniedTitleText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_accessDeniedTitleText();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_buttonContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_buttonContainer();

  constexpr float_t const& __cordl_internal_get_curVisibilityRatio() const;

  constexpr float_t& __cordl_internal_get_curVisibilityRatio();

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_curVisibilityTransitionRoutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_curVisibilityTransitionRoutine() const;

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_faderImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_faderImage();

  constexpr ::UnityW<::GlobalNamespace::TapButton2D> const& __cordl_internal_get_loginButton() const;

  constexpr ::UnityW<::GlobalNamespace::TapButton2D>& __cordl_internal_get_loginButton();

  constexpr ::UnityW<::GlobalNamespace::MobileLoginMenu> const& __cordl_internal_get_loginMenu() const;

  constexpr ::UnityW<::GlobalNamespace::MobileLoginMenu>& __cordl_internal_get_loginMenu();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_loginSuggestionText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_loginSuggestionText();

  constexpr ::UnityW<::GlobalNamespace::TapButton2D> const& __cordl_internal_get_logoutButton() const;

  constexpr ::UnityW<::GlobalNamespace::TapButton2D>& __cordl_internal_get_logoutButton();

  constexpr ::UnityW<::GlobalNamespace::TapButton2D> const& __cordl_internal_get_restartButton() const;

  constexpr ::UnityW<::GlobalNamespace::TapButton2D>& __cordl_internal_get_restartButton();

  constexpr float_t const& __cordl_internal_get_revealDuration() const;

  constexpr float_t& __cordl_internal_get_revealDuration();

  constexpr void __cordl_internal_set_accessDeniedBodyText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_accessDeniedRecoverySuggestionText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_accessDeniedTitleText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_buttonContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_curVisibilityRatio(float_t value);

  constexpr void __cordl_internal_set_curVisibilityTransitionRoutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_faderImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_loginButton(::UnityW<::GlobalNamespace::TapButton2D> value);

  constexpr void __cordl_internal_set_loginMenu(::UnityW<::GlobalNamespace::MobileLoginMenu> value);

  constexpr void __cordl_internal_set_loginSuggestionText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_logoutButton(::UnityW<::GlobalNamespace::TapButton2D> value);

  constexpr void __cordl_internal_set_restartButton(::UnityW<::GlobalNamespace::TapButton2D> value);

  constexpr void __cordl_internal_set_revealDuration(float_t value);

  /// @brief Method .ctor, addr 0x2e00c00, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_accessDeniedBody();

  static inline ::StringW getStaticF_accessDeniedRecoverySuggestion();

  static inline bool getStaticF_accessDeniedShowButtons();

  static inline ::StringW getStaticF_accessDeniedTitle();

  static inline bool getStaticF_hasLaunchedErrorScene();

  static inline void setStaticF_accessDeniedBody(::StringW value);

  static inline void setStaticF_accessDeniedRecoverySuggestion(::StringW value);

  static inline void setStaticF_accessDeniedShowButtons(bool value);

  static inline void setStaticF_accessDeniedTitle(::StringW value);

  static inline void setStaticF_hasLaunchedErrorScene(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MobileStandaloneLoginInterface();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MobileStandaloneLoginInterface", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MobileStandaloneLoginInterface(MobileStandaloneLoginInterface&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MobileStandaloneLoginInterface", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MobileStandaloneLoginInterface(MobileStandaloneLoginInterface const&) = delete;

  /// @brief Field loginMenu, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MobileLoginMenu> ___loginMenu;

  /// @brief Field accessDeniedTitleText, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___accessDeniedTitleText;

  /// @brief Field accessDeniedBodyText, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___accessDeniedBodyText;

  /// @brief Field accessDeniedRecoverySuggestionText, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___accessDeniedRecoverySuggestionText;

  /// @brief Field loginSuggestionText, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___loginSuggestionText;

  /// @brief Field faderImage, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___faderImage;

  /// @brief Field revealDuration, offset: 0x48, size: 0x4, def value: None
  float_t ___revealDuration;

  /// @brief Field buttonContainer, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___buttonContainer;

  /// @brief Field loginButton, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TapButton2D> ___loginButton;

  /// @brief Field logoutButton, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TapButton2D> ___logoutButton;

  /// @brief Field restartButton, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TapButton2D> ___restartButton;

  /// @brief Field curVisibilityTransitionRoutine, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___curVisibilityTransitionRoutine;

  /// @brief Field curVisibilityRatio, offset: 0x78, size: 0x4, def value: None
  float_t ___curVisibilityRatio;

  /// @brief Field leftAlignMinCharacterCount offset 0xffffffff size 0x4
  static constexpr int32_t leftAlignMinCharacterCount{ static_cast<int32_t>(0x28) };

  /// @brief Field sceneIndex offset 0xffffffff size 0x4
  static constexpr int32_t sceneIndex{ static_cast<int32_t>(0x3) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MobileStandaloneLoginInterface, 0x80>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileStandaloneLoginInterface, ___loginMenu) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileStandaloneLoginInterface, ___accessDeniedTitleText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileStandaloneLoginInterface, ___accessDeniedBodyText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileStandaloneLoginInterface, ___accessDeniedRecoverySuggestionText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileStandaloneLoginInterface, ___loginSuggestionText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileStandaloneLoginInterface, ___faderImage) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileStandaloneLoginInterface, ___revealDuration) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileStandaloneLoginInterface, ___buttonContainer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileStandaloneLoginInterface, ___loginButton) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileStandaloneLoginInterface, ___logoutButton) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileStandaloneLoginInterface, ___restartButton) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileStandaloneLoginInterface, ___curVisibilityTransitionRoutine) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileStandaloneLoginInterface, ___curVisibilityRatio) == 0x78, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MobileStandaloneLoginInterface);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MobileStandaloneLoginInterface*, "", "MobileStandaloneLoginInterface");
NEED_NO_BOX(::GlobalNamespace::__MobileStandaloneLoginInterface__OnTransitionComplete);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MobileStandaloneLoginInterface__OnTransitionComplete*, "", "MobileStandaloneLoginInterface/OnTransitionComplete");
NEED_NO_BOX(::GlobalNamespace::__MobileStandaloneLoginInterface___VisibilityTransitionRoutine_d__30);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MobileStandaloneLoginInterface___VisibilityTransitionRoutine_d__30*, "", "MobileStandaloneLoginInterface/<VisibilityTransitionRoutine>d__30");
