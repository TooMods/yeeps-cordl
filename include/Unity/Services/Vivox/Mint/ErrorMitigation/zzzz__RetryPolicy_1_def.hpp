#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RetryPolicy_1)
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace Unity::Services::Vivox::Mint::ErrorMitigation {
template <typename T> class IRetryPolicy_1;
}
namespace Unity::Services::Vivox::Mint::ErrorMitigation {
class RetryPolicyConfig;
}
namespace Unity::Services::Vivox::Mint::ErrorMitigation {
template <typename T> struct __RetryPolicy_1___RunAsync_d__23;
}
namespace Unity::Services::Vivox::Mint::ErrorMitigation {
template <typename T> class __RetryPolicy_1____c__DisplayClass10_0;
}
// Forward declare root types
namespace Unity::Services::Vivox::Mint::ErrorMitigation {
template <typename T> class RetryPolicy_1;
}
namespace Unity::Services::Vivox::Mint::ErrorMitigation {
template <typename T> class __RetryPolicy_1____c__DisplayClass10_0;
}
namespace Unity::Services::Vivox::Mint::ErrorMitigation {
template <typename T> struct __RetryPolicy_1___RunAsync_d__23;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1);
MARK_GEN_REF_PTR_T(::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicy_1____c__DisplayClass10_0);
MARK_GEN_VAL_T(::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicy_1___RunAsync_d__23);
// Type: ::<>c__DisplayClass10_0
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::ErrorMitigation {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::RetryPolicy`1::<>c__DisplayClass10_0<T>*
class CORDL_TYPE __RetryPolicy_1____c__DisplayClass10_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field createAsyncOp, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_createAsyncOp, put = __cordl_internal_set_createAsyncOp))::System::Func_1<::System::Threading::Tasks::Task_1<T>*>* createAsyncOp;

  static inline ::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicy_1____c__DisplayClass10_0<T>* New_ctor();

  constexpr ::System::Func_1<::System::Threading::Tasks::Task_1<T>*>*& __cordl_internal_get_createAsyncOp();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::System::Threading::Tasks::Task_1<T>*>*> const& __cordl_internal_get_createAsyncOp() const;

  constexpr void __cordl_internal_set_createAsyncOp(::System::Func_1<::System::Threading::Tasks::Task_1<T>*>* value);

  /// @brief Method <.ctor>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<T>* __ctor_b__0(int32_t _);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RetryPolicy_1____c__DisplayClass10_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RetryPolicy_1____c__DisplayClass10_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RetryPolicy_1____c__DisplayClass10_0(__RetryPolicy_1____c__DisplayClass10_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RetryPolicy_1____c__DisplayClass10_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RetryPolicy_1____c__DisplayClass10_0(__RetryPolicy_1____c__DisplayClass10_0 const&) = delete;

  /// @brief Field createAsyncOp, offset: 0x10, size: 0x8, def value: None
  ::System::Func_1<::System::Threading::Tasks::Task_1<T>*>* ___createAsyncOp;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox::Mint::ErrorMitigation
// Type: ::<RunAsync>d__23
// SizeInfo { instance_size: 88, native_size: 104, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::ErrorMitigation {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::RetryPolicy`1::<RunAsync>d__23<T>
struct CORDL_TYPE __RetryPolicy_1___RunAsync_d__23 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RetryPolicy_1___RunAsync_d__23();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: None }, CppParam { name: "retryPolicyConfig", ty:
  // "::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>*", modifiers: "", def_value: None }, CppParam { name: "_opResult_5__2", ty: "T", modifiers: "", def_value: None }, CppParam {
  // name: "_attempt_5__3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<T>", modifiers: "", def_value: None },
  // CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __RetryPolicy_1___RunAsync_d__23(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder,
                                             ::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig* retryPolicyConfig,
                                             ::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>* __4__this, T _opResult_5__2, int32_t _attempt_5__3,
                                             ::System::Runtime::CompilerServices::TaskAwaiter_1<T> __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2,
                                             ::System::Runtime::CompilerServices::TaskAwaiter __u__3) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder;

  /// @brief Field retryPolicyConfig, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig* retryPolicyConfig;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>* __4__this;

  /// @brief Field <opResult>5__2, offset: 0x30, size: 0x8, def value: None
  T _opResult_5__2;

  /// @brief Field <attempt>5__3, offset: 0x38, size: 0x4, def value: None
  int32_t _attempt_5__3;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<T> __u__1;

  /// @brief Field <>u__2, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2;

  /// @brief Field <>u__3, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__3;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Services::Vivox::Mint::ErrorMitigation
// Type: Unity.Services.Vivox.Mint.ErrorMitigation::RetryPolicy`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::ErrorMitigation {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Unity.Services.Vivox.Mint.ErrorMitigation::RetryPolicy`1<T>*
class CORDL_TYPE RetryPolicy_1 : public ::System::Object {
public:
  // Declarations
  using _RunAsync_d__23 = ::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicy_1___RunAsync_d__23<T>;

  using __c__DisplayClass10_0 = ::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicy_1____c__DisplayClass10_0<T>;

  __declspec(property(get = get_CreateOperation, put = set_CreateOperation))::System::Func_2<int32_t, ::System::Threading::Tasks::Task_1<T>*>* CreateOperation;

  __declspec(property(get = get_RetryCondition, put = set_RetryCondition))::System::Func_2<T, ::System::Threading::Tasks::Task_1<bool>*>* RetryCondition;

  /// @brief Field <CreateOperation>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__CreateOperation_k__BackingField,
                      put = __cordl_internal_set__CreateOperation_k__BackingField))::System::Func_2<int32_t, ::System::Threading::Tasks::Task_1<T>*>* _CreateOperation_k__BackingField;

  /// @brief Field <RetryCondition>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__RetryCondition_k__BackingField,
                      put = __cordl_internal_set__RetryCondition_k__BackingField))::System::Func_2<T, ::System::Threading::Tasks::Task_1<bool>*>* _RetryCondition_k__BackingField;

  /// @brief Field _retryPolicyConfig, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__retryPolicyConfig,
                      put = __cordl_internal_set__retryPolicyConfig))::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig* _retryPolicyConfig;

  /// @brief Convert operator to "::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>"
  constexpr operator ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>*() noexcept;

  /// @brief Method AddJitter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline float_t AddJitter(float_t number, float_t magnitude);

  /// @brief Method CalculateDelay, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline float_t CalculateDelay(int32_t attemptNumber, float_t maxDelayTime, float_t delayScale, float_t jitterMagnitude);

  /// @brief Method ForOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>* ForOperation(::System::Func_1<::System::Threading::Tasks::Task_1<T>*>* operation);

  /// @brief Method ForOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>* ForOperation(::System::Func_2<int32_t, ::System::Threading::Tasks::Task_1<T>*>* operation);

  /// @brief Method HandleException, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename TException> inline ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>* HandleException();

  /// @brief Method HandleException, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename TException> inline ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>* HandleException(::System::Func_2<TException, bool>* condition);

  static inline ::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>* New_ctor(::System::Func_1<::System::Threading::Tasks::Task_1<T>*>* createAsyncOp);

  static inline ::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>* New_ctor(::System::Func_2<int32_t, ::System::Threading::Tasks::Task_1<T>*>* createAsyncOp);

  /// @brief Method Pow2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline float_t Pow2(float_t exponent, float_t scale);

  /// @brief Method RunAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<T>* RunAsync(::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig* retryPolicyConfig);

  /// @brief Method UptoMaximumRetries, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>* UptoMaximumRetries(uint32_t amount);

  /// @brief Method WithDelayScale, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>* WithDelayScale(float_t scale);

  /// @brief Method WithJitterMagnitude, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>* WithJitterMagnitude(float_t magnitude);

  /// @brief Method WithMaxDelayTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>* WithMaxDelayTime(float_t time);

  /// @brief Method WithRetryCondition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>* WithRetryCondition(::System::Func_2<T, ::System::Threading::Tasks::Task_1<bool>*>* shouldRetry);

  constexpr ::System::Func_2<int32_t, ::System::Threading::Tasks::Task_1<T>*>*& __cordl_internal_get__CreateOperation_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<int32_t, ::System::Threading::Tasks::Task_1<T>*>*> const& __cordl_internal_get__CreateOperation_k__BackingField() const;

  constexpr ::System::Func_2<T, ::System::Threading::Tasks::Task_1<bool>*>*& __cordl_internal_get__RetryCondition_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<T, ::System::Threading::Tasks::Task_1<bool>*>*> const& __cordl_internal_get__RetryCondition_k__BackingField() const;

  constexpr ::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig*& __cordl_internal_get__retryPolicyConfig();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig*> const& __cordl_internal_get__retryPolicyConfig() const;

  constexpr void __cordl_internal_set__CreateOperation_k__BackingField(::System::Func_2<int32_t, ::System::Threading::Tasks::Task_1<T>*>* value);

  constexpr void __cordl_internal_set__RetryCondition_k__BackingField(::System::Func_2<T, ::System::Threading::Tasks::Task_1<bool>*>* value);

  constexpr void __cordl_internal_set__retryPolicyConfig(::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Func_1<::System::Threading::Tasks::Task_1<T>*>* createAsyncOp);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Func_2<int32_t, ::System::Threading::Tasks::Task_1<T>*>* createAsyncOp);

  /// @brief Method get_CreateOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Func_2<int32_t, ::System::Threading::Tasks::Task_1<T>*>* get_CreateOperation();

  /// @brief Method get_RetryCondition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Func_2<T, ::System::Threading::Tasks::Task_1<bool>*>* get_RetryCondition();

  /// @brief Convert to "::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>"
  constexpr ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>* i___Unity__Services__Vivox__Mint__ErrorMitigation__IRetryPolicy_1_T_() noexcept;

  /// @brief Method set_CreateOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_CreateOperation(::System::Func_2<int32_t, ::System::Threading::Tasks::Task_1<T>*>* value);

  /// @brief Method set_RetryCondition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_RetryCondition(::System::Func_2<T, ::System::Threading::Tasks::Task_1<bool>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RetryPolicy_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RetryPolicy_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RetryPolicy_1(RetryPolicy_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RetryPolicy_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RetryPolicy_1(RetryPolicy_1 const&) = delete;

  /// @brief Field _retryPolicyConfig, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig* ____retryPolicyConfig;

  /// @brief Field <CreateOperation>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<int32_t, ::System::Threading::Tasks::Task_1<T>*>* ____CreateOperation_k__BackingField;

  /// @brief Field <RetryCondition>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Func_2<T, ::System::Threading::Tasks::Task_1<bool>*>* ____RetryCondition_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox::Mint::ErrorMitigation
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1, "Unity.Services.Vivox.Mint.ErrorMitigation", "RetryPolicy`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicy_1____c__DisplayClass10_0, "Unity.Services.Vivox.Mint.ErrorMitigation",
                                     "RetryPolicy`1/<>c__DisplayClass10_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicy_1___RunAsync_d__23, "Unity.Services.Vivox.Mint.ErrorMitigation", "RetryPolicy`1/<RunAsync>d__23");
