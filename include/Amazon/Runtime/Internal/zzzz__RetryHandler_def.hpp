#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/zzzz__PipelineHandler_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RetryHandler)
namespace Amazon::Runtime::Internal::Util {
class ILogger;
}
namespace Amazon::Runtime::Internal::Util {
class TimingEvent;
}
namespace Amazon::Runtime::Internal {
template <typename T> struct __RetryHandler___InvokeAsync_d__10_1;
}
namespace Amazon::Runtime {
class IExecutionContext;
}
namespace Amazon::Runtime {
class IRequestContext;
}
namespace Amazon::Runtime {
class RetryPolicy;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class RetryHandler;
}
namespace Amazon::Runtime::Internal {
template <typename T> struct __RetryHandler___InvokeAsync_d__10_1;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::RetryHandler);
MARK_GEN_VAL_T(::Amazon::Runtime::Internal::__RetryHandler___InvokeAsync_d__10_1);
// Type: ::<InvokeAsync>d__10`1
// SizeInfo { instance_size: 128, native_size: 144, calculated_instance_size: 128, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::RetryHandler::<InvokeAsync>d__10`1<T>
struct CORDL_TYPE __RetryHandler___InvokeAsync_d__10_1 {
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
  constexpr __RetryHandler___InvokeAsync_d__10_1();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: None }, CppParam { name: "executionContext", ty: "::Amazon::Runtime::IExecutionContext*", modifiers:
  // "", def_value: None }, CppParam { name: "__4__this", ty: "::Amazon::Runtime::Internal::RetryHandler*", modifiers: "", def_value: None }, CppParam { name: "_requestContext_5__2", ty:
  // "::Amazon::Runtime::IRequestContext*", modifiers: "", def_value: None }, CppParam { name: "_shouldRetry_5__3", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "_capturedException_5__4", ty:
  // "::System::Runtime::ExceptionServices::ExceptionDispatchInfo*", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<T>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap4", ty:
  // "::Amazon::Runtime::Internal::Util::TimingEvent*", modifiers: "", def_value: None }]
  constexpr __RetryHandler___InvokeAsync_d__10_1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder,
                                                 ::Amazon::Runtime::IExecutionContext* executionContext, ::Amazon::Runtime::Internal::RetryHandler* __4__this,
                                                 ::Amazon::Runtime::IRequestContext* _requestContext_5__2, bool _shouldRetry_5__3,
                                                 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1,
                                                 ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* _capturedException_5__4,
                                                 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<T> __u__2,
                                                 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__3,
                                                 ::Amazon::Runtime::Internal::Util::TimingEvent* __7__wrap4) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder;

  /// @brief Field executionContext, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::IExecutionContext* executionContext;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::RetryHandler* __4__this;

  /// @brief Field <requestContext>5__2, offset: 0x30, size: 0x8, def value: None
  ::Amazon::Runtime::IRequestContext* _requestContext_5__2;

  /// @brief Field <shouldRetry>5__3, offset: 0x38, size: 0x1, def value: None
  bool _shouldRetry_5__3;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief Field <capturedException>5__4, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* _capturedException_5__4;

  /// @brief Field <>u__2, offset: 0x58, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<T> __u__2;

  /// @brief Field <>u__3, offset: 0x68, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__3;

  /// @brief Field <>7__wrap4, offset: 0x78, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::TimingEvent* __7__wrap4;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal
// Type: Amazon.Runtime.Internal::RetryHandler
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::RetryHandler*
class CORDL_TYPE RetryHandler : public ::Amazon::Runtime::Internal::PipelineHandler {
public:
  // Declarations
  template <typename T> using _InvokeAsync_d__10_1 = ::Amazon::Runtime::Internal::__RetryHandler___InvokeAsync_d__10_1<T>;

  __declspec(property(get = get_Logger, put = set_Logger))::Amazon::Runtime::Internal::Util::ILogger* Logger;

  __declspec(property(get = get_RetryPolicy, put = set_RetryPolicy))::Amazon::Runtime::RetryPolicy* RetryPolicy;

  /// @brief Field <RetryPolicy>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__RetryPolicy_k__BackingField, put = __cordl_internal_set__RetryPolicy_k__BackingField))::Amazon::Runtime::RetryPolicy* _RetryPolicy_k__BackingField;

  /// @brief Field _logger, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__logger, put = __cordl_internal_set__logger))::Amazon::Runtime::Internal::Util::ILogger* _logger;

  /// @brief Method InvokeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* InvokeAsync(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method InvokeSync, addr 0x23edd60, size 0x608, virtual true, abstract: false, final false
  inline void InvokeSync(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method LogForError, addr 0x23ee944, size 0x3dc, virtual false, abstract: false, final false
  inline void LogForError(::Amazon::Runtime::IRequestContext* requestContext, ::System::Exception* exception);

  /// @brief Method LogForRetry, addr 0x23eed20, size 0x418, virtual false, abstract: false, final false
  inline void LogForRetry(::Amazon::Runtime::IRequestContext* requestContext, ::System::Exception* exception);

  static inline ::Amazon::Runtime::Internal::RetryHandler* New_ctor(::Amazon::Runtime::RetryPolicy* retryPolicy);

  /// @brief Method PrepareForRetry, addr 0x23e6e0c, size 0x3f8, virtual false, abstract: false, final false
  static inline void PrepareForRetry(::Amazon::Runtime::IRequestContext* requestContext);

  /// @brief Method SetRetryHeaders, addr 0x23ee368, size 0x5dc, virtual false, abstract: false, final false
  inline void SetRetryHeaders(::Amazon::Runtime::IRequestContext* requestContext);

  constexpr ::Amazon::Runtime::RetryPolicy*& __cordl_internal_get__RetryPolicy_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::RetryPolicy*> const& __cordl_internal_get__RetryPolicy_k__BackingField() const;

  constexpr ::Amazon::Runtime::Internal::Util::ILogger*& __cordl_internal_get__logger();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::ILogger*> const& __cordl_internal_get__logger() const;

  constexpr void __cordl_internal_set__RetryPolicy_k__BackingField(::Amazon::Runtime::RetryPolicy* value);

  constexpr void __cordl_internal_set__logger(::Amazon::Runtime::Internal::Util::ILogger* value);

  /// @brief Method <>n__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* __n__0(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method .ctor, addr 0x23edd38, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::RetryPolicy* retryPolicy);

  /// @brief Method get_Logger, addr 0x23edd00, size 0x8, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Util::ILogger* get_Logger();

  /// @brief Method get_RetryPolicy, addr 0x23edd28, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::RetryPolicy* get_RetryPolicy();

  /// @brief Method set_Logger, addr 0x23edd08, size 0x20, virtual true, abstract: false, final false
  inline void set_Logger(::Amazon::Runtime::Internal::Util::ILogger* value);

  /// @brief Method set_RetryPolicy, addr 0x23edd30, size 0x8, virtual false, abstract: false, final false
  inline void set_RetryPolicy(::Amazon::Runtime::RetryPolicy* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RetryHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RetryHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RetryHandler(RetryHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RetryHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RetryHandler(RetryHandler const&) = delete;

  /// @brief Field _logger, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::ILogger* ____logger;

  /// @brief Field <RetryPolicy>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::Amazon::Runtime::RetryPolicy* ____RetryPolicy_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::RetryHandler, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::RetryHandler, ____logger) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::RetryHandler, ____RetryPolicy_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::RetryHandler);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::RetryHandler*, "Amazon.Runtime.Internal", "RetryHandler");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Amazon::Runtime::Internal::__RetryHandler___InvokeAsync_d__10_1, "Amazon.Runtime.Internal", "RetryHandler/<InvokeAsync>d__10`1");
