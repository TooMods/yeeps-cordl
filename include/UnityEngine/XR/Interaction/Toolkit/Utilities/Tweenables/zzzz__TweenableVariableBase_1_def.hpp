#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__BindableVariable_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TweenableVariableBase_1)
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables {
template <typename T> class __TweenableVariableBase_1___PlaySequence_d__16;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables {
template <typename T> class __TweenableVariableBase_1___StartAutoTween_d__15;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables {
template <typename T> class TweenableVariableBase_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables {
template <typename T> class __TweenableVariableBase_1___PlaySequence_d__16;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables {
template <typename T> class __TweenableVariableBase_1___StartAutoTween_d__15;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1);
MARK_GEN_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::__TweenableVariableBase_1___PlaySequence_d__16);
MARK_GEN_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::__TweenableVariableBase_1___StartAutoTween_d__15);
// Type: ::<StartAutoTween>d__15
// SizeInfo { instance_size: 48, native_size: 44, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::TweenableVariableBase`1::<StartAutoTween>d__15<T>*
class CORDL_TYPE __TweenableVariableBase_1___StartAutoTween_d__15 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>* __4__this;

  /// @brief Field deltaTimeMultiplier, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_deltaTimeMultiplier, put = __cordl_internal_set_deltaTimeMultiplier)) float_t deltaTimeMultiplier;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::__TweenableVariableBase_1___StartAutoTween_d__15<T>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>*> const& __cordl_internal_get___4__this() const;

  constexpr float_t const& __cordl_internal_get_deltaTimeMultiplier() const;

  constexpr float_t& __cordl_internal_get_deltaTimeMultiplier();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>* value);

  constexpr void __cordl_internal_set_deltaTimeMultiplier(float_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
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
  constexpr __TweenableVariableBase_1___StartAutoTween_d__15();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TweenableVariableBase_1___StartAutoTween_d__15", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TweenableVariableBase_1___StartAutoTween_d__15(__TweenableVariableBase_1___StartAutoTween_d__15&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TweenableVariableBase_1___StartAutoTween_d__15", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TweenableVariableBase_1___StartAutoTween_d__15(__TweenableVariableBase_1___StartAutoTween_d__15 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>* _____4__this;

  /// @brief Field deltaTimeMultiplier, offset: 0x28, size: 0x4, def value: None
  float_t ___deltaTimeMultiplier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables
// Type: ::<PlaySequence>d__16
// SizeInfo { instance_size: 80, native_size: 76, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::TweenableVariableBase`1::<PlaySequence>d__16<T>*
class CORDL_TYPE __TweenableVariableBase_1___PlaySequence_d__16 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>* __4__this;

  /// @brief Field <timeElapsed>5__2, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__timeElapsed_5__2, put = __cordl_internal_set__timeElapsed_5__2)) float_t _timeElapsed_5__2;

  /// @brief Field duration, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_duration, put = __cordl_internal_set_duration)) float_t duration;

  /// @brief Field finish, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_finish, put = __cordl_internal_set_finish)) T finish;

  /// @brief Field onComplete, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_onComplete, put = __cordl_internal_set_onComplete))::System::Action* onComplete;

  /// @brief Field start, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_start, put = __cordl_internal_set_start)) T start;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::__TweenableVariableBase_1___PlaySequence_d__16<T>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>*> const& __cordl_internal_get___4__this() const;

  constexpr float_t const& __cordl_internal_get__timeElapsed_5__2() const;

  constexpr float_t& __cordl_internal_get__timeElapsed_5__2();

  constexpr float_t const& __cordl_internal_get_duration() const;

  constexpr float_t& __cordl_internal_get_duration();

  constexpr T const& __cordl_internal_get_finish() const;

  constexpr T& __cordl_internal_get_finish();

  constexpr ::System::Action*& __cordl_internal_get_onComplete();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_onComplete() const;

  constexpr T const& __cordl_internal_get_start() const;

  constexpr T& __cordl_internal_get_start();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>* value);

  constexpr void __cordl_internal_set__timeElapsed_5__2(float_t value);

  constexpr void __cordl_internal_set_duration(float_t value);

  constexpr void __cordl_internal_set_finish(T value);

  constexpr void __cordl_internal_set_onComplete(::System::Action* value);

  constexpr void __cordl_internal_set_start(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
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
  constexpr __TweenableVariableBase_1___PlaySequence_d__16();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TweenableVariableBase_1___PlaySequence_d__16", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TweenableVariableBase_1___PlaySequence_d__16(__TweenableVariableBase_1___PlaySequence_d__16&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TweenableVariableBase_1___PlaySequence_d__16", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TweenableVariableBase_1___PlaySequence_d__16(__TweenableVariableBase_1___PlaySequence_d__16 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>* _____4__this;

  /// @brief Field duration, offset: 0x28, size: 0x4, def value: None
  float_t ___duration;

  /// @brief Field start, offset: 0x30, size: 0x8, def value: None
  T ___start;

  /// @brief Field finish, offset: 0x38, size: 0x8, def value: None
  T ___finish;

  /// @brief Field onComplete, offset: 0x40, size: 0x8, def value: None
  ::System::Action* ___onComplete;

  /// @brief Field <timeElapsed>5__2, offset: 0x48, size: 0x4, def value: None
  float_t ____timeElapsed_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables
// Type: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables::TweenableVariableBase`1
// SizeInfo { instance_size: 80, native_size: 80, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables::TweenableVariableBase`1<T>*
class CORDL_TYPE TweenableVariableBase_1 : public ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<T> {
public:
  // Declarations
  using _PlaySequence_d__16 = ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::__TweenableVariableBase_1___PlaySequence_d__16<T>;

  using _StartAutoTween_d__15 = ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::__TweenableVariableBase_1___StartAutoTween_d__15<T>;

  /// @brief Field <initialValue>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__initialValue_k__BackingField, put = __cordl_internal_set__initialValue_k__BackingField)) T _initialValue_k__BackingField;

  /// @brief Field <target>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__target_k__BackingField, put = __cordl_internal_set__target_k__BackingField)) T _target_k__BackingField;

  __declspec(property(get = get_animationCurve, put = set_animationCurve))::UnityEngine::AnimationCurve* animationCurve;

  __declspec(property(get = get_initialValue, put = set_initialValue)) T initialValue;

  /// @brief Field m_AnimationCurve, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AnimationCurve, put = __cordl_internal_set_m_AnimationCurve))::UnityEngine::AnimationCurve* m_AnimationCurve;

  __declspec(property(get = get_target, put = set_target)) T target;

  /// @brief Method ExecuteTween, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ExecuteTween(T startValue, T targetValue, float_t tweenAmount, bool useCurve);

  /// @brief Method HandleTween, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandleTween(float_t tweenTarget);

  static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>* New_ctor();

  /// @brief Method OnAnimationCurveChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnAnimationCurveChanged(::UnityEngine::AnimationCurve* value);

  /// @brief Method PlaySequence, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* PlaySequence(T start, T finish, float_t duration, ::System::Action* onComplete);

  /// @brief Method PreprocessTween, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void PreprocessTween();

  /// @brief Method StartAutoTween, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* StartAutoTween(float_t deltaTimeMultiplier);

  constexpr T const& __cordl_internal_get__initialValue_k__BackingField() const;

  constexpr T& __cordl_internal_get__initialValue_k__BackingField();

  constexpr T const& __cordl_internal_get__target_k__BackingField() const;

  constexpr T& __cordl_internal_get__target_k__BackingField();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_m_AnimationCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_m_AnimationCurve() const;

  constexpr void __cordl_internal_set__initialValue_k__BackingField(T value);

  constexpr void __cordl_internal_set__target_k__BackingField(T value);

  constexpr void __cordl_internal_set_m_AnimationCurve(::UnityEngine::AnimationCurve* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_animationCurve, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationCurve* get_animationCurve();

  /// @brief Method get_initialValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_initialValue();

  /// @brief Method get_target, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_target();

  /// @brief Method set_animationCurve, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_animationCurve(::UnityEngine::AnimationCurve* value);

  /// @brief Method set_initialValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_initialValue(T value);

  /// @brief Method set_target, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_target(T value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TweenableVariableBase_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TweenableVariableBase_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TweenableVariableBase_1(TweenableVariableBase_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TweenableVariableBase_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TweenableVariableBase_1(TweenableVariableBase_1 const&) = delete;

  /// @brief Field m_AnimationCurve, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___m_AnimationCurve;

  /// @brief Field <target>k__BackingField, offset: 0x40, size: 0x8, def value: None
  T ____target_k__BackingField;

  /// @brief Field <initialValue>k__BackingField, offset: 0x48, size: 0x8, def value: None
  T ____initialValue_k__BackingField;

  /// @brief Field k_NearlyOne offset 0xffffffff size 0x4
  static constexpr float_t k_NearlyOne{ 0.99999 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1, "UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables",
                                     "TweenableVariableBase`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::__TweenableVariableBase_1___PlaySequence_d__16,
                                     "UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables", "TweenableVariableBase`1/<PlaySequence>d__16");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::__TweenableVariableBase_1___StartAutoTween_d__15,
                                     "UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables", "TweenableVariableBase`1/<StartAutoTween>d__15");
