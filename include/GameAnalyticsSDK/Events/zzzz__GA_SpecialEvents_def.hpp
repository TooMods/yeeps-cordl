#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GA_SpecialEvents)
namespace GameAnalyticsSDK::Events {
class __GA_SpecialEvents___CheckCriticalFPSRoutine_d__12;
}
namespace GameAnalyticsSDK::Events {
class __GA_SpecialEvents___SubmitFPSRoutine_d__11;
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
// Forward declare root types
namespace GameAnalyticsSDK::Events {
class GA_SpecialEvents;
}
namespace GameAnalyticsSDK::Events {
class __GA_SpecialEvents___CheckCriticalFPSRoutine_d__12;
}
namespace GameAnalyticsSDK::Events {
class __GA_SpecialEvents___SubmitFPSRoutine_d__11;
}
// Write type traits
MARK_REF_PTR_T(::GameAnalyticsSDK::Events::GA_SpecialEvents);
MARK_REF_PTR_T(::GameAnalyticsSDK::Events::__GA_SpecialEvents___CheckCriticalFPSRoutine_d__12);
MARK_REF_PTR_T(::GameAnalyticsSDK::Events::__GA_SpecialEvents___SubmitFPSRoutine_d__11);
// Type: ::<SubmitFPSRoutine>d__11
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GameAnalyticsSDK::Events {
// Is value type: false
// CS Name: ::GA_SpecialEvents::<SubmitFPSRoutine>d__11*
class CORDL_TYPE __GA_SpecialEvents___SubmitFPSRoutine_d__11 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x1083c90, size 0x160, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GameAnalyticsSDK::Events::__GA_SpecialEvents___SubmitFPSRoutine_d__11* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1083df0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x1083df8, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1083e38, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x1083c8c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  /// @brief Method .ctor, addr 0x1083764, size 0x28, virtual false, abstract: false, final false
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
  constexpr __GA_SpecialEvents___SubmitFPSRoutine_d__11();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GA_SpecialEvents___SubmitFPSRoutine_d__11", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GA_SpecialEvents___SubmitFPSRoutine_d__11(__GA_SpecialEvents___SubmitFPSRoutine_d__11&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GA_SpecialEvents___SubmitFPSRoutine_d__11", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GA_SpecialEvents___SubmitFPSRoutine_d__11(__GA_SpecialEvents___SubmitFPSRoutine_d__11 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GameAnalyticsSDK::Events::__GA_SpecialEvents___SubmitFPSRoutine_d__11, 0x20>, "Size mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Events::__GA_SpecialEvents___SubmitFPSRoutine_d__11, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Events::__GA_SpecialEvents___SubmitFPSRoutine_d__11, _____2__current) == 0x18, "Offset mismatch!");

} // namespace GameAnalyticsSDK::Events
// Type: ::<CheckCriticalFPSRoutine>d__12
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GameAnalyticsSDK::Events {
// Is value type: false
// CS Name: ::GA_SpecialEvents::<CheckCriticalFPSRoutine>d__12*
class CORDL_TYPE __GA_SpecialEvents___CheckCriticalFPSRoutine_d__12 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GameAnalyticsSDK::Events::GA_SpecialEvents> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x1083e44, size 0x11c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GameAnalyticsSDK::Events::__GA_SpecialEvents___CheckCriticalFPSRoutine_d__12* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1083f60, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x1083f68, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1083fa8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x1083e40, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GameAnalyticsSDK::Events::GA_SpecialEvents> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GameAnalyticsSDK::Events::GA_SpecialEvents>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GameAnalyticsSDK::Events::GA_SpecialEvents> value);

  /// @brief Method .ctor, addr 0x108378c, size 0x28, virtual false, abstract: false, final false
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
  constexpr __GA_SpecialEvents___CheckCriticalFPSRoutine_d__12();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GA_SpecialEvents___CheckCriticalFPSRoutine_d__12", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GA_SpecialEvents___CheckCriticalFPSRoutine_d__12(__GA_SpecialEvents___CheckCriticalFPSRoutine_d__12&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GA_SpecialEvents___CheckCriticalFPSRoutine_d__12", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GA_SpecialEvents___CheckCriticalFPSRoutine_d__12(__GA_SpecialEvents___CheckCriticalFPSRoutine_d__12 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GameAnalyticsSDK::Events::GA_SpecialEvents> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GameAnalyticsSDK::Events::__GA_SpecialEvents___CheckCriticalFPSRoutine_d__12, 0x28>, "Size mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Events::__GA_SpecialEvents___CheckCriticalFPSRoutine_d__12, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Events::__GA_SpecialEvents___CheckCriticalFPSRoutine_d__12, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Events::__GA_SpecialEvents___CheckCriticalFPSRoutine_d__12, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GameAnalyticsSDK::Events
// Type: GameAnalyticsSDK.Events::GA_SpecialEvents
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GameAnalyticsSDK::Events {
// Is value type: false
// CS Name: ::GameAnalyticsSDK.Events::GA_SpecialEvents*
class CORDL_TYPE GA_SpecialEvents : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _CheckCriticalFPSRoutine_d__12 = ::GameAnalyticsSDK::Events::__GA_SpecialEvents___CheckCriticalFPSRoutine_d__12;

  using _SubmitFPSRoutine_d__11 = ::GameAnalyticsSDK::Events::__GA_SpecialEvents___SubmitFPSRoutine_d__11;

  /// @brief Field _criticalFpsCount, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__criticalFpsCount, put = setStaticF__criticalFpsCount)) int32_t _criticalFpsCount;

  /// @brief Field _fpsWaitTimeMultiplier, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__fpsWaitTimeMultiplier, put = setStaticF__fpsWaitTimeMultiplier)) int32_t _fpsWaitTimeMultiplier;

  /// @brief Field _frameCountAvg, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__frameCountAvg, put = setStaticF__frameCountAvg)) int32_t _frameCountAvg;

  /// @brief Field _frameCountCrit, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__frameCountCrit, put = __cordl_internal_set__frameCountCrit)) int32_t _frameCountCrit;

  /// @brief Field _lastPauseStartTime, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__lastPauseStartTime, put = setStaticF__lastPauseStartTime)) float_t _lastPauseStartTime;

  /// @brief Field _lastUpdateAvg, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__lastUpdateAvg, put = setStaticF__lastUpdateAvg)) float_t _lastUpdateAvg;

  /// @brief Field _lastUpdateCrit, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__lastUpdateCrit, put = __cordl_internal_set__lastUpdateCrit)) float_t _lastUpdateCrit;

  /// @brief Field _pauseDurationAvg, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__pauseDurationAvg, put = setStaticF__pauseDurationAvg)) float_t _pauseDurationAvg;

  /// @brief Field _pauseDurationCrit, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__pauseDurationCrit, put = setStaticF__pauseDurationCrit)) float_t _pauseDurationCrit;

  /// @brief Method CheckCriticalFPS, addr 0x1083ae8, size 0x148, virtual false, abstract: false, final false
  inline void CheckCriticalFPS();

  /// @brief Method CheckCriticalFPSRoutine, addr 0x1083574, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* CheckCriticalFPSRoutine();

  static inline ::GameAnalyticsSDK::Events::GA_SpecialEvents* New_ctor();

  /// @brief Method OnApplicationPause, addr 0x10835dc, size 0x188, virtual false, abstract: false, final false
  inline void OnApplicationPause(bool pauseStatus);

  /// @brief Method Start, addr 0x10834dc, size 0x38, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method SubmitFPS, addr 0x10838cc, size 0x21c, virtual false, abstract: false, final false
  static inline void SubmitFPS();

  /// @brief Method SubmitFPSRoutine, addr 0x1083514, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* SubmitFPSRoutine();

  /// @brief Method Update, addr 0x10837b4, size 0x118, virtual false, abstract: false, final false
  inline void Update();

  constexpr int32_t const& __cordl_internal_get__frameCountCrit() const;

  constexpr int32_t& __cordl_internal_get__frameCountCrit();

  constexpr float_t const& __cordl_internal_get__lastUpdateCrit() const;

  constexpr float_t& __cordl_internal_get__lastUpdateCrit();

  constexpr void __cordl_internal_set__frameCountCrit(int32_t value);

  constexpr void __cordl_internal_set__lastUpdateCrit(float_t value);

  /// @brief Method .ctor, addr 0x1083c30, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__criticalFpsCount();

  static inline int32_t getStaticF__fpsWaitTimeMultiplier();

  static inline int32_t getStaticF__frameCountAvg();

  static inline float_t getStaticF__lastPauseStartTime();

  static inline float_t getStaticF__lastUpdateAvg();

  static inline float_t getStaticF__pauseDurationAvg();

  static inline float_t getStaticF__pauseDurationCrit();

  static inline void setStaticF__criticalFpsCount(int32_t value);

  static inline void setStaticF__fpsWaitTimeMultiplier(int32_t value);

  static inline void setStaticF__frameCountAvg(int32_t value);

  static inline void setStaticF__lastPauseStartTime(float_t value);

  static inline void setStaticF__lastUpdateAvg(float_t value);

  static inline void setStaticF__pauseDurationAvg(float_t value);

  static inline void setStaticF__pauseDurationCrit(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GA_SpecialEvents();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GA_SpecialEvents", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GA_SpecialEvents(GA_SpecialEvents&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GA_SpecialEvents", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GA_SpecialEvents(GA_SpecialEvents const&) = delete;

  /// @brief Field _frameCountCrit, offset: 0x18, size: 0x4, def value: None
  int32_t ____frameCountCrit;

  /// @brief Field _lastUpdateCrit, offset: 0x1c, size: 0x4, def value: None
  float_t ____lastUpdateCrit;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GameAnalyticsSDK::Events::GA_SpecialEvents, 0x20>, "Size mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Events::GA_SpecialEvents, ____frameCountCrit) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Events::GA_SpecialEvents, ____lastUpdateCrit) == 0x1c, "Offset mismatch!");

} // namespace GameAnalyticsSDK::Events
NEED_NO_BOX(::GameAnalyticsSDK::Events::GA_SpecialEvents);
DEFINE_IL2CPP_ARG_TYPE(::GameAnalyticsSDK::Events::GA_SpecialEvents*, "GameAnalyticsSDK.Events", "GA_SpecialEvents");
NEED_NO_BOX(::GameAnalyticsSDK::Events::__GA_SpecialEvents___CheckCriticalFPSRoutine_d__12);
DEFINE_IL2CPP_ARG_TYPE(::GameAnalyticsSDK::Events::__GA_SpecialEvents___CheckCriticalFPSRoutine_d__12*, "GameAnalyticsSDK.Events", "GA_SpecialEvents/<CheckCriticalFPSRoutine>d__12");
NEED_NO_BOX(::GameAnalyticsSDK::Events::__GA_SpecialEvents___SubmitFPSRoutine_d__11);
DEFINE_IL2CPP_ARG_TYPE(::GameAnalyticsSDK::Events::__GA_SpecialEvents___SubmitFPSRoutine_d__11*, "GameAnalyticsSDK.Events", "GA_SpecialEvents/<SubmitFPSRoutine>d__11");
