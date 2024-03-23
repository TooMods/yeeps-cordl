#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TutorialTask_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HitTargetDummyTask)
namespace GlobalNamespace {
class Item;
}
namespace GlobalNamespace {
class TargetDummyMapObject;
}
namespace GlobalNamespace {
class TestItemSpawner;
}
namespace GlobalNamespace {
class __HitTargetDummyTask__OnSetHasDummyBeenHit;
}
namespace GlobalNamespace {
class __HitTargetDummyTask__OnSetIsPinHeld;
}
namespace GlobalNamespace {
class __HitTargetDummyTask___DoCompleteEffectRoutine_d__27;
}
namespace GlobalNamespace {
class __HitTargetDummyTask___ReenablePinHighlightsRoutine_d__23;
}
namespace GlobalNamespace {
class __HitTargetDummyTask____c__DisplayClass15_0;
}
namespace GlobalNamespace {
struct __Item__AnchorState;
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
class Coroutine;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class HitTargetDummyTask;
}
namespace GlobalNamespace {
class __HitTargetDummyTask__OnSetHasDummyBeenHit;
}
namespace GlobalNamespace {
class __HitTargetDummyTask__OnSetIsPinHeld;
}
namespace GlobalNamespace {
class __HitTargetDummyTask___DoCompleteEffectRoutine_d__27;
}
namespace GlobalNamespace {
class __HitTargetDummyTask___ReenablePinHighlightsRoutine_d__23;
}
namespace GlobalNamespace {
class __HitTargetDummyTask____c__DisplayClass15_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HitTargetDummyTask);
MARK_REF_PTR_T(::GlobalNamespace::__HitTargetDummyTask__OnSetHasDummyBeenHit);
MARK_REF_PTR_T(::GlobalNamespace::__HitTargetDummyTask__OnSetIsPinHeld);
MARK_REF_PTR_T(::GlobalNamespace::__HitTargetDummyTask___DoCompleteEffectRoutine_d__27);
MARK_REF_PTR_T(::GlobalNamespace::__HitTargetDummyTask___ReenablePinHighlightsRoutine_d__23);
MARK_REF_PTR_T(::GlobalNamespace::__HitTargetDummyTask____c__DisplayClass15_0);
// Type: ::OnSetIsPinHeld
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::HitTargetDummyTask::OnSetIsPinHeld*
class CORDL_TYPE __HitTargetDummyTask__OnSetIsPinHeld : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x153e1fc, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool newIsPinHeld, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x153e284, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x153e1e4, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool newIsPinHeld);

  static inline ::GlobalNamespace::__HitTargetDummyTask__OnSetIsPinHeld* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x153e120, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HitTargetDummyTask__OnSetIsPinHeld();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HitTargetDummyTask__OnSetIsPinHeld", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HitTargetDummyTask__OnSetIsPinHeld(__HitTargetDummyTask__OnSetIsPinHeld&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HitTargetDummyTask__OnSetIsPinHeld", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HitTargetDummyTask__OnSetIsPinHeld(__HitTargetDummyTask__OnSetIsPinHeld const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__HitTargetDummyTask__OnSetIsPinHeld, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnSetHasDummyBeenHit
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::HitTargetDummyTask::OnSetHasDummyBeenHit*
class CORDL_TYPE __HitTargetDummyTask__OnSetHasDummyBeenHit : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x153e36c, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool newHasDummyBeenHit, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x153e3f4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x153e354, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool newHasDummyBeenHit);

  static inline ::GlobalNamespace::__HitTargetDummyTask__OnSetHasDummyBeenHit* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x153e290, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HitTargetDummyTask__OnSetHasDummyBeenHit();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HitTargetDummyTask__OnSetHasDummyBeenHit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HitTargetDummyTask__OnSetHasDummyBeenHit(__HitTargetDummyTask__OnSetHasDummyBeenHit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HitTargetDummyTask__OnSetHasDummyBeenHit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HitTargetDummyTask__OnSetHasDummyBeenHit(__HitTargetDummyTask__OnSetHasDummyBeenHit const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__HitTargetDummyTask__OnSetHasDummyBeenHit, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass15_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::HitTargetDummyTask::<>c__DisplayClass15_0*
class CORDL_TYPE __HitTargetDummyTask____c__DisplayClass15_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::HitTargetDummyTask> __4__this;

  /// @brief Field index, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_index, put = __cordl_internal_set_index)) int32_t index;

  static inline ::GlobalNamespace::__HitTargetDummyTask____c__DisplayClass15_0* New_ctor();

  /// @brief Method <OnUnlocked>b__0, addr 0x153e408, size 0x28, virtual false, abstract: false, final false
  inline void _OnUnlocked_b__0(::GlobalNamespace::Item* item);

  constexpr ::UnityW<::GlobalNamespace::HitTargetDummyTask> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::HitTargetDummyTask>& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get_index() const;

  constexpr int32_t& __cordl_internal_get_index();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::HitTargetDummyTask> value);

  constexpr void __cordl_internal_set_index(int32_t value);

  /// @brief Method .ctor, addr 0x153e400, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HitTargetDummyTask____c__DisplayClass15_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HitTargetDummyTask____c__DisplayClass15_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HitTargetDummyTask____c__DisplayClass15_0(__HitTargetDummyTask____c__DisplayClass15_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HitTargetDummyTask____c__DisplayClass15_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HitTargetDummyTask____c__DisplayClass15_0(__HitTargetDummyTask____c__DisplayClass15_0 const&) = delete;

  /// @brief Field index, offset: 0x10, size: 0x4, def value: None
  int32_t ___index;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HitTargetDummyTask> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__HitTargetDummyTask____c__DisplayClass15_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__HitTargetDummyTask____c__DisplayClass15_0, ___index) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HitTargetDummyTask____c__DisplayClass15_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<ReenablePinHighlightsRoutine>d__23
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::HitTargetDummyTask::<ReenablePinHighlightsRoutine>d__23*
class CORDL_TYPE __HitTargetDummyTask___ReenablePinHighlightsRoutine_d__23 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::HitTargetDummyTask> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x153e45c, size 0xc8, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__HitTargetDummyTask___ReenablePinHighlightsRoutine_d__23* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x153e524, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x153e52c, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x153e56c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x153e458, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::HitTargetDummyTask> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::HitTargetDummyTask>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::HitTargetDummyTask> value);

  /// @brief Method .ctor, addr 0x153e430, size 0x28, virtual false, abstract: false, final false
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
  constexpr __HitTargetDummyTask___ReenablePinHighlightsRoutine_d__23();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HitTargetDummyTask___ReenablePinHighlightsRoutine_d__23", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HitTargetDummyTask___ReenablePinHighlightsRoutine_d__23(__HitTargetDummyTask___ReenablePinHighlightsRoutine_d__23&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HitTargetDummyTask___ReenablePinHighlightsRoutine_d__23", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HitTargetDummyTask___ReenablePinHighlightsRoutine_d__23(__HitTargetDummyTask___ReenablePinHighlightsRoutine_d__23 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HitTargetDummyTask> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__HitTargetDummyTask___ReenablePinHighlightsRoutine_d__23, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__HitTargetDummyTask___ReenablePinHighlightsRoutine_d__23, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HitTargetDummyTask___ReenablePinHighlightsRoutine_d__23, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HitTargetDummyTask___ReenablePinHighlightsRoutine_d__23, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<DoCompleteEffectRoutine>d__27
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::HitTargetDummyTask::<DoCompleteEffectRoutine>d__27*
class CORDL_TYPE __HitTargetDummyTask___DoCompleteEffectRoutine_d__27 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::HitTargetDummyTask> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x153e5a0, size 0x154, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__HitTargetDummyTask___DoCompleteEffectRoutine_d__27* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x153e6f4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x153e6fc, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x153e73c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x153e59c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::HitTargetDummyTask> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::HitTargetDummyTask>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::HitTargetDummyTask> value);

  /// @brief Method .ctor, addr 0x153e574, size 0x28, virtual false, abstract: false, final false
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
  constexpr __HitTargetDummyTask___DoCompleteEffectRoutine_d__27();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HitTargetDummyTask___DoCompleteEffectRoutine_d__27", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HitTargetDummyTask___DoCompleteEffectRoutine_d__27(__HitTargetDummyTask___DoCompleteEffectRoutine_d__27&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HitTargetDummyTask___DoCompleteEffectRoutine_d__27", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HitTargetDummyTask___DoCompleteEffectRoutine_d__27(__HitTargetDummyTask___DoCompleteEffectRoutine_d__27 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HitTargetDummyTask> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__HitTargetDummyTask___DoCompleteEffectRoutine_d__27, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__HitTargetDummyTask___DoCompleteEffectRoutine_d__27, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HitTargetDummyTask___DoCompleteEffectRoutine_d__27, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HitTargetDummyTask___DoCompleteEffectRoutine_d__27, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::HitTargetDummyTask
// SizeInfo { instance_size: 200, native_size: -1, calculated_instance_size: 200, calculated_native_size: 200, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::HitTargetDummyTask*
class CORDL_TYPE HitTargetDummyTask : public ::GlobalNamespace::TutorialTask {
public:
  // Declarations
  using OnSetHasDummyBeenHit = ::GlobalNamespace::__HitTargetDummyTask__OnSetHasDummyBeenHit;

  using OnSetIsPinHeld = ::GlobalNamespace::__HitTargetDummyTask__OnSetIsPinHeld;

  using _DoCompleteEffectRoutine_d__27 = ::GlobalNamespace::__HitTargetDummyTask___DoCompleteEffectRoutine_d__27;

  using _ReenablePinHighlightsRoutine_d__23 = ::GlobalNamespace::__HitTargetDummyTask___ReenablePinHighlightsRoutine_d__23;

  using __c__DisplayClass15_0 = ::GlobalNamespace::__HitTargetDummyTask____c__DisplayClass15_0;

  /// @brief Field completionEffectDelay, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_completionEffectDelay, put = __cordl_internal_set_completionEffectDelay)) float_t completionEffectDelay;

  /// @brief Field completionEffectParticles, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_completionEffectParticles, put = __cordl_internal_set_completionEffectParticles))::UnityW<::UnityEngine::ParticleSystem> completionEffectParticles;

  /// @brief Field completionEffectSoundKey, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_completionEffectSoundKey, put = __cordl_internal_set_completionEffectSoundKey))::StringW completionEffectSoundKey;

  /// @brief Field curReenablePinHighlightsRoutine, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_curReenablePinHighlightsRoutine, put = __cordl_internal_set_curReenablePinHighlightsRoutine))::UnityEngine::Coroutine* curReenablePinHighlightsRoutine;

  /// @brief Field hasDummyBeenHit, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get_hasDummyBeenHit, put = __cordl_internal_set_hasDummyBeenHit)) bool hasDummyBeenHit;

  /// @brief Field highlightMaterial, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_highlightMaterial, put = __cordl_internal_set_highlightMaterial))::UnityW<::UnityEngine::Material> highlightMaterial;

  /// @brief Field isAnyPinHeld, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_isAnyPinHeld, put = __cordl_internal_set_isAnyPinHeld)) bool isAnyPinHeld;

  /// @brief Field isPinHeld, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_isPinHeld, put = __cordl_internal_set_isPinHeld))::ArrayW<bool, ::Array<bool>*> isPinHeld;

  /// @brief Field onSetHasDummyBeenHitCallbacks, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_onSetHasDummyBeenHitCallbacks,
                      put = __cordl_internal_set_onSetHasDummyBeenHitCallbacks))::GlobalNamespace::__HitTargetDummyTask__OnSetHasDummyBeenHit* onSetHasDummyBeenHitCallbacks;

  /// @brief Field onSetIsPinHeldCallbacks, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_onSetIsPinHeldCallbacks,
                      put = __cordl_internal_set_onSetIsPinHeldCallbacks))::GlobalNamespace::__HitTargetDummyTask__OnSetIsPinHeld* onSetIsPinHeldCallbacks;

  /// @brief Field pinCount, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_pinCount, put = __cordl_internal_set_pinCount)) int32_t pinCount;

  /// @brief Field pinHighlightMesh, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_pinHighlightMesh, put = __cordl_internal_set_pinHighlightMesh))::UnityW<::UnityEngine::Mesh> pinHighlightMesh;

  /// @brief Field pinHighlights, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_pinHighlights,
                      put = __cordl_internal_set_pinHighlights))::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> pinHighlights;

  /// @brief Field pinSpawners, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_pinSpawners,
                      put = __cordl_internal_set_pinSpawners))::ArrayW<::UnityW<::GlobalNamespace::TestItemSpawner>, ::Array<::UnityW<::GlobalNamespace::TestItemSpawner>>*> pinSpawners;

  /// @brief Field pins, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_pins, put = __cordl_internal_set_pins))::ArrayW<::UnityW<::GlobalNamespace::Item>, ::Array<::UnityW<::GlobalNamespace::Item>>*> pins;

  /// @brief Field targetDummy, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_targetDummy, put = __cordl_internal_set_targetDummy))::UnityW<::GlobalNamespace::TargetDummyMapObject> targetDummy;

  /// @brief Field targetDummyHighlight, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_targetDummyHighlight, put = __cordl_internal_set_targetDummyHighlight))::UnityW<::UnityEngine::GameObject> targetDummyHighlight;

  /// @brief Field targetDummyHighlightMesh, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_targetDummyHighlightMesh, put = __cordl_internal_set_targetDummyHighlightMesh))::UnityW<::UnityEngine::Mesh> targetDummyHighlightMesh;

  /// @brief Field targetDummyMapObjectKey, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_targetDummyMapObjectKey, put = __cordl_internal_set_targetDummyMapObjectKey))::StringW targetDummyMapObjectKey;

  /// @brief Method CreateHighlight, addr 0x144a1d8, size 0x4b4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> CreateHighlight(::UnityEngine::GameObject* reference, ::UnityEngine::Mesh* overrideMesh);

  /// @brief Method CreateHighlights, addr 0x1449828, size 0x144, virtual false, abstract: false, final false
  inline void CreateHighlights();

  /// @brief Method DestroyHighlights, addr 0x144a044, size 0x12c, virtual false, abstract: false, final false
  inline void DestroyHighlights();

  /// @brief Method DoCompleteEffectRoutine, addr 0x144a170, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DoCompleteEffectRoutine();

  static inline ::GlobalNamespace::HitTargetDummyTask* New_ctor();

  /// @brief Method OnAllPinsCreated, addr 0x1449288, size 0x10c, virtual false, abstract: false, final false
  inline void OnAllPinsCreated();

  /// @brief Method OnCompleted, addr 0x1449fb4, size 0x90, virtual true, abstract: false, final false
  inline void OnCompleted();

  /// @brief Method OnMapDataLoaded, addr 0x1449394, size 0x394, virtual false, abstract: false, final false
  inline void OnMapDataLoaded();

  /// @brief Method OnPinAnchorStateUpdated, addr 0x1449ae0, size 0x1d0, virtual false, abstract: false, final false
  inline void OnPinAnchorStateUpdated(::GlobalNamespace::Item* item, ::GlobalNamespace::__Item__AnchorState oldAnchorState, ::GlobalNamespace::__Item__AnchorState newAnchorState);

  /// @brief Method OnPinItemCreated, addr 0x14491bc, size 0xcc, virtual false, abstract: false, final false
  inline void OnPinItemCreated(int32_t index, ::GlobalNamespace::Item* pinItem);

  /// @brief Method OnSetHasLoadedMapData, addr 0x1449728, size 0x100, virtual false, abstract: false, final false
  inline void OnSetHasLoadedMapData(bool newHasLoadedMapData);

  /// @brief Method OnTargetDummyHit, addr 0x1449e90, size 0x14, virtual false, abstract: false, final false
  inline void OnTargetDummyHit();

  /// @brief Method OnUnlocked, addr 0x1449000, size 0x1bc, virtual true, abstract: false, final false
  inline void OnUnlocked();

  /// @brief Method ReenablePinHighlightsRoutine, addr 0x1449e28, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* ReenablePinHighlightsRoutine();

  /// @brief Method SetHasDummyBeenHit, addr 0x1449ea4, size 0x110, virtual false, abstract: false, final false
  inline void SetHasDummyBeenHit(bool newHasDummyBeenHit);

  /// @brief Method SetIsAnyPinHeld, addr 0x144996c, size 0x174, virtual false, abstract: false, final false
  inline void SetIsAnyPinHeld(bool newIsAnyPinHeld, bool instant);

  /// @brief Method SetPinHighlightsActive, addr 0x1449cb0, size 0xe0, virtual false, abstract: false, final false
  inline void SetPinHighlightsActive(bool newActive);

  /// @brief Method SetTargetDummyHighlightActive, addr 0x1449d90, size 0x98, virtual false, abstract: false, final false
  inline void SetTargetDummyHighlightActive(bool newActive);

  constexpr float_t const& __cordl_internal_get_completionEffectDelay() const;

  constexpr float_t& __cordl_internal_get_completionEffectDelay();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_completionEffectParticles() const;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_completionEffectParticles();

  constexpr ::StringW const& __cordl_internal_get_completionEffectSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_completionEffectSoundKey();

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_curReenablePinHighlightsRoutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_curReenablePinHighlightsRoutine() const;

  constexpr bool const& __cordl_internal_get_hasDummyBeenHit() const;

  constexpr bool& __cordl_internal_get_hasDummyBeenHit();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_highlightMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_highlightMaterial();

  constexpr bool const& __cordl_internal_get_isAnyPinHeld() const;

  constexpr bool& __cordl_internal_get_isAnyPinHeld();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get_isPinHeld() const;

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get_isPinHeld();

  constexpr ::GlobalNamespace::__HitTargetDummyTask__OnSetHasDummyBeenHit*& __cordl_internal_get_onSetHasDummyBeenHitCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__HitTargetDummyTask__OnSetHasDummyBeenHit*> const& __cordl_internal_get_onSetHasDummyBeenHitCallbacks() const;

  constexpr ::GlobalNamespace::__HitTargetDummyTask__OnSetIsPinHeld*& __cordl_internal_get_onSetIsPinHeldCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__HitTargetDummyTask__OnSetIsPinHeld*> const& __cordl_internal_get_onSetIsPinHeldCallbacks() const;

  constexpr int32_t const& __cordl_internal_get_pinCount() const;

  constexpr int32_t& __cordl_internal_get_pinCount();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_pinHighlightMesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_pinHighlightMesh();

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_pinHighlights() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get_pinHighlights();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::TestItemSpawner>, ::Array<::UnityW<::GlobalNamespace::TestItemSpawner>>*> const& __cordl_internal_get_pinSpawners() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::TestItemSpawner>, ::Array<::UnityW<::GlobalNamespace::TestItemSpawner>>*>& __cordl_internal_get_pinSpawners();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::Item>, ::Array<::UnityW<::GlobalNamespace::Item>>*> const& __cordl_internal_get_pins() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::Item>, ::Array<::UnityW<::GlobalNamespace::Item>>*>& __cordl_internal_get_pins();

  constexpr ::UnityW<::GlobalNamespace::TargetDummyMapObject> const& __cordl_internal_get_targetDummy() const;

  constexpr ::UnityW<::GlobalNamespace::TargetDummyMapObject>& __cordl_internal_get_targetDummy();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_targetDummyHighlight() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_targetDummyHighlight();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_targetDummyHighlightMesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_targetDummyHighlightMesh();

  constexpr ::StringW const& __cordl_internal_get_targetDummyMapObjectKey() const;

  constexpr ::StringW& __cordl_internal_get_targetDummyMapObjectKey();

  constexpr void __cordl_internal_set_completionEffectDelay(float_t value);

  constexpr void __cordl_internal_set_completionEffectParticles(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr void __cordl_internal_set_completionEffectSoundKey(::StringW value);

  constexpr void __cordl_internal_set_curReenablePinHighlightsRoutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_hasDummyBeenHit(bool value);

  constexpr void __cordl_internal_set_highlightMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_isAnyPinHeld(bool value);

  constexpr void __cordl_internal_set_isPinHeld(::ArrayW<bool, ::Array<bool>*> value);

  constexpr void __cordl_internal_set_onSetHasDummyBeenHitCallbacks(::GlobalNamespace::__HitTargetDummyTask__OnSetHasDummyBeenHit* value);

  constexpr void __cordl_internal_set_onSetIsPinHeldCallbacks(::GlobalNamespace::__HitTargetDummyTask__OnSetIsPinHeld* value);

  constexpr void __cordl_internal_set_pinCount(int32_t value);

  constexpr void __cordl_internal_set_pinHighlightMesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_pinHighlights(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value);

  constexpr void __cordl_internal_set_pinSpawners(::ArrayW<::UnityW<::GlobalNamespace::TestItemSpawner>, ::Array<::UnityW<::GlobalNamespace::TestItemSpawner>>*> value);

  constexpr void __cordl_internal_set_pins(::ArrayW<::UnityW<::GlobalNamespace::Item>, ::Array<::UnityW<::GlobalNamespace::Item>>*> value);

  constexpr void __cordl_internal_set_targetDummy(::UnityW<::GlobalNamespace::TargetDummyMapObject> value);

  constexpr void __cordl_internal_set_targetDummyHighlight(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_targetDummyHighlightMesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_targetDummyMapObjectKey(::StringW value);

  /// @brief Method .ctor, addr 0x144a68c, size 0x1058, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HitTargetDummyTask();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HitTargetDummyTask", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HitTargetDummyTask(HitTargetDummyTask&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HitTargetDummyTask", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HitTargetDummyTask(HitTargetDummyTask const&) = delete;

  /// @brief Field pinSpawners, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::TestItemSpawner>, ::Array<::UnityW<::GlobalNamespace::TestItemSpawner>>*> ___pinSpawners;

  /// @brief Field pins, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::Item>, ::Array<::UnityW<::GlobalNamespace::Item>>*> ___pins;

  /// @brief Field pinCount, offset: 0x40, size: 0x4, def value: None
  int32_t ___pinCount;

  /// @brief Field completionEffectParticles, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ___completionEffectParticles;

  /// @brief Field completionEffectSoundKey, offset: 0x50, size: 0x8, def value: None
  ::StringW ___completionEffectSoundKey;

  /// @brief Field completionEffectDelay, offset: 0x58, size: 0x4, def value: None
  float_t ___completionEffectDelay;

  /// @brief Field isPinHeld, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ___isPinHeld;

  /// @brief Field isAnyPinHeld, offset: 0x68, size: 0x1, def value: None
  bool ___isAnyPinHeld;

  /// @brief Field targetDummyMapObjectKey, offset: 0x70, size: 0x8, def value: None
  ::StringW ___targetDummyMapObjectKey;

  /// @brief Field targetDummy, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TargetDummyMapObject> ___targetDummy;

  /// @brief Field hasDummyBeenHit, offset: 0x80, size: 0x1, def value: None
  bool ___hasDummyBeenHit;

  /// @brief Field onSetIsPinHeldCallbacks, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::__HitTargetDummyTask__OnSetIsPinHeld* ___onSetIsPinHeldCallbacks;

  /// @brief Field onSetHasDummyBeenHitCallbacks, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::__HitTargetDummyTask__OnSetHasDummyBeenHit* ___onSetHasDummyBeenHitCallbacks;

  /// @brief Field curReenablePinHighlightsRoutine, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___curReenablePinHighlightsRoutine;

  /// @brief Field highlightMaterial, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___highlightMaterial;

  /// @brief Field pinHighlightMesh, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___pinHighlightMesh;

  /// @brief Field pinHighlights, offset: 0xb0, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> ___pinHighlights;

  /// @brief Field targetDummyHighlightMesh, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___targetDummyHighlightMesh;

  /// @brief Field targetDummyHighlight, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___targetDummyHighlight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HitTargetDummyTask, 0xc8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetDummyTask, ___pinSpawners) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetDummyTask, ___pins) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetDummyTask, ___pinCount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetDummyTask, ___completionEffectParticles) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetDummyTask, ___completionEffectSoundKey) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetDummyTask, ___completionEffectDelay) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetDummyTask, ___isPinHeld) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetDummyTask, ___isAnyPinHeld) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetDummyTask, ___targetDummyMapObjectKey) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetDummyTask, ___targetDummy) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetDummyTask, ___hasDummyBeenHit) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetDummyTask, ___onSetIsPinHeldCallbacks) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetDummyTask, ___onSetHasDummyBeenHitCallbacks) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetDummyTask, ___curReenablePinHighlightsRoutine) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetDummyTask, ___highlightMaterial) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetDummyTask, ___pinHighlightMesh) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetDummyTask, ___pinHighlights) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetDummyTask, ___targetDummyHighlightMesh) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetDummyTask, ___targetDummyHighlight) == 0xc0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HitTargetDummyTask);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HitTargetDummyTask*, "", "HitTargetDummyTask");
NEED_NO_BOX(::GlobalNamespace::__HitTargetDummyTask__OnSetHasDummyBeenHit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__HitTargetDummyTask__OnSetHasDummyBeenHit*, "", "HitTargetDummyTask/OnSetHasDummyBeenHit");
NEED_NO_BOX(::GlobalNamespace::__HitTargetDummyTask__OnSetIsPinHeld);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__HitTargetDummyTask__OnSetIsPinHeld*, "", "HitTargetDummyTask/OnSetIsPinHeld");
NEED_NO_BOX(::GlobalNamespace::__HitTargetDummyTask___DoCompleteEffectRoutine_d__27);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__HitTargetDummyTask___DoCompleteEffectRoutine_d__27*, "", "HitTargetDummyTask/<DoCompleteEffectRoutine>d__27");
NEED_NO_BOX(::GlobalNamespace::__HitTargetDummyTask___ReenablePinHighlightsRoutine_d__23);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__HitTargetDummyTask___ReenablePinHighlightsRoutine_d__23*, "", "HitTargetDummyTask/<ReenablePinHighlightsRoutine>d__23");
NEED_NO_BOX(::GlobalNamespace::__HitTargetDummyTask____c__DisplayClass15_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__HitTargetDummyTask____c__DisplayClass15_0*, "", "HitTargetDummyTask/<>c__DisplayClass15_0");
