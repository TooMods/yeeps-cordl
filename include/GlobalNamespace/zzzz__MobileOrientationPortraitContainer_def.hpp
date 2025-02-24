#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MobileOrientationPortraitContainer)
namespace GlobalNamespace {
class __MobileOrientationPortraitContainer___FlashTransitionZoneSequence_d__10;
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
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace GlobalNamespace {
class MobileOrientationPortraitContainer;
}
namespace GlobalNamespace {
class __MobileOrientationPortraitContainer___FlashTransitionZoneSequence_d__10;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MobileOrientationPortraitContainer);
MARK_REF_PTR_T(::GlobalNamespace::__MobileOrientationPortraitContainer___FlashTransitionZoneSequence_d__10);
// Type: ::<FlashTransitionZoneSequence>d__10
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobileOrientationPortraitContainer::<FlashTransitionZoneSequence>d__10*
class CORDL_TYPE __MobileOrientationPortraitContainer___FlashTransitionZoneSequence_d__10 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::MobileOrientationPortraitContainer> __4__this;

  /// @brief Field <p>5__2, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__p_5__2, put = __cordl_internal_set__p_5__2)) float_t _p_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2dff174, size 0x128, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__MobileOrientationPortraitContainer___FlashTransitionZoneSequence_d__10* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2dff29c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2dff2a4, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2dff2e4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2dff170, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::MobileOrientationPortraitContainer> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MobileOrientationPortraitContainer>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__p_5__2() const;

  constexpr float_t& __cordl_internal_get__p_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MobileOrientationPortraitContainer> value);

  constexpr void __cordl_internal_set__p_5__2(float_t value);

  /// @brief Method .ctor, addr 0x2dff140, size 0x28, virtual false, abstract: false, final false
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
  constexpr __MobileOrientationPortraitContainer___FlashTransitionZoneSequence_d__10();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MobileOrientationPortraitContainer___FlashTransitionZoneSequence_d__10", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MobileOrientationPortraitContainer___FlashTransitionZoneSequence_d__10(__MobileOrientationPortraitContainer___FlashTransitionZoneSequence_d__10&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MobileOrientationPortraitContainer___FlashTransitionZoneSequence_d__10", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MobileOrientationPortraitContainer___FlashTransitionZoneSequence_d__10(__MobileOrientationPortraitContainer___FlashTransitionZoneSequence_d__10 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MobileOrientationPortraitContainer> _____4__this;

  /// @brief Field <p>5__2, offset: 0x28, size: 0x4, def value: None
  float_t ____p_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MobileOrientationPortraitContainer___FlashTransitionZoneSequence_d__10, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobileOrientationPortraitContainer___FlashTransitionZoneSequence_d__10, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobileOrientationPortraitContainer___FlashTransitionZoneSequence_d__10, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobileOrientationPortraitContainer___FlashTransitionZoneSequence_d__10, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobileOrientationPortraitContainer___FlashTransitionZoneSequence_d__10, ____p_5__2) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MobileOrientationPortraitContainer
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobileOrientationPortraitContainer*
class CORDL_TYPE MobileOrientationPortraitContainer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _FlashTransitionZoneSequence_d__10 = ::GlobalNamespace::__MobileOrientationPortraitContainer___FlashTransitionZoneSequence_d__10;

  /// @brief Field canvasRect, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_canvasRect, put = __cordl_internal_set_canvasRect))::UnityW<::UnityEngine::RectTransform> canvasRect;

  /// @brief Field flashTransitionZoneCoroutine, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_flashTransitionZoneCoroutine, put = __cordl_internal_set_flashTransitionZoneCoroutine))::UnityEngine::Coroutine* flashTransitionZoneCoroutine;

  /// @brief Field isPortraitLockingCanvas, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_isPortraitLockingCanvas, put = __cordl_internal_set_isPortraitLockingCanvas)) bool isPortraitLockingCanvas;

  /// @brief Field portraitContainer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_portraitContainer, put = __cordl_internal_set_portraitContainer))::UnityW<::UnityEngine::RectTransform> portraitContainer;

  /// @brief Field transitionImage, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_transitionImage, put = __cordl_internal_set_transitionImage))::UnityW<::UnityEngine::UI::Image> transitionImage;

  /// @brief Method FlashTransitionZoneSequence, addr 0x2dff07c, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* FlashTransitionZoneSequence();

  /// @brief Method LateUpdate, addr 0x2dff0e4, size 0x5c, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::MobileOrientationPortraitContainer* New_ctor();

  /// @brief Method OnPortraitLockChanged, addr 0x2dfef80, size 0xfc, virtual false, abstract: false, final false
  inline void OnPortraitLockChanged(bool newIsOverridePortrait, bool isManualChange);

  /// @brief Method Start, addr 0x2dfee84, size 0xfc, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_canvasRect() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_canvasRect();

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_flashTransitionZoneCoroutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_flashTransitionZoneCoroutine() const;

  constexpr bool const& __cordl_internal_get_isPortraitLockingCanvas() const;

  constexpr bool& __cordl_internal_get_isPortraitLockingCanvas();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_portraitContainer() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_portraitContainer();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_transitionImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_transitionImage();

  constexpr void __cordl_internal_set_canvasRect(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_flashTransitionZoneCoroutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_isPortraitLockingCanvas(bool value);

  constexpr void __cordl_internal_set_portraitContainer(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_transitionImage(::UnityW<::UnityEngine::UI::Image> value);

  /// @brief Method .ctor, addr 0x2dff168, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MobileOrientationPortraitContainer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MobileOrientationPortraitContainer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MobileOrientationPortraitContainer(MobileOrientationPortraitContainer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MobileOrientationPortraitContainer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MobileOrientationPortraitContainer(MobileOrientationPortraitContainer const&) = delete;

  /// @brief Field portraitContainer, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___portraitContainer;

  /// @brief Field canvasRect, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___canvasRect;

  /// @brief Field transitionImage, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___transitionImage;

  /// @brief Field isPortraitLockingCanvas, offset: 0x30, size: 0x1, def value: None
  bool ___isPortraitLockingCanvas;

  /// @brief Field flashTransitionZoneCoroutine, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___flashTransitionZoneCoroutine;

  /// @brief Field FADE_TIME offset 0xffffffff size 0x4
  static constexpr float_t FADE_TIME{ 0.5 };

  /// @brief Field FLASH_OPACITY offset 0xffffffff size 0x4
  static constexpr float_t FLASH_OPACITY{ 0.1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MobileOrientationPortraitContainer, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileOrientationPortraitContainer, ___portraitContainer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileOrientationPortraitContainer, ___canvasRect) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileOrientationPortraitContainer, ___transitionImage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileOrientationPortraitContainer, ___isPortraitLockingCanvas) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileOrientationPortraitContainer, ___flashTransitionZoneCoroutine) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MobileOrientationPortraitContainer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MobileOrientationPortraitContainer*, "", "MobileOrientationPortraitContainer");
NEED_NO_BOX(::GlobalNamespace::__MobileOrientationPortraitContainer___FlashTransitionZoneSequence_d__10);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MobileOrientationPortraitContainer___FlashTransitionZoneSequence_d__10*, "", "MobileOrientationPortraitContainer/<FlashTransitionZoneSequence>d__10");
