#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BootManager)
namespace GlobalNamespace {
class BootAcknowledgementPage;
}
namespace GlobalNamespace {
class OVROverlay;
}
namespace GlobalNamespace {
class __BootManager__OnTransitionComplete;
}
namespace GlobalNamespace {
class __BootManager___TransitionBackgroundRoutine_d__37;
}
namespace GlobalNamespace {
class __BootManager___TransitionVisibilityRoutine_d__32;
}
namespace GlobalNamespace {
class __BootManager____c;
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
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class BootManager;
}
namespace GlobalNamespace {
class __BootManager__OnTransitionComplete;
}
namespace GlobalNamespace {
class __BootManager___TransitionBackgroundRoutine_d__37;
}
namespace GlobalNamespace {
class __BootManager___TransitionVisibilityRoutine_d__32;
}
namespace GlobalNamespace {
class __BootManager____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BootManager);
MARK_REF_PTR_T(::GlobalNamespace::__BootManager__OnTransitionComplete);
MARK_REF_PTR_T(::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37);
MARK_REF_PTR_T(::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32);
MARK_REF_PTR_T(::GlobalNamespace::__BootManager____c);
// Type: ::OnTransitionComplete
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BootManager::OnTransitionComplete*
class CORDL_TYPE __BootManager__OnTransitionComplete : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x159b4ac, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x159b4cc, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x159b498, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::GlobalNamespace::__BootManager__OnTransitionComplete* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x159aad0, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BootManager__OnTransitionComplete();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BootManager__OnTransitionComplete", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BootManager__OnTransitionComplete(__BootManager__OnTransitionComplete&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BootManager__OnTransitionComplete", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BootManager__OnTransitionComplete(__BootManager__OnTransitionComplete const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BootManager__OnTransitionComplete, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BootManager::<>c*
class CORDL_TYPE __BootManager____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__BootManager____c* __9;

  /// @brief Field <>9__28_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__28_0, put = setStaticF___9__28_0))::GlobalNamespace::__BootManager__OnTransitionComplete* __9__28_0;

  static inline ::GlobalNamespace::__BootManager____c* New_ctor();

  /// @brief Method <GoToGame>b__28_0, addr 0x159b544, size 0x98, virtual false, abstract: false, final false
  inline void _GoToGame_b__28_0();

  /// @brief Method .ctor, addr 0x159b53c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__BootManager____c* getStaticF___9();

  static inline ::GlobalNamespace::__BootManager__OnTransitionComplete* getStaticF___9__28_0();

  static inline void setStaticF___9(::GlobalNamespace::__BootManager____c* value);

  static inline void setStaticF___9__28_0(::GlobalNamespace::__BootManager__OnTransitionComplete* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BootManager____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BootManager____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BootManager____c(__BootManager____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BootManager____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BootManager____c(__BootManager____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BootManager____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<TransitionVisibilityRoutine>d__32
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BootManager::<TransitionVisibilityRoutine>d__32*
class CORDL_TYPE __BootManager___TransitionVisibilityRoutine_d__32 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::BootManager> __4__this;

  /// @brief Field <p>5__3, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__p_5__3, put = __cordl_internal_set__p_5__3)) float_t _p_5__3;

  /// @brief Field <start>5__2, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__start_5__2, put = __cordl_internal_set__start_5__2)) float_t _start_5__2;

  /// @brief Field duration, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_duration, put = __cordl_internal_set_duration)) float_t duration;

  /// @brief Field onTransitionComplete, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_onTransitionComplete, put = __cordl_internal_set_onTransitionComplete))::GlobalNamespace::__BootManager__OnTransitionComplete* onTransitionComplete;

  /// @brief Field target, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_target, put = __cordl_internal_set_target)) float_t target;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x159b5e0, size 0xec, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x159b6cc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x159b6d4, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x159b714, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x159b5dc, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::BootManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::BootManager>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__p_5__3() const;

  constexpr float_t& __cordl_internal_get__p_5__3();

  constexpr float_t const& __cordl_internal_get__start_5__2() const;

  constexpr float_t& __cordl_internal_get__start_5__2();

  constexpr float_t const& __cordl_internal_get_duration() const;

  constexpr float_t& __cordl_internal_get_duration();

  constexpr ::GlobalNamespace::__BootManager__OnTransitionComplete*& __cordl_internal_get_onTransitionComplete();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BootManager__OnTransitionComplete*> const& __cordl_internal_get_onTransitionComplete() const;

  constexpr float_t const& __cordl_internal_get_target() const;

  constexpr float_t& __cordl_internal_get_target();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::BootManager> value);

  constexpr void __cordl_internal_set__p_5__3(float_t value);

  constexpr void __cordl_internal_set__start_5__2(float_t value);

  constexpr void __cordl_internal_set_duration(float_t value);

  constexpr void __cordl_internal_set_onTransitionComplete(::GlobalNamespace::__BootManager__OnTransitionComplete* value);

  constexpr void __cordl_internal_set_target(float_t value);

  /// @brief Method .ctor, addr 0x159b058, size 0x28, virtual false, abstract: false, final false
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
  constexpr __BootManager___TransitionVisibilityRoutine_d__32();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BootManager___TransitionVisibilityRoutine_d__32", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BootManager___TransitionVisibilityRoutine_d__32(__BootManager___TransitionVisibilityRoutine_d__32&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BootManager___TransitionVisibilityRoutine_d__32", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BootManager___TransitionVisibilityRoutine_d__32(__BootManager___TransitionVisibilityRoutine_d__32 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BootManager> _____4__this;

  /// @brief Field duration, offset: 0x28, size: 0x4, def value: None
  float_t ___duration;

  /// @brief Field target, offset: 0x2c, size: 0x4, def value: None
  float_t ___target;

  /// @brief Field onTransitionComplete, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__BootManager__OnTransitionComplete* ___onTransitionComplete;

  /// @brief Field <start>5__2, offset: 0x38, size: 0x4, def value: None
  float_t ____start_5__2;

  /// @brief Field <p>5__3, offset: 0x3c, size: 0x4, def value: None
  float_t ____p_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32, ___duration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32, ___target) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32, ___onTransitionComplete) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32, ____start_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32, ____p_5__3) == 0x3c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<TransitionBackgroundRoutine>d__37
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 92, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BootManager::<TransitionBackgroundRoutine>d__37*
class CORDL_TYPE __BootManager___TransitionBackgroundRoutine_d__37 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::BootManager> __4__this;

  /// @brief Field <p>5__3, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__p_5__3, put = __cordl_internal_set__p_5__3)) float_t _p_5__3;

  /// @brief Field <start>5__2, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get__start_5__2, put = __cordl_internal_set__start_5__2))::UnityEngine::Color _start_5__2;

  /// @brief Field duration, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_duration, put = __cordl_internal_set_duration)) float_t duration;

  /// @brief Field onTransitionComplete, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_onTransitionComplete, put = __cordl_internal_set_onTransitionComplete))::GlobalNamespace::__BootManager__OnTransitionComplete* onTransitionComplete;

  /// @brief Field target, offset 0x2c, size 0x10
  __declspec(property(get = __cordl_internal_get_target, put = __cordl_internal_set_target))::UnityEngine::Color target;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x159b720, size 0x120, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x159b840, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x159b848, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x159b888, size 0x31c6c, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x159b71c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::BootManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::BootManager>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__p_5__3() const;

  constexpr float_t& __cordl_internal_get__p_5__3();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__start_5__2() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__start_5__2();

  constexpr float_t const& __cordl_internal_get_duration() const;

  constexpr float_t& __cordl_internal_get_duration();

  constexpr ::GlobalNamespace::__BootManager__OnTransitionComplete*& __cordl_internal_get_onTransitionComplete();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BootManager__OnTransitionComplete*> const& __cordl_internal_get_onTransitionComplete() const;

  constexpr ::UnityEngine::Color const& __cordl_internal_get_target() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_target();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::BootManager> value);

  constexpr void __cordl_internal_set__p_5__3(float_t value);

  constexpr void __cordl_internal_set__start_5__2(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_duration(float_t value);

  constexpr void __cordl_internal_set_onTransitionComplete(::GlobalNamespace::__BootManager__OnTransitionComplete* value);

  constexpr void __cordl_internal_set_target(::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x159b130, size 0x28, virtual false, abstract: false, final false
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
  constexpr __BootManager___TransitionBackgroundRoutine_d__37();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BootManager___TransitionBackgroundRoutine_d__37", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BootManager___TransitionBackgroundRoutine_d__37(__BootManager___TransitionBackgroundRoutine_d__37&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BootManager___TransitionBackgroundRoutine_d__37", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BootManager___TransitionBackgroundRoutine_d__37(__BootManager___TransitionBackgroundRoutine_d__37 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BootManager> _____4__this;

  /// @brief Field duration, offset: 0x28, size: 0x4, def value: None
  float_t ___duration;

  /// @brief Field target, offset: 0x2c, size: 0x10, def value: None
  ::UnityEngine::Color ___target;

  /// @brief Field onTransitionComplete, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__BootManager__OnTransitionComplete* ___onTransitionComplete;

  /// @brief Field <start>5__2, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Color ____start_5__2;

  /// @brief Field <p>5__3, offset: 0x58, size: 0x4, def value: None
  float_t ____p_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37, ___duration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37, ___target) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37, ___onTransitionComplete) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37, ____start_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37, ____p_5__3) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BootManager
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BootManager*
class CORDL_TYPE BootManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using OnTransitionComplete = ::GlobalNamespace::__BootManager__OnTransitionComplete;

  using _TransitionBackgroundRoutine_d__37 = ::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37;

  using _TransitionVisibilityRoutine_d__32 = ::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32;

  using __c = ::GlobalNamespace::__BootManager____c;

  /// @brief Field OVROverlay, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_OVROverlay, put = __cordl_internal_set_OVROverlay))::UnityW<::GlobalNamespace::OVROverlay> OVROverlay;

  /// @brief Field OVROverlayCamera, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_OVROverlayCamera, put = __cordl_internal_set_OVROverlayCamera))::UnityW<::UnityEngine::Camera> OVROverlayCamera;

  /// @brief Field angleCorrectionEndThreshold, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_angleCorrectionEndThreshold, put = __cordl_internal_set_angleCorrectionEndThreshold)) float_t angleCorrectionEndThreshold;

  /// @brief Field angleCorrectionSpeed, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_angleCorrectionSpeed, put = __cordl_internal_set_angleCorrectionSpeed)) float_t angleCorrectionSpeed;

  /// @brief Field angleCorrectionStartThreshold, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_angleCorrectionStartThreshold, put = __cordl_internal_set_angleCorrectionStartThreshold)) float_t angleCorrectionStartThreshold;

  /// @brief Field backgroundTargetColor, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get_backgroundTargetColor, put = __cordl_internal_set_backgroundTargetColor))::UnityEngine::Color backgroundTargetColor;

  /// @brief Field backgroundTransitionInDuration, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_backgroundTransitionInDuration, put = __cordl_internal_set_backgroundTransitionInDuration)) float_t backgroundTransitionInDuration;

  /// @brief Field backgroundTransitionOutDuration, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_backgroundTransitionOutDuration, put = __cordl_internal_set_backgroundTransitionOutDuration)) float_t backgroundTransitionOutDuration;

  /// @brief Field camera, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_camera, put = __cordl_internal_set_camera))::UnityW<::UnityEngine::Camera> camera;

  /// @brief Field cameraTransform, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraTransform, put = __cordl_internal_set_cameraTransform))::UnityW<::UnityEngine::Transform> cameraTransform;

  /// @brief Field canvasAnchor, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_canvasAnchor, put = __cordl_internal_set_canvasAnchor))::UnityW<::UnityEngine::Transform> canvasAnchor;

  /// @brief Field canvasRect, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_canvasRect, put = __cordl_internal_set_canvasRect))::UnityW<::UnityEngine::RectTransform> canvasRect;

  /// @brief Field curTransitionBackgroundRoutine, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_curTransitionBackgroundRoutine, put = __cordl_internal_set_curTransitionBackgroundRoutine))::UnityEngine::Coroutine* curTransitionBackgroundRoutine;

  /// @brief Field curTransitionVisibilityRoutine, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_curTransitionVisibilityRoutine, put = __cordl_internal_set_curTransitionVisibilityRoutine))::UnityEngine::Coroutine* curTransitionVisibilityRoutine;

  /// @brief Field curVisibility, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get_curVisibility, put = __cordl_internal_set_curVisibility)) float_t curVisibility;

  /// @brief Field fadeImage, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_fadeImage, put = __cordl_internal_set_fadeImage))::UnityW<::UnityEngine::UI::Image> fadeImage;

  /// @brief Field fadeInDuration, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_fadeInDuration, put = __cordl_internal_set_fadeInDuration)) float_t fadeInDuration;

  /// @brief Field fadeOutDuration, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_fadeOutDuration, put = __cordl_internal_set_fadeOutDuration)) float_t fadeOutDuration;

  /// @brief Field isCorrectingAngle, offset 0x64, size 0x1
  __declspec(property(get = __cordl_internal_get_isCorrectingAngle, put = __cordl_internal_set_isCorrectingAngle)) bool isCorrectingAngle;

  /// @brief Field mobileOrthoSize, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_mobileOrthoSize, put = __cordl_internal_set_mobileOrthoSize)) float_t mobileOrthoSize;

  /// @brief Field overlayRenderTexture, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_overlayRenderTexture, put = __cordl_internal_set_overlayRenderTexture))::UnityW<::UnityEngine::RenderTexture> overlayRenderTexture;

  /// @brief Field termsOfServicePage, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_termsOfServicePage, put = __cordl_internal_set_termsOfServicePage))::UnityW<::GlobalNamespace::BootAcknowledgementPage> termsOfServicePage;

  /// @brief Method Awake, addr 0x159a650, size 0xb4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method GoToGame, addr 0x159a980, size 0xfc, virtual false, abstract: false, final false
  inline void GoToGame();

  /// @brief Method HasAcceptedTermsOfService, addr 0x159aa7c, size 0x54, virtual false, abstract: false, final false
  inline bool HasAcceptedTermsOfService();

  /// @brief Method LateUpdate, addr 0x159b158, size 0x284, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::BootManager* New_ctor();

  /// @brief Method OnReadyToDisplay, addr 0x159ac20, size 0x2c0, virtual false, abstract: false, final false
  inline void OnReadyToDisplay();

  /// @brief Method OnTermsOfServiceAccepted, addr 0x159aee0, size 0x94, virtual false, abstract: false, final false
  inline void OnTermsOfServiceAccepted();

  /// @brief Method SetVisibility, addr 0x159af74, size 0x58, virtual false, abstract: false, final false
  inline void SetVisibility(float_t newVisibility);

  /// @brief Method Start, addr 0x159a7a4, size 0x1dc, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TransitionBackground, addr 0x159ab8c, size 0x94, virtual false, abstract: false, final false
  inline void TransitionBackground(::UnityEngine::Color target, float_t duration, ::GlobalNamespace::__BootManager__OnTransitionComplete* onTransitionComplete);

  /// @brief Method TransitionBackgroundRoutine, addr 0x159b080, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* TransitionBackgroundRoutine(::UnityEngine::Color target, float_t duration, ::GlobalNamespace::__BootManager__OnTransitionComplete* onTransitionComplete);

  /// @brief Method TransitionVisibility, addr 0x159a704, size 0xa0, virtual false, abstract: false, final false
  inline void TransitionVisibility(float_t target, float_t duration, bool instant, ::GlobalNamespace::__BootManager__OnTransitionComplete* onTransitionComplete);

  /// @brief Method TransitionVisibilityRoutine, addr 0x159afcc, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* TransitionVisibilityRoutine(float_t target, float_t duration, ::GlobalNamespace::__BootManager__OnTransitionComplete* onTransitionComplete);

  /// @brief Method <OnTermsOfServiceAccepted>b__27_0, addr 0x159b420, size 0x78, virtual false, abstract: false, final false
  inline void _OnTermsOfServiceAccepted_b__27_0();

  constexpr ::UnityW<::GlobalNamespace::OVROverlay> const& __cordl_internal_get_OVROverlay() const;

  constexpr ::UnityW<::GlobalNamespace::OVROverlay>& __cordl_internal_get_OVROverlay();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_OVROverlayCamera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_OVROverlayCamera();

  constexpr float_t const& __cordl_internal_get_angleCorrectionEndThreshold() const;

  constexpr float_t& __cordl_internal_get_angleCorrectionEndThreshold();

  constexpr float_t const& __cordl_internal_get_angleCorrectionSpeed() const;

  constexpr float_t& __cordl_internal_get_angleCorrectionSpeed();

  constexpr float_t const& __cordl_internal_get_angleCorrectionStartThreshold() const;

  constexpr float_t& __cordl_internal_get_angleCorrectionStartThreshold();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_backgroundTargetColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_backgroundTargetColor();

  constexpr float_t const& __cordl_internal_get_backgroundTransitionInDuration() const;

  constexpr float_t& __cordl_internal_get_backgroundTransitionInDuration();

  constexpr float_t const& __cordl_internal_get_backgroundTransitionOutDuration() const;

  constexpr float_t& __cordl_internal_get_backgroundTransitionOutDuration();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_camera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_camera();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_cameraTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_cameraTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_canvasAnchor() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_canvasAnchor();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_canvasRect() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_canvasRect();

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_curTransitionBackgroundRoutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_curTransitionBackgroundRoutine() const;

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_curTransitionVisibilityRoutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_curTransitionVisibilityRoutine() const;

  constexpr float_t const& __cordl_internal_get_curVisibility() const;

  constexpr float_t& __cordl_internal_get_curVisibility();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_fadeImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_fadeImage();

  constexpr float_t const& __cordl_internal_get_fadeInDuration() const;

  constexpr float_t& __cordl_internal_get_fadeInDuration();

  constexpr float_t const& __cordl_internal_get_fadeOutDuration() const;

  constexpr float_t& __cordl_internal_get_fadeOutDuration();

  constexpr bool const& __cordl_internal_get_isCorrectingAngle() const;

  constexpr bool& __cordl_internal_get_isCorrectingAngle();

  constexpr float_t const& __cordl_internal_get_mobileOrthoSize() const;

  constexpr float_t& __cordl_internal_get_mobileOrthoSize();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_overlayRenderTexture() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_overlayRenderTexture();

  constexpr ::UnityW<::GlobalNamespace::BootAcknowledgementPage> const& __cordl_internal_get_termsOfServicePage() const;

  constexpr ::UnityW<::GlobalNamespace::BootAcknowledgementPage>& __cordl_internal_get_termsOfServicePage();

  constexpr void __cordl_internal_set_OVROverlay(::UnityW<::GlobalNamespace::OVROverlay> value);

  constexpr void __cordl_internal_set_OVROverlayCamera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set_angleCorrectionEndThreshold(float_t value);

  constexpr void __cordl_internal_set_angleCorrectionSpeed(float_t value);

  constexpr void __cordl_internal_set_angleCorrectionStartThreshold(float_t value);

  constexpr void __cordl_internal_set_backgroundTargetColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_backgroundTransitionInDuration(float_t value);

  constexpr void __cordl_internal_set_backgroundTransitionOutDuration(float_t value);

  constexpr void __cordl_internal_set_camera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set_cameraTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_canvasAnchor(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_canvasRect(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_curTransitionBackgroundRoutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_curTransitionVisibilityRoutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_curVisibility(float_t value);

  constexpr void __cordl_internal_set_fadeImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_fadeInDuration(float_t value);

  constexpr void __cordl_internal_set_fadeOutDuration(float_t value);

  constexpr void __cordl_internal_set_isCorrectingAngle(bool value);

  constexpr void __cordl_internal_set_mobileOrthoSize(float_t value);

  constexpr void __cordl_internal_set_overlayRenderTexture(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void __cordl_internal_set_termsOfServicePage(::UnityW<::GlobalNamespace::BootAcknowledgementPage> value);

  /// @brief Method .ctor, addr 0x159b3dc, size 0x44, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BootManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BootManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BootManager(BootManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BootManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BootManager(BootManager const&) = delete;

  /// @brief Field termsOfServicePage, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BootAcknowledgementPage> ___termsOfServicePage;

  /// @brief Field fadeInDuration, offset: 0x20, size: 0x4, def value: None
  float_t ___fadeInDuration;

  /// @brief Field fadeOutDuration, offset: 0x24, size: 0x4, def value: None
  float_t ___fadeOutDuration;

  /// @brief Field fadeImage, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___fadeImage;

  /// @brief Field backgroundTargetColor, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Color ___backgroundTargetColor;

  /// @brief Field backgroundTransitionInDuration, offset: 0x40, size: 0x4, def value: None
  float_t ___backgroundTransitionInDuration;

  /// @brief Field backgroundTransitionOutDuration, offset: 0x44, size: 0x4, def value: None
  float_t ___backgroundTransitionOutDuration;

  /// @brief Field canvasAnchor, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___canvasAnchor;

  /// @brief Field cameraTransform, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___cameraTransform;

  /// @brief Field angleCorrectionStartThreshold, offset: 0x58, size: 0x4, def value: None
  float_t ___angleCorrectionStartThreshold;

  /// @brief Field angleCorrectionEndThreshold, offset: 0x5c, size: 0x4, def value: None
  float_t ___angleCorrectionEndThreshold;

  /// @brief Field angleCorrectionSpeed, offset: 0x60, size: 0x4, def value: None
  float_t ___angleCorrectionSpeed;

  /// @brief Field isCorrectingAngle, offset: 0x64, size: 0x1, def value: None
  bool ___isCorrectingAngle;

  /// @brief Field OVROverlay, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVROverlay> ___OVROverlay;

  /// @brief Field OVROverlayCamera, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___OVROverlayCamera;

  /// @brief Field canvasRect, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___canvasRect;

  /// @brief Field overlayRenderTexture, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ___overlayRenderTexture;

  /// @brief Field camera, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___camera;

  /// @brief Field mobileOrthoSize, offset: 0x90, size: 0x4, def value: None
  float_t ___mobileOrthoSize;

  /// @brief Field curTransitionVisibilityRoutine, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___curTransitionVisibilityRoutine;

  /// @brief Field curVisibility, offset: 0xa0, size: 0x4, def value: None
  float_t ___curVisibility;

  /// @brief Field curTransitionBackgroundRoutine, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___curTransitionBackgroundRoutine;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Boot: " };

  /// @brief Field forceTermsOfServiceInEditor offset 0xffffffff size 0x1
  static constexpr bool forceTermsOfServiceInEditor{ true };

  /// @brief Field gameSceneIndex offset 0xffffffff size 0x4
  static constexpr int32_t gameSceneIndex{ static_cast<int32_t>(0x1) };

  /// @brief Field hasAcceptedTermsOfServicePrefKey offset 0xffffffff size 0x8
  static constexpr ::ConstString hasAcceptedTermsOfServicePrefKey{ u"hasAcceptedTermsOfService" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BootManager, 0xb0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BootManager, ___termsOfServicePage) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootManager, ___fadeInDuration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootManager, ___fadeOutDuration) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootManager, ___fadeImage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootManager, ___backgroundTargetColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootManager, ___backgroundTransitionInDuration) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootManager, ___backgroundTransitionOutDuration) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootManager, ___canvasAnchor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootManager, ___cameraTransform) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootManager, ___angleCorrectionStartThreshold) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootManager, ___angleCorrectionEndThreshold) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootManager, ___angleCorrectionSpeed) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootManager, ___isCorrectingAngle) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootManager, ___OVROverlay) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootManager, ___OVROverlayCamera) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootManager, ___canvasRect) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootManager, ___overlayRenderTexture) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootManager, ___camera) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootManager, ___mobileOrthoSize) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootManager, ___curTransitionVisibilityRoutine) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootManager, ___curVisibility) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootManager, ___curTransitionBackgroundRoutine) == 0xa8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BootManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BootManager*, "", "BootManager");
NEED_NO_BOX(::GlobalNamespace::__BootManager__OnTransitionComplete);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BootManager__OnTransitionComplete*, "", "BootManager/OnTransitionComplete");
NEED_NO_BOX(::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37*, "", "BootManager/<TransitionBackgroundRoutine>d__37");
NEED_NO_BOX(::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32*, "", "BootManager/<TransitionVisibilityRoutine>d__32");
NEED_NO_BOX(::GlobalNamespace::__BootManager____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BootManager____c*, "", "BootManager/<>c");
