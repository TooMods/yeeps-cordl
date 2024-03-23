#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ImaginationScrollingArrow)
namespace GlobalNamespace {
class ScrollingPatternLayout;
}
namespace GlobalNamespace {
class __ImaginationScrollingArrow___DoTapScroll_d__28;
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
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class ImaginationScrollingArrow;
}
namespace GlobalNamespace {
class __ImaginationScrollingArrow___DoTapScroll_d__28;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ImaginationScrollingArrow);
MARK_REF_PTR_T(::GlobalNamespace::__ImaginationScrollingArrow___DoTapScroll_d__28);
// Type: ::<DoTapScroll>d__28
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ImaginationScrollingArrow::<DoTapScroll>d__28*
class CORDL_TYPE __ImaginationScrollingArrow___DoTapScroll_d__28 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::ImaginationScrollingArrow> __4__this;

  /// @brief Field <p>5__2, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__p_5__2, put = __cordl_internal_set__p_5__2)) float_t _p_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0xf4e6f8, size 0x144, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__ImaginationScrollingArrow___DoTapScroll_d__28* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xf4e83c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0xf4e844, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0xf4e884, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0xf4e6f4, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::ImaginationScrollingArrow> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::ImaginationScrollingArrow>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__p_5__2() const;

  constexpr float_t& __cordl_internal_get__p_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ImaginationScrollingArrow> value);

  constexpr void __cordl_internal_set__p_5__2(float_t value);

  /// @brief Method .ctor, addr 0xf4e6b0, size 0x28, virtual false, abstract: false, final false
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
  constexpr __ImaginationScrollingArrow___DoTapScroll_d__28();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ImaginationScrollingArrow___DoTapScroll_d__28", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ImaginationScrollingArrow___DoTapScroll_d__28(__ImaginationScrollingArrow___DoTapScroll_d__28&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ImaginationScrollingArrow___DoTapScroll_d__28", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ImaginationScrollingArrow___DoTapScroll_d__28(__ImaginationScrollingArrow___DoTapScroll_d__28 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ImaginationScrollingArrow> _____4__this;

  /// @brief Field <p>5__2, offset: 0x28, size: 0x4, def value: None
  float_t ____p_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ImaginationScrollingArrow___DoTapScroll_d__28, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ImaginationScrollingArrow___DoTapScroll_d__28, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ImaginationScrollingArrow___DoTapScroll_d__28, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ImaginationScrollingArrow___DoTapScroll_d__28, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ImaginationScrollingArrow___DoTapScroll_d__28, ____p_5__2) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ImaginationScrollingArrow
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ImaginationScrollingArrow*
class CORDL_TYPE ImaginationScrollingArrow : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _DoTapScroll_d__28 = ::GlobalNamespace::__ImaginationScrollingArrow___DoTapScroll_d__28;

  /// @brief Field curTapScrollRoutine, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_curTapScrollRoutine, put = __cordl_internal_set_curTapScrollRoutine))::UnityEngine::Coroutine* curTapScrollRoutine;

  /// @brief Field debugKey, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_debugKey, put = __cordl_internal_set_debugKey))::UnityEngine::KeyCode debugKey;

  /// @brief Field defaultScale, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_defaultScale, put = __cordl_internal_set_defaultScale)) float_t defaultScale;

  /// @brief Field initialVisibleScaleMul, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_initialVisibleScaleMul, put = __cordl_internal_set_initialVisibleScaleMul)) float_t initialVisibleScaleMul;

  /// @brief Field isTransitioningVisible, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_isTransitioningVisible, put = __cordl_internal_set_isTransitioningVisible)) bool isTransitioningVisible;

  /// @brief Field scaleContainer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_scaleContainer, put = __cordl_internal_set_scaleContainer))::UnityW<::UnityEngine::Transform> scaleContainer;

  /// @brief Field scrollSoundKey, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_scrollSoundKey, put = __cordl_internal_set_scrollSoundKey))::StringW scrollSoundKey;

  /// @brief Field scrollingPatternLayout, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_scrollingPatternLayout, put = __cordl_internal_set_scrollingPatternLayout))::UnityW<::GlobalNamespace::ScrollingPatternLayout> scrollingPatternLayout;

  /// @brief Field shouldBeVisible, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get_shouldBeVisible, put = __cordl_internal_set_shouldBeVisible)) bool shouldBeVisible;

  /// @brief Field tapScrollCurve, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_tapScrollCurve, put = __cordl_internal_set_tapScrollCurve))::UnityEngine::AnimationCurve* tapScrollCurve;

  /// @brief Field tapScrollDuration, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_tapScrollDuration, put = __cordl_internal_set_tapScrollDuration)) float_t tapScrollDuration;

  /// @brief Field tapScrollImpulse, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_tapScrollImpulse, put = __cordl_internal_set_tapScrollImpulse)) float_t tapScrollImpulse;

  /// @brief Field tapScrollSpeed, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_tapScrollSpeed, put = __cordl_internal_set_tapScrollSpeed)) float_t tapScrollSpeed;

  /// @brief Field targetScale, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_targetScale, put = __cordl_internal_set_targetScale)) float_t targetScale;

  /// @brief Field targetVisibleScaleMul, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_targetVisibleScaleMul, put = __cordl_internal_set_targetVisibleScaleMul)) float_t targetVisibleScaleMul;

  /// @brief Field visibleScaleMul, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_visibleScaleMul, put = __cordl_internal_set_visibleScaleMul)) float_t visibleScaleMul;

  /// @brief Field visibleTransitionRatio, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_visibleTransitionRatio, put = __cordl_internal_set_visibleTransitionRatio)) float_t visibleTransitionRatio;

  /// @brief Method DoTapScroll, addr 0xf4e644, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DoTapScroll();

  /// @brief Method Initialize, addr 0xf47f58, size 0x34, virtual false, abstract: false, final false
  inline void Initialize(::GlobalNamespace::ScrollingPatternLayout* scrollingPatternLayout);

  static inline ::GlobalNamespace::ImaginationScrollingArrow* New_ctor();

  /// @brief Method OnDisable, addr 0xf4e3b0, size 0x18, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnFirstHoverEnter, addr 0xf4e3c8, size 0x18, virtual false, abstract: false, final false
  inline void OnFirstHoverEnter();

  /// @brief Method OnLastHoverExit, addr 0xf4e3e0, size 0xc, virtual false, abstract: false, final false
  inline void OnLastHoverExit();

  /// @brief Method OnSelectEnter, addr 0xf4e558, size 0xec, virtual false, abstract: false, final false
  inline void OnSelectEnter();

  /// @brief Method OnSelectExit, addr 0xf4e6ac, size 0x4, virtual false, abstract: false, final false
  inline void OnSelectExit();

  /// @brief Method SetVisible, addr 0xf47f8c, size 0x128, virtual false, abstract: false, final false
  inline void SetVisible(bool newVisible, bool instant);

  /// @brief Method Update, addr 0xf4e3ec, size 0x16c, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_curTapScrollRoutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_curTapScrollRoutine() const;

  constexpr ::UnityEngine::KeyCode const& __cordl_internal_get_debugKey() const;

  constexpr ::UnityEngine::KeyCode& __cordl_internal_get_debugKey();

  constexpr float_t const& __cordl_internal_get_defaultScale() const;

  constexpr float_t& __cordl_internal_get_defaultScale();

  constexpr float_t const& __cordl_internal_get_initialVisibleScaleMul() const;

  constexpr float_t& __cordl_internal_get_initialVisibleScaleMul();

  constexpr bool const& __cordl_internal_get_isTransitioningVisible() const;

  constexpr bool& __cordl_internal_get_isTransitioningVisible();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_scaleContainer() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_scaleContainer();

  constexpr ::StringW const& __cordl_internal_get_scrollSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_scrollSoundKey();

  constexpr ::UnityW<::GlobalNamespace::ScrollingPatternLayout> const& __cordl_internal_get_scrollingPatternLayout() const;

  constexpr ::UnityW<::GlobalNamespace::ScrollingPatternLayout>& __cordl_internal_get_scrollingPatternLayout();

  constexpr bool const& __cordl_internal_get_shouldBeVisible() const;

  constexpr bool& __cordl_internal_get_shouldBeVisible();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_tapScrollCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_tapScrollCurve() const;

  constexpr float_t const& __cordl_internal_get_tapScrollDuration() const;

  constexpr float_t& __cordl_internal_get_tapScrollDuration();

  constexpr float_t const& __cordl_internal_get_tapScrollImpulse() const;

  constexpr float_t& __cordl_internal_get_tapScrollImpulse();

  constexpr float_t const& __cordl_internal_get_tapScrollSpeed() const;

  constexpr float_t& __cordl_internal_get_tapScrollSpeed();

  constexpr float_t const& __cordl_internal_get_targetScale() const;

  constexpr float_t& __cordl_internal_get_targetScale();

  constexpr float_t const& __cordl_internal_get_targetVisibleScaleMul() const;

  constexpr float_t& __cordl_internal_get_targetVisibleScaleMul();

  constexpr float_t const& __cordl_internal_get_visibleScaleMul() const;

  constexpr float_t& __cordl_internal_get_visibleScaleMul();

  constexpr float_t const& __cordl_internal_get_visibleTransitionRatio() const;

  constexpr float_t& __cordl_internal_get_visibleTransitionRatio();

  constexpr void __cordl_internal_set_curTapScrollRoutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_debugKey(::UnityEngine::KeyCode value);

  constexpr void __cordl_internal_set_defaultScale(float_t value);

  constexpr void __cordl_internal_set_initialVisibleScaleMul(float_t value);

  constexpr void __cordl_internal_set_isTransitioningVisible(bool value);

  constexpr void __cordl_internal_set_scaleContainer(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_scrollSoundKey(::StringW value);

  constexpr void __cordl_internal_set_scrollingPatternLayout(::UnityW<::GlobalNamespace::ScrollingPatternLayout> value);

  constexpr void __cordl_internal_set_shouldBeVisible(bool value);

  constexpr void __cordl_internal_set_tapScrollCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_tapScrollDuration(float_t value);

  constexpr void __cordl_internal_set_tapScrollImpulse(float_t value);

  constexpr void __cordl_internal_set_tapScrollSpeed(float_t value);

  constexpr void __cordl_internal_set_targetScale(float_t value);

  constexpr void __cordl_internal_set_targetVisibleScaleMul(float_t value);

  constexpr void __cordl_internal_set_visibleScaleMul(float_t value);

  constexpr void __cordl_internal_set_visibleTransitionRatio(float_t value);

  /// @brief Method .ctor, addr 0xf4e6d8, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ImaginationScrollingArrow();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ImaginationScrollingArrow", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ImaginationScrollingArrow(ImaginationScrollingArrow&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ImaginationScrollingArrow", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ImaginationScrollingArrow(ImaginationScrollingArrow const&) = delete;

  /// @brief Field scaleContainer, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___scaleContainer;

  /// @brief Field tapScrollImpulse, offset: 0x20, size: 0x4, def value: None
  float_t ___tapScrollImpulse;

  /// @brief Field tapScrollSpeed, offset: 0x24, size: 0x4, def value: None
  float_t ___tapScrollSpeed;

  /// @brief Field tapScrollDuration, offset: 0x28, size: 0x4, def value: None
  float_t ___tapScrollDuration;

  /// @brief Field tapScrollCurve, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___tapScrollCurve;

  /// @brief Field debugKey, offset: 0x38, size: 0x4, def value: None
  ::UnityEngine::KeyCode ___debugKey;

  /// @brief Field defaultScale, offset: 0x3c, size: 0x4, def value: None
  float_t ___defaultScale;

  /// @brief Field targetScale, offset: 0x40, size: 0x4, def value: None
  float_t ___targetScale;

  /// @brief Field shouldBeVisible, offset: 0x44, size: 0x1, def value: None
  bool ___shouldBeVisible;

  /// @brief Field visibleScaleMul, offset: 0x48, size: 0x4, def value: None
  float_t ___visibleScaleMul;

  /// @brief Field initialVisibleScaleMul, offset: 0x4c, size: 0x4, def value: None
  float_t ___initialVisibleScaleMul;

  /// @brief Field targetVisibleScaleMul, offset: 0x50, size: 0x4, def value: None
  float_t ___targetVisibleScaleMul;

  /// @brief Field visibleTransitionRatio, offset: 0x54, size: 0x4, def value: None
  float_t ___visibleTransitionRatio;

  /// @brief Field isTransitioningVisible, offset: 0x58, size: 0x1, def value: None
  bool ___isTransitioningVisible;

  /// @brief Field scrollingPatternLayout, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ScrollingPatternLayout> ___scrollingPatternLayout;

  /// @brief Field scrollSoundKey, offset: 0x68, size: 0x8, def value: None
  ::StringW ___scrollSoundKey;

  /// @brief Field curTapScrollRoutine, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___curTapScrollRoutine;

  /// @brief Field hoverInfateScaleMul offset 0xffffffff size 0x4
  static constexpr float_t hoverInfateScaleMul{ 1.35 };

  /// @brief Field scaleLerpSpeed offset 0xffffffff size 0x4
  static constexpr float_t scaleLerpSpeed{ 10.0 };

  /// @brief Field visibleScaleTransitionDuration offset 0xffffffff size 0x4
  static constexpr float_t visibleScaleTransitionDuration{ 0.25 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ImaginationScrollingArrow, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ImaginationScrollingArrow, ___scaleContainer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImaginationScrollingArrow, ___tapScrollImpulse) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImaginationScrollingArrow, ___tapScrollSpeed) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImaginationScrollingArrow, ___tapScrollDuration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImaginationScrollingArrow, ___tapScrollCurve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImaginationScrollingArrow, ___debugKey) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImaginationScrollingArrow, ___defaultScale) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImaginationScrollingArrow, ___targetScale) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImaginationScrollingArrow, ___shouldBeVisible) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImaginationScrollingArrow, ___visibleScaleMul) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImaginationScrollingArrow, ___initialVisibleScaleMul) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImaginationScrollingArrow, ___targetVisibleScaleMul) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImaginationScrollingArrow, ___visibleTransitionRatio) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImaginationScrollingArrow, ___isTransitioningVisible) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImaginationScrollingArrow, ___scrollingPatternLayout) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImaginationScrollingArrow, ___scrollSoundKey) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImaginationScrollingArrow, ___curTapScrollRoutine) == 0x70, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ImaginationScrollingArrow);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ImaginationScrollingArrow*, "", "ImaginationScrollingArrow");
NEED_NO_BOX(::GlobalNamespace::__ImaginationScrollingArrow___DoTapScroll_d__28);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ImaginationScrollingArrow___DoTapScroll_d__28*, "", "ImaginationScrollingArrow/<DoTapScroll>d__28");
