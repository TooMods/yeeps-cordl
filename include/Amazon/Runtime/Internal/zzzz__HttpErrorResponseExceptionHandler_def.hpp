#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/zzzz__ExceptionHandler_1_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__HttpErrorResponseException_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpErrorResponseExceptionHandler)
namespace Amazon::Runtime::Internal::Transform {
class IHttpResponseBody;
}
namespace Amazon::Runtime::Internal::Transform {
class IWebResponseData;
}
namespace Amazon::Runtime::Internal::Util {
class ILogger;
}
namespace Amazon::Runtime::Internal {
class HttpErrorResponseException;
}
namespace Amazon::Runtime::Internal {
struct __HttpErrorResponseExceptionHandler___HandleExceptionAsync_d__2;
}
namespace Amazon::Runtime {
class IExecutionContext;
}
namespace Amazon::Runtime {
class IRequestContext;
}
namespace System::IO {
class Stream;
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
// Forward declare root types
namespace Amazon::Runtime::Internal {
class HttpErrorResponseExceptionHandler;
}
namespace Amazon::Runtime::Internal {
struct __HttpErrorResponseExceptionHandler___HandleExceptionAsync_d__2;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler);
MARK_VAL_T(::Amazon::Runtime::Internal::__HttpErrorResponseExceptionHandler___HandleExceptionAsync_d__2);
// Type: ::<HandleExceptionAsync>d__2
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: true
// CS Name: ::HttpErrorResponseExceptionHandler::<HandleExceptionAsync>d__2
struct CORDL_TYPE __HttpErrorResponseExceptionHandler___HandleExceptionAsync_d__2 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x23dfefc, size 0x5e4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x23e04e0, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HttpErrorResponseExceptionHandler___HandleExceptionAsync_d__2();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "executionContext", ty: "::Amazon::Runtime::IExecutionContext*",
  // modifiers: "", def_value: None }, CppParam { name: "exception", ty: "::Amazon::Runtime::Internal::HttpErrorResponseException*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler*", modifiers: "", def_value: None }, CppParam { name: "_requestContext_5__2", ty: "::Amazon::Runtime::IRequestContext*", modifiers:
  // "", def_value: None }, CppParam { name: "_httpErrorResponse_5__3", ty: "::Amazon::Runtime::Internal::Transform::IWebResponseData*", modifiers: "", def_value: None }, CppParam { name:
  // "__7__wrap3", ty: "::Amazon::Runtime::Internal::Transform::IHttpResponseBody*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::IO::Stream*>", modifiers: "", def_value: None }]
  constexpr __HttpErrorResponseExceptionHandler___HandleExceptionAsync_d__2(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::Amazon::Runtime::IExecutionContext* executionContext,
      ::Amazon::Runtime::Internal::HttpErrorResponseException* exception, ::Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler* __4__this,
      ::Amazon::Runtime::IRequestContext* _requestContext_5__2, ::Amazon::Runtime::Internal::Transform::IWebResponseData* _httpErrorResponse_5__3,
      ::Amazon::Runtime::Internal::Transform::IHttpResponseBody* __7__wrap3,
      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::IO::Stream*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field executionContext, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::IExecutionContext* executionContext;

  /// @brief Field exception, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::HttpErrorResponseException* exception;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler* __4__this;

  /// @brief Field <requestContext>5__2, offset: 0x38, size: 0x8, def value: None
  ::Amazon::Runtime::IRequestContext* _requestContext_5__2;

  /// @brief Field <httpErrorResponse>5__3, offset: 0x40, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Transform::IWebResponseData* _httpErrorResponse_5__3;

  /// @brief Field <>7__wrap3, offset: 0x48, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Transform::IHttpResponseBody* __7__wrap3;

  /// @brief Field <>u__1, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::IO::Stream*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::__HttpErrorResponseExceptionHandler___HandleExceptionAsync_d__2, 0x60>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__HttpErrorResponseExceptionHandler___HandleExceptionAsync_d__2, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__HttpErrorResponseExceptionHandler___HandleExceptionAsync_d__2, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__HttpErrorResponseExceptionHandler___HandleExceptionAsync_d__2, executionContext) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__HttpErrorResponseExceptionHandler___HandleExceptionAsync_d__2, exception) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__HttpErrorResponseExceptionHandler___HandleExceptionAsync_d__2, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__HttpErrorResponseExceptionHandler___HandleExceptionAsync_d__2, _requestContext_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__HttpErrorResponseExceptionHandler___HandleExceptionAsync_d__2, _httpErrorResponse_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__HttpErrorResponseExceptionHandler___HandleExceptionAsync_d__2, __7__wrap3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__HttpErrorResponseExceptionHandler___HandleExceptionAsync_d__2, __u__1) == 0x50, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
// Type: Amazon.Runtime.Internal::HttpErrorResponseExceptionHandler
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::HttpErrorResponseExceptionHandler*
class CORDL_TYPE HttpErrorResponseExceptionHandler : public ::Amazon::Runtime::Internal::ExceptionHandler_1<::Amazon::Runtime::Internal::HttpErrorResponseException*> {
public:
  // Declarations
  using _HandleExceptionAsync_d__2 = ::Amazon::Runtime::Internal::__HttpErrorResponseExceptionHandler___HandleExceptionAsync_d__2;

  /// @brief Method HandleException, addr 0x23de610, size 0x370, virtual true, abstract: false, final false
  inline bool HandleException(::Amazon::Runtime::IExecutionContext* executionContext, ::Amazon::Runtime::Internal::HttpErrorResponseException* exception);

  /// @brief Method HandleExceptionAsync, addr 0x23dfdc0, size 0x13c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* HandleExceptionAsync(::Amazon::Runtime::IExecutionContext* executionContext, ::Amazon::Runtime::Internal::HttpErrorResponseException* exception);

  /// @brief Method HandleExceptionStream, addr 0x23df470, size 0x950, virtual false, abstract: false, final false
  inline bool HandleExceptionStream(::Amazon::Runtime::IRequestContext* requestContext, ::Amazon::Runtime::Internal::Transform::IWebResponseData* httpErrorResponse,
                                    ::Amazon::Runtime::Internal::HttpErrorResponseException* exception, ::System::IO::Stream* responseStream);

  /// @brief Method HandleSuppressed404, addr 0x23de980, size 0xaf0, virtual false, abstract: false, final false
  inline bool HandleSuppressed404(::Amazon::Runtime::IExecutionContext* executionContext, ::Amazon::Runtime::Internal::Transform::IWebResponseData* httpErrorResponse);

  static inline ::Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler* New_ctor(::Amazon::Runtime::Internal::Util::ILogger* logger);

  /// @brief Method .ctor, addr 0x23dd260, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::Internal::Util::ILogger* logger);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpErrorResponseExceptionHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpErrorResponseExceptionHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpErrorResponseExceptionHandler(HttpErrorResponseExceptionHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpErrorResponseExceptionHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpErrorResponseExceptionHandler(HttpErrorResponseExceptionHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler, 0x18>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler*, "Amazon.Runtime.Internal", "HttpErrorResponseExceptionHandler");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::__HttpErrorResponseExceptionHandler___HandleExceptionAsync_d__2, "Amazon.Runtime.Internal",
                       "HttpErrorResponseExceptionHandler/<HandleExceptionAsync>d__2");
