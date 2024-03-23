#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/zzzz__PipelineHandler_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ErrorHandler)
namespace Amazon::Runtime::Internal::Util {
class ILogger;
}
namespace Amazon::Runtime::Internal {
template <typename T> struct __ErrorHandler___InvokeAsync_d__5_1;
}
namespace Amazon::Runtime::Internal {
struct __ErrorHandler___ProcessExceptionAsync_d__8;
}
namespace Amazon::Runtime {
class IExceptionHandler;
}
namespace Amazon::Runtime {
class IExecutionContext;
}
namespace Amazon::Runtime {
class IResponseContext;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
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
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class ErrorHandler;
}
namespace Amazon::Runtime::Internal {
template <typename T> struct __ErrorHandler___InvokeAsync_d__5_1;
}
namespace Amazon::Runtime::Internal {
struct __ErrorHandler___ProcessExceptionAsync_d__8;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::ErrorHandler);
MARK_GEN_VAL_T(::Amazon::Runtime::Internal::__ErrorHandler___InvokeAsync_d__5_1);
MARK_VAL_T(::Amazon::Runtime::Internal::__ErrorHandler___ProcessExceptionAsync_d__8);
// Type: ::<InvokeAsync>d__5`1
// SizeInfo { instance_size: 88, native_size: 104, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::ErrorHandler::<InvokeAsync>d__5`1<T>
struct CORDL_TYPE __ErrorHandler___InvokeAsync_d__5_1 {
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
  constexpr __ErrorHandler___InvokeAsync_d__5_1();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Amazon::Runtime::Internal::ErrorHandler*", modifiers:
  // "", def_value: None }, CppParam { name: "executionContext", ty: "::Amazon::Runtime::IExecutionContext*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap1", ty: "::System::Object*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<T>", modifiers: "", def_value: None },
  // CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }]
  constexpr __ErrorHandler___InvokeAsync_d__5_1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder, ::Amazon::Runtime::Internal::ErrorHandler* __4__this,
                                                ::Amazon::Runtime::IExecutionContext* executionContext, ::System::Object* __7__wrap1,
                                                ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<T> __u__1,
                                                ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::ErrorHandler* __4__this;

  /// @brief Field executionContext, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Runtime::IExecutionContext* executionContext;

  /// @brief Field <>7__wrap1, offset: 0x30, size: 0x8, def value: None
  ::System::Object* __7__wrap1;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<T> __u__1;

  /// @brief Field <>u__2, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal
// Type: ::<ProcessExceptionAsync>d__8
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: true
// CS Name: ::ErrorHandler::<ProcessExceptionAsync>d__8
struct CORDL_TYPE __ErrorHandler___ProcessExceptionAsync_d__8 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x23dde20, size 0x798, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x23de5b8, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ErrorHandler___ProcessExceptionAsync_d__8();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Amazon::Runtime::Internal::ErrorHandler*", modifiers:
  // "", def_value: None }, CppParam { name: "exception", ty: "::System::Exception*", modifiers: "", def_value: None }, CppParam { name: "executionContext", ty:
  // "::Amazon::Runtime::IExecutionContext*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }]
  constexpr __ErrorHandler___ProcessExceptionAsync_d__8(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                        ::Amazon::Runtime::Internal::ErrorHandler* __4__this, ::System::Exception* exception, ::Amazon::Runtime::IExecutionContext* executionContext,
                                                        ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::ErrorHandler* __4__this;

  /// @brief Field exception, offset: 0x28, size: 0x8, def value: None
  ::System::Exception* exception;

  /// @brief Field executionContext, offset: 0x30, size: 0x8, def value: None
  ::Amazon::Runtime::IExecutionContext* executionContext;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::__ErrorHandler___ProcessExceptionAsync_d__8, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__ErrorHandler___ProcessExceptionAsync_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__ErrorHandler___ProcessExceptionAsync_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__ErrorHandler___ProcessExceptionAsync_d__8, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__ErrorHandler___ProcessExceptionAsync_d__8, exception) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__ErrorHandler___ProcessExceptionAsync_d__8, executionContext) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__ErrorHandler___ProcessExceptionAsync_d__8, __u__1) == 0x38, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
// Type: Amazon.Runtime.Internal::ErrorHandler
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::ErrorHandler*
class CORDL_TYPE ErrorHandler : public ::Amazon::Runtime::Internal::PipelineHandler {
public:
  // Declarations
  template <typename T> using _InvokeAsync_d__5_1 = ::Amazon::Runtime::Internal::__ErrorHandler___InvokeAsync_d__5_1<T>;

  using _ProcessExceptionAsync_d__8 = ::Amazon::Runtime::Internal::__ErrorHandler___ProcessExceptionAsync_d__8;

  __declspec(property(get = get_ExceptionHandlers))::System::Collections::Generic::IDictionary_2<::System::Type*, ::Amazon::Runtime::IExceptionHandler*>* ExceptionHandlers;

  /// @brief Field _exceptionHandlers, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__exceptionHandlers,
                      put = __cordl_internal_set__exceptionHandlers))::System::Collections::Generic::IDictionary_2<::System::Type*, ::Amazon::Runtime::IExceptionHandler*>* _exceptionHandlers;

  /// @brief Method DisposeReponse, addr 0x23dd4c8, size 0x2c8, virtual false, abstract: false, final false
  static inline void DisposeReponse(::Amazon::Runtime::IResponseContext* responseContext);

  /// @brief Method InvokeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* InvokeAsync(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method InvokeSync, addr 0x23dd2b8, size 0x11c, virtual true, abstract: false, final false
  inline void InvokeSync(::Amazon::Runtime::IExecutionContext* executionContext);

  static inline ::Amazon::Runtime::Internal::ErrorHandler* New_ctor(::Amazon::Runtime::Internal::Util::ILogger* logger);

  /// @brief Method ProcessException, addr 0x23dd790, size 0x550, virtual false, abstract: false, final false
  inline bool ProcessException(::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception);

  /// @brief Method ProcessExceptionAsync, addr 0x23ddce0, size 0x140, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* ProcessExceptionAsync(::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception);

  constexpr ::System::Collections::Generic::IDictionary_2<::System::Type*, ::Amazon::Runtime::IExceptionHandler*>*& __cordl_internal_get__exceptionHandlers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::System::Type*, ::Amazon::Runtime::IExceptionHandler*>*> const&
  __cordl_internal_get__exceptionHandlers() const;

  constexpr void __cordl_internal_set__exceptionHandlers(::System::Collections::Generic::IDictionary_2<::System::Type*, ::Amazon::Runtime::IExceptionHandler*>* value);

  /// @brief Method <>n__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* __n__0(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method .ctor, addr 0x23dd0f4, size 0x164, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::Internal::Util::ILogger* logger);

  /// @brief Method get_ExceptionHandlers, addr 0x23dd0ec, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IDictionary_2<::System::Type*, ::Amazon::Runtime::IExceptionHandler*>* get_ExceptionHandlers();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ErrorHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ErrorHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ErrorHandler(ErrorHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ErrorHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ErrorHandler(ErrorHandler const&) = delete;

  /// @brief Field _exceptionHandlers, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::System::Type*, ::Amazon::Runtime::IExceptionHandler*>* ____exceptionHandlers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::ErrorHandler, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::ErrorHandler, ____exceptionHandlers) == 0x28, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::ErrorHandler);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::ErrorHandler*, "Amazon.Runtime.Internal", "ErrorHandler");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Amazon::Runtime::Internal::__ErrorHandler___InvokeAsync_d__5_1, "Amazon.Runtime.Internal", "ErrorHandler/<InvokeAsync>d__5`1");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::__ErrorHandler___ProcessExceptionAsync_d__8, "Amazon.Runtime.Internal", "ErrorHandler/<ProcessExceptionAsync>d__8");
