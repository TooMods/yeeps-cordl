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
CORDL_MODULE_EXPORT(FatalErrorDisplay)
namespace GlobalNamespace {
class __FatalErrorDisplay__OnTransitionComplete;
}
namespace GlobalNamespace {
class __FatalErrorDisplay___TransitionBackgroundRoutine_d__29;
}
namespace GlobalNamespace {
class __FatalErrorDisplay___TransitionVisibilityRoutine_d__24;
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
class Camera;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class FatalErrorDisplay;
}
namespace GlobalNamespace {
class __FatalErrorDisplay__OnTransitionComplete;
}
namespace GlobalNamespace {
class __FatalErrorDisplay___TransitionBackgroundRoutine_d__29;
}
namespace GlobalNamespace {
class __FatalErrorDisplay___TransitionVisibilityRoutine_d__24;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FatalErrorDisplay);
MARK_REF_PTR_T(::GlobalNamespace::__FatalErrorDisplay__OnTransitionComplete);
MARK_REF_PTR_T(::GlobalNamespace::__FatalErrorDisplay___TransitionBackgroundRoutine_d__29);
MARK_REF_PTR_T(::GlobalNamespace::__FatalErrorDisplay___TransitionVisibilityRoutine_d__24);
// Type: ::OnTransitionComplete
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FatalErrorDisplay::OnTransitionComplete*
class CORDL_TYPE __FatalErrorDisplay__OnTransitionComplete : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x29c89bc, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x29c89dc, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x29c89a8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::GlobalNamespace::__FatalErrorDisplay__OnTransitionComplete* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x29c82cc, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FatalErrorDisplay__OnTransitionComplete();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FatalErrorDisplay__OnTransitionComplete", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FatalErrorDisplay__OnTransitionComplete(__FatalErrorDisplay__OnTransitionComplete&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FatalErrorDisplay__OnTransitionComplete", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FatalErrorDisplay__OnTransitionComplete(__FatalErrorDisplay__OnTransitionComplete const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FatalErrorDisplay__OnTransitionComplete, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<TransitionVisibilityRoutine>d__24
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FatalErrorDisplay::<TransitionVisibilityRoutine>d__24*
class CORDL_TYPE __FatalErrorDisplay___TransitionVisibilityRoutine_d__24 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::FatalErrorDisplay> __4__this;

  /// @brief Field <p>5__3, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__p_5__3, put = __cordl_internal_set__p_5__3)) float_t _p_5__3;

  /// @brief Field <start>5__2, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__start_5__2, put = __cordl_internal_set__start_5__2)) float_t _start_5__2;

  /// @brief Field duration, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_duration, put = __cordl_internal_set_duration)) float_t duration;

  /// @brief Field onTransitionComplete, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_onTransitionComplete,
                      put = __cordl_internal_set_onTransitionComplete))::GlobalNamespace::__FatalErrorDisplay__OnTransitionComplete* onTransitionComplete;

  /// @brief Field target, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_target, put = __cordl_internal_set_target)) float_t target;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x29c89ec, size 0xec, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__FatalErrorDisplay___TransitionVisibilityRoutine_d__24* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x29c8ad8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x29c8ae0, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x29c8b20, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x29c89e8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::FatalErrorDisplay> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::FatalErrorDisplay>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__p_5__3() const;

  constexpr float_t& __cordl_internal_get__p_5__3();

  constexpr float_t const& __cordl_internal_get__start_5__2() const;

  constexpr float_t& __cordl_internal_get__start_5__2();

  constexpr float_t const& __cordl_internal_get_duration() const;

  constexpr float_t& __cordl_internal_get_duration();

  constexpr ::GlobalNamespace::__FatalErrorDisplay__OnTransitionComplete*& __cordl_internal_get_onTransitionComplete();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__FatalErrorDisplay__OnTransitionComplete*> const& __cordl_internal_get_onTransitionComplete() const;

  constexpr float_t const& __cordl_internal_get_target() const;

  constexpr float_t& __cordl_internal_get_target();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::FatalErrorDisplay> value);

  constexpr void __cordl_internal_set__p_5__3(float_t value);

  constexpr void __cordl_internal_set__start_5__2(float_t value);

  constexpr void __cordl_internal_set_duration(float_t value);

  constexpr void __cordl_internal_set_onTransitionComplete(::GlobalNamespace::__FatalErrorDisplay__OnTransitionComplete* value);

  constexpr void __cordl_internal_set_target(float_t value);

  /// @brief Method .ctor, addr 0x29c85f8, size 0x28, virtual false, abstract: false, final false
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
  constexpr __FatalErrorDisplay___TransitionVisibilityRoutine_d__24();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FatalErrorDisplay___TransitionVisibilityRoutine_d__24", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FatalErrorDisplay___TransitionVisibilityRoutine_d__24(__FatalErrorDisplay___TransitionVisibilityRoutine_d__24&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FatalErrorDisplay___TransitionVisibilityRoutine_d__24", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FatalErrorDisplay___TransitionVisibilityRoutine_d__24(__FatalErrorDisplay___TransitionVisibilityRoutine_d__24 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FatalErrorDisplay> _____4__this;

  /// @brief Field duration, offset: 0x28, size: 0x4, def value: None
  float_t ___duration;

  /// @brief Field target, offset: 0x2c, size: 0x4, def value: None
  float_t ___target;

  /// @brief Field onTransitionComplete, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__FatalErrorDisplay__OnTransitionComplete* ___onTransitionComplete;

  /// @brief Field <start>5__2, offset: 0x38, size: 0x4, def value: None
  float_t ____start_5__2;

  /// @brief Field <p>5__3, offset: 0x3c, size: 0x4, def value: None
  float_t ____p_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FatalErrorDisplay___TransitionVisibilityRoutine_d__24, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__FatalErrorDisplay___TransitionVisibilityRoutine_d__24, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FatalErrorDisplay___TransitionVisibilityRoutine_d__24, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FatalErrorDisplay___TransitionVisibilityRoutine_d__24, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FatalErrorDisplay___TransitionVisibilityRoutine_d__24, ___duration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FatalErrorDisplay___TransitionVisibilityRoutine_d__24, ___target) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FatalErrorDisplay___TransitionVisibilityRoutine_d__24, ___onTransitionComplete) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FatalErrorDisplay___TransitionVisibilityRoutine_d__24, ____start_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FatalErrorDisplay___TransitionVisibilityRoutine_d__24, ____p_5__3) == 0x3c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<TransitionBackgroundRoutine>d__29
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 92, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FatalErrorDisplay::<TransitionBackgroundRoutine>d__29*
class CORDL_TYPE __FatalErrorDisplay___TransitionBackgroundRoutine_d__29 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::FatalErrorDisplay> __4__this;

  /// @brief Field <p>5__3, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__p_5__3, put = __cordl_internal_set__p_5__3)) float_t _p_5__3;

  /// @brief Field <start>5__2, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get__start_5__2, put = __cordl_internal_set__start_5__2))::UnityEngine::Color _start_5__2;

  /// @brief Field duration, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_duration, put = __cordl_internal_set_duration)) float_t duration;

  /// @brief Field onTransitionComplete, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_onTransitionComplete,
                      put = __cordl_internal_set_onTransitionComplete))::GlobalNamespace::__FatalErrorDisplay__OnTransitionComplete* onTransitionComplete;

  /// @brief Field target, offset 0x2c, size 0x10
  __declspec(property(get = __cordl_internal_get_target, put = __cordl_internal_set_target))::UnityEngine::Color target;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x29c8b2c, size 0x120, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__FatalErrorDisplay___TransitionBackgroundRoutine_d__29* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x29c8c4c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x29c8c54, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x29c8c94, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x29c8b28, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::FatalErrorDisplay> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::FatalErrorDisplay>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__p_5__3() const;

  constexpr float_t& __cordl_internal_get__p_5__3();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__start_5__2() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__start_5__2();

  constexpr float_t const& __cordl_internal_get_duration() const;

  constexpr float_t& __cordl_internal_get_duration();

  constexpr ::GlobalNamespace::__FatalErrorDisplay__OnTransitionComplete*& __cordl_internal_get_onTransitionComplete();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__FatalErrorDisplay__OnTransitionComplete*> const& __cordl_internal_get_onTransitionComplete() const;

  constexpr ::UnityEngine::Color const& __cordl_internal_get_target() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_target();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::FatalErrorDisplay> value);

  constexpr void __cordl_internal_set__p_5__3(float_t value);

  constexpr void __cordl_internal_set__start_5__2(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_duration(float_t value);

  constexpr void __cordl_internal_set_onTransitionComplete(::GlobalNamespace::__FatalErrorDisplay__OnTransitionComplete* value);

  constexpr void __cordl_internal_set_target(::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x29c86d0, size 0x28, virtual false, abstract: false, final false
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
  constexpr __FatalErrorDisplay___TransitionBackgroundRoutine_d__29();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FatalErrorDisplay___TransitionBackgroundRoutine_d__29", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FatalErrorDisplay___TransitionBackgroundRoutine_d__29(__FatalErrorDisplay___TransitionBackgroundRoutine_d__29&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FatalErrorDisplay___TransitionBackgroundRoutine_d__29", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FatalErrorDisplay___TransitionBackgroundRoutine_d__29(__FatalErrorDisplay___TransitionBackgroundRoutine_d__29 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FatalErrorDisplay> _____4__this;

  /// @brief Field duration, offset: 0x28, size: 0x4, def value: None
  float_t ___duration;

  /// @brief Field target, offset: 0x2c, size: 0x10, def value: None
  ::UnityEngine::Color ___target;

  /// @brief Field onTransitionComplete, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__FatalErrorDisplay__OnTransitionComplete* ___onTransitionComplete;

  /// @brief Field <start>5__2, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Color ____start_5__2;

  /// @brief Field <p>5__3, offset: 0x58, size: 0x4, def value: None
  float_t ____p_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FatalErrorDisplay___TransitionBackgroundRoutine_d__29, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__FatalErrorDisplay___TransitionBackgroundRoutine_d__29, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FatalErrorDisplay___TransitionBackgroundRoutine_d__29, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FatalErrorDisplay___TransitionBackgroundRoutine_d__29, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FatalErrorDisplay___TransitionBackgroundRoutine_d__29, ___duration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FatalErrorDisplay___TransitionBackgroundRoutine_d__29, ___target) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FatalErrorDisplay___TransitionBackgroundRoutine_d__29, ___onTransitionComplete) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FatalErrorDisplay___TransitionBackgroundRoutine_d__29, ____start_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FatalErrorDisplay___TransitionBackgroundRoutine_d__29, ____p_5__3) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::FatalErrorDisplay
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FatalErrorDisplay*
class CORDL_TYPE FatalErrorDisplay : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using OnTransitionComplete = ::GlobalNamespace::__FatalErrorDisplay__OnTransitionComplete;

  using _TransitionBackgroundRoutine_d__29 = ::GlobalNamespace::__FatalErrorDisplay___TransitionBackgroundRoutine_d__29;

  using _TransitionVisibilityRoutine_d__24 = ::GlobalNamespace::__FatalErrorDisplay___TransitionVisibilityRoutine_d__24;

  /// @brief Field angleCorrectionEndThreshold, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_angleCorrectionEndThreshold, put = __cordl_internal_set_angleCorrectionEndThreshold)) float_t angleCorrectionEndThreshold;

  /// @brief Field angleCorrectionSpeed, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_angleCorrectionSpeed, put = __cordl_internal_set_angleCorrectionSpeed)) float_t angleCorrectionSpeed;

  /// @brief Field angleCorrectionStartThreshold, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_angleCorrectionStartThreshold, put = __cordl_internal_set_angleCorrectionStartThreshold)) float_t angleCorrectionStartThreshold;

  /// @brief Field backgroundTargetColor, offset 0x5c, size 0x10
  __declspec(property(get = __cordl_internal_get_backgroundTargetColor, put = __cordl_internal_set_backgroundTargetColor))::UnityEngine::Color backgroundTargetColor;

  /// @brief Field backgroundTransitionInDuration, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_backgroundTransitionInDuration, put = __cordl_internal_set_backgroundTransitionInDuration)) float_t backgroundTransitionInDuration;

  /// @brief Field camera, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_camera, put = __cordl_internal_set_camera))::UnityW<::UnityEngine::Camera> camera;

  /// @brief Field cameraTransform, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraTransform, put = __cordl_internal_set_cameraTransform))::UnityW<::UnityEngine::Transform> cameraTransform;

  /// @brief Field canvasAnchor, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_canvasAnchor, put = __cordl_internal_set_canvasAnchor))::UnityW<::UnityEngine::Transform> canvasAnchor;

  /// @brief Field curTransitionBackgroundRoutine, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_curTransitionBackgroundRoutine, put = __cordl_internal_set_curTransitionBackgroundRoutine))::UnityEngine::Coroutine* curTransitionBackgroundRoutine;

  /// @brief Field curTransitionVisibilityRoutine, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_curTransitionVisibilityRoutine, put = __cordl_internal_set_curTransitionVisibilityRoutine))::UnityEngine::Coroutine* curTransitionVisibilityRoutine;

  /// @brief Field curVisibility, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_curVisibility, put = __cordl_internal_set_curVisibility)) float_t curVisibility;

  /// @brief Field errorIcon, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_errorIcon, put = __cordl_internal_set_errorIcon))::UnityW<::UnityEngine::UI::Image> errorIcon;

  /// @brief Field fadeInDuration, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_fadeInDuration, put = __cordl_internal_set_fadeInDuration)) float_t fadeInDuration;

  /// @brief Field isCorrectingAngle, offset 0x7c, size 0x1
  __declspec(property(get = __cordl_internal_get_isCorrectingAngle, put = __cordl_internal_set_isCorrectingAngle)) bool isCorrectingAngle;

  /// @brief Field loadingProgressText, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_loadingProgressText, put = __cordl_internal_set_loadingProgressText))::UnityW<::UnityEngine::UI::Text> loadingProgressText;

  /// @brief Field loadingScreenCover, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_loadingScreenCover, put = __cordl_internal_set_loadingScreenCover))::UnityW<::UnityEngine::UI::Image> loadingScreenCover;

  /// @brief Field mobileOrthoSize, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_mobileOrthoSize, put = __cordl_internal_set_mobileOrthoSize)) float_t mobileOrthoSize;

  /// @brief Field recoveryMessageText, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_recoveryMessageText, put = __cordl_internal_set_recoveryMessageText))::UnityW<::UnityEngine::UI::Text> recoveryMessageText;

  /// @brief Field shortMessageText, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_shortMessageText, put = __cordl_internal_set_shortMessageText))::UnityW<::UnityEngine::UI::Text> shortMessageText;

  /// @brief Field verboseMessageText, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_verboseMessageText, put = __cordl_internal_set_verboseMessageText))::UnityW<::UnityEngine::UI::Text> verboseMessageText;

  /// @brief Method Awake, addr 0x29c7dfc, size 0x48, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method LateUpdate, addr 0x29c86f8, size 0x284, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::FatalErrorDisplay* New_ctor();

  /// @brief Method OnReadyToDisplay, addr 0x29c841c, size 0xf8, virtual false, abstract: false, final false
  inline void OnReadyToDisplay();

  /// @brief Method SetVisibility, addr 0x29c8514, size 0x58, virtual false, abstract: false, final false
  inline void SetVisibility(float_t newVisibility);

  /// @brief Method Start, addr 0x29c7ee4, size 0x388, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TransitionBackground, addr 0x29c8388, size 0x94, virtual false, abstract: false, final false
  inline void TransitionBackground(::UnityEngine::Color target, float_t duration, ::GlobalNamespace::__FatalErrorDisplay__OnTransitionComplete* onTransitionComplete);

  /// @brief Method TransitionBackgroundRoutine, addr 0x29c8620, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* TransitionBackgroundRoutine(::UnityEngine::Color target, float_t duration,
                                                                         ::GlobalNamespace::__FatalErrorDisplay__OnTransitionComplete* onTransitionComplete);

  /// @brief Method TransitionVisibility, addr 0x29c7e44, size 0xa0, virtual false, abstract: false, final false
  inline void TransitionVisibility(float_t target, float_t duration, bool instant, ::GlobalNamespace::__FatalErrorDisplay__OnTransitionComplete* onTransitionComplete);

  /// @brief Method TransitionVisibilityRoutine, addr 0x29c856c, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* TransitionVisibilityRoutine(float_t target, float_t duration, ::GlobalNamespace::__FatalErrorDisplay__OnTransitionComplete* onTransitionComplete);

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

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_camera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_camera();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_cameraTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_cameraTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_canvasAnchor() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_canvasAnchor();

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_curTransitionBackgroundRoutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_curTransitionBackgroundRoutine() const;

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_curTransitionVisibilityRoutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_curTransitionVisibilityRoutine() const;

  constexpr float_t const& __cordl_internal_get_curVisibility() const;

  constexpr float_t& __cordl_internal_get_curVisibility();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_errorIcon() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_errorIcon();

  constexpr float_t const& __cordl_internal_get_fadeInDuration() const;

  constexpr float_t& __cordl_internal_get_fadeInDuration();

  constexpr bool const& __cordl_internal_get_isCorrectingAngle() const;

  constexpr bool& __cordl_internal_get_isCorrectingAngle();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_loadingProgressText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_loadingProgressText();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_loadingScreenCover() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_loadingScreenCover();

  constexpr float_t const& __cordl_internal_get_mobileOrthoSize() const;

  constexpr float_t& __cordl_internal_get_mobileOrthoSize();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_recoveryMessageText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_recoveryMessageText();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_shortMessageText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_shortMessageText();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_verboseMessageText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_verboseMessageText();

  constexpr void __cordl_internal_set_angleCorrectionEndThreshold(float_t value);

  constexpr void __cordl_internal_set_angleCorrectionSpeed(float_t value);

  constexpr void __cordl_internal_set_angleCorrectionStartThreshold(float_t value);

  constexpr void __cordl_internal_set_backgroundTargetColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_backgroundTransitionInDuration(float_t value);

  constexpr void __cordl_internal_set_camera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set_cameraTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_canvasAnchor(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_curTransitionBackgroundRoutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_curTransitionVisibilityRoutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_curVisibility(float_t value);

  constexpr void __cordl_internal_set_errorIcon(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_fadeInDuration(float_t value);

  constexpr void __cordl_internal_set_isCorrectingAngle(bool value);

  constexpr void __cordl_internal_set_loadingProgressText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_loadingScreenCover(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_mobileOrthoSize(float_t value);

  constexpr void __cordl_internal_set_recoveryMessageText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_shortMessageText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_verboseMessageText(::UnityW<::UnityEngine::UI::Text> value);

  /// @brief Method .ctor, addr 0x29c897c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FatalErrorDisplay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FatalErrorDisplay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FatalErrorDisplay(FatalErrorDisplay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FatalErrorDisplay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FatalErrorDisplay(FatalErrorDisplay const&) = delete;

  /// @brief Field canvasAnchor, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___canvasAnchor;

  /// @brief Field cameraTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___cameraTransform;

  /// @brief Field errorIcon, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___errorIcon;

  /// @brief Field shortMessageText, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___shortMessageText;

  /// @brief Field loadingProgressText, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___loadingProgressText;

  /// @brief Field verboseMessageText, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___verboseMessageText;

  /// @brief Field recoveryMessageText, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___recoveryMessageText;

  /// @brief Field loadingScreenCover, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___loadingScreenCover;

  /// @brief Field fadeInDuration, offset: 0x58, size: 0x4, def value: None
  float_t ___fadeInDuration;

  /// @brief Field backgroundTargetColor, offset: 0x5c, size: 0x10, def value: None
  ::UnityEngine::Color ___backgroundTargetColor;

  /// @brief Field backgroundTransitionInDuration, offset: 0x6c, size: 0x4, def value: None
  float_t ___backgroundTransitionInDuration;

  /// @brief Field angleCorrectionStartThreshold, offset: 0x70, size: 0x4, def value: None
  float_t ___angleCorrectionStartThreshold;

  /// @brief Field angleCorrectionEndThreshold, offset: 0x74, size: 0x4, def value: None
  float_t ___angleCorrectionEndThreshold;

  /// @brief Field angleCorrectionSpeed, offset: 0x78, size: 0x4, def value: None
  float_t ___angleCorrectionSpeed;

  /// @brief Field isCorrectingAngle, offset: 0x7c, size: 0x1, def value: None
  bool ___isCorrectingAngle;

  /// @brief Field camera, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___camera;

  /// @brief Field mobileOrthoSize, offset: 0x88, size: 0x4, def value: None
  float_t ___mobileOrthoSize;

  /// @brief Field curTransitionVisibilityRoutine, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___curTransitionVisibilityRoutine;

  /// @brief Field curVisibility, offset: 0x98, size: 0x4, def value: None
  float_t ___curVisibility;

  /// @brief Field curTransitionBackgroundRoutine, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___curTransitionBackgroundRoutine;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Loading Screen: " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FatalErrorDisplay, 0xa8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FatalErrorDisplay, ___canvasAnchor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FatalErrorDisplay, ___cameraTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FatalErrorDisplay, ___errorIcon) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FatalErrorDisplay, ___shortMessageText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FatalErrorDisplay, ___loadingProgressText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FatalErrorDisplay, ___verboseMessageText) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FatalErrorDisplay, ___recoveryMessageText) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FatalErrorDisplay, ___loadingScreenCover) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FatalErrorDisplay, ___fadeInDuration) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FatalErrorDisplay, ___backgroundTargetColor) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FatalErrorDisplay, ___backgroundTransitionInDuration) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FatalErrorDisplay, ___angleCorrectionStartThreshold) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FatalErrorDisplay, ___angleCorrectionEndThreshold) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FatalErrorDisplay, ___angleCorrectionSpeed) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FatalErrorDisplay, ___isCorrectingAngle) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FatalErrorDisplay, ___camera) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FatalErrorDisplay, ___mobileOrthoSize) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FatalErrorDisplay, ___curTransitionVisibilityRoutine) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FatalErrorDisplay, ___curVisibility) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FatalErrorDisplay, ___curTransitionBackgroundRoutine) == 0xa0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FatalErrorDisplay);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FatalErrorDisplay*, "", "FatalErrorDisplay");
NEED_NO_BOX(::GlobalNamespace::__FatalErrorDisplay__OnTransitionComplete);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FatalErrorDisplay__OnTransitionComplete*, "", "FatalErrorDisplay/OnTransitionComplete");
NEED_NO_BOX(::GlobalNamespace::__FatalErrorDisplay___TransitionBackgroundRoutine_d__29);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FatalErrorDisplay___TransitionBackgroundRoutine_d__29*, "", "FatalErrorDisplay/<TransitionBackgroundRoutine>d__29");
NEED_NO_BOX(::GlobalNamespace::__FatalErrorDisplay___TransitionVisibilityRoutine_d__24);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FatalErrorDisplay___TransitionVisibilityRoutine_d__24*, "", "FatalErrorDisplay/<TransitionVisibilityRoutine>d__24");
