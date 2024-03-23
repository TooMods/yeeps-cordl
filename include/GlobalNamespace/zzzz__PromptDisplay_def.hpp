#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PromptDisplay)
namespace GlobalNamespace {
class Avatar;
}
namespace GlobalNamespace {
class ExpressionController;
}
namespace GlobalNamespace {
class ImaginationPrompt;
}
namespace GlobalNamespace {
struct __ImaginationPrompt__ActionType;
}
namespace GlobalNamespace {
class __PromptDisplay__OnTransitionComlete;
}
namespace GlobalNamespace {
class __PromptDisplay___DoAutoDismiss_d__27;
}
namespace GlobalNamespace {
class __PromptDisplay___DoSizeTransition_d__39;
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
class AnimationCurve;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class PromptDisplay;
}
namespace GlobalNamespace {
class __PromptDisplay__OnTransitionComlete;
}
namespace GlobalNamespace {
class __PromptDisplay___DoAutoDismiss_d__27;
}
namespace GlobalNamespace {
class __PromptDisplay___DoSizeTransition_d__39;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PromptDisplay);
MARK_REF_PTR_T(::GlobalNamespace::__PromptDisplay__OnTransitionComlete);
MARK_REF_PTR_T(::GlobalNamespace::__PromptDisplay___DoAutoDismiss_d__27);
MARK_REF_PTR_T(::GlobalNamespace::__PromptDisplay___DoSizeTransition_d__39);
// Type: ::OnTransitionComlete
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PromptDisplay::OnTransitionComlete*
class CORDL_TYPE __PromptDisplay__OnTransitionComlete : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0xf20f4c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0xf20f6c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0xf20f38, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::GlobalNamespace::__PromptDisplay__OnTransitionComlete* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0xf20bd0, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PromptDisplay__OnTransitionComlete();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PromptDisplay__OnTransitionComlete", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PromptDisplay__OnTransitionComlete(__PromptDisplay__OnTransitionComlete&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PromptDisplay__OnTransitionComlete", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PromptDisplay__OnTransitionComlete(__PromptDisplay__OnTransitionComlete const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PromptDisplay__OnTransitionComlete, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<DoAutoDismiss>d__27
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PromptDisplay::<DoAutoDismiss>d__27*
class CORDL_TYPE __PromptDisplay___DoAutoDismiss_d__27 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::PromptDisplay> __4__this;

  /// @brief Field <p>5__2, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__p_5__2, put = __cordl_internal_set__p_5__2)) float_t _p_5__2;

  /// @brief Field delay, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_delay, put = __cordl_internal_set_delay)) float_t delay;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0xf20f7c, size 0xe8, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__PromptDisplay___DoAutoDismiss_d__27* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xf21064, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0xf2106c, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0xf210ac, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0xf20f78, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::PromptDisplay> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::PromptDisplay>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__p_5__2() const;

  constexpr float_t& __cordl_internal_get__p_5__2();

  constexpr float_t const& __cordl_internal_get_delay() const;

  constexpr float_t& __cordl_internal_get_delay();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PromptDisplay> value);

  constexpr void __cordl_internal_set__p_5__2(float_t value);

  constexpr void __cordl_internal_set_delay(float_t value);

  /// @brief Method .ctor, addr 0xf20d04, size 0x28, virtual false, abstract: false, final false
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
  constexpr __PromptDisplay___DoAutoDismiss_d__27();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PromptDisplay___DoAutoDismiss_d__27", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PromptDisplay___DoAutoDismiss_d__27(__PromptDisplay___DoAutoDismiss_d__27&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PromptDisplay___DoAutoDismiss_d__27", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PromptDisplay___DoAutoDismiss_d__27(__PromptDisplay___DoAutoDismiss_d__27 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field delay, offset: 0x20, size: 0x4, def value: None
  float_t ___delay;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PromptDisplay> _____4__this;

  /// @brief Field <p>5__2, offset: 0x30, size: 0x4, def value: None
  float_t ____p_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PromptDisplay___DoAutoDismiss_d__27, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PromptDisplay___DoAutoDismiss_d__27, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PromptDisplay___DoAutoDismiss_d__27, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PromptDisplay___DoAutoDismiss_d__27, ___delay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PromptDisplay___DoAutoDismiss_d__27, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PromptDisplay___DoAutoDismiss_d__27, ____p_5__2) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<DoSizeTransition>d__39
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PromptDisplay::<DoSizeTransition>d__39*
class CORDL_TYPE __PromptDisplay___DoSizeTransition_d__39 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::PromptDisplay> __4__this;

  /// @brief Field <p>5__3, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__p_5__3, put = __cordl_internal_set__p_5__3)) float_t _p_5__3;

  /// @brief Field <startSize>5__2, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__startSize_5__2, put = __cordl_internal_set__startSize_5__2)) float_t _startSize_5__2;

  /// @brief Field curve, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_curve, put = __cordl_internal_set_curve))::UnityEngine::AnimationCurve* curve;

  /// @brief Field duration, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_duration, put = __cordl_internal_set_duration)) float_t duration;

  /// @brief Field onComplete, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_onComplete, put = __cordl_internal_set_onComplete))::GlobalNamespace::__PromptDisplay__OnTransitionComlete* onComplete;

  /// @brief Field targetSize, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_targetSize, put = __cordl_internal_set_targetSize)) float_t targetSize;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0xf210b8, size 0x104, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__PromptDisplay___DoSizeTransition_d__39* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xf211bc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0xf211c4, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0xf21204, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0xf210b4, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::PromptDisplay> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::PromptDisplay>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__p_5__3() const;

  constexpr float_t& __cordl_internal_get__p_5__3();

  constexpr float_t const& __cordl_internal_get__startSize_5__2() const;

  constexpr float_t& __cordl_internal_get__startSize_5__2();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_curve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_curve() const;

  constexpr float_t const& __cordl_internal_get_duration() const;

  constexpr float_t& __cordl_internal_get_duration();

  constexpr ::GlobalNamespace::__PromptDisplay__OnTransitionComlete*& __cordl_internal_get_onComplete();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PromptDisplay__OnTransitionComlete*> const& __cordl_internal_get_onComplete() const;

  constexpr float_t const& __cordl_internal_get_targetSize() const;

  constexpr float_t& __cordl_internal_get_targetSize();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PromptDisplay> value);

  constexpr void __cordl_internal_set__p_5__3(float_t value);

  constexpr void __cordl_internal_set__startSize_5__2(float_t value);

  constexpr void __cordl_internal_set_curve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_duration(float_t value);

  constexpr void __cordl_internal_set_onComplete(::GlobalNamespace::__PromptDisplay__OnTransitionComlete* value);

  constexpr void __cordl_internal_set_targetSize(float_t value);

  /// @brief Method .ctor, addr 0xf20ef8, size 0x28, virtual false, abstract: false, final false
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
  constexpr __PromptDisplay___DoSizeTransition_d__39();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PromptDisplay___DoSizeTransition_d__39", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PromptDisplay___DoSizeTransition_d__39(__PromptDisplay___DoSizeTransition_d__39&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PromptDisplay___DoSizeTransition_d__39", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PromptDisplay___DoSizeTransition_d__39(__PromptDisplay___DoSizeTransition_d__39 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PromptDisplay> _____4__this;

  /// @brief Field duration, offset: 0x28, size: 0x4, def value: None
  float_t ___duration;

  /// @brief Field targetSize, offset: 0x2c, size: 0x4, def value: None
  float_t ___targetSize;

  /// @brief Field curve, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___curve;

  /// @brief Field onComplete, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__PromptDisplay__OnTransitionComlete* ___onComplete;

  /// @brief Field <startSize>5__2, offset: 0x40, size: 0x4, def value: None
  float_t ____startSize_5__2;

  /// @brief Field <p>5__3, offset: 0x44, size: 0x4, def value: None
  float_t ____p_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PromptDisplay___DoSizeTransition_d__39, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PromptDisplay___DoSizeTransition_d__39, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PromptDisplay___DoSizeTransition_d__39, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PromptDisplay___DoSizeTransition_d__39, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PromptDisplay___DoSizeTransition_d__39, ___duration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PromptDisplay___DoSizeTransition_d__39, ___targetSize) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PromptDisplay___DoSizeTransition_d__39, ___curve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PromptDisplay___DoSizeTransition_d__39, ___onComplete) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PromptDisplay___DoSizeTransition_d__39, ____startSize_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PromptDisplay___DoSizeTransition_d__39, ____p_5__3) == 0x44, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PromptDisplay
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 148, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PromptDisplay*
class CORDL_TYPE PromptDisplay : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using OnTransitionComlete = ::GlobalNamespace::__PromptDisplay__OnTransitionComlete;

  using _DoAutoDismiss_d__27 = ::GlobalNamespace::__PromptDisplay___DoAutoDismiss_d__27;

  using _DoSizeTransition_d__39 = ::GlobalNamespace::__PromptDisplay___DoSizeTransition_d__39;

  /// @brief Field <currentPrompt>k__BackingField, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__currentPrompt_k__BackingField,
                      put = __cordl_internal_set__currentPrompt_k__BackingField))::GlobalNamespace::ImaginationPrompt* _currentPrompt_k__BackingField;

  /// @brief Field autoDismissRoutine, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_autoDismissRoutine, put = __cordl_internal_set_autoDismissRoutine))::UnityEngine::Coroutine* autoDismissRoutine;

  /// @brief Field avatar, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_avatar, put = __cordl_internal_set_avatar))::UnityW<::GlobalNamespace::Avatar> avatar;

  /// @brief Field avatarContainer, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_avatarContainer, put = __cordl_internal_set_avatarContainer))::UnityW<::UnityEngine::GameObject> avatarContainer;

  /// @brief Field closeCurve, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_closeCurve, put = __cordl_internal_set_closeCurve))::UnityEngine::AnimationCurve* closeCurve;

  /// @brief Field closeDuration, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_closeDuration, put = __cordl_internal_set_closeDuration)) float_t closeDuration;

  /// @brief Field curSize, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_curSize, put = __cordl_internal_set_curSize)) float_t curSize;

  /// @brief Field curSizeTransitionRoutine, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_curSizeTransitionRoutine, put = __cordl_internal_set_curSizeTransitionRoutine))::UnityEngine::Coroutine* curSizeTransitionRoutine;

  __declspec(property(get = get_currentPrompt, put = set_currentPrompt))::GlobalNamespace::ImaginationPrompt* currentPrompt;

  /// @brief Field headVoiceChatSource, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_headVoiceChatSource, put = __cordl_internal_set_headVoiceChatSource))::UnityW<::GlobalNamespace::ExpressionController> headVoiceChatSource;

  /// @brief Field ignoresImaginationPromptManager, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_ignoresImaginationPromptManager, put = __cordl_internal_set_ignoresImaginationPromptManager)) bool ignoresImaginationPromptManager;

  __declspec(property(get = get_isReadyForNewPrompt)) bool isReadyForNewPrompt;

  __declspec(property(get = get_isTransitingSize)) bool isTransitingSize;

  /// @brief Field messageText, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_messageText, put = __cordl_internal_set_messageText))::UnityW<::UnityEngine::UI::Text> messageText;

  /// @brief Field openCurve, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_openCurve, put = __cordl_internal_set_openCurve))::UnityEngine::AnimationCurve* openCurve;

  /// @brief Field openDuration, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_openDuration, put = __cordl_internal_set_openDuration)) float_t openDuration;

  /// @brief Field promptCanvas, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_promptCanvas, put = __cordl_internal_set_promptCanvas))::UnityW<::UnityEngine::GameObject> promptCanvas;

  /// @brief Field soundKey, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_soundKey, put = __cordl_internal_set_soundKey))::StringW soundKey;

  /// @brief Field typeIconImage, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_typeIconImage, put = __cordl_internal_set_typeIconImage))::UnityW<::UnityEngine::UI::Image> typeIconImage;

  /// @brief Field useInMobileApp, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_useInMobileApp, put = __cordl_internal_set_useInMobileApp)) bool useInMobileApp;

  /// @brief Method CancelAutoDismiss, addr 0xf20d2c, size 0x38, virtual false, abstract: false, final false
  inline void CancelAutoDismiss();

  /// @brief Method ClearAvatar, addr 0xf20ab0, size 0x50, virtual false, abstract: false, final false
  inline void ClearAvatar();

  /// @brief Method ClearPrompt, addr 0xf20d64, size 0x98, virtual false, abstract: false, final false
  inline void ClearPrompt();

  /// @brief Method DisplayAvatar, addr 0xf20908, size 0x1a8, virtual false, abstract: false, final false
  inline void DisplayAvatar(::StringW userID);

  /// @brief Method DisplayPrompt, addr 0xf20554, size 0x2bc, virtual true, abstract: false, final false
  inline void DisplayPrompt(::GlobalNamespace::ImaginationPrompt* promptData);

  /// @brief Method DoAutoDismiss, addr 0xf20c8c, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DoAutoDismiss(float_t delay);

  /// @brief Method DoSizeTransition, addr 0xf20e68, size 0x90, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DoSizeTransition(float_t targetSize, float_t duration, ::UnityEngine::AnimationCurve* curve,
                                                              ::GlobalNamespace::__PromptDisplay__OnTransitionComlete* onComplete);

  /// @brief Method DoTransition, addr 0xf20810, size 0xf8, virtual false, abstract: false, final false
  inline void DoTransition(bool open, bool instant, ::GlobalNamespace::__PromptDisplay__OnTransitionComlete* onTransitionComlete);

  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Initialize();

  /// @brief Method MakeReadyForNewPrompt, addr 0xf20dfc, size 0x6c, virtual false, abstract: false, final false
  inline void MakeReadyForNewPrompt();

  static inline ::GlobalNamespace::PromptDisplay* New_ctor();

  /// @brief Method OnEnable, addr 0xf2048c, size 0xa0, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method RequestAutoDismiss, addr 0xf2052c, size 0x28, virtual false, abstract: false, final false
  inline void RequestAutoDismiss(float_t delay);

  /// @brief Method SetAutoDismissProgress, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetAutoDismissProgress(float_t progress);

  /// @brief Method SetShifted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetShifted(bool newIsShifted, bool instant);

  /// @brief Method SetSize, addr 0xf20f20, size 0x8, virtual true, abstract: false, final false
  inline void SetSize(float_t size);

  /// @brief Method SetupActionActiveStates, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetupActionActiveStates(bool open, ::ArrayW<::GlobalNamespace::__ImaginationPrompt__ActionType, ::Array<::GlobalNamespace::__ImaginationPrompt__ActionType>*> actions, bool instant);

  /// @brief Method SetupActionPositions, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetupActionPositions(::ArrayW<::GlobalNamespace::__ImaginationPrompt__ActionType, ::Array<::GlobalNamespace::__ImaginationPrompt__ActionType>*> actions);

  /// @brief Method Start, addr 0xf203b0, size 0xdc, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TakeAction, addr 0xf20b00, size 0xc0, virtual false, abstract: false, final false
  inline void TakeAction(::GlobalNamespace::__ImaginationPrompt__ActionType action);

  constexpr ::GlobalNamespace::ImaginationPrompt*& __cordl_internal_get__currentPrompt_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ImaginationPrompt*> const& __cordl_internal_get__currentPrompt_k__BackingField() const;

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_autoDismissRoutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_autoDismissRoutine() const;

  constexpr ::UnityW<::GlobalNamespace::Avatar> const& __cordl_internal_get_avatar() const;

  constexpr ::UnityW<::GlobalNamespace::Avatar>& __cordl_internal_get_avatar();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_avatarContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_avatarContainer();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_closeCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_closeCurve() const;

  constexpr float_t const& __cordl_internal_get_closeDuration() const;

  constexpr float_t& __cordl_internal_get_closeDuration();

  constexpr float_t const& __cordl_internal_get_curSize() const;

  constexpr float_t& __cordl_internal_get_curSize();

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_curSizeTransitionRoutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_curSizeTransitionRoutine() const;

  constexpr ::UnityW<::GlobalNamespace::ExpressionController> const& __cordl_internal_get_headVoiceChatSource() const;

  constexpr ::UnityW<::GlobalNamespace::ExpressionController>& __cordl_internal_get_headVoiceChatSource();

  constexpr bool const& __cordl_internal_get_ignoresImaginationPromptManager() const;

  constexpr bool& __cordl_internal_get_ignoresImaginationPromptManager();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_messageText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_messageText();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_openCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_openCurve() const;

  constexpr float_t const& __cordl_internal_get_openDuration() const;

  constexpr float_t& __cordl_internal_get_openDuration();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_promptCanvas() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_promptCanvas();

  constexpr ::StringW const& __cordl_internal_get_soundKey() const;

  constexpr ::StringW& __cordl_internal_get_soundKey();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_typeIconImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_typeIconImage();

  constexpr bool const& __cordl_internal_get_useInMobileApp() const;

  constexpr bool& __cordl_internal_get_useInMobileApp();

  constexpr void __cordl_internal_set__currentPrompt_k__BackingField(::GlobalNamespace::ImaginationPrompt* value);

  constexpr void __cordl_internal_set_autoDismissRoutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_avatar(::UnityW<::GlobalNamespace::Avatar> value);

  constexpr void __cordl_internal_set_avatarContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_closeCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_closeDuration(float_t value);

  constexpr void __cordl_internal_set_curSize(float_t value);

  constexpr void __cordl_internal_set_curSizeTransitionRoutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_headVoiceChatSource(::UnityW<::GlobalNamespace::ExpressionController> value);

  constexpr void __cordl_internal_set_ignoresImaginationPromptManager(bool value);

  constexpr void __cordl_internal_set_messageText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_openCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_openDuration(float_t value);

  constexpr void __cordl_internal_set_promptCanvas(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_soundKey(::StringW value);

  constexpr void __cordl_internal_set_typeIconImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_useInMobileApp(bool value);

  /// @brief Method .ctor, addr 0xf20f28, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_currentPrompt, addr 0xf20380, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ImaginationPrompt* get_currentPrompt();

  /// @brief Method get_isReadyForNewPrompt, addr 0xf20390, size 0x20, virtual false, abstract: false, final false
  inline bool get_isReadyForNewPrompt();

  /// @brief Method get_isTransitingSize, addr 0xf20bc0, size 0x10, virtual false, abstract: false, final false
  inline bool get_isTransitingSize();

  /// @brief Method set_currentPrompt, addr 0xf20388, size 0x8, virtual false, abstract: false, final false
  inline void set_currentPrompt(::GlobalNamespace::ImaginationPrompt* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PromptDisplay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PromptDisplay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PromptDisplay(PromptDisplay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PromptDisplay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PromptDisplay(PromptDisplay const&) = delete;

  /// @brief Field useInMobileApp, offset: 0x18, size: 0x1, def value: None
  bool ___useInMobileApp;

  /// @brief Field ignoresImaginationPromptManager, offset: 0x19, size: 0x1, def value: None
  bool ___ignoresImaginationPromptManager;

  /// @brief Field promptCanvas, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___promptCanvas;

  /// @brief Field messageText, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___messageText;

  /// @brief Field typeIconImage, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___typeIconImage;

  /// @brief Field avatar, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Avatar> ___avatar;

  /// @brief Field headVoiceChatSource, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ExpressionController> ___headVoiceChatSource;

  /// @brief Field avatarContainer, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___avatarContainer;

  /// @brief Field openCurve, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___openCurve;

  /// @brief Field openDuration, offset: 0x58, size: 0x4, def value: None
  float_t ___openDuration;

  /// @brief Field closeCurve, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___closeCurve;

  /// @brief Field closeDuration, offset: 0x68, size: 0x4, def value: None
  float_t ___closeDuration;

  /// @brief Field soundKey, offset: 0x70, size: 0x8, def value: None
  ::StringW ___soundKey;

  /// @brief Field <currentPrompt>k__BackingField, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::ImaginationPrompt* ____currentPrompt_k__BackingField;

  /// @brief Field autoDismissRoutine, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___autoDismissRoutine;

  /// @brief Field curSizeTransitionRoutine, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___curSizeTransitionRoutine;

  /// @brief Field curSize, offset: 0x90, size: 0x4, def value: None
  float_t ___curSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PromptDisplay, 0x98>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PromptDisplay, ___useInMobileApp) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PromptDisplay, ___ignoresImaginationPromptManager) == 0x19, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PromptDisplay, ___promptCanvas) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PromptDisplay, ___messageText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PromptDisplay, ___typeIconImage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PromptDisplay, ___avatar) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PromptDisplay, ___headVoiceChatSource) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PromptDisplay, ___avatarContainer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PromptDisplay, ___openCurve) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PromptDisplay, ___openDuration) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PromptDisplay, ___closeCurve) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PromptDisplay, ___closeDuration) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PromptDisplay, ___soundKey) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PromptDisplay, ____currentPrompt_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PromptDisplay, ___autoDismissRoutine) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PromptDisplay, ___curSizeTransitionRoutine) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PromptDisplay, ___curSize) == 0x90, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PromptDisplay);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PromptDisplay*, "", "PromptDisplay");
NEED_NO_BOX(::GlobalNamespace::__PromptDisplay__OnTransitionComlete);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PromptDisplay__OnTransitionComlete*, "", "PromptDisplay/OnTransitionComlete");
NEED_NO_BOX(::GlobalNamespace::__PromptDisplay___DoAutoDismiss_d__27);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PromptDisplay___DoAutoDismiss_d__27*, "", "PromptDisplay/<DoAutoDismiss>d__27");
NEED_NO_BOX(::GlobalNamespace::__PromptDisplay___DoSizeTransition_d__39);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PromptDisplay___DoSizeTransition_d__39*, "", "PromptDisplay/<DoSizeTransition>d__39");
