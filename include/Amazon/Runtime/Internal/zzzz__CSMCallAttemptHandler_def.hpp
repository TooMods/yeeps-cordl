#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/zzzz__PipelineHandler_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CSMCallAttemptHandler)
namespace Amazon::Runtime::Internal {
class MonitoringAPICallAttempt;
}
namespace Amazon::Runtime::Internal {
template <typename T> struct __CSMCallAttemptHandler___InvokeAsync_d__1_1;
}
namespace Amazon::Runtime {
class AmazonServiceException;
}
namespace Amazon::Runtime {
class IExecutionContext;
}
namespace Amazon::Runtime {
class IRequestContext;
}
namespace Amazon::Runtime {
class IResponseContext;
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
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class CSMCallAttemptHandler;
}
namespace Amazon::Runtime::Internal {
template <typename T> struct __CSMCallAttemptHandler___InvokeAsync_d__1_1;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::CSMCallAttemptHandler);
MARK_GEN_VAL_T(::Amazon::Runtime::Internal::__CSMCallAttemptHandler___InvokeAsync_d__1_1);
// Type: ::<InvokeAsync>d__1`1
// SizeInfo { instance_size: 64, native_size: 80, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::CSMCallAttemptHandler::<InvokeAsync>d__1`1<T>
struct CORDL_TYPE __CSMCallAttemptHandler___InvokeAsync_d__1_1 {
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
  constexpr __CSMCallAttemptHandler___InvokeAsync_d__1_1();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Amazon::Runtime::Internal::CSMCallAttemptHandler*",
  // modifiers: "", def_value: None }, CppParam { name: "executionContext", ty: "::Amazon::Runtime::IExecutionContext*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<T>", modifiers: "", def_value: None }]
  constexpr __CSMCallAttemptHandler___InvokeAsync_d__1_1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder,
                                                         ::Amazon::Runtime::Internal::CSMCallAttemptHandler* __4__this, ::Amazon::Runtime::IExecutionContext* executionContext,
                                                         ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<T> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::CSMCallAttemptHandler* __4__this;

  /// @brief Field executionContext, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Runtime::IExecutionContext* executionContext;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<T> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal
// Type: Amazon.Runtime.Internal::CSMCallAttemptHandler
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::CSMCallAttemptHandler*
class CORDL_TYPE CSMCallAttemptHandler : public ::Amazon::Runtime::Internal::PipelineHandler {
public:
  // Declarations
  template <typename T> using _InvokeAsync_d__1_1 = ::Amazon::Runtime::Internal::__CSMCallAttemptHandler___InvokeAsync_d__1_1<T>;

  /// @brief Method CSMCallAttemptMetricsCapture, addr 0x23e0ff8, size 0x11d8, virtual false, abstract: false, final false
  static inline void CSMCallAttemptMetricsCapture(::Amazon::Runtime::IRequestContext* requestContext, ::Amazon::Runtime::IResponseContext* responseContext);

  /// @brief Method CaptureAmazonException, addr 0x23e0dd8, size 0x10c, virtual false, abstract: false, final false
  static inline void CaptureAmazonException(::Amazon::Runtime::Internal::MonitoringAPICallAttempt* monitoringAPICallAttempt, ::Amazon::Runtime::AmazonServiceException* e);

  /// @brief Method CaptureSDKExceptionMessage, addr 0x23e0ee4, size 0x114, virtual false, abstract: false, final false
  static inline void CaptureSDKExceptionMessage(::Amazon::Runtime::Internal::MonitoringAPICallAttempt* monitoringAPICallAttempt, ::System::Exception* e);

  /// @brief Method InvokeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* InvokeAsync(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method InvokeSync, addr 0x23e0a50, size 0x388, virtual true, abstract: false, final false
  inline void InvokeSync(::Amazon::Runtime::IExecutionContext* executionContext);

  static inline ::Amazon::Runtime::Internal::CSMCallAttemptHandler* New_ctor();

  /// @brief Method PreInvoke, addr 0x23e21d0, size 0x284, virtual true, abstract: false, final false
  inline void PreInvoke(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method <>n__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* __n__0(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method .ctor, addr 0x23e2454, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CSMCallAttemptHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CSMCallAttemptHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CSMCallAttemptHandler(CSMCallAttemptHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CSMCallAttemptHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CSMCallAttemptHandler(CSMCallAttemptHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::CSMCallAttemptHandler, 0x28>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::CSMCallAttemptHandler);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::CSMCallAttemptHandler*, "Amazon.Runtime.Internal", "CSMCallAttemptHandler");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Amazon::Runtime::Internal::__CSMCallAttemptHandler___InvokeAsync_d__1_1, "Amazon.Runtime.Internal", "CSMCallAttemptHandler/<InvokeAsync>d__1`1");
