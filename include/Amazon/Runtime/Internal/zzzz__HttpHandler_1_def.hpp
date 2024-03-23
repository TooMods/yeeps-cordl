#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/Transform/zzzz__IWebResponseData_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__PipelineHandler_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpHandler_1)
namespace Amazon::Runtime::Internal::Transform {
class IWebResponseData;
}
namespace Amazon::Runtime::Internal::Util {
class TimingEvent;
}
namespace Amazon::Runtime::Internal {
class IRequest;
}
namespace Amazon::Runtime::Internal {
template <typename TRequestContent> struct __HttpHandler_1___CompleteFailedRequest_d__10;
}
namespace Amazon::Runtime::Internal {
template <typename TRequestContent, typename T> struct __HttpHandler_1___InvokeAsync_d__9_1;
}
namespace Amazon::Runtime {
class IExecutionContext;
}
namespace Amazon::Runtime {
template <typename TRequestContent> class IHttpRequestFactory_1;
}
namespace Amazon::Runtime {
template <typename TRequestContent> class IHttpRequest_1;
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
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
template <typename TRequestContent> class HttpHandler_1;
}
namespace Amazon::Runtime::Internal {
template <typename TRequestContent> struct __HttpHandler_1___CompleteFailedRequest_d__10;
}
namespace Amazon::Runtime::Internal {
template <typename TRequestContent, typename T> struct __HttpHandler_1___InvokeAsync_d__9_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::Runtime::Internal::HttpHandler_1);
MARK_GEN_VAL_T(::Amazon::Runtime::Internal::__HttpHandler_1___CompleteFailedRequest_d__10);
MARK_GEN_VAL_T(::Amazon::Runtime::Internal::__HttpHandler_1___InvokeAsync_d__9_1);
// Type: ::<InvokeAsync>d__9`1
// SizeInfo { instance_size: 120, native_size: 136, calculated_instance_size: 120, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// cpp template
template <typename TRequestContent, typename T>
// Is value type: true
// CS Name: ::HttpHandler`1::<InvokeAsync>d__9`1<TRequestContent,T>
struct CORDL_TYPE __HttpHandler_1___InvokeAsync_d__9_1 {
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
  constexpr __HttpHandler_1___InvokeAsync_d__9_1();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: None }, CppParam { name: "executionContext", ty: "::Amazon::Runtime::IExecutionContext*", modifiers:
  // "", def_value: None }, CppParam { name: "__4__this", ty: "::Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>*", modifiers: "", def_value: None }, CppParam { name: "_httpRequest_5__2",
  // ty: "::Amazon::Runtime::IHttpRequest_1<TRequestContent>*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty: "::Amazon::Runtime::Internal::Util::TimingEvent*", modifiers: "",
  // def_value: None }, CppParam { name: "_edi_5__4", ty: "::System::Runtime::ExceptionServices::ExceptionDispatchInfo*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TRequestContent>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Runtime::Internal::Transform::IWebResponseData*>", modifiers: "", def_value: None }]
  constexpr __HttpHandler_1___InvokeAsync_d__9_1(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder, ::Amazon::Runtime::IExecutionContext* executionContext,
      ::Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>* __4__this, ::Amazon::Runtime::IHttpRequest_1<TRequestContent>* _httpRequest_5__2,
      ::Amazon::Runtime::Internal::Util::TimingEvent* __7__wrap2, ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* _edi_5__4,
      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TRequestContent> __u__1,
      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2,
      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Runtime::Internal::Transform::IWebResponseData*> __u__3) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder;

  /// @brief Field executionContext, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::IExecutionContext* executionContext;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>* __4__this;

  /// @brief Field <httpRequest>5__2, offset: 0x30, size: 0x8, def value: None
  ::Amazon::Runtime::IHttpRequest_1<TRequestContent>* _httpRequest_5__2;

  /// @brief Field <>7__wrap2, offset: 0x38, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::TimingEvent* __7__wrap2;

  /// @brief Field <edi>5__4, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* _edi_5__4;

  /// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TRequestContent> __u__1;

  /// @brief Field <>u__2, offset: 0x58, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2;

  /// @brief Field <>u__3, offset: 0x68, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Runtime::Internal::Transform::IWebResponseData*> __u__3;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x78 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal
// Type: ::<CompleteFailedRequest>d__10
// SizeInfo { instance_size: 72, native_size: 88, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// cpp template
template <typename TRequestContent>
// Is value type: true
// CS Name: ::HttpHandler`1::<CompleteFailedRequest>d__10<TRequestContent>
struct CORDL_TYPE __HttpHandler_1___CompleteFailedRequest_d__10 {
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
  constexpr __HttpHandler_1___CompleteFailedRequest_d__10();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "httpRequest", ty: "::Amazon::Runtime::IHttpRequest_1<TRequestContent>*",
  // modifiers: "", def_value: None }, CppParam { name: "executionContext", ty: "::Amazon::Runtime::IExecutionContext*", modifiers: "", def_value: None }, CppParam { name: "_iwrd_5__2", ty:
  // "::Amazon::Runtime::Internal::Transform::IWebResponseData*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Runtime::Internal::Transform::IWebResponseData*>", modifiers: "", def_value: None }]
  constexpr __HttpHandler_1___CompleteFailedRequest_d__10(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Amazon::Runtime::IHttpRequest_1<TRequestContent>* httpRequest,
      ::Amazon::Runtime::IExecutionContext* executionContext, ::Amazon::Runtime::Internal::Transform::IWebResponseData* _iwrd_5__2,
      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Runtime::Internal::Transform::IWebResponseData*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field httpRequest, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::IHttpRequest_1<TRequestContent>* httpRequest;

  /// @brief Field executionContext, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Runtime::IExecutionContext* executionContext;

  /// @brief Field <iwrd>5__2, offset: 0x30, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Transform::IWebResponseData* _iwrd_5__2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Runtime::Internal::Transform::IWebResponseData*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal
// Type: Amazon.Runtime.Internal::HttpHandler`1
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// cpp template
template <typename TRequestContent>
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::HttpHandler`1<TRequestContent>*
class CORDL_TYPE HttpHandler_1 : public ::Amazon::Runtime::Internal::PipelineHandler {
public:
  // Declarations
  using _CompleteFailedRequest_d__10 = ::Amazon::Runtime::Internal::__HttpHandler_1___CompleteFailedRequest_d__10<TRequestContent>;

  template <typename T> using _InvokeAsync_d__9_1 = ::Amazon::Runtime::Internal::__HttpHandler_1___InvokeAsync_d__9_1<TRequestContent, T>;

  __declspec(property(get = get_CallbackSender, put = set_CallbackSender))::System::Object* CallbackSender;

  /// @brief Field <CallbackSender>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__CallbackSender_k__BackingField, put = __cordl_internal_set__CallbackSender_k__BackingField))::System::Object* _CallbackSender_k__BackingField;

  /// @brief Field _disposed, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed, put = __cordl_internal_set__disposed)) bool _disposed;

  /// @brief Field _requestFactory, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__requestFactory, put = __cordl_internal_set__requestFactory))::Amazon::Runtime::IHttpRequestFactory_1<TRequestContent>* _requestFactory;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CompleteFailedRequest, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* CompleteFailedRequest(::Amazon::Runtime::IExecutionContext* executionContext, ::Amazon::Runtime::IHttpRequest_1<TRequestContent>* httpRequest);

  /// @brief Method CompleteFailedRequest, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void CompleteFailedRequest(::Amazon::Runtime::IHttpRequest_1<TRequestContent>* httpRequest);

  /// @brief Method CreateWebRequest, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::IHttpRequest_1<TRequestContent>* CreateWebRequest(::Amazon::Runtime::IRequestContext* requestContext);

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GetInputStream, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::IO::Stream* GetInputStream(::Amazon::Runtime::IRequestContext* requestContext, ::System::IO::Stream* originalStream, ::Amazon::Runtime::Internal::IRequest* wrappedRequest);

  /// @brief Method InvokeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* InvokeAsync(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method InvokeSync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void InvokeSync(::Amazon::Runtime::IExecutionContext* executionContext);

  static inline ::Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>* New_ctor(::Amazon::Runtime::IHttpRequestFactory_1<TRequestContent>* requestFactory, ::System::Object* callbackSender);

  /// @brief Method SetMetrics, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void SetMetrics(::Amazon::Runtime::IRequestContext* requestContext);

  /// @brief Method WriteContentToRequestBody, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void WriteContentToRequestBody(TRequestContent requestContent, ::Amazon::Runtime::IHttpRequest_1<TRequestContent>* httpRequest, ::Amazon::Runtime::IRequestContext* requestContext);

  constexpr ::System::Object*& __cordl_internal_get__CallbackSender_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__CallbackSender_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__disposed() const;

  constexpr bool& __cordl_internal_get__disposed();

  constexpr ::Amazon::Runtime::IHttpRequestFactory_1<TRequestContent>*& __cordl_internal_get__requestFactory();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::IHttpRequestFactory_1<TRequestContent>*> const& __cordl_internal_get__requestFactory() const;

  constexpr void __cordl_internal_set__CallbackSender_k__BackingField(::System::Object* value);

  constexpr void __cordl_internal_set__disposed(bool value);

  constexpr void __cordl_internal_set__requestFactory(::Amazon::Runtime::IHttpRequestFactory_1<TRequestContent>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::IHttpRequestFactory_1<TRequestContent>* requestFactory, ::System::Object* callbackSender);

  /// @brief Method get_CallbackSender, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Object* get_CallbackSender();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_CallbackSender, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_CallbackSender(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpHandler_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpHandler_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpHandler_1(HttpHandler_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpHandler_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpHandler_1(HttpHandler_1 const&) = delete;

  /// @brief Field _disposed, offset: 0x28, size: 0x1, def value: None
  bool ____disposed;

  /// @brief Field _requestFactory, offset: 0x30, size: 0x8, def value: None
  ::Amazon::Runtime::IHttpRequestFactory_1<TRequestContent>* ____requestFactory;

  /// @brief Field <CallbackSender>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::System::Object* ____CallbackSender_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Runtime::Internal::HttpHandler_1, "Amazon.Runtime.Internal", "HttpHandler`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Amazon::Runtime::Internal::__HttpHandler_1___CompleteFailedRequest_d__10, "Amazon.Runtime.Internal", "HttpHandler`1/<CompleteFailedRequest>d__10");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Amazon::Runtime::Internal::__HttpHandler_1___InvokeAsync_d__9_1, "Amazon.Runtime.Internal", "HttpHandler`1/<InvokeAsync>d__9`1");
