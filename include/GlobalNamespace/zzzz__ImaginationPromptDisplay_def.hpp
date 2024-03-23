#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ImaginationPrompt_def.hpp"
#include "GlobalNamespace/zzzz__PromptDisplay_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ImaginationPromptDisplay)
namespace GlobalNamespace {
class ImaginationPrompt;
}
namespace GlobalNamespace {
class ThoughtBubble;
}
namespace GlobalNamespace {
class __ImaginationPromptDisplay___DoPositionTransition_d__17;
}
namespace GlobalNamespace {
class __ImaginationPromptDisplay____c__DisplayClass3_0;
}
namespace GlobalNamespace {
struct __ImaginationPrompt__ActionType;
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
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ImaginationPromptDisplay;
}
namespace GlobalNamespace {
class __ImaginationPromptDisplay___DoPositionTransition_d__17;
}
namespace GlobalNamespace {
class __ImaginationPromptDisplay____c__DisplayClass3_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ImaginationPromptDisplay);
MARK_REF_PTR_T(::GlobalNamespace::__ImaginationPromptDisplay___DoPositionTransition_d__17);
MARK_REF_PTR_T(::GlobalNamespace::__ImaginationPromptDisplay____c__DisplayClass3_0);
// Type: ::<>c__DisplayClass3_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ImaginationPromptDisplay::<>c__DisplayClass3_0*
class CORDL_TYPE __ImaginationPromptDisplay____c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::ImaginationPromptDisplay> __4__this;

  /// @brief Field actionType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_actionType, put = __cordl_internal_set_actionType))::GlobalNamespace::__ImaginationPrompt__ActionType actionType;

  static inline ::GlobalNamespace::__ImaginationPromptDisplay____c__DisplayClass3_0* New_ctor();

  /// @brief Method <Initialize>b__0, addr 0x15490a0, size 0x24, virtual false, abstract: false, final false
  inline void _Initialize_b__0(::GlobalNamespace::ThoughtBubble* bubble);

  /// @brief Method <Initialize>b__1, addr 0x15490c4, size 0x24, virtual false, abstract: false, final false
  inline void _Initialize_b__1(::GlobalNamespace::ThoughtBubble* bubble);

  constexpr ::UnityW<::GlobalNamespace::ImaginationPromptDisplay> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::ImaginationPromptDisplay>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::__ImaginationPrompt__ActionType const& __cordl_internal_get_actionType() const;

  constexpr ::GlobalNamespace::__ImaginationPrompt__ActionType& __cordl_internal_get_actionType();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ImaginationPromptDisplay> value);

  constexpr void __cordl_internal_set_actionType(::GlobalNamespace::__ImaginationPrompt__ActionType value);

  /// @brief Method .ctor, addr 0x15489f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ImaginationPromptDisplay____c__DisplayClass3_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ImaginationPromptDisplay____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ImaginationPromptDisplay____c__DisplayClass3_0(__ImaginationPromptDisplay____c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ImaginationPromptDisplay____c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ImaginationPromptDisplay____c__DisplayClass3_0(__ImaginationPromptDisplay____c__DisplayClass3_0 const&) = delete;

  /// @brief Field actionType, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__ImaginationPrompt__ActionType ___actionType;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ImaginationPromptDisplay> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ImaginationPromptDisplay____c__DisplayClass3_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ImaginationPromptDisplay____c__DisplayClass3_0, ___actionType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ImaginationPromptDisplay____c__DisplayClass3_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<DoPositionTransition>d__17
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ImaginationPromptDisplay::<DoPositionTransition>d__17*
class CORDL_TYPE __ImaginationPromptDisplay___DoPositionTransition_d__17 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::ImaginationPromptDisplay> __4__this;

  /// @brief Field <p>5__3, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__p_5__3, put = __cordl_internal_set__p_5__3)) float_t _p_5__3;

  /// @brief Field <startLocalPosition>5__2, offset 0x40, size 0xc
  __declspec(property(get = __cordl_internal_get__startLocalPosition_5__2, put = __cordl_internal_set__startLocalPosition_5__2))::UnityEngine::Vector3 _startLocalPosition_5__2;

  /// @brief Field curve, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_curve, put = __cordl_internal_set_curve))::UnityEngine::AnimationCurve* curve;

  /// @brief Field duration, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_duration, put = __cordl_internal_set_duration)) float_t duration;

  /// @brief Field targetLocalPosition, offset 0x2c, size 0xc
  __declspec(property(get = __cordl_internal_get_targetLocalPosition, put = __cordl_internal_set_targetLocalPosition))::UnityEngine::Vector3 targetLocalPosition;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x15490ec, size 0x150, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__ImaginationPromptDisplay___DoPositionTransition_d__17* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x154923c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x1549244, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1549284, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x15490e8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::ImaginationPromptDisplay> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::ImaginationPromptDisplay>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__p_5__3() const;

  constexpr float_t& __cordl_internal_get__p_5__3();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startLocalPosition_5__2() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__startLocalPosition_5__2();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_curve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_curve() const;

  constexpr float_t const& __cordl_internal_get_duration() const;

  constexpr float_t& __cordl_internal_get_duration();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_targetLocalPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_targetLocalPosition();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ImaginationPromptDisplay> value);

  constexpr void __cordl_internal_set__p_5__3(float_t value);

  constexpr void __cordl_internal_set__startLocalPosition_5__2(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_curve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_duration(float_t value);

  constexpr void __cordl_internal_set_targetLocalPosition(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x1549070, size 0x28, virtual false, abstract: false, final false
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
  constexpr __ImaginationPromptDisplay___DoPositionTransition_d__17();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ImaginationPromptDisplay___DoPositionTransition_d__17", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ImaginationPromptDisplay___DoPositionTransition_d__17(__ImaginationPromptDisplay___DoPositionTransition_d__17&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ImaginationPromptDisplay___DoPositionTransition_d__17", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ImaginationPromptDisplay___DoPositionTransition_d__17(__ImaginationPromptDisplay___DoPositionTransition_d__17 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ImaginationPromptDisplay> _____4__this;

  /// @brief Field duration, offset: 0x28, size: 0x4, def value: None
  float_t ___duration;

  /// @brief Field targetLocalPosition, offset: 0x2c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___targetLocalPosition;

  /// @brief Field curve, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___curve;

  /// @brief Field <startLocalPosition>5__2, offset: 0x40, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____startLocalPosition_5__2;

  /// @brief Field <p>5__3, offset: 0x4c, size: 0x4, def value: None
  float_t ____p_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ImaginationPromptDisplay___DoPositionTransition_d__17, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ImaginationPromptDisplay___DoPositionTransition_d__17, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ImaginationPromptDisplay___DoPositionTransition_d__17, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ImaginationPromptDisplay___DoPositionTransition_d__17, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ImaginationPromptDisplay___DoPositionTransition_d__17, ___duration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ImaginationPromptDisplay___DoPositionTransition_d__17, ___targetLocalPosition) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ImaginationPromptDisplay___DoPositionTransition_d__17, ___curve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ImaginationPromptDisplay___DoPositionTransition_d__17, ____startLocalPosition_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ImaginationPromptDisplay___DoPositionTransition_d__17, ____p_5__3) == 0x4c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ImaginationPromptDisplay
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 208, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ImaginationPromptDisplay*
class CORDL_TYPE ImaginationPromptDisplay : public ::GlobalNamespace::PromptDisplay {
public:
  // Declarations
  using _DoPositionTransition_d__17 = ::GlobalNamespace::__ImaginationPromptDisplay___DoPositionTransition_d__17;

  using __c__DisplayClass3_0 = ::GlobalNamespace::__ImaginationPromptDisplay____c__DisplayClass3_0;

  /// @brief Field actionThoughtBubbleSpacing, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get_actionThoughtBubbleSpacing, put = __cordl_internal_set_actionThoughtBubbleSpacing)) float_t actionThoughtBubbleSpacing;

  /// @brief Field actionThoughtBubbles, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_actionThoughtBubbles,
                      put = __cordl_internal_set_actionThoughtBubbles))::ArrayW<::UnityW<::GlobalNamespace::ThoughtBubble>, ::Array<::UnityW<::GlobalNamespace::ThoughtBubble>>*> actionThoughtBubbles;

  /// @brief Field actionTypeReference, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get_actionTypeReference, put = __cordl_internal_set_actionTypeReference))::GlobalNamespace::__ImaginationPrompt__ActionType actionTypeReference;

  /// @brief Field curShiftTransitionRoutine, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_curShiftTransitionRoutine, put = __cordl_internal_set_curShiftTransitionRoutine))::UnityEngine::Coroutine* curShiftTransitionRoutine;

  /// @brief Field isShifted, offset 0xb0, size 0x1
  __declspec(property(get = __cordl_internal_get_isShifted, put = __cordl_internal_set_isShifted)) bool isShifted;

  /// @brief Field shiftActivateCurve, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_shiftActivateCurve, put = __cordl_internal_set_shiftActivateCurve))::UnityEngine::AnimationCurve* shiftActivateCurve;

  /// @brief Field shiftDeactivateCurve, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_shiftDeactivateCurve, put = __cordl_internal_set_shiftDeactivateCurve))::UnityEngine::AnimationCurve* shiftDeactivateCurve;

  /// @brief Field shiftDuration, offset 0xb4, size 0x4
  __declspec(property(get = __cordl_internal_get_shiftDuration, put = __cordl_internal_set_shiftDuration)) float_t shiftDuration;

  /// @brief Field shiftedLocalPosition, offset 0xa4, size 0xc
  __declspec(property(get = __cordl_internal_get_shiftedLocalPosition, put = __cordl_internal_set_shiftedLocalPosition))::UnityEngine::Vector3 shiftedLocalPosition;

  /// @brief Method DisplayPrompt, addr 0x15489f8, size 0x9c, virtual true, abstract: false, final false
  inline void DisplayPrompt(::GlobalNamespace::ImaginationPrompt* promptData);

  /// @brief Method DoPositionTransition, addr 0x1548fd0, size 0xa0, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DoPositionTransition(::UnityEngine::Vector3 targetLocalPosition, float_t duration, ::UnityEngine::AnimationCurve* curve);

  /// @brief Method GetThoughtBubbleForActionType, addr 0x1548d28, size 0x30, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::ThoughtBubble> GetThoughtBubbleForActionType(::GlobalNamespace::__ImaginationPrompt__ActionType actionType);

  /// @brief Method Initialize, addr 0x15487b8, size 0x238, virtual true, abstract: false, final false
  inline void Initialize();

  static inline ::GlobalNamespace::ImaginationPromptDisplay* New_ctor();

  /// @brief Method SetAutoDismissProgress, addr 0x1548e5c, size 0x4, virtual true, abstract: false, final false
  inline void SetAutoDismissProgress(float_t progress);

  /// @brief Method SetShifted, addr 0x1548e60, size 0x170, virtual true, abstract: false, final false
  inline void SetShifted(bool newIsShifted, bool instant);

  /// @brief Method SetSize, addr 0x1548e20, size 0x3c, virtual true, abstract: false, final false
  inline void SetSize(float_t size);

  /// @brief Method SetupActionActiveStates, addr 0x1548d58, size 0xc8, virtual true, abstract: false, final false
  inline void SetupActionActiveStates(bool open, ::ArrayW<::GlobalNamespace::__ImaginationPrompt__ActionType, ::Array<::GlobalNamespace::__ImaginationPrompt__ActionType>*> actions, bool instant);

  /// @brief Method SetupActionPositions, addr 0x1548a94, size 0x294, virtual true, abstract: false, final false
  inline void SetupActionPositions(::ArrayW<::GlobalNamespace::__ImaginationPrompt__ActionType, ::Array<::GlobalNamespace::__ImaginationPrompt__ActionType>*> actions);

  constexpr float_t const& __cordl_internal_get_actionThoughtBubbleSpacing() const;

  constexpr float_t& __cordl_internal_get_actionThoughtBubbleSpacing();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::ThoughtBubble>, ::Array<::UnityW<::GlobalNamespace::ThoughtBubble>>*> const& __cordl_internal_get_actionThoughtBubbles() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::ThoughtBubble>, ::Array<::UnityW<::GlobalNamespace::ThoughtBubble>>*>& __cordl_internal_get_actionThoughtBubbles();

  constexpr ::GlobalNamespace::__ImaginationPrompt__ActionType const& __cordl_internal_get_actionTypeReference() const;

  constexpr ::GlobalNamespace::__ImaginationPrompt__ActionType& __cordl_internal_get_actionTypeReference();

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_curShiftTransitionRoutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_curShiftTransitionRoutine() const;

  constexpr bool const& __cordl_internal_get_isShifted() const;

  constexpr bool& __cordl_internal_get_isShifted();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_shiftActivateCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_shiftActivateCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_shiftDeactivateCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_shiftDeactivateCurve() const;

  constexpr float_t const& __cordl_internal_get_shiftDuration() const;

  constexpr float_t& __cordl_internal_get_shiftDuration();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_shiftedLocalPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_shiftedLocalPosition();

  constexpr void __cordl_internal_set_actionThoughtBubbleSpacing(float_t value);

  constexpr void __cordl_internal_set_actionThoughtBubbles(::ArrayW<::UnityW<::GlobalNamespace::ThoughtBubble>, ::Array<::UnityW<::GlobalNamespace::ThoughtBubble>>*> value);

  constexpr void __cordl_internal_set_actionTypeReference(::GlobalNamespace::__ImaginationPrompt__ActionType value);

  constexpr void __cordl_internal_set_curShiftTransitionRoutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_isShifted(bool value);

  constexpr void __cordl_internal_set_shiftActivateCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_shiftDeactivateCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_shiftDuration(float_t value);

  constexpr void __cordl_internal_set_shiftedLocalPosition(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x1549098, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ImaginationPromptDisplay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ImaginationPromptDisplay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ImaginationPromptDisplay(ImaginationPromptDisplay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ImaginationPromptDisplay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ImaginationPromptDisplay(ImaginationPromptDisplay const&) = delete;

  /// @brief Field actionTypeReference, offset: 0x94, size: 0x4, def value: None
  ::GlobalNamespace::__ImaginationPrompt__ActionType ___actionTypeReference;

  /// @brief Field actionThoughtBubbles, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::ThoughtBubble>, ::Array<::UnityW<::GlobalNamespace::ThoughtBubble>>*> ___actionThoughtBubbles;

  /// @brief Field actionThoughtBubbleSpacing, offset: 0xa0, size: 0x4, def value: None
  float_t ___actionThoughtBubbleSpacing;

  /// @brief Field shiftedLocalPosition, offset: 0xa4, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___shiftedLocalPosition;

  /// @brief Field isShifted, offset: 0xb0, size: 0x1, def value: None
  bool ___isShifted;

  /// @brief Field shiftDuration, offset: 0xb4, size: 0x4, def value: None
  float_t ___shiftDuration;

  /// @brief Field shiftActivateCurve, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___shiftActivateCurve;

  /// @brief Field shiftDeactivateCurve, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___shiftDeactivateCurve;

  /// @brief Field curShiftTransitionRoutine, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___curShiftTransitionRoutine;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ImaginationPromptDisplay, 0xd0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ImaginationPromptDisplay, ___actionTypeReference) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImaginationPromptDisplay, ___actionThoughtBubbles) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImaginationPromptDisplay, ___actionThoughtBubbleSpacing) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImaginationPromptDisplay, ___shiftedLocalPosition) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImaginationPromptDisplay, ___isShifted) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImaginationPromptDisplay, ___shiftDuration) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImaginationPromptDisplay, ___shiftActivateCurve) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImaginationPromptDisplay, ___shiftDeactivateCurve) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImaginationPromptDisplay, ___curShiftTransitionRoutine) == 0xc8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ImaginationPromptDisplay);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ImaginationPromptDisplay*, "", "ImaginationPromptDisplay");
NEED_NO_BOX(::GlobalNamespace::__ImaginationPromptDisplay___DoPositionTransition_d__17);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ImaginationPromptDisplay___DoPositionTransition_d__17*, "", "ImaginationPromptDisplay/<DoPositionTransition>d__17");
NEED_NO_BOX(::GlobalNamespace::__ImaginationPromptDisplay____c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ImaginationPromptDisplay____c__DisplayClass3_0*, "", "ImaginationPromptDisplay/<>c__DisplayClass3_0");
