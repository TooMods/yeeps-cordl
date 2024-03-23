#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExceptionHandler_1)
namespace Amazon::Runtime::Internal::Util {
class ILogger;
}
namespace Amazon::Runtime::Internal {
template <typename T> struct __ExceptionHandler_1___HandleAsync_d__6;
}
namespace Amazon::Runtime {
template <typename T> class IExceptionHandler_1;
}
namespace Amazon::Runtime {
class IExceptionHandler;
}
namespace Amazon::Runtime {
class IExecutionContext;
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
template <typename T> class ExceptionHandler_1;
}
namespace Amazon::Runtime::Internal {
template <typename T> struct __ExceptionHandler_1___HandleAsync_d__6;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::Runtime::Internal::ExceptionHandler_1);
MARK_GEN_VAL_T(::Amazon::Runtime::Internal::__ExceptionHandler_1___HandleAsync_d__6);
// Type: ::<HandleAsync>d__6
// SizeInfo { instance_size: 72, native_size: 88, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::ExceptionHandler`1::<HandleAsync>d__6<T>
struct CORDL_TYPE __ExceptionHandler_1___HandleAsync_d__6 {
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
  constexpr __ExceptionHandler_1___HandleAsync_d__6();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Amazon::Runtime::Internal::ExceptionHandler_1<T>*",
  // modifiers: "", def_value: None }, CppParam { name: "executionContext", ty: "::Amazon::Runtime::IExecutionContext*", modifiers: "", def_value: None }, CppParam { name: "exception", ty:
  // "::System::Exception*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>",
  // modifiers: "", def_value: None }]
  constexpr __ExceptionHandler_1___HandleAsync_d__6(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                    ::Amazon::Runtime::Internal::ExceptionHandler_1<T>* __4__this, ::Amazon::Runtime::IExecutionContext* executionContext,
                                                    ::System::Exception* exception, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::ExceptionHandler_1<T>* __4__this;

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
} // namespace Amazon::Runtime::Internal
// Type: Amazon.Runtime.Internal::ExceptionHandler`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::ExceptionHandler`1<T>*
class CORDL_TYPE ExceptionHandler_1 : public ::System::Object {
public:
  // Declarations
  using _HandleAsync_d__6 = ::Amazon::Runtime::Internal::__ExceptionHandler_1___HandleAsync_d__6<T>;

  __declspec(property(get = get_Logger))::Amazon::Runtime::Internal::Util::ILogger* Logger;

  /// @brief Field _logger, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__logger, put = __cordl_internal_set__logger))::Amazon::Runtime::Internal::Util::ILogger* _logger;

  /// @brief Convert operator to "::Amazon::Runtime::IExceptionHandler"
  constexpr operator ::Amazon::Runtime::IExceptionHandler*() noexcept;

  /// @brief Convert operator to "::Amazon::Runtime::IExceptionHandler_1<T>"
  constexpr operator ::Amazon::Runtime::IExceptionHandler_1<T>*() noexcept;

  /// @brief Method Handle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Handle(::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception);

  /// @brief Method HandleAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<bool>* HandleAsync(::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception);

  /// @brief Method HandleException, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool HandleException(::Amazon::Runtime::IExecutionContext* executionContext, T exception);

  /// @brief Method HandleExceptionAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<bool>* HandleExceptionAsync(::Amazon::Runtime::IExecutionContext* executionContext, T exception);

  static inline ::Amazon::Runtime::Internal::ExceptionHandler_1<T>* New_ctor(::Amazon::Runtime::Internal::Util::ILogger* logger);

  constexpr ::Amazon::Runtime::Internal::Util::ILogger*& __cordl_internal_get__logger();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::ILogger*> const& __cordl_internal_get__logger() const;

  constexpr void __cordl_internal_set__logger(::Amazon::Runtime::Internal::Util::ILogger* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::Internal::Util::ILogger* logger);

  /// @brief Method get_Logger, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Util::ILogger* get_Logger();

  /// @brief Convert to "::Amazon::Runtime::IExceptionHandler"
  constexpr ::Amazon::Runtime::IExceptionHandler* i___Amazon__Runtime__IExceptionHandler() noexcept;

  /// @brief Convert to "::Amazon::Runtime::IExceptionHandler_1<T>"
  constexpr ::Amazon::Runtime::IExceptionHandler_1<T>* i___Amazon__Runtime__IExceptionHandler_1_T_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExceptionHandler_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExceptionHandler_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExceptionHandler_1(ExceptionHandler_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExceptionHandler_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExceptionHandler_1(ExceptionHandler_1 const&) = delete;

  /// @brief Field _logger, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::ILogger* ____logger;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Runtime::Internal::ExceptionHandler_1, "Amazon.Runtime.Internal", "ExceptionHandler`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Amazon::Runtime::Internal::__ExceptionHandler_1___HandleAsync_d__6, "Amazon.Runtime.Internal", "ExceptionHandler`1/<HandleAsync>d__6");
