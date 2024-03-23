#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/zzzz__PipelineHandler_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CSMCallEventHandler)
namespace Amazon::Runtime::Internal {
template <typename T> struct __CSMCallEventHandler___InvokeAsync_d__2_1;
}
namespace Amazon::Runtime {
class IExecutionContext;
}
namespace Amazon::Runtime {
class IRequestContext;
}
namespace System::Diagnostics {
class Stopwatch;
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
class CSMCallEventHandler;
}
namespace Amazon::Runtime::Internal {
template <typename T> struct __CSMCallEventHandler___InvokeAsync_d__2_1;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::CSMCallEventHandler);
MARK_GEN_VAL_T(::Amazon::Runtime::Internal::__CSMCallEventHandler___InvokeAsync_d__2_1);
// Type: ::<InvokeAsync>d__2`1
// SizeInfo { instance_size: 64, native_size: 80, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::CSMCallEventHandler::<InvokeAsync>d__2`1<T>
struct CORDL_TYPE __CSMCallEventHandler___InvokeAsync_d__2_1 {
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
  constexpr __CSMCallEventHandler___InvokeAsync_d__2_1();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Amazon::Runtime::Internal::CSMCallEventHandler*",
  // modifiers: "", def_value: None }, CppParam { name: "executionContext", ty: "::Amazon::Runtime::IExecutionContext*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<T>", modifiers: "", def_value: None }]
  constexpr __CSMCallEventHandler___InvokeAsync_d__2_1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder,
                                                       ::Amazon::Runtime::Internal::CSMCallEventHandler* __4__this, ::Amazon::Runtime::IExecutionContext* executionContext,
                                                       ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<T> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::CSMCallEventHandler* __4__this;

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
// Type: Amazon.Runtime.Internal::CSMCallEventHandler
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::CSMCallEventHandler*
class CORDL_TYPE CSMCallEventHandler : public ::Amazon::Runtime::Internal::PipelineHandler {
public:
  // Declarations
  template <typename T> using _InvokeAsync_d__2_1 = ::Amazon::Runtime::Internal::__CSMCallEventHandler___InvokeAsync_d__2_1<T>;

  /// @brief Field stopWatch, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_stopWatch, put = __cordl_internal_set_stopWatch))::System::Diagnostics::Stopwatch* stopWatch;

  /// @brief Method CSMCallEventMetricsCapture, addr 0x23e2a64, size 0xd00, virtual false, abstract: false, final false
  inline void CSMCallEventMetricsCapture(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method CaptureCSMCallEventExceptionData, addr 0x23e267c, size 0x3e8, virtual false, abstract: false, final false
  static inline void CaptureCSMCallEventExceptionData(::Amazon::Runtime::IRequestContext* requestContext, ::System::Exception* exception);

  /// @brief Method InvokeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* InvokeAsync(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method InvokeSync, addr 0x23e245c, size 0x1c4, virtual true, abstract: false, final false
  inline void InvokeSync(::Amazon::Runtime::IExecutionContext* executionContext);

  static inline ::Amazon::Runtime::Internal::CSMCallEventHandler* New_ctor();

  /// @brief Method PreInvoke, addr 0x23e2620, size 0x5c, virtual false, abstract: false, final false
  inline void PreInvoke(::Amazon::Runtime::IExecutionContext* executionContext);

  constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get_stopWatch();

  constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::Stopwatch*> const& __cordl_internal_get_stopWatch() const;

  constexpr void __cordl_internal_set_stopWatch(::System::Diagnostics::Stopwatch* value);

  /// @brief Method <>n__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* __n__0(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method .ctor, addr 0x23e3764, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CSMCallEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CSMCallEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CSMCallEventHandler(CSMCallEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CSMCallEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CSMCallEventHandler(CSMCallEventHandler const&) = delete;

  /// @brief Field stopWatch, offset: 0x28, size: 0x8, def value: None
  ::System::Diagnostics::Stopwatch* ___stopWatch;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::CSMCallEventHandler, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::CSMCallEventHandler, ___stopWatch) == 0x28, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::CSMCallEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::CSMCallEventHandler*, "Amazon.Runtime.Internal", "CSMCallEventHandler");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Amazon::Runtime::Internal::__CSMCallEventHandler___InvokeAsync_d__2_1, "Amazon.Runtime.Internal", "CSMCallEventHandler/<InvokeAsync>d__2`1");
