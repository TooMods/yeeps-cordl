#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MobileSlidingPage)
namespace GlobalNamespace {
class __MobileSlidingPage__OnSetActiveCallback;
}
namespace GlobalNamespace {
class __MobileSlidingPage___DoSlide_d__25;
}
namespace GlobalNamespace {
class __MobileSlidingPage___RefreshSlideRatioOnNextFrame_d__29;
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
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace GlobalNamespace {
class MobileSlidingPage;
}
namespace GlobalNamespace {
class __MobileSlidingPage__OnSetActiveCallback;
}
namespace GlobalNamespace {
class __MobileSlidingPage___DoSlide_d__25;
}
namespace GlobalNamespace {
class __MobileSlidingPage___RefreshSlideRatioOnNextFrame_d__29;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MobileSlidingPage);
MARK_REF_PTR_T(::GlobalNamespace::__MobileSlidingPage__OnSetActiveCallback);
MARK_REF_PTR_T(::GlobalNamespace::__MobileSlidingPage___DoSlide_d__25);
MARK_REF_PTR_T(::GlobalNamespace::__MobileSlidingPage___RefreshSlideRatioOnNextFrame_d__29);
// Type: ::OnSetActiveCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobileSlidingPage::OnSetActiveCallback*
class CORDL_TYPE __MobileSlidingPage__OnSetActiveCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2e08700, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool newActive, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2e08788, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2e086e8, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool newActive);

  static inline ::GlobalNamespace::__MobileSlidingPage__OnSetActiveCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2e08624, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MobileSlidingPage__OnSetActiveCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MobileSlidingPage__OnSetActiveCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MobileSlidingPage__OnSetActiveCallback(__MobileSlidingPage__OnSetActiveCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MobileSlidingPage__OnSetActiveCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MobileSlidingPage__OnSetActiveCallback(__MobileSlidingPage__OnSetActiveCallback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MobileSlidingPage__OnSetActiveCallback, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<DoSlide>d__25
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobileSlidingPage::<DoSlide>d__25*
class CORDL_TYPE __MobileSlidingPage___DoSlide_d__25 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::MobileSlidingPage> __4__this;

  /// @brief Field <initialSlideRatio>5__2, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__initialSlideRatio_5__2, put = __cordl_internal_set__initialSlideRatio_5__2)) float_t _initialSlideRatio_5__2;

  /// @brief Field <p>5__3, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__p_5__3, put = __cordl_internal_set__p_5__3)) float_t _p_5__3;

  /// @brief Field curve, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_curve, put = __cordl_internal_set_curve))::UnityEngine::AnimationCurve* curve;

  /// @brief Field duration, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_duration, put = __cordl_internal_set_duration)) float_t duration;

  /// @brief Field targetSlideRatio, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_targetSlideRatio, put = __cordl_internal_set_targetSlideRatio)) float_t targetSlideRatio;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2e08798, size 0xe4, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__MobileSlidingPage___DoSlide_d__25* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2e0887c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2e08884, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2e088c4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2e08794, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::MobileSlidingPage> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MobileSlidingPage>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__initialSlideRatio_5__2() const;

  constexpr float_t& __cordl_internal_get__initialSlideRatio_5__2();

  constexpr float_t const& __cordl_internal_get__p_5__3() const;

  constexpr float_t& __cordl_internal_get__p_5__3();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_curve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_curve() const;

  constexpr float_t const& __cordl_internal_get_duration() const;

  constexpr float_t& __cordl_internal_get_duration();

  constexpr float_t const& __cordl_internal_get_targetSlideRatio() const;

  constexpr float_t& __cordl_internal_get_targetSlideRatio();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MobileSlidingPage> value);

  constexpr void __cordl_internal_set__initialSlideRatio_5__2(float_t value);

  constexpr void __cordl_internal_set__p_5__3(float_t value);

  constexpr void __cordl_internal_set_curve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_duration(float_t value);

  constexpr void __cordl_internal_set_targetSlideRatio(float_t value);

  /// @brief Method .ctor, addr 0x2e08518, size 0x28, virtual false, abstract: false, final false
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
  constexpr __MobileSlidingPage___DoSlide_d__25();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MobileSlidingPage___DoSlide_d__25", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MobileSlidingPage___DoSlide_d__25(__MobileSlidingPage___DoSlide_d__25&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MobileSlidingPage___DoSlide_d__25", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MobileSlidingPage___DoSlide_d__25(__MobileSlidingPage___DoSlide_d__25 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MobileSlidingPage> _____4__this;

  /// @brief Field duration, offset: 0x28, size: 0x4, def value: None
  float_t ___duration;

  /// @brief Field targetSlideRatio, offset: 0x2c, size: 0x4, def value: None
  float_t ___targetSlideRatio;

  /// @brief Field curve, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___curve;

  /// @brief Field <initialSlideRatio>5__2, offset: 0x38, size: 0x4, def value: None
  float_t ____initialSlideRatio_5__2;

  /// @brief Field <p>5__3, offset: 0x3c, size: 0x4, def value: None
  float_t ____p_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MobileSlidingPage___DoSlide_d__25, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobileSlidingPage___DoSlide_d__25, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobileSlidingPage___DoSlide_d__25, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobileSlidingPage___DoSlide_d__25, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobileSlidingPage___DoSlide_d__25, ___duration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobileSlidingPage___DoSlide_d__25, ___targetSlideRatio) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobileSlidingPage___DoSlide_d__25, ___curve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobileSlidingPage___DoSlide_d__25, ____initialSlideRatio_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobileSlidingPage___DoSlide_d__25, ____p_5__3) == 0x3c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<RefreshSlideRatioOnNextFrame>d__29
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobileSlidingPage::<RefreshSlideRatioOnNextFrame>d__29*
class CORDL_TYPE __MobileSlidingPage___RefreshSlideRatioOnNextFrame_d__29 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::MobileSlidingPage> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2e088d0, size 0x5c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__MobileSlidingPage___RefreshSlideRatioOnNextFrame_d__29* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2e0892c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2e08934, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2e08974, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2e088cc, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::MobileSlidingPage> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MobileSlidingPage>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MobileSlidingPage> value);

  /// @brief Method .ctor, addr 0x2e085fc, size 0x28, virtual false, abstract: false, final false
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
  constexpr __MobileSlidingPage___RefreshSlideRatioOnNextFrame_d__29();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MobileSlidingPage___RefreshSlideRatioOnNextFrame_d__29", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MobileSlidingPage___RefreshSlideRatioOnNextFrame_d__29(__MobileSlidingPage___RefreshSlideRatioOnNextFrame_d__29&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MobileSlidingPage___RefreshSlideRatioOnNextFrame_d__29", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MobileSlidingPage___RefreshSlideRatioOnNextFrame_d__29(__MobileSlidingPage___RefreshSlideRatioOnNextFrame_d__29 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MobileSlidingPage> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MobileSlidingPage___RefreshSlideRatioOnNextFrame_d__29, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobileSlidingPage___RefreshSlideRatioOnNextFrame_d__29, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobileSlidingPage___RefreshSlideRatioOnNextFrame_d__29, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobileSlidingPage___RefreshSlideRatioOnNextFrame_d__29, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MobileSlidingPage
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobileSlidingPage*
class CORDL_TYPE MobileSlidingPage : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using OnSetActiveCallback = ::GlobalNamespace::__MobileSlidingPage__OnSetActiveCallback;

  using _DoSlide_d__25 = ::GlobalNamespace::__MobileSlidingPage___DoSlide_d__25;

  using _RefreshSlideRatioOnNextFrame_d__29 = ::GlobalNamespace::__MobileSlidingPage___RefreshSlideRatioOnNextFrame_d__29;

  /// @brief Field <isActive>k__BackingField, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__isActive_k__BackingField, put = __cordl_internal_set__isActive_k__BackingField)) bool _isActive_k__BackingField;

  /// @brief Field curSlideRatio, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_curSlideRatio, put = __cordl_internal_set_curSlideRatio)) float_t curSlideRatio;

  /// @brief Field curSlideRoutine, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_curSlideRoutine, put = __cordl_internal_set_curSlideRoutine))::UnityEngine::Coroutine* curSlideRoutine;

  /// @brief Field escapeZoneContainer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_escapeZoneContainer, put = __cordl_internal_set_escapeZoneContainer))::UnityW<::UnityEngine::GameObject> escapeZoneContainer;

  __declspec(property(get = get_isActive, put = set_isActive)) bool isActive;

  /// @brief Field isRegistered, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get_isRegistered, put = __cordl_internal_set_isRegistered)) bool isRegistered;

  /// @brief Field onSetActiveCallbacks, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_onSetActiveCallbacks,
                      put = __cordl_internal_set_onSetActiveCallbacks))::GlobalNamespace::__MobileSlidingPage__OnSetActiveCallback* onSetActiveCallbacks;

  /// @brief Field openDir, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_openDir, put = __cordl_internal_set_openDir)) int32_t openDir;

  /// @brief Field slideInCurve, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_slideInCurve, put = __cordl_internal_set_slideInCurve))::UnityEngine::AnimationCurve* slideInCurve;

  /// @brief Field slideInDuration, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_slideInDuration, put = __cordl_internal_set_slideInDuration)) float_t slideInDuration;

  /// @brief Field slideOutCurve, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_slideOutCurve, put = __cordl_internal_set_slideOutCurve))::UnityEngine::AnimationCurve* slideOutCurve;

  /// @brief Field slideOutDuration, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_slideOutDuration, put = __cordl_internal_set_slideOutDuration)) float_t slideOutDuration;

  /// @brief Field slidingRect, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_slidingRect, put = __cordl_internal_set_slidingRect))::UnityW<::UnityEngine::RectTransform> slidingRect;

  /// @brief Method Deregister, addr 0x2e083b8, size 0x10, virtual false, abstract: false, final false
  inline void Deregister();

  /// @brief Method DoSlide, addr 0x2e0848c, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DoSlide(float_t targetSlideRatio, ::UnityEngine::AnimationCurve* curve, float_t duration);

  static inline ::GlobalNamespace::MobileSlidingPage* New_ctor();

  /// @brief Method OnCloseButtonPressed, addr 0x2e08540, size 0xc, virtual false, abstract: false, final false
  inline void OnCloseButtonPressed();

  /// @brief Method OnDeregister, addr 0x2e061b8, size 0x4, virtual true, abstract: false, final false
  inline void OnDeregister();

  /// @brief Method OnOrientationChanged, addr 0x2e0854c, size 0x48, virtual false, abstract: false, final false
  inline void OnOrientationChanged(bool isLandscape);

  /// @brief Method OnRegister, addr 0x2e05fec, size 0x4, virtual true, abstract: false, final false
  inline void OnRegister();

  /// @brief Method OnSetActive, addr 0x2e061dc, size 0x4, virtual true, abstract: false, final false
  inline void OnSetActive(bool newActive);

  /// @brief Method OnStart, addr 0x2e05e64, size 0x4, virtual true, abstract: false, final false
  inline void OnStart();

  /// @brief Method RefreshSlideRatioOnNextFrame, addr 0x2e08594, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* RefreshSlideRatioOnNextFrame();

  /// @brief Method Register, addr 0x2e083a4, size 0x14, virtual false, abstract: false, final false
  inline void Register();

  /// @brief Method SetActive, addr 0x2dfb148, size 0x270, virtual false, abstract: false, final false
  inline void SetActive(bool newActive, bool instant);

  /// @brief Method SetSlideRatio, addr 0x2e083c8, size 0xc4, virtual false, abstract: false, final false
  inline void SetSlideRatio(float_t ratio);

  /// @brief Method Start, addr 0x2e0826c, size 0x124, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method ToggleActive, addr 0x2e08390, size 0x14, virtual false, abstract: false, final false
  inline void ToggleActive();

  constexpr bool const& __cordl_internal_get__isActive_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isActive_k__BackingField();

  constexpr float_t const& __cordl_internal_get_curSlideRatio() const;

  constexpr float_t& __cordl_internal_get_curSlideRatio();

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_curSlideRoutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_curSlideRoutine() const;

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_escapeZoneContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_escapeZoneContainer();

  constexpr bool const& __cordl_internal_get_isRegistered() const;

  constexpr bool& __cordl_internal_get_isRegistered();

  constexpr ::GlobalNamespace::__MobileSlidingPage__OnSetActiveCallback*& __cordl_internal_get_onSetActiveCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MobileSlidingPage__OnSetActiveCallback*> const& __cordl_internal_get_onSetActiveCallbacks() const;

  constexpr int32_t const& __cordl_internal_get_openDir() const;

  constexpr int32_t& __cordl_internal_get_openDir();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_slideInCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_slideInCurve() const;

  constexpr float_t const& __cordl_internal_get_slideInDuration() const;

  constexpr float_t& __cordl_internal_get_slideInDuration();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_slideOutCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_slideOutCurve() const;

  constexpr float_t const& __cordl_internal_get_slideOutDuration() const;

  constexpr float_t& __cordl_internal_get_slideOutDuration();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_slidingRect() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_slidingRect();

  constexpr void __cordl_internal_set__isActive_k__BackingField(bool value);

  constexpr void __cordl_internal_set_curSlideRatio(float_t value);

  constexpr void __cordl_internal_set_curSlideRoutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_escapeZoneContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_isRegistered(bool value);

  constexpr void __cordl_internal_set_onSetActiveCallbacks(::GlobalNamespace::__MobileSlidingPage__OnSetActiveCallback* value);

  constexpr void __cordl_internal_set_openDir(int32_t value);

  constexpr void __cordl_internal_set_slideInCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_slideInDuration(float_t value);

  constexpr void __cordl_internal_set_slideOutCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_slideOutDuration(float_t value);

  constexpr void __cordl_internal_set_slidingRect(::UnityW<::UnityEngine::RectTransform> value);

  /// @brief Method .ctor, addr 0x2e06760, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isActive, addr 0x2e08258, size 0x8, virtual false, abstract: false, final false
  inline bool get_isActive();

  /// @brief Method set_isActive, addr 0x2e08260, size 0xc, virtual false, abstract: false, final false
  inline void set_isActive(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MobileSlidingPage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MobileSlidingPage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MobileSlidingPage(MobileSlidingPage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MobileSlidingPage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MobileSlidingPage(MobileSlidingPage const&) = delete;

  /// @brief Field escapeZoneContainer, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___escapeZoneContainer;

  /// @brief Field slidingRect, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___slidingRect;

  /// @brief Field slideInCurve, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___slideInCurve;

  /// @brief Field slideInDuration, offset: 0x30, size: 0x4, def value: None
  float_t ___slideInDuration;

  /// @brief Field slideOutCurve, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___slideOutCurve;

  /// @brief Field slideOutDuration, offset: 0x40, size: 0x4, def value: None
  float_t ___slideOutDuration;

  /// @brief Field openDir, offset: 0x44, size: 0x4, def value: None
  int32_t ___openDir;

  /// @brief Field curSlideRatio, offset: 0x48, size: 0x4, def value: None
  float_t ___curSlideRatio;

  /// @brief Field curSlideRoutine, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___curSlideRoutine;

  /// @brief Field <isActive>k__BackingField, offset: 0x58, size: 0x1, def value: None
  bool ____isActive_k__BackingField;

  /// @brief Field isRegistered, offset: 0x59, size: 0x1, def value: None
  bool ___isRegistered;

  /// @brief Field onSetActiveCallbacks, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::__MobileSlidingPage__OnSetActiveCallback* ___onSetActiveCallbacks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MobileSlidingPage, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileSlidingPage, ___escapeZoneContainer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileSlidingPage, ___slidingRect) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileSlidingPage, ___slideInCurve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileSlidingPage, ___slideInDuration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileSlidingPage, ___slideOutCurve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileSlidingPage, ___slideOutDuration) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileSlidingPage, ___openDir) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileSlidingPage, ___curSlideRatio) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileSlidingPage, ___curSlideRoutine) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileSlidingPage, ____isActive_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileSlidingPage, ___isRegistered) == 0x59, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileSlidingPage, ___onSetActiveCallbacks) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MobileSlidingPage);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MobileSlidingPage*, "", "MobileSlidingPage");
NEED_NO_BOX(::GlobalNamespace::__MobileSlidingPage__OnSetActiveCallback);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MobileSlidingPage__OnSetActiveCallback*, "", "MobileSlidingPage/OnSetActiveCallback");
NEED_NO_BOX(::GlobalNamespace::__MobileSlidingPage___DoSlide_d__25);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MobileSlidingPage___DoSlide_d__25*, "", "MobileSlidingPage/<DoSlide>d__25");
NEED_NO_BOX(::GlobalNamespace::__MobileSlidingPage___RefreshSlideRatioOnNextFrame_d__29);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MobileSlidingPage___RefreshSlideRatioOnNextFrame_d__29*, "", "MobileSlidingPage/<RefreshSlideRatioOnNextFrame>d__29");
