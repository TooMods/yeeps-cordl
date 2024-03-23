#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/zzzz__StandardRetryPolicy_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AdaptiveRetryPolicy)
namespace Amazon::Runtime::Internal {
class TokenBucket;
}
namespace Amazon::Runtime::Internal {
struct __AdaptiveRetryPolicy___ObtainSendTokenAsync_d__11;
}
namespace Amazon::Runtime {
class IClientConfig;
}
namespace Amazon::Runtime {
class IExecutionContext;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class AdaptiveRetryPolicy;
}
namespace Amazon::Runtime::Internal {
struct __AdaptiveRetryPolicy___ObtainSendTokenAsync_d__11;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::AdaptiveRetryPolicy);
MARK_VAL_T(::Amazon::Runtime::Internal::__AdaptiveRetryPolicy___ObtainSendTokenAsync_d__11);
// Type: ::<ObtainSendTokenAsync>d__11
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: true
// CS Name: ::AdaptiveRetryPolicy::<ObtainSendTokenAsync>d__11
struct CORDL_TYPE __AdaptiveRetryPolicy___ObtainSendTokenAsync_d__11 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x23ebe24, size 0x6f0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x23ec66c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AdaptiveRetryPolicy___ObtainSendTokenAsync_d__11();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Amazon::Runtime::Internal::AdaptiveRetryPolicy*", modifiers:
  // "", def_value: None }, CppParam { name: "executionContext", ty: "::Amazon::Runtime::IExecutionContext*", modifiers: "", def_value: None }, CppParam { name: "exception", ty:
  // "::System::Exception*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>",
  // modifiers: "", def_value: None }]
  constexpr __AdaptiveRetryPolicy___ObtainSendTokenAsync_d__11(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                               ::Amazon::Runtime::Internal::AdaptiveRetryPolicy* __4__this, ::Amazon::Runtime::IExecutionContext* executionContext,
                                                               ::System::Exception* exception,
                                                               ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::AdaptiveRetryPolicy* __4__this;

  /// @brief Field executionContext, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Runtime::IExecutionContext* executionContext;

  /// @brief Field exception, offset: 0x30, size: 0x8, def value: None
  ::System::Exception* exception;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::__AdaptiveRetryPolicy___ObtainSendTokenAsync_d__11, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__AdaptiveRetryPolicy___ObtainSendTokenAsync_d__11, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__AdaptiveRetryPolicy___ObtainSendTokenAsync_d__11, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__AdaptiveRetryPolicy___ObtainSendTokenAsync_d__11, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__AdaptiveRetryPolicy___ObtainSendTokenAsync_d__11, executionContext) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__AdaptiveRetryPolicy___ObtainSendTokenAsync_d__11, exception) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__AdaptiveRetryPolicy___ObtainSendTokenAsync_d__11, __u__1) == 0x38, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
// Type: Amazon.Runtime.Internal::AdaptiveRetryPolicy
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::AdaptiveRetryPolicy*
class CORDL_TYPE AdaptiveRetryPolicy : public ::Amazon::Runtime::Internal::StandardRetryPolicy {
public:
  // Declarations
  using _ObtainSendTokenAsync_d__11 = ::Amazon::Runtime::Internal::__AdaptiveRetryPolicy___ObtainSendTokenAsync_d__11;

  __declspec(property(get = get_TokenBucket, put = set_TokenBucket))::Amazon::Runtime::Internal::TokenBucket* TokenBucket;

  /// @brief Field <TokenBucket>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__TokenBucket_k__BackingField,
                      put = __cordl_internal_set__TokenBucket_k__BackingField))::Amazon::Runtime::Internal::TokenBucket* _TokenBucket_k__BackingField;

  static inline ::Amazon::Runtime::Internal::AdaptiveRetryPolicy* New_ctor(::Amazon::Runtime::IClientConfig* config);

  static inline ::Amazon::Runtime::Internal::AdaptiveRetryPolicy* New_ctor(int32_t maxRetries);

  /// @brief Method NotifySuccess, addr 0x23eb1fc, size 0x38, virtual true, abstract: false, final false
  inline void NotifySuccess(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method ObtainSendToken, addr 0x23ead74, size 0x39c, virtual true, abstract: false, final false
  inline void ObtainSendToken(::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception);

  /// @brief Method ObtainSendTokenAsync, addr 0x23ebd0c, size 0x118, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ObtainSendTokenAsync(::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception);

  /// @brief Method OnRetry, addr 0x23ea7d8, size 0x44, virtual true, abstract: false, final false
  inline bool OnRetry(::Amazon::Runtime::IExecutionContext* executionContext, bool bypassAcquireCapacity, bool isThrottlingError);

  /// @brief Method RetryForExceptionAsync, addr 0x23eb528, size 0x94, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* RetryForExceptionAsync(::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception);

  /// @brief Method WaitBeforeRetryAsync, addr 0x23eb8d8, size 0x268, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WaitBeforeRetryAsync(::Amazon::Runtime::IExecutionContext* executionContext);

  constexpr ::Amazon::Runtime::Internal::TokenBucket*& __cordl_internal_get__TokenBucket_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::TokenBucket*> const& __cordl_internal_get__TokenBucket_k__BackingField() const;

  constexpr void __cordl_internal_set__TokenBucket_k__BackingField(::Amazon::Runtime::Internal::TokenBucket* value);

  /// @brief Method .ctor, addr 0x23ea4e8, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::IClientConfig* config);

  /// @brief Method .ctor, addr 0x23ea39c, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(int32_t maxRetries);

  /// @brief Method get_TokenBucket, addr 0x23ea38c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::TokenBucket* get_TokenBucket();

  /// @brief Method set_TokenBucket, addr 0x23ea394, size 0x8, virtual false, abstract: false, final false
  inline void set_TokenBucket(::Amazon::Runtime::Internal::TokenBucket* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AdaptiveRetryPolicy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AdaptiveRetryPolicy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AdaptiveRetryPolicy(AdaptiveRetryPolicy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AdaptiveRetryPolicy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AdaptiveRetryPolicy(AdaptiveRetryPolicy const&) = delete;

  /// @brief Field <TokenBucket>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::TokenBucket* ____TokenBucket_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::AdaptiveRetryPolicy, 0x60>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::AdaptiveRetryPolicy, ____TokenBucket_k__BackingField) == 0x58, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::AdaptiveRetryPolicy);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::AdaptiveRetryPolicy*, "Amazon.Runtime.Internal", "AdaptiveRetryPolicy");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::__AdaptiveRetryPolicy___ObtainSendTokenAsync_d__11, "Amazon.Runtime.Internal", "AdaptiveRetryPolicy/<ObtainSendTokenAsync>d__11");
