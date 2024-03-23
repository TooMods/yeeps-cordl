#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncOpRetry_1)
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace Unity::Services::Vivox::Mint::Helpers {
template <typename T> class __AsyncOpRetry_1___Run_d__35;
}
// Forward declare root types
namespace Unity::Services::Vivox::Mint::Helpers {
template <typename T> class AsyncOpRetry_1;
}
namespace Unity::Services::Vivox::Mint::Helpers {
template <typename T> class __AsyncOpRetry_1___Run_d__35;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1);
MARK_GEN_REF_PTR_T(::Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35);
// Type: ::<Run>d__35
// SizeInfo { instance_size: 56, native_size: 52, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Helpers {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::AsyncOpRetry`1::<Run>d__35<T>*
class CORDL_TYPE __AsyncOpRetry_1___Run_d__35 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>* __4__this;

  /// @brief Field <asyncOp>5__2, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__asyncOp_5__2, put = __cordl_internal_set__asyncOp_5__2)) T _asyncOp_5__2;

  /// @brief Field <attempt>5__3, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__attempt_5__3, put = __cordl_internal_set__attempt_5__3)) int32_t _attempt_5__3;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35<T>* New_ctor(int32_t __1__state);

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

  constexpr ::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>*> const& __cordl_internal_get___4__this() const;

  constexpr T const& __cordl_internal_get__asyncOp_5__2() const;

  constexpr T& __cordl_internal_get__asyncOp_5__2();

  constexpr int32_t const& __cordl_internal_get__attempt_5__3() const;

  constexpr int32_t& __cordl_internal_get__attempt_5__3();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>* value);

  constexpr void __cordl_internal_set__asyncOp_5__2(T value);

  constexpr void __cordl_internal_set__attempt_5__3(int32_t value);

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
  constexpr __AsyncOpRetry_1___Run_d__35();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AsyncOpRetry_1___Run_d__35", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AsyncOpRetry_1___Run_d__35(__AsyncOpRetry_1___Run_d__35&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AsyncOpRetry_1___Run_d__35", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AsyncOpRetry_1___Run_d__35(__AsyncOpRetry_1___Run_d__35 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>* _____4__this;

  /// @brief Field <asyncOp>5__2, offset: 0x28, size: 0x8, def value: None
  T ____asyncOp_5__2;

  /// @brief Field <attempt>5__3, offset: 0x30, size: 0x4, def value: None
  int32_t ____attempt_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox::Mint::Helpers
// Type: Unity.Services.Vivox.Mint.Helpers::AsyncOpRetry`1
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Helpers {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Unity.Services.Vivox.Mint.Helpers::AsyncOpRetry`1<T>*
class CORDL_TYPE AsyncOpRetry_1 : public ::System::Object {
public:
  // Declarations
  using _Run_d__35 = ::Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35<T>;

  __declspec(property(get = get_CreateOperation, put = set_CreateOperation))::System::Func_2<int32_t, T>* CreateOperation;

  __declspec(property(get = get_DelayScale, put = set_DelayScale)) float_t DelayScale;

  __declspec(property(get = get_JitterMagnitude, put = set_JitterMagnitude)) float_t JitterMagnitude;

  __declspec(property(get = get_MaxDelayTime, put = set_MaxDelayTime)) float_t MaxDelayTime;

  __declspec(property(get = get_MaxRetries, put = set_MaxRetries)) uint32_t MaxRetries;

  __declspec(property(get = get_OnComplete, put = set_OnComplete))::System::Action_1<T>* OnComplete;

  __declspec(property(get = get_RetryCondition, put = set_RetryCondition))::System::Func_2<T, bool>* RetryCondition;

  /// @brief Field <CreateOperation>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__CreateOperation_k__BackingField,
                      put = __cordl_internal_set__CreateOperation_k__BackingField))::System::Func_2<int32_t, T>* _CreateOperation_k__BackingField;

  /// @brief Field <DelayScale>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__DelayScale_k__BackingField, put = __cordl_internal_set__DelayScale_k__BackingField)) float_t _DelayScale_k__BackingField;

  /// @brief Field <JitterMagnitude>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__JitterMagnitude_k__BackingField, put = __cordl_internal_set__JitterMagnitude_k__BackingField)) float_t _JitterMagnitude_k__BackingField;

  /// @brief Field <MaxDelayTime>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__MaxDelayTime_k__BackingField, put = __cordl_internal_set__MaxDelayTime_k__BackingField)) float_t _MaxDelayTime_k__BackingField;

  /// @brief Field <MaxRetries>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__MaxRetries_k__BackingField, put = __cordl_internal_set__MaxRetries_k__BackingField)) uint32_t _MaxRetries_k__BackingField;

  /// @brief Field <OnComplete>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__OnComplete_k__BackingField, put = __cordl_internal_set__OnComplete_k__BackingField))::System::Action_1<T>* _OnComplete_k__BackingField;

  /// @brief Field <RetryCondition>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__RetryCondition_k__BackingField,
                      put = __cordl_internal_set__RetryCondition_k__BackingField))::System::Func_2<T, bool>* _RetryCondition_k__BackingField;

  /// @brief Method AddJitter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline float_t AddJitter(float_t number, float_t magnitude);

  /// @brief Method CalculateDelay, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline float_t CalculateDelay(int32_t attemptNumber, float_t maxDelayTime, float_t delayScale, float_t jitterMagnitude);

  /// @brief Method FromCreateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>* FromCreateAsync(::System::Func_2<int32_t, T>* op);

  static inline ::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>* New_ctor(::System::Func_2<int32_t, T>* createAsyncOp);

  /// @brief Method Pow2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline float_t Pow2(float_t exponent, float_t scale);

  /// @brief Method Run, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* Run();

  /// @brief Method WhenComplete, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>* WhenComplete(::System::Action_1<T>* onComplete);

  /// @brief Method WithRetryCondition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>* WithRetryCondition(::System::Func_2<T, bool>* shouldRetry);

  constexpr ::System::Func_2<int32_t, T>*& __cordl_internal_get__CreateOperation_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<int32_t, T>*> const& __cordl_internal_get__CreateOperation_k__BackingField() const;

  constexpr float_t const& __cordl_internal_get__DelayScale_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__DelayScale_k__BackingField();

  constexpr float_t const& __cordl_internal_get__JitterMagnitude_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__JitterMagnitude_k__BackingField();

  constexpr float_t const& __cordl_internal_get__MaxDelayTime_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__MaxDelayTime_k__BackingField();

  constexpr uint32_t const& __cordl_internal_get__MaxRetries_k__BackingField() const;

  constexpr uint32_t& __cordl_internal_get__MaxRetries_k__BackingField();

  constexpr ::System::Action_1<T>*& __cordl_internal_get__OnComplete_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> const& __cordl_internal_get__OnComplete_k__BackingField() const;

  constexpr ::System::Func_2<T, bool>*& __cordl_internal_get__RetryCondition_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<T, bool>*> const& __cordl_internal_get__RetryCondition_k__BackingField() const;

  constexpr void __cordl_internal_set__CreateOperation_k__BackingField(::System::Func_2<int32_t, T>* value);

  constexpr void __cordl_internal_set__DelayScale_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__JitterMagnitude_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__MaxDelayTime_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__MaxRetries_k__BackingField(uint32_t value);

  constexpr void __cordl_internal_set__OnComplete_k__BackingField(::System::Action_1<T>* value);

  constexpr void __cordl_internal_set__RetryCondition_k__BackingField(::System::Func_2<T, bool>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Func_2<int32_t, T>* createAsyncOp);

  /// @brief Method get_CreateOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Func_2<int32_t, T>* get_CreateOperation();

  /// @brief Method get_DelayScale, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline float_t get_DelayScale();

  /// @brief Method get_JitterMagnitude, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline float_t get_JitterMagnitude();

  /// @brief Method get_MaxDelayTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline float_t get_MaxDelayTime();

  /// @brief Method get_MaxRetries, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline uint32_t get_MaxRetries();

  /// @brief Method get_OnComplete, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Action_1<T>* get_OnComplete();

  /// @brief Method get_RetryCondition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Func_2<T, bool>* get_RetryCondition();

  /// @brief Method set_CreateOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_CreateOperation(::System::Func_2<int32_t, T>* value);

  /// @brief Method set_DelayScale, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_DelayScale(float_t value);

  /// @brief Method set_JitterMagnitude, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_JitterMagnitude(float_t value);

  /// @brief Method set_MaxDelayTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_MaxDelayTime(float_t value);

  /// @brief Method set_MaxRetries, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_MaxRetries(uint32_t value);

  /// @brief Method set_OnComplete, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_OnComplete(::System::Action_1<T>* value);

  /// @brief Method set_RetryCondition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_RetryCondition(::System::Func_2<T, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncOpRetry_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncOpRetry_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncOpRetry_1(AsyncOpRetry_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncOpRetry_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncOpRetry_1(AsyncOpRetry_1 const&) = delete;

  /// @brief Field <MaxRetries>k__BackingField, offset: 0x10, size: 0x4, def value: None
  uint32_t ____MaxRetries_k__BackingField;

  /// @brief Field <JitterMagnitude>k__BackingField, offset: 0x14, size: 0x4, def value: None
  float_t ____JitterMagnitude_k__BackingField;

  /// @brief Field <DelayScale>k__BackingField, offset: 0x18, size: 0x4, def value: None
  float_t ____DelayScale_k__BackingField;

  /// @brief Field <MaxDelayTime>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  float_t ____MaxDelayTime_k__BackingField;

  /// @brief Field <CreateOperation>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Func_2<int32_t, T>* ____CreateOperation_k__BackingField;

  /// @brief Field <RetryCondition>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Func_2<T, bool>* ____RetryCondition_k__BackingField;

  /// @brief Field <OnComplete>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<T>* ____OnComplete_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox::Mint::Helpers
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1, "Unity.Services.Vivox.Mint.Helpers", "AsyncOpRetry`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35, "Unity.Services.Vivox.Mint.Helpers", "AsyncOpRetry`1/<Run>d__35");
