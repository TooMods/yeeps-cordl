#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/zzzz__PipelineHandler_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Unmarshaller)
namespace Amazon::Runtime::Internal::Transform {
class ResponseUnmarshaller;
}
namespace Amazon::Runtime::Internal::Transform {
class UnmarshallerContext;
}
namespace Amazon::Runtime::Internal::Util {
class TimingEvent;
}
namespace Amazon::Runtime::Internal {
template <typename T> struct __Unmarshaller___InvokeAsync_d__3_1;
}
namespace Amazon::Runtime::Internal {
struct __Unmarshaller___UnmarshallAsync_d__5;
}
namespace Amazon::Runtime {
class AmazonWebServiceResponse;
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
namespace System::IO {
class Stream;
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
template <typename TResult> struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
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
// Forward declare root types
namespace Amazon::Runtime::Internal {
class Unmarshaller;
}
namespace Amazon::Runtime::Internal {
template <typename T> struct __Unmarshaller___InvokeAsync_d__3_1;
}
namespace Amazon::Runtime::Internal {
struct __Unmarshaller___UnmarshallAsync_d__5;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Unmarshaller);
MARK_GEN_VAL_T(::Amazon::Runtime::Internal::__Unmarshaller___InvokeAsync_d__3_1);
MARK_VAL_T(::Amazon::Runtime::Internal::__Unmarshaller___UnmarshallAsync_d__5);
// Type: ::<InvokeAsync>d__3`1
// SizeInfo { instance_size: 80, native_size: 96, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::Unmarshaller::<InvokeAsync>d__3`1<T>
struct CORDL_TYPE __Unmarshaller___InvokeAsync_d__3_1 {
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
  constexpr __Unmarshaller___InvokeAsync_d__3_1();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Amazon::Runtime::Internal::Unmarshaller*", modifiers:
  // "", def_value: None }, CppParam { name: "executionContext", ty: "::Amazon::Runtime::IExecutionContext*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<T>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __Unmarshaller___InvokeAsync_d__3_1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder, ::Amazon::Runtime::Internal::Unmarshaller* __4__this,
                                                ::Amazon::Runtime::IExecutionContext* executionContext,
                                                ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<T> __u__1,
                                                ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Unmarshaller* __4__this;

  /// @brief Field executionContext, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Runtime::IExecutionContext* executionContext;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<T> __u__1;

  /// @brief Field <>u__2, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal
// Type: ::<UnmarshallAsync>d__5
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: true
// CS Name: ::Unmarshaller::<UnmarshallAsync>d__5
struct CORDL_TYPE __Unmarshaller___UnmarshallAsync_d__5 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x23e9250, size 0xb8c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x23e9ddc, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Unmarshaller___UnmarshallAsync_d__5();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "executionContext", ty: "::Amazon::Runtime::IExecutionContext*", modifiers: "",
  // def_value: None }, CppParam { name: "__4__this", ty: "::Amazon::Runtime::Internal::Unmarshaller*", modifiers: "", def_value: None }, CppParam { name: "_requestContext_5__2", ty:
  // "::Amazon::Runtime::IRequestContext*", modifiers: "", def_value: None }, CppParam { name: "_responseContext_5__3", ty: "::Amazon::Runtime::IResponseContext*", modifiers: "", def_value: None },
  // CppParam { name: "__7__wrap3", ty: "::Amazon::Runtime::Internal::Util::TimingEvent*", modifiers: "", def_value: None }, CppParam { name: "_unmarshaller_5__5", ty:
  // "::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller*", modifiers: "", def_value: None }, CppParam { name: "_readEntireResponse_5__6", ty: "bool", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::IO::Stream*>", modifiers: "", def_value: None }]
  constexpr __Unmarshaller___UnmarshallAsync_d__5(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Amazon::Runtime::IExecutionContext* executionContext,
                                                  ::Amazon::Runtime::Internal::Unmarshaller* __4__this, ::Amazon::Runtime::IRequestContext* _requestContext_5__2,
                                                  ::Amazon::Runtime::IResponseContext* _responseContext_5__3, ::Amazon::Runtime::Internal::Util::TimingEvent* __7__wrap3,
                                                  ::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller* _unmarshaller_5__5, bool _readEntireResponse_5__6,
                                                  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::IO::Stream*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field executionContext, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::IExecutionContext* executionContext;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Unmarshaller* __4__this;

  /// @brief Field <requestContext>5__2, offset: 0x30, size: 0x8, def value: None
  ::Amazon::Runtime::IRequestContext* _requestContext_5__2;

  /// @brief Field <responseContext>5__3, offset: 0x38, size: 0x8, def value: None
  ::Amazon::Runtime::IResponseContext* _responseContext_5__3;

  /// @brief Field <>7__wrap3, offset: 0x40, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::TimingEvent* __7__wrap3;

  /// @brief Field <unmarshaller>5__5, offset: 0x48, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller* _unmarshaller_5__5;

  /// @brief Field <readEntireResponse>5__6, offset: 0x50, size: 0x1, def value: None
  bool _readEntireResponse_5__6;

  /// @brief Field <>u__1, offset: 0x58, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::IO::Stream*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::__Unmarshaller___UnmarshallAsync_d__5, 0x68>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__Unmarshaller___UnmarshallAsync_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__Unmarshaller___UnmarshallAsync_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__Unmarshaller___UnmarshallAsync_d__5, executionContext) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__Unmarshaller___UnmarshallAsync_d__5, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__Unmarshaller___UnmarshallAsync_d__5, _requestContext_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__Unmarshaller___UnmarshallAsync_d__5, _responseContext_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__Unmarshaller___UnmarshallAsync_d__5, __7__wrap3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__Unmarshaller___UnmarshallAsync_d__5, _unmarshaller_5__5) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__Unmarshaller___UnmarshallAsync_d__5, _readEntireResponse_5__6) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__Unmarshaller___UnmarshallAsync_d__5, __u__1) == 0x58, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
// Type: Amazon.Runtime.Internal::Unmarshaller
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::Unmarshaller*
class CORDL_TYPE Unmarshaller : public ::Amazon::Runtime::Internal::PipelineHandler {
public:
  // Declarations
  template <typename T> using _InvokeAsync_d__3_1 = ::Amazon::Runtime::Internal::__Unmarshaller___InvokeAsync_d__3_1<T>;

  using _UnmarshallAsync_d__5 = ::Amazon::Runtime::Internal::__Unmarshaller___UnmarshallAsync_d__5;

  /// @brief Field _supportsResponseLogging, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__supportsResponseLogging, put = __cordl_internal_set__supportsResponseLogging)) bool _supportsResponseLogging;

  /// @brief Method InvokeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* InvokeAsync(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method InvokeSync, addr 0x23e7e5c, size 0x1b8, virtual true, abstract: false, final false
  inline void InvokeSync(::Amazon::Runtime::IExecutionContext* executionContext);

  static inline ::Amazon::Runtime::Internal::Unmarshaller* New_ctor(bool supportsResponseLogging);

  /// @brief Method ShouldLogResponseBody, addr 0x23e90dc, size 0x174, virtual false, abstract: false, final false
  static inline bool ShouldLogResponseBody(bool supportsResponseLogging, ::Amazon::Runtime::IRequestContext* requestContext);

  /// @brief Method Unmarshall, addr 0x23e8014, size 0xa2c, virtual false, abstract: false, final false
  inline void Unmarshall(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method UnmarshallAsync, addr 0x23e8fc8, size 0x114, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* UnmarshallAsync(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method UnmarshallResponse, addr 0x23e8a40, size 0x588, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::AmazonWebServiceResponse* UnmarshallResponse(::Amazon::Runtime::Internal::Transform::UnmarshallerContext* context, ::Amazon::Runtime::IRequestContext* requestContext);

  constexpr bool const& __cordl_internal_get__supportsResponseLogging() const;

  constexpr bool& __cordl_internal_get__supportsResponseLogging();

  constexpr void __cordl_internal_set__supportsResponseLogging(bool value);

  /// @brief Method <>n__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* __n__0(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method .ctor, addr 0x23e7e34, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool supportsResponseLogging);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Unmarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Unmarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Unmarshaller(Unmarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Unmarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Unmarshaller(Unmarshaller const&) = delete;

  /// @brief Field _supportsResponseLogging, offset: 0x28, size: 0x1, def value: None
  bool ____supportsResponseLogging;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Unmarshaller, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Unmarshaller, ____supportsResponseLogging) == 0x28, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::Unmarshaller);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Unmarshaller*, "Amazon.Runtime.Internal", "Unmarshaller");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Amazon::Runtime::Internal::__Unmarshaller___InvokeAsync_d__3_1, "Amazon.Runtime.Internal", "Unmarshaller/<InvokeAsync>d__3`1");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::__Unmarshaller___UnmarshallAsync_d__5, "Amazon.Runtime.Internal", "Unmarshaller/<UnmarshallAsync>d__5");
