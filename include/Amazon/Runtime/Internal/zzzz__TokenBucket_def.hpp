#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TokenBucket)
namespace Amazon::Runtime::Internal {
struct __TokenBucket___TryAcquireTokenAsync_d__55;
}
namespace Amazon::Runtime::Internal {
struct __TokenBucket___WaitForTokenAsync_d__67;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class TokenBucket;
}
namespace Amazon::Runtime::Internal {
struct __TokenBucket___TryAcquireTokenAsync_d__55;
}
namespace Amazon::Runtime::Internal {
struct __TokenBucket___WaitForTokenAsync_d__67;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::TokenBucket);
MARK_VAL_T(::Amazon::Runtime::Internal::__TokenBucket___TryAcquireTokenAsync_d__55);
MARK_VAL_T(::Amazon::Runtime::Internal::__TokenBucket___WaitForTokenAsync_d__67);
// Type: ::<TryAcquireTokenAsync>d__55
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: true
// CS Name: ::TokenBucket::<TryAcquireTokenAsync>d__55
struct CORDL_TYPE __TokenBucket___TryAcquireTokenAsync_d__55 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x23f1a30, size 0x270, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x23f1ca0, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TokenBucket___TryAcquireTokenAsync_d__55();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Amazon::Runtime::Internal::TokenBucket*", modifiers:
  // "", def_value: None }, CppParam { name: "amount", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "failFast", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_attempt_5__2", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __TokenBucket___TryAcquireTokenAsync_d__55(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                       ::Amazon::Runtime::Internal::TokenBucket* __4__this, double_t amount, bool failFast, ::System::Threading::CancellationToken cancellationToken,
                                                       int32_t _attempt_5__2, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::TokenBucket* __4__this;

  /// @brief Field amount, offset: 0x28, size: 0x8, def value: None
  double_t amount;

  /// @brief Field failFast, offset: 0x30, size: 0x1, def value: None
  bool failFast;

  /// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <attempt>5__2, offset: 0x40, size: 0x4, def value: None
  int32_t _attempt_5__2;

  /// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::__TokenBucket___TryAcquireTokenAsync_d__55, 0x58>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__TokenBucket___TryAcquireTokenAsync_d__55, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__TokenBucket___TryAcquireTokenAsync_d__55, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__TokenBucket___TryAcquireTokenAsync_d__55, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__TokenBucket___TryAcquireTokenAsync_d__55, amount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__TokenBucket___TryAcquireTokenAsync_d__55, failFast) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__TokenBucket___TryAcquireTokenAsync_d__55, cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__TokenBucket___TryAcquireTokenAsync_d__55, _attempt_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__TokenBucket___TryAcquireTokenAsync_d__55, __u__1) == 0x48, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
// Type: ::<WaitForTokenAsync>d__67
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: true
// CS Name: ::TokenBucket::<WaitForTokenAsync>d__67
struct CORDL_TYPE __TokenBucket___WaitForTokenAsync_d__67 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x23f1cf8, size 0x1b0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x23f1ea8, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TokenBucket___WaitForTokenAsync_d__67();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "delayMs", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __TokenBucket___WaitForTokenAsync_d__67(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, int32_t delayMs,
                                                    ::System::Threading::CancellationToken cancellationToken,
                                                    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field delayMs, offset: 0x20, size: 0x4, def value: None
  int32_t delayMs;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::__TokenBucket___WaitForTokenAsync_d__67, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__TokenBucket___WaitForTokenAsync_d__67, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__TokenBucket___WaitForTokenAsync_d__67, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__TokenBucket___WaitForTokenAsync_d__67, delayMs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__TokenBucket___WaitForTokenAsync_d__67, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__TokenBucket___WaitForTokenAsync_d__67, __u__1) == 0x30, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
// Type: Amazon.Runtime.Internal::TokenBucket
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 169, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::TokenBucket*
class CORDL_TYPE TokenBucket : public ::System::Object {
public:
  // Declarations
  using _TryAcquireTokenAsync_d__55 = ::Amazon::Runtime::Internal::__TokenBucket___TryAcquireTokenAsync_d__55;

  using _WaitForTokenAsync_d__67 = ::Amazon::Runtime::Internal::__TokenBucket___WaitForTokenAsync_d__67;

  __declspec(property(get = get_CurrentCapacity, put = set_CurrentCapacity)) double_t CurrentCapacity;

  __declspec(property(get = get_Enabled, put = set_Enabled)) bool Enabled;

  __declspec(property(get = get_FillRate, put = set_FillRate))::System::Nullable_1<double_t> FillRate;

  __declspec(property(get = get_LastMaxRate, put = set_LastMaxRate)) double_t LastMaxRate;

  __declspec(property(get = get_LastThrottleTime, put = set_LastThrottleTime)) double_t LastThrottleTime;

  __declspec(property(get = get_LastTimestamp, put = set_LastTimestamp))::System::Nullable_1<double_t> LastTimestamp;

  __declspec(property(get = get_LastTxRateBucket, put = set_LastTxRateBucket)) double_t LastTxRateBucket;

  __declspec(property(get = get_MaxCapacity, put = set_MaxCapacity))::System::Nullable_1<double_t> MaxCapacity;

  __declspec(property(get = get_MeasuredTxRate, put = set_MeasuredTxRate)) double_t MeasuredTxRate;

  __declspec(property(get = get_RequestCount, put = set_RequestCount)) int64_t RequestCount;

  __declspec(property(get = get_TimeWindow, put = set_TimeWindow)) double_t TimeWindow;

  /// @brief Field <CurrentCapacity>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__CurrentCapacity_k__BackingField, put = __cordl_internal_set__CurrentCapacity_k__BackingField)) double_t _CurrentCapacity_k__BackingField;

  /// @brief Field <Enabled>k__BackingField, offset 0xa8, size 0x1
  __declspec(property(get = __cordl_internal_get__Enabled_k__BackingField, put = __cordl_internal_set__Enabled_k__BackingField)) bool _Enabled_k__BackingField;

  /// @brief Field <FillRate>k__BackingField, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get__FillRate_k__BackingField, put = __cordl_internal_set__FillRate_k__BackingField))::System::Nullable_1<double_t> _FillRate_k__BackingField;

  /// @brief Field <LastMaxRate>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__LastMaxRate_k__BackingField, put = __cordl_internal_set__LastMaxRate_k__BackingField)) double_t _LastMaxRate_k__BackingField;

  /// @brief Field <LastThrottleTime>k__BackingField, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__LastThrottleTime_k__BackingField, put = __cordl_internal_set__LastThrottleTime_k__BackingField)) double_t _LastThrottleTime_k__BackingField;

  /// @brief Field <LastTimestamp>k__BackingField, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get__LastTimestamp_k__BackingField,
                      put = __cordl_internal_set__LastTimestamp_k__BackingField))::System::Nullable_1<double_t> _LastTimestamp_k__BackingField;

  /// @brief Field <LastTxRateBucket>k__BackingField, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__LastTxRateBucket_k__BackingField, put = __cordl_internal_set__LastTxRateBucket_k__BackingField)) double_t _LastTxRateBucket_k__BackingField;

  /// @brief Field <MaxCapacity>k__BackingField, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get__MaxCapacity_k__BackingField, put = __cordl_internal_set__MaxCapacity_k__BackingField))::System::Nullable_1<double_t> _MaxCapacity_k__BackingField;

  /// @brief Field <MeasuredTxRate>k__BackingField, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__MeasuredTxRate_k__BackingField, put = __cordl_internal_set__MeasuredTxRate_k__BackingField)) double_t _MeasuredTxRate_k__BackingField;

  /// @brief Field <RequestCount>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__RequestCount_k__BackingField, put = __cordl_internal_set__RequestCount_k__BackingField)) int64_t _RequestCount_k__BackingField;

  /// @brief Field <TimeWindow>k__BackingField, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__TimeWindow_k__BackingField, put = __cordl_internal_set__TimeWindow_k__BackingField)) double_t _TimeWindow_k__BackingField;

  /// @brief Field _beta, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__beta, put = __cordl_internal_set__beta)) double_t _beta;

  /// @brief Field _bucketLock, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__bucketLock, put = __cordl_internal_set__bucketLock))::System::Object* _bucketLock;

  /// @brief Field _epoch, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__epoch, put = setStaticF__epoch))::System::DateTime _epoch;

  /// @brief Field _minCapacity, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__minCapacity, put = __cordl_internal_set__minCapacity)) double_t _minCapacity;

  /// @brief Field _minFillRate, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__minFillRate, put = __cordl_internal_set__minFillRate)) double_t _minFillRate;

  /// @brief Field _scaleConstant, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__scaleConstant, put = __cordl_internal_set__scaleConstant)) double_t _scaleConstant;

  /// @brief Field _smooth, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__smooth, put = __cordl_internal_set__smooth)) double_t _smooth;

  /// @brief Method CUBICSuccess, addr 0x23f16ac, size 0x8c, virtual true, abstract: false, final false
  inline double_t CUBICSuccess(double_t timestamp);

  /// @brief Method CUBICThrottle, addr 0x23f1738, size 0xc, virtual true, abstract: false, final false
  inline double_t CUBICThrottle(double_t rateToUse);

  /// @brief Method CalculateTimeWindow, addr 0x23f1620, size 0x8c, virtual true, abstract: false, final false
  inline void CalculateTimeWindow();

  /// @brief Method CalculateWait, addr 0x23f1744, size 0x30, virtual true, abstract: false, final false
  inline int32_t CalculateWait(double_t amount, double_t currentCapacity, double_t fillRate);

  /// @brief Method GetTimeInSeconds, addr 0x23f191c, size 0xac, virtual false, abstract: false, final false
  static inline double_t GetTimeInSeconds();

  /// @brief Method GetTimestamp, addr 0x23f18d0, size 0x4c, virtual true, abstract: false, final false
  inline double_t GetTimestamp();

  static inline ::Amazon::Runtime::Internal::TokenBucket* New_ctor();

  static inline ::Amazon::Runtime::Internal::TokenBucket* New_ctor(double_t minFillRate, double_t minCapacity, double_t beta, double_t scaleConstant, double_t smooth);

  /// @brief Method ObtainCapacity, addr 0x23f1158, size 0x184, virtual false, abstract: false, final false
  inline int32_t ObtainCapacity(double_t amount);

  /// @brief Method SetupAcquireToken, addr 0x23f0fcc, size 0x18c, virtual false, abstract: false, final false
  inline ::System::Nullable_1<bool> SetupAcquireToken(double_t amount);

  /// @brief Method TokenBucketRefill, addr 0x23f12dc, size 0x158, virtual true, abstract: false, final false
  inline void TokenBucketRefill();

  /// @brief Method TokenBucketUpdateRate, addr 0x23f1434, size 0x124, virtual true, abstract: false, final false
  inline void TokenBucketUpdateRate(double_t newRps);

  /// @brief Method TryAcquireToken, addr 0x23eb110, size 0xec, virtual false, abstract: false, final false
  inline bool TryAcquireToken(double_t amount, bool failFast);

  /// @brief Method TryAcquireTokenAsync, addr 0x23ec514, size 0x158, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* TryAcquireTokenAsync(double_t amount, bool failFast, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method UpdateClientSendingRate, addr 0x23ea81c, size 0x24c, virtual false, abstract: false, final false
  inline void UpdateClientSendingRate(bool isThrottlingError);

  /// @brief Method UpdateMeasuredRate, addr 0x23f1558, size 0xc8, virtual true, abstract: false, final false
  inline void UpdateMeasuredRate();

  /// @brief Method WaitForToken, addr 0x23f1774, size 0x58, virtual true, abstract: false, final false
  inline void WaitForToken(int32_t delayMs);

  /// @brief Method WaitForTokenAsync, addr 0x23f17cc, size 0x104, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WaitForTokenAsync(int32_t delayMs, ::System::Threading::CancellationToken cancellationToken);

  constexpr double_t const& __cordl_internal_get__CurrentCapacity_k__BackingField() const;

  constexpr double_t& __cordl_internal_get__CurrentCapacity_k__BackingField();

  constexpr bool const& __cordl_internal_get__Enabled_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Enabled_k__BackingField();

  constexpr ::System::Nullable_1<double_t> const& __cordl_internal_get__FillRate_k__BackingField() const;

  constexpr ::System::Nullable_1<double_t>& __cordl_internal_get__FillRate_k__BackingField();

  constexpr double_t const& __cordl_internal_get__LastMaxRate_k__BackingField() const;

  constexpr double_t& __cordl_internal_get__LastMaxRate_k__BackingField();

  constexpr double_t const& __cordl_internal_get__LastThrottleTime_k__BackingField() const;

  constexpr double_t& __cordl_internal_get__LastThrottleTime_k__BackingField();

  constexpr ::System::Nullable_1<double_t> const& __cordl_internal_get__LastTimestamp_k__BackingField() const;

  constexpr ::System::Nullable_1<double_t>& __cordl_internal_get__LastTimestamp_k__BackingField();

  constexpr double_t const& __cordl_internal_get__LastTxRateBucket_k__BackingField() const;

  constexpr double_t& __cordl_internal_get__LastTxRateBucket_k__BackingField();

  constexpr ::System::Nullable_1<double_t> const& __cordl_internal_get__MaxCapacity_k__BackingField() const;

  constexpr ::System::Nullable_1<double_t>& __cordl_internal_get__MaxCapacity_k__BackingField();

  constexpr double_t const& __cordl_internal_get__MeasuredTxRate_k__BackingField() const;

  constexpr double_t& __cordl_internal_get__MeasuredTxRate_k__BackingField();

  constexpr int64_t const& __cordl_internal_get__RequestCount_k__BackingField() const;

  constexpr int64_t& __cordl_internal_get__RequestCount_k__BackingField();

  constexpr double_t const& __cordl_internal_get__TimeWindow_k__BackingField() const;

  constexpr double_t& __cordl_internal_get__TimeWindow_k__BackingField();

  constexpr double_t const& __cordl_internal_get__beta() const;

  constexpr double_t& __cordl_internal_get__beta();

  constexpr ::System::Object*& __cordl_internal_get__bucketLock();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__bucketLock() const;

  constexpr double_t const& __cordl_internal_get__minCapacity() const;

  constexpr double_t& __cordl_internal_get__minCapacity();

  constexpr double_t const& __cordl_internal_get__minFillRate() const;

  constexpr double_t& __cordl_internal_get__minFillRate();

  constexpr double_t const& __cordl_internal_get__scaleConstant() const;

  constexpr double_t& __cordl_internal_get__scaleConstant();

  constexpr double_t const& __cordl_internal_get__smooth() const;

  constexpr double_t& __cordl_internal_get__smooth();

  constexpr void __cordl_internal_set__CurrentCapacity_k__BackingField(double_t value);

  constexpr void __cordl_internal_set__Enabled_k__BackingField(bool value);

  constexpr void __cordl_internal_set__FillRate_k__BackingField(::System::Nullable_1<double_t> value);

  constexpr void __cordl_internal_set__LastMaxRate_k__BackingField(double_t value);

  constexpr void __cordl_internal_set__LastThrottleTime_k__BackingField(double_t value);

  constexpr void __cordl_internal_set__LastTimestamp_k__BackingField(::System::Nullable_1<double_t> value);

  constexpr void __cordl_internal_set__LastTxRateBucket_k__BackingField(double_t value);

  constexpr void __cordl_internal_set__MaxCapacity_k__BackingField(::System::Nullable_1<double_t> value);

  constexpr void __cordl_internal_set__MeasuredTxRate_k__BackingField(double_t value);

  constexpr void __cordl_internal_set__RequestCount_k__BackingField(int64_t value);

  constexpr void __cordl_internal_set__TimeWindow_k__BackingField(double_t value);

  constexpr void __cordl_internal_set__beta(double_t value);

  constexpr void __cordl_internal_set__bucketLock(::System::Object* value);

  constexpr void __cordl_internal_set__minCapacity(double_t value);

  constexpr void __cordl_internal_set__minFillRate(double_t value);

  constexpr void __cordl_internal_set__scaleConstant(double_t value);

  constexpr void __cordl_internal_set__smooth(double_t value);

  /// @brief Method .ctor, addr 0x23ea450, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x23f0ecc, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(double_t minFillRate, double_t minCapacity, double_t beta, double_t scaleConstant, double_t smooth);

  static inline ::System::DateTime getStaticF__epoch();

  /// @brief Method get_CurrentCapacity, addr 0x23f0e34, size 0x8, virtual false, abstract: false, final false
  inline double_t get_CurrentCapacity();

  /// @brief Method get_Enabled, addr 0x23f0eb8, size 0x8, virtual false, abstract: false, final false
  inline bool get_Enabled();

  /// @brief Method get_FillRate, addr 0x23f0e0c, size 0xc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<double_t> get_FillRate();

  /// @brief Method get_LastMaxRate, addr 0x23f0e88, size 0x8, virtual false, abstract: false, final false
  inline double_t get_LastMaxRate();

  /// @brief Method get_LastThrottleTime, addr 0x23f0e98, size 0x8, virtual false, abstract: false, final false
  inline double_t get_LastThrottleTime();

  /// @brief Method get_LastTimestamp, addr 0x23f0e44, size 0xc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<double_t> get_LastTimestamp();

  /// @brief Method get_LastTxRateBucket, addr 0x23f0e68, size 0x8, virtual false, abstract: false, final false
  inline double_t get_LastTxRateBucket();

  /// @brief Method get_MaxCapacity, addr 0x23f0e20, size 0xc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<double_t> get_MaxCapacity();

  /// @brief Method get_MeasuredTxRate, addr 0x23f0e58, size 0x8, virtual false, abstract: false, final false
  inline double_t get_MeasuredTxRate();

  /// @brief Method get_RequestCount, addr 0x23f0e78, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_RequestCount();

  /// @brief Method get_TimeWindow, addr 0x23f0ea8, size 0x8, virtual false, abstract: false, final false
  inline double_t get_TimeWindow();

  static inline void setStaticF__epoch(::System::DateTime value);

  /// @brief Method set_CurrentCapacity, addr 0x23f0e3c, size 0x8, virtual false, abstract: false, final false
  inline void set_CurrentCapacity(double_t value);

  /// @brief Method set_Enabled, addr 0x23f0ec0, size 0xc, virtual false, abstract: false, final false
  inline void set_Enabled(bool value);

  /// @brief Method set_FillRate, addr 0x23f0e18, size 0x8, virtual false, abstract: false, final false
  inline void set_FillRate(::System::Nullable_1<double_t> value);

  /// @brief Method set_LastMaxRate, addr 0x23f0e90, size 0x8, virtual false, abstract: false, final false
  inline void set_LastMaxRate(double_t value);

  /// @brief Method set_LastThrottleTime, addr 0x23f0ea0, size 0x8, virtual false, abstract: false, final false
  inline void set_LastThrottleTime(double_t value);

  /// @brief Method set_LastTimestamp, addr 0x23f0e50, size 0x8, virtual false, abstract: false, final false
  inline void set_LastTimestamp(::System::Nullable_1<double_t> value);

  /// @brief Method set_LastTxRateBucket, addr 0x23f0e70, size 0x8, virtual false, abstract: false, final false
  inline void set_LastTxRateBucket(double_t value);

  /// @brief Method set_MaxCapacity, addr 0x23f0e2c, size 0x8, virtual false, abstract: false, final false
  inline void set_MaxCapacity(::System::Nullable_1<double_t> value);

  /// @brief Method set_MeasuredTxRate, addr 0x23f0e60, size 0x8, virtual false, abstract: false, final false
  inline void set_MeasuredTxRate(double_t value);

  /// @brief Method set_RequestCount, addr 0x23f0e80, size 0x8, virtual false, abstract: false, final false
  inline void set_RequestCount(int64_t value);

  /// @brief Method set_TimeWindow, addr 0x23f0eb0, size 0x8, virtual false, abstract: false, final false
  inline void set_TimeWindow(double_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TokenBucket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TokenBucket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TokenBucket(TokenBucket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TokenBucket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TokenBucket(TokenBucket const&) = delete;

  /// @brief Field _bucketLock, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ____bucketLock;

  /// @brief Field _minFillRate, offset: 0x18, size: 0x8, def value: None
  double_t ____minFillRate;

  /// @brief Field _minCapacity, offset: 0x20, size: 0x8, def value: None
  double_t ____minCapacity;

  /// @brief Field _beta, offset: 0x28, size: 0x8, def value: None
  double_t ____beta;

  /// @brief Field _scaleConstant, offset: 0x30, size: 0x8, def value: None
  double_t ____scaleConstant;

  /// @brief Field _smooth, offset: 0x38, size: 0x8, def value: None
  double_t ____smooth;

  /// @brief Field <FillRate>k__BackingField, offset: 0x40, size: 0x10, def value: None
  ::System::Nullable_1<double_t> ____FillRate_k__BackingField;

  /// @brief Field <MaxCapacity>k__BackingField, offset: 0x50, size: 0x10, def value: None
  ::System::Nullable_1<double_t> ____MaxCapacity_k__BackingField;

  /// @brief Field <CurrentCapacity>k__BackingField, offset: 0x60, size: 0x8, def value: None
  double_t ____CurrentCapacity_k__BackingField;

  /// @brief Field <LastTimestamp>k__BackingField, offset: 0x68, size: 0x10, def value: None
  ::System::Nullable_1<double_t> ____LastTimestamp_k__BackingField;

  /// @brief Field <MeasuredTxRate>k__BackingField, offset: 0x78, size: 0x8, def value: None
  double_t ____MeasuredTxRate_k__BackingField;

  /// @brief Field <LastTxRateBucket>k__BackingField, offset: 0x80, size: 0x8, def value: None
  double_t ____LastTxRateBucket_k__BackingField;

  /// @brief Field <RequestCount>k__BackingField, offset: 0x88, size: 0x8, def value: None
  int64_t ____RequestCount_k__BackingField;

  /// @brief Field <LastMaxRate>k__BackingField, offset: 0x90, size: 0x8, def value: None
  double_t ____LastMaxRate_k__BackingField;

  /// @brief Field <LastThrottleTime>k__BackingField, offset: 0x98, size: 0x8, def value: None
  double_t ____LastThrottleTime_k__BackingField;

  /// @brief Field <TimeWindow>k__BackingField, offset: 0xa0, size: 0x8, def value: None
  double_t ____TimeWindow_k__BackingField;

  /// @brief Field <Enabled>k__BackingField, offset: 0xa8, size: 0x1, def value: None
  bool ____Enabled_k__BackingField;

  /// @brief Field MaxAttempts offset 0xffffffff size 0x4
  static constexpr int32_t MaxAttempts{ static_cast<int32_t>(0xf) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::TokenBucket, 0xb0>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::TokenBucket, ____bucketLock) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::TokenBucket, ____minFillRate) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::TokenBucket, ____minCapacity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::TokenBucket, ____beta) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::TokenBucket, ____scaleConstant) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::TokenBucket, ____smooth) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::TokenBucket, ____FillRate_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::TokenBucket, ____MaxCapacity_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::TokenBucket, ____CurrentCapacity_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::TokenBucket, ____LastTimestamp_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::TokenBucket, ____MeasuredTxRate_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::TokenBucket, ____LastTxRateBucket_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::TokenBucket, ____RequestCount_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::TokenBucket, ____LastMaxRate_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::TokenBucket, ____LastThrottleTime_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::TokenBucket, ____TimeWindow_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::TokenBucket, ____Enabled_k__BackingField) == 0xa8, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::TokenBucket);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::TokenBucket*, "Amazon.Runtime.Internal", "TokenBucket");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::__TokenBucket___TryAcquireTokenAsync_d__55, "Amazon.Runtime.Internal", "TokenBucket/<TryAcquireTokenAsync>d__55");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::__TokenBucket___WaitForTokenAsync_d__67, "Amazon.Runtime.Internal", "TokenBucket/<WaitForTokenAsync>d__67");
