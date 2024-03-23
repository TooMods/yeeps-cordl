#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MobileTransitionOverlay)
namespace GlobalNamespace {
struct PlayerData;
}
namespace GlobalNamespace {
class __MobileTransitionOverlay___FadeInRoutine_d__24;
}
namespace GlobalNamespace {
class __MobileTransitionOverlay___UnveilRoutine_d__26;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
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
class RawImage;
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
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
class MobileTransitionOverlay;
}
namespace GlobalNamespace {
class __MobileTransitionOverlay___FadeInRoutine_d__24;
}
namespace GlobalNamespace {
class __MobileTransitionOverlay___UnveilRoutine_d__26;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MobileTransitionOverlay);
MARK_REF_PTR_T(::GlobalNamespace::__MobileTransitionOverlay___FadeInRoutine_d__24);
MARK_REF_PTR_T(::GlobalNamespace::__MobileTransitionOverlay___UnveilRoutine_d__26);
// Type: ::<FadeInRoutine>d__24
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobileTransitionOverlay::<FadeInRoutine>d__24*
class CORDL_TYPE __MobileTransitionOverlay___FadeInRoutine_d__24 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::MobileTransitionOverlay> __4__this;

  /// @brief Field <p>5__2, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__p_5__2, put = __cordl_internal_set__p_5__2)) float_t _p_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2e01e14, size 0xc4, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__MobileTransitionOverlay___FadeInRoutine_d__24* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2e01ed8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2e01ee0, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2e01f20, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2e01e10, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::MobileTransitionOverlay> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MobileTransitionOverlay>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__p_5__2() const;

  constexpr float_t& __cordl_internal_get__p_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MobileTransitionOverlay> value);

  constexpr void __cordl_internal_set__p_5__2(float_t value);

  /// @brief Method .ctor, addr 0x2e01db8, size 0x28, virtual false, abstract: false, final false
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
  constexpr __MobileTransitionOverlay___FadeInRoutine_d__24();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MobileTransitionOverlay___FadeInRoutine_d__24", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MobileTransitionOverlay___FadeInRoutine_d__24(__MobileTransitionOverlay___FadeInRoutine_d__24&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MobileTransitionOverlay___FadeInRoutine_d__24", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MobileTransitionOverlay___FadeInRoutine_d__24(__MobileTransitionOverlay___FadeInRoutine_d__24 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MobileTransitionOverlay> _____4__this;

  /// @brief Field <p>5__2, offset: 0x28, size: 0x4, def value: None
  float_t ____p_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MobileTransitionOverlay___FadeInRoutine_d__24, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobileTransitionOverlay___FadeInRoutine_d__24, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobileTransitionOverlay___FadeInRoutine_d__24, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobileTransitionOverlay___FadeInRoutine_d__24, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobileTransitionOverlay___FadeInRoutine_d__24, ____p_5__2) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<UnveilRoutine>d__26
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobileTransitionOverlay::<UnveilRoutine>d__26*
class CORDL_TYPE __MobileTransitionOverlay___UnveilRoutine_d__26 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::MobileTransitionOverlay> __4__this;

  /// @brief Field <color>5__3, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get__color_5__3, put = __cordl_internal_set__color_5__3))::UnityEngine::Color _color_5__3;

  /// @brief Field <initialBrightenRatio>5__4, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__initialBrightenRatio_5__4, put = __cordl_internal_set__initialBrightenRatio_5__4)) float_t _initialBrightenRatio_5__4;

  /// @brief Field <p>5__2, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__p_5__2, put = __cordl_internal_set__p_5__2)) float_t _p_5__2;

  /// @brief Field duration, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_duration, put = __cordl_internal_set_duration)) float_t duration;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2e01f2c, size 0x13c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__MobileTransitionOverlay___UnveilRoutine_d__26* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2e02068, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2e02070, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2e020b0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2e01f28, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::MobileTransitionOverlay> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MobileTransitionOverlay>& __cordl_internal_get___4__this();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color_5__3() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color_5__3();

  constexpr float_t const& __cordl_internal_get__initialBrightenRatio_5__4() const;

  constexpr float_t& __cordl_internal_get__initialBrightenRatio_5__4();

  constexpr float_t const& __cordl_internal_get__p_5__2() const;

  constexpr float_t& __cordl_internal_get__p_5__2();

  constexpr float_t const& __cordl_internal_get_duration() const;

  constexpr float_t& __cordl_internal_get_duration();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MobileTransitionOverlay> value);

  constexpr void __cordl_internal_set__color_5__3(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__initialBrightenRatio_5__4(float_t value);

  constexpr void __cordl_internal_set__p_5__2(float_t value);

  constexpr void __cordl_internal_set_duration(float_t value);

  /// @brief Method .ctor, addr 0x2e01de0, size 0x28, virtual false, abstract: false, final false
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
  constexpr __MobileTransitionOverlay___UnveilRoutine_d__26();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MobileTransitionOverlay___UnveilRoutine_d__26", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MobileTransitionOverlay___UnveilRoutine_d__26(__MobileTransitionOverlay___UnveilRoutine_d__26&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MobileTransitionOverlay___UnveilRoutine_d__26", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MobileTransitionOverlay___UnveilRoutine_d__26(__MobileTransitionOverlay___UnveilRoutine_d__26 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MobileTransitionOverlay> _____4__this;

  /// @brief Field duration, offset: 0x28, size: 0x4, def value: None
  float_t ___duration;

  /// @brief Field <p>5__2, offset: 0x2c, size: 0x4, def value: None
  float_t ____p_5__2;

  /// @brief Field <color>5__3, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Color ____color_5__3;

  /// @brief Field <initialBrightenRatio>5__4, offset: 0x40, size: 0x4, def value: None
  float_t ____initialBrightenRatio_5__4;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MobileTransitionOverlay___UnveilRoutine_d__26, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobileTransitionOverlay___UnveilRoutine_d__26, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobileTransitionOverlay___UnveilRoutine_d__26, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobileTransitionOverlay___UnveilRoutine_d__26, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobileTransitionOverlay___UnveilRoutine_d__26, ___duration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobileTransitionOverlay___UnveilRoutine_d__26, ____p_5__2) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobileTransitionOverlay___UnveilRoutine_d__26, ____color_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobileTransitionOverlay___UnveilRoutine_d__26, ____initialBrightenRatio_5__4) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MobileTransitionOverlay
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 124, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobileTransitionOverlay*
class CORDL_TYPE MobileTransitionOverlay : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _FadeInRoutine_d__24 = ::GlobalNamespace::__MobileTransitionOverlay___FadeInRoutine_d__24;

  using _UnveilRoutine_d__26 = ::GlobalNamespace::__MobileTransitionOverlay___UnveilRoutine_d__26;

  /// @brief Field activeContainer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_activeContainer, put = __cordl_internal_set_activeContainer))::UnityW<::UnityEngine::GameObject> activeContainer;

  /// @brief Field brightenImage, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_brightenImage, put = __cordl_internal_set_brightenImage))::UnityW<::UnityEngine::UI::RawImage> brightenImage;

  /// @brief Field curBrightenRatio, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_curBrightenRatio, put = __cordl_internal_set_curBrightenRatio)) float_t curBrightenRatio;

  /// @brief Field curFadeInRoutine, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_curFadeInRoutine, put = __cordl_internal_set_curFadeInRoutine))::UnityEngine::Coroutine* curFadeInRoutine;

  /// @brief Field curUnveilRoutine, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_curUnveilRoutine, put = __cordl_internal_set_curUnveilRoutine))::UnityEngine::Coroutine* curUnveilRoutine;

  /// @brief Field freezeFrameImage, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_freezeFrameImage, put = __cordl_internal_set_freezeFrameImage))::UnityW<::UnityEngine::UI::RawImage> freezeFrameImage;

  /// @brief Field hasShownLinkingMessage, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_hasShownLinkingMessage, put = __cordl_internal_set_hasShownLinkingMessage)) bool hasShownLinkingMessage;

  /// @brief Field isActive, offset 0x61, size 0x1
  __declspec(property(get = __cordl_internal_get_isActive, put = __cordl_internal_set_isActive)) bool isActive;

  /// @brief Field isFreezeFrameVisible, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get_isFreezeFrameVisible, put = __cordl_internal_set_isFreezeFrameVisible)) bool isFreezeFrameVisible;

  /// @brief Field isMonitoringFollowPlayerSuccess, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_isMonitoringFollowPlayerSuccess, put = __cordl_internal_set_isMonitoringFollowPlayerSuccess)) bool isMonitoringFollowPlayerSuccess;

  /// @brief Field lastClickTime, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_lastClickTime, put = __cordl_internal_set_lastClickTime)) float_t lastClickTime;

  /// @brief Field linkingMessageText, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_linkingMessageText, put = __cordl_internal_set_linkingMessageText))::UnityW<::UnityEngine::UI::Text> linkingMessageText;

  /// @brief Field loadingIndicatorContainer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_loadingIndicatorContainer, put = __cordl_internal_set_loadingIndicatorContainer))::UnityW<::UnityEngine::GameObject> loadingIndicatorContainer;

  /// @brief Field loadingIndicatorImages, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_loadingIndicatorImages,
                      put = __cordl_internal_set_loadingIndicatorImages))::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*> loadingIndicatorImages;

  /// @brief Field maxBrightenAlpha, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_maxBrightenAlpha, put = __cordl_internal_set_maxBrightenAlpha)) float_t maxBrightenAlpha;

  /// @brief Field maxLoadingIndicatorAlpha, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_maxLoadingIndicatorAlpha, put = __cordl_internal_set_maxLoadingIndicatorAlpha)) float_t maxLoadingIndicatorAlpha;

  /// @brief Method CompleteUnveil, addr 0x2e01d14, size 0x2c, virtual false, abstract: false, final false
  inline void CompleteUnveil();

  /// @brief Method FadeInRoutine, addr 0x2e01cac, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* FadeInRoutine();

  static inline ::GlobalNamespace::MobileTransitionOverlay* New_ctor();

  /// @brief Method OnFollowPlayerSuccess, addr 0x2e0179c, size 0xfc, virtual false, abstract: false, final false
  inline void OnFollowPlayerSuccess();

  /// @brief Method OnHasCameraLinkedPlayerDataUpdated, addr 0x2e01608, size 0x194, virtual false, abstract: false, final false
  inline void OnHasCameraLinkedPlayerDataUpdated(bool newHasCameraLinkedPlayerData);

  /// @brief Method OnIsCameraLinkedUpdated, addr 0x2e01180, size 0x254, virtual false, abstract: false, final false
  inline void OnIsCameraLinkedUpdated(bool newIsCameraLinked);

  /// @brief Method OnPlayerDataRemovedEarly, addr 0x2e01898, size 0x164, virtual false, abstract: false, final false
  inline void OnPlayerDataRemovedEarly(::GlobalNamespace::PlayerData playerData);

  /// @brief Method SetActive, addr 0x2e013d4, size 0x194, virtual false, abstract: false, final false
  inline void SetActive(bool newActive, bool instant);

  /// @brief Method SetBrightenRatio, addr 0x2e01b80, size 0x12c, virtual false, abstract: false, final false
  inline void SetBrightenRatio(float_t ratio);

  /// @brief Method Start, addr 0x2e00f7c, size 0x204, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TryCaptureFreezeFrame, addr 0x2e019fc, size 0x184, virtual false, abstract: false, final false
  inline bool TryCaptureFreezeFrame(ByRef<::UnityEngine::RenderTexture*> freezeFrame);

  /// @brief Method UnveilRoutine, addr 0x2e01d40, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* UnveilRoutine(float_t duration);

  /// @brief Method Update, addr 0x2e01568, size 0xa0, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_activeContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_activeContainer();

  constexpr ::UnityW<::UnityEngine::UI::RawImage> const& __cordl_internal_get_brightenImage() const;

  constexpr ::UnityW<::UnityEngine::UI::RawImage>& __cordl_internal_get_brightenImage();

  constexpr float_t const& __cordl_internal_get_curBrightenRatio() const;

  constexpr float_t& __cordl_internal_get_curBrightenRatio();

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_curFadeInRoutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_curFadeInRoutine() const;

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_curUnveilRoutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_curUnveilRoutine() const;

  constexpr ::UnityW<::UnityEngine::UI::RawImage> const& __cordl_internal_get_freezeFrameImage() const;

  constexpr ::UnityW<::UnityEngine::UI::RawImage>& __cordl_internal_get_freezeFrameImage();

  constexpr bool const& __cordl_internal_get_hasShownLinkingMessage() const;

  constexpr bool& __cordl_internal_get_hasShownLinkingMessage();

  constexpr bool const& __cordl_internal_get_isActive() const;

  constexpr bool& __cordl_internal_get_isActive();

  constexpr bool const& __cordl_internal_get_isFreezeFrameVisible() const;

  constexpr bool& __cordl_internal_get_isFreezeFrameVisible();

  constexpr bool const& __cordl_internal_get_isMonitoringFollowPlayerSuccess() const;

  constexpr bool& __cordl_internal_get_isMonitoringFollowPlayerSuccess();

  constexpr float_t const& __cordl_internal_get_lastClickTime() const;

  constexpr float_t& __cordl_internal_get_lastClickTime();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_linkingMessageText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_linkingMessageText();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_loadingIndicatorContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_loadingIndicatorContainer();

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*> const& __cordl_internal_get_loadingIndicatorImages() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*>& __cordl_internal_get_loadingIndicatorImages();

  constexpr float_t const& __cordl_internal_get_maxBrightenAlpha() const;

  constexpr float_t& __cordl_internal_get_maxBrightenAlpha();

  constexpr float_t const& __cordl_internal_get_maxLoadingIndicatorAlpha() const;

  constexpr float_t& __cordl_internal_get_maxLoadingIndicatorAlpha();

  constexpr void __cordl_internal_set_activeContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_brightenImage(::UnityW<::UnityEngine::UI::RawImage> value);

  constexpr void __cordl_internal_set_curBrightenRatio(float_t value);

  constexpr void __cordl_internal_set_curFadeInRoutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_curUnveilRoutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_freezeFrameImage(::UnityW<::UnityEngine::UI::RawImage> value);

  constexpr void __cordl_internal_set_hasShownLinkingMessage(bool value);

  constexpr void __cordl_internal_set_isActive(bool value);

  constexpr void __cordl_internal_set_isFreezeFrameVisible(bool value);

  constexpr void __cordl_internal_set_isMonitoringFollowPlayerSuccess(bool value);

  constexpr void __cordl_internal_set_lastClickTime(float_t value);

  constexpr void __cordl_internal_set_linkingMessageText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_loadingIndicatorContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_loadingIndicatorImages(::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*> value);

  constexpr void __cordl_internal_set_maxBrightenAlpha(float_t value);

  constexpr void __cordl_internal_set_maxLoadingIndicatorAlpha(float_t value);

  /// @brief Method .ctor, addr 0x2e01e08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MobileTransitionOverlay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MobileTransitionOverlay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MobileTransitionOverlay(MobileTransitionOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MobileTransitionOverlay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MobileTransitionOverlay(MobileTransitionOverlay const&) = delete;

  /// @brief Field activeContainer, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___activeContainer;

  /// @brief Field freezeFrameImage, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::RawImage> ___freezeFrameImage;

  /// @brief Field brightenImage, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::RawImage> ___brightenImage;

  /// @brief Field maxBrightenAlpha, offset: 0x30, size: 0x4, def value: None
  float_t ___maxBrightenAlpha;

  /// @brief Field loadingIndicatorContainer, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___loadingIndicatorContainer;

  /// @brief Field loadingIndicatorImages, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*> ___loadingIndicatorImages;

  /// @brief Field maxLoadingIndicatorAlpha, offset: 0x48, size: 0x4, def value: None
  float_t ___maxLoadingIndicatorAlpha;

  /// @brief Field linkingMessageText, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___linkingMessageText;

  /// @brief Field hasShownLinkingMessage, offset: 0x58, size: 0x1, def value: None
  bool ___hasShownLinkingMessage;

  /// @brief Field isFreezeFrameVisible, offset: 0x59, size: 0x1, def value: None
  bool ___isFreezeFrameVisible;

  /// @brief Field lastClickTime, offset: 0x5c, size: 0x4, def value: None
  float_t ___lastClickTime;

  /// @brief Field isMonitoringFollowPlayerSuccess, offset: 0x60, size: 0x1, def value: None
  bool ___isMonitoringFollowPlayerSuccess;

  /// @brief Field isActive, offset: 0x61, size: 0x1, def value: None
  bool ___isActive;

  /// @brief Field curFadeInRoutine, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___curFadeInRoutine;

  /// @brief Field curUnveilRoutine, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___curUnveilRoutine;

  /// @brief Field curBrightenRatio, offset: 0x78, size: 0x4, def value: None
  float_t ___curBrightenRatio;

  /// @brief Field brightenDuration offset 0xffffffff size 0x4
  static constexpr float_t brightenDuration{ 1.5 };

  /// @brief Field fadeDuration offset 0xffffffff size 0x4
  static constexpr float_t fadeDuration{ 0.5 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MobileTransitionOverlay, 0x80>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileTransitionOverlay, ___activeContainer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileTransitionOverlay, ___freezeFrameImage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileTransitionOverlay, ___brightenImage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileTransitionOverlay, ___maxBrightenAlpha) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileTransitionOverlay, ___loadingIndicatorContainer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileTransitionOverlay, ___loadingIndicatorImages) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileTransitionOverlay, ___maxLoadingIndicatorAlpha) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileTransitionOverlay, ___linkingMessageText) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileTransitionOverlay, ___hasShownLinkingMessage) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileTransitionOverlay, ___isFreezeFrameVisible) == 0x59, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileTransitionOverlay, ___lastClickTime) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileTransitionOverlay, ___isMonitoringFollowPlayerSuccess) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileTransitionOverlay, ___isActive) == 0x61, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileTransitionOverlay, ___curFadeInRoutine) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileTransitionOverlay, ___curUnveilRoutine) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileTransitionOverlay, ___curBrightenRatio) == 0x78, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MobileTransitionOverlay);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MobileTransitionOverlay*, "", "MobileTransitionOverlay");
NEED_NO_BOX(::GlobalNamespace::__MobileTransitionOverlay___FadeInRoutine_d__24);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MobileTransitionOverlay___FadeInRoutine_d__24*, "", "MobileTransitionOverlay/<FadeInRoutine>d__24");
NEED_NO_BOX(::GlobalNamespace::__MobileTransitionOverlay___UnveilRoutine_d__26);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MobileTransitionOverlay___UnveilRoutine_d__26*, "", "MobileTransitionOverlay/<UnveilRoutine>d__26");
