#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Lambda/Model/zzzz__ListFunctionsByCodeSigningConfigResponse_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncIteratorMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__ManualResetValueTaskSourceCore_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListFunctionsByCodeSigningConfigPaginator)
namespace Amazon::Lambda::Model {
class IListFunctionsByCodeSigningConfigPaginator;
}
namespace Amazon::Lambda::Model {
class ListFunctionsByCodeSigningConfigRequest;
}
namespace Amazon::Lambda::Model {
class ListFunctionsByCodeSigningConfigResponse;
}
namespace Amazon::Lambda::Model {
class __ListFunctionsByCodeSigningConfigPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListFunctionsByCodeSigningConfigResponse_ - PaginateAsync_d__8;
}
namespace Amazon::Lambda::Model {
class __ListFunctionsByCodeSigningConfigPaginator____c;
}
namespace Amazon::Lambda {
class IAmazonLambda;
}
namespace Amazon::Runtime {
template <typename TResult> class IPaginatedEnumerable_1;
}
namespace Amazon::Runtime {
template <typename TResponse> class IPaginator_1;
}
namespace System::Collections::Generic {
template <typename T> class IAsyncEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IAsyncEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks::Sources {
template <typename TResult> class IValueTaskSource_1;
}
namespace System::Threading::Tasks::Sources {
class IValueTaskSource;
}
namespace System::Threading::Tasks::Sources {
struct ValueTaskSourceOnCompletedFlags;
}
namespace System::Threading::Tasks::Sources {
struct ValueTaskSourceStatus;
}
namespace System::Threading::Tasks {
template <typename TResult> struct ValueTask_1;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IAsyncDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class ListFunctionsByCodeSigningConfigPaginator;
}
namespace Amazon::Lambda::Model {
class __ListFunctionsByCodeSigningConfigPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListFunctionsByCodeSigningConfigResponse_ - PaginateAsync_d__8;
}
namespace Amazon::Lambda::Model {
class __ListFunctionsByCodeSigningConfigPaginator____c;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigPaginator);
MARK_REF_PTR_T(::Amazon::Lambda::Model::__ListFunctionsByCodeSigningConfigPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListFunctionsByCodeSigningConfigResponse_ -
               PaginateAsync_d__8);
MARK_REF_PTR_T(::Amazon::Lambda::Model::__ListFunctionsByCodeSigningConfigPaginator____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::ListFunctionsByCodeSigningConfigPaginator::<>c*
class CORDL_TYPE __ListFunctionsByCodeSigningConfigPaginator____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Amazon::Lambda::Model::__ListFunctionsByCodeSigningConfigPaginator____c* __9;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF___9__6_0,
               put = setStaticF___9__6_0))::System::Func_2<::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse*, ::System::Collections::Generic::IEnumerable_1<::StringW>*>* __9__6_0;

  static inline ::Amazon::Lambda::Model::__ListFunctionsByCodeSigningConfigPaginator____c* New_ctor();

  /// @brief Method .ctor, addr 0x3110a8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_FunctionArns>b__6_0, addr 0x3110a94, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* _get_FunctionArns_b__6_0(::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse* i);

  static inline ::Amazon::Lambda::Model::__ListFunctionsByCodeSigningConfigPaginator____c* getStaticF___9();

  static inline ::System::Func_2<::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse*, ::System::Collections::Generic::IEnumerable_1<::StringW>*>* getStaticF___9__6_0();

  static inline void setStaticF___9(::Amazon::Lambda::Model::__ListFunctionsByCodeSigningConfigPaginator____c* value);

  static inline void setStaticF___9__6_0(::System::Func_2<::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse*, ::System::Collections::Generic::IEnumerable_1<::StringW>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ListFunctionsByCodeSigningConfigPaginator____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ListFunctionsByCodeSigningConfigPaginator____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ListFunctionsByCodeSigningConfigPaginator____c(__ListFunctionsByCodeSigningConfigPaginator____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ListFunctionsByCodeSigningConfigPaginator____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ListFunctionsByCodeSigningConfigPaginator____c(__ListFunctionsByCodeSigningConfigPaginator____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::__ListFunctionsByCodeSigningConfigPaginator____c, 0x10>, "Size mismatch!");

} // namespace Amazon::Lambda::Model
// Type: ::<Amazon-Runtime-IPaginator<Amazon-Lambda-Model-ListFunctionsByCodeSigningConfigResponse>-PaginateAsync>d__8
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::ListFunctionsByCodeSigningConfigPaginator::<Amazon-Runtime-IPaginator<Amazon-Lambda-Model-ListFunctionsByCodeSigningConfigResponse>-PaginateAsync>d__8*
class CORDL_TYPE __ListFunctionsByCodeSigningConfigPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListFunctionsByCodeSigningConfigResponse_ -
    PaginateAsync_d__8 : public ::System::Object {
public:
  // Declarations
  __declspec(property(
      get = System_Collections_Generic_IAsyncEnumerator_Amazon_Lambda_Model_ListFunctionsByCodeSigningConfigResponse__get_Current))::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse*
      System_Collections_Generic_IAsyncEnumerator_Amazon_Lambda_Model_ListFunctionsByCodeSigningConfigResponse__Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse* __2__current;

  /// @brief Field <>3__cancellationToken, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get___3__cancellationToken, put = __cordl_internal_set___3__cancellationToken))::System::Threading::CancellationToken __3__cancellationToken;

  /// @brief Field <>4__this, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigPaginator* __4__this;

  /// @brief Field <>l__initialThreadId, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>t__builder, offset 0x18, size 0x20
  __declspec(property(get = __cordl_internal_get___t__builder, put = __cordl_internal_set___t__builder))::System::Runtime::CompilerServices::AsyncIteratorMethodBuilder __t__builder;

  /// @brief Field <>u__1, offset 0xa0, size 0x10
  __declspec(property(
      get = __cordl_internal_get___u__1,
      put = __cordl_internal_set___u__1))::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse*>
      __u__1;

  /// @brief Field <>v__promiseOfValueOrEnd, offset 0x38, size 0x38
  __declspec(
      property(get = __cordl_internal_get___v__promiseOfValueOrEnd, put = __cordl_internal_set___v__promiseOfValueOrEnd))::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<bool>
      __v__promiseOfValueOrEnd;

  /// @brief Field <>w__disposeMode, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get___w__disposeMode, put = __cordl_internal_set___w__disposeMode)) bool __w__disposeMode;

  /// @brief Field <marker>5__2, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__marker_5__2, put = __cordl_internal_set__marker_5__2))::StringW _marker_5__2;

  /// @brief Field cancellationToken, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_cancellationToken, put = __cordl_internal_set_cancellationToken))::System::Threading::CancellationToken cancellationToken;

  /// @brief Convert operator to "::System::Collections::Generic::IAsyncEnumerable_1<::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse*>"
  constexpr operator ::System::Collections::Generic::IAsyncEnumerable_1<::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IAsyncEnumerator_1<::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse*>"
  constexpr operator ::System::Collections::Generic::IAsyncEnumerator_1<::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse*>*() noexcept;

  /// @brief Convert operator to "::System::IAsyncDisposable"
  constexpr operator ::System::IAsyncDisposable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept;

  /// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
  constexpr operator ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept;

  /// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<bool>"
  constexpr operator ::System::Threading::Tasks::Sources::IValueTaskSource_1<bool>*() noexcept;

  /// @brief Method MoveNext, addr 0x3110aac, size 0x3dc, virtual true, abstract: false, final true
  inline void MoveNext();

  static inline ::Amazon::Lambda::Model::__ListFunctionsByCodeSigningConfigPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListFunctionsByCodeSigningConfigResponse_ -
      PaginateAsync_d__8* New_ctor(int32_t __1__state);

  /// @brief Method SetStateMachine, addr 0x3110e88, size 0x4, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine * stateMachine);

  /// @brief Method System.Collections.Generic.IAsyncEnumerable<Amazon.Lambda.Model.ListFunctionsByCodeSigningConfigResponse>.GetAsyncEnumerator, addr 0x3110e8c, size 0xc8, virtual true, abstract:
  /// false, final true
  inline ::System::Collections::Generic::IAsyncEnumerator_1<::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse*>*
  System_Collections_Generic_IAsyncEnumerable_Amazon_Lambda_Model_ListFunctionsByCodeSigningConfigResponse__GetAsyncEnumerator(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method System.Collections.Generic.IAsyncEnumerator<Amazon.Lambda.Model.ListFunctionsByCodeSigningConfigResponse>.MoveNextAsync, addr 0x3110f54, size 0x138, virtual true, abstract: false,
  /// final true
  inline ::System::Threading::Tasks::ValueTask_1<bool> System_Collections_Generic_IAsyncEnumerator_Amazon_Lambda_Model_ListFunctionsByCodeSigningConfigResponse__MoveNextAsync();

  /// @brief Method System.Collections.Generic.IAsyncEnumerator<Amazon.Lambda.Model.ListFunctionsByCodeSigningConfigResponse>.get_Current, addr 0x311108c, size 0x8, virtual true, abstract: false,
  /// final true
  inline ::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse* System_Collections_Generic_IAsyncEnumerator_Amazon_Lambda_Model_ListFunctionsByCodeSigningConfigResponse__get_Current();

  /// @brief Method System.IAsyncDisposable.DisposeAsync, addr 0x31112e4, size 0xfc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::ValueTask System_IAsyncDisposable_DisposeAsync();

  /// @brief Method System.Threading.Tasks.Sources.IValueTaskSource.GetResult, addr 0x31111bc, size 0x58, virtual true, abstract: false, final true
  inline void System_Threading_Tasks_Sources_IValueTaskSource_GetResult(int16_t token);

  /// @brief Method System.Threading.Tasks.Sources.IValueTaskSource.GetStatus, addr 0x3111214, size 0x58, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Sources::ValueTaskSourceStatus System_Threading_Tasks_Sources_IValueTaskSource_GetStatus(int16_t token);

  /// @brief Method System.Threading.Tasks.Sources.IValueTaskSource.OnCompleted, addr 0x311126c, size 0x78, virtual true, abstract: false, final true
  inline void System_Threading_Tasks_Sources_IValueTaskSource_OnCompleted(::System::Action_1<::System::Object*> * continuation, ::System::Object * state, int16_t token,
                                                                          ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags flags);

  /// @brief Method System.Threading.Tasks.Sources.IValueTaskSource<System.Boolean>.GetResult, addr 0x3111094, size 0x58, virtual true, abstract: false, final true
  inline bool System_Threading_Tasks_Sources_IValueTaskSource_System_Boolean__GetResult(int16_t token);

  /// @brief Method System.Threading.Tasks.Sources.IValueTaskSource<System.Boolean>.GetStatus, addr 0x31110ec, size 0x58, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Sources::ValueTaskSourceStatus System_Threading_Tasks_Sources_IValueTaskSource_System_Boolean__GetStatus(int16_t token);

  /// @brief Method System.Threading.Tasks.Sources.IValueTaskSource<System.Boolean>.OnCompleted, addr 0x3111144, size 0x78, virtual true, abstract: false, final true
  inline void System_Threading_Tasks_Sources_IValueTaskSource_System_Boolean__OnCompleted(::System::Action_1<::System::Object*> * continuation, ::System::Object * state, int16_t token,
                                                                                          ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags flags);

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse*> const& __cordl_internal_get___2__current() const;

  constexpr ::System::Threading::CancellationToken const& __cordl_internal_get___3__cancellationToken() const;

  constexpr ::System::Threading::CancellationToken& __cordl_internal_get___3__cancellationToken();

  constexpr ::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigPaginator*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigPaginator*> const& __cordl_internal_get___4__this() const;

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Runtime::CompilerServices::AsyncIteratorMethodBuilder const& __cordl_internal_get___t__builder() const;

  constexpr ::System::Runtime::CompilerServices::AsyncIteratorMethodBuilder& __cordl_internal_get___t__builder();

  constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse*> const&
  __cordl_internal_get___u__1() const;

  constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse*>& __cordl_internal_get___u__1();

  constexpr ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<bool> const& __cordl_internal_get___v__promiseOfValueOrEnd() const;

  constexpr ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<bool>& __cordl_internal_get___v__promiseOfValueOrEnd();

  constexpr bool const& __cordl_internal_get___w__disposeMode() const;

  constexpr bool& __cordl_internal_get___w__disposeMode();

  constexpr ::StringW const& __cordl_internal_get__marker_5__2() const;

  constexpr ::StringW& __cordl_internal_get__marker_5__2();

  constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

  constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse * value);

  constexpr void __cordl_internal_set___3__cancellationToken(::System::Threading::CancellationToken value);

  constexpr void __cordl_internal_set___4__this(::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigPaginator * value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncIteratorMethodBuilder value);

  constexpr void __cordl_internal_set___u__1(
      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse*> value);

  constexpr void __cordl_internal_set___v__promiseOfValueOrEnd(::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<bool> value);

  constexpr void __cordl_internal_set___w__disposeMode(bool value);

  constexpr void __cordl_internal_set__marker_5__2(::StringW value);

  constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken value);

  /// @brief Method .ctor, addr 0x31109d0, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IAsyncEnumerable_1<::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse*>"
  constexpr ::System::Collections::Generic::IAsyncEnumerable_1<::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse*>*
  i___System__Collections__Generic__IAsyncEnumerable_1___Amazon__Lambda__Model__ListFunctionsByCodeSigningConfigResponse__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IAsyncEnumerator_1<::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse*>"
  constexpr ::System::Collections::Generic::IAsyncEnumerator_1<::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse*>*
  i___System__Collections__Generic__IAsyncEnumerator_1___Amazon__Lambda__Model__ListFunctionsByCodeSigningConfigResponse__() noexcept;

  /// @brief Convert to "::System::IAsyncDisposable"
  constexpr ::System::IAsyncDisposable* i___System__IAsyncDisposable() noexcept;

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept;

  /// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
  constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept;

  /// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource_1<bool>"
  constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<bool>* i___System__Threading__Tasks__Sources__IValueTaskSource_1_bool_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ListFunctionsByCodeSigningConfigPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListFunctionsByCodeSigningConfigResponse_ - PaginateAsync_d__8();

public:
  // Ctor Parameters [CppParam { name: "", ty:
  // "__ListFunctionsByCodeSigningConfigPaginator___Amazon-Runtime-IPaginator_Amazon-Lambda-Model-ListFunctionsByCodeSigningConfigResponse_-PaginateAsync_d__8", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ListFunctionsByCodeSigningConfigPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListFunctionsByCodeSigningConfigResponse_ -
      PaginateAsync_d__8(__ListFunctionsByCodeSigningConfigPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListFunctionsByCodeSigningConfigResponse_ - PaginateAsync_d__8&&) =
      delete;

  // Ctor Parameters [CppParam { name: "", ty:
  // "__ListFunctionsByCodeSigningConfigPaginator___Amazon-Runtime-IPaginator_Amazon-Lambda-Model-ListFunctionsByCodeSigningConfigResponse_-PaginateAsync_d__8", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ListFunctionsByCodeSigningConfigPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListFunctionsByCodeSigningConfigResponse_ -
      PaginateAsync_d__8(__ListFunctionsByCodeSigningConfigPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListFunctionsByCodeSigningConfigResponse_ - PaginateAsync_d__8 const&) =
      delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>t__builder, offset: 0x18, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncIteratorMethodBuilder _____t__builder;

  /// @brief Field <>v__promiseOfValueOrEnd, offset: 0x38, size: 0x38, def value: None
  ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<bool> _____v__promiseOfValueOrEnd;

  /// @brief Field <>2__current, offset: 0x70, size: 0x8, def value: None
  ::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse* _____2__current;

  /// @brief Field <>w__disposeMode, offset: 0x78, size: 0x1, def value: None
  bool _____w__disposeMode;

  /// @brief Field <>l__initialThreadId, offset: 0x7c, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x80, size: 0x8, def value: None
  ::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigPaginator* _____4__this;

  /// @brief Field cancellationToken, offset: 0x88, size: 0x8, def value: None
  ::System::Threading::CancellationToken ___cancellationToken;

  /// @brief Field <>3__cancellationToken, offset: 0x90, size: 0x8, def value: None
  ::System::Threading::CancellationToken _____3__cancellationToken;

  /// @brief Field <marker>5__2, offset: 0x98, size: 0x8, def value: None
  ::StringW ____marker_5__2;

  /// @brief Field <>u__1, offset: 0xa0, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse*> _____u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::__ListFunctionsByCodeSigningConfigPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model -
                                                  ListFunctionsByCodeSigningConfigResponse_ - PaginateAsync_d__8,
                                              0xb0>,
              "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::__ListFunctionsByCodeSigningConfigPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListFunctionsByCodeSigningConfigResponse_ -
                           PaginateAsync_d__8,
                       _____1__state) == 0x10,
              "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::__ListFunctionsByCodeSigningConfigPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListFunctionsByCodeSigningConfigResponse_ -
                           PaginateAsync_d__8,
                       _____t__builder) == 0x18,
              "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::__ListFunctionsByCodeSigningConfigPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListFunctionsByCodeSigningConfigResponse_ -
                           PaginateAsync_d__8,
                       _____v__promiseOfValueOrEnd) == 0x38,
              "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::__ListFunctionsByCodeSigningConfigPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListFunctionsByCodeSigningConfigResponse_ -
                           PaginateAsync_d__8,
                       _____2__current) == 0x70,
              "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::__ListFunctionsByCodeSigningConfigPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListFunctionsByCodeSigningConfigResponse_ -
                           PaginateAsync_d__8,
                       _____w__disposeMode) == 0x78,
              "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::__ListFunctionsByCodeSigningConfigPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListFunctionsByCodeSigningConfigResponse_ -
                           PaginateAsync_d__8,
                       _____l__initialThreadId) == 0x7c,
              "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::__ListFunctionsByCodeSigningConfigPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListFunctionsByCodeSigningConfigResponse_ -
                           PaginateAsync_d__8,
                       _____4__this) == 0x80,
              "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::__ListFunctionsByCodeSigningConfigPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListFunctionsByCodeSigningConfigResponse_ -
                           PaginateAsync_d__8,
                       ___cancellationToken) == 0x88,
              "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::__ListFunctionsByCodeSigningConfigPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListFunctionsByCodeSigningConfigResponse_ -
                           PaginateAsync_d__8,
                       _____3__cancellationToken) == 0x90,
              "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::__ListFunctionsByCodeSigningConfigPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListFunctionsByCodeSigningConfigResponse_ -
                           PaginateAsync_d__8,
                       ____marker_5__2) == 0x98,
              "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::__ListFunctionsByCodeSigningConfigPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListFunctionsByCodeSigningConfigResponse_ -
                           PaginateAsync_d__8,
                       _____u__1) == 0xa0,
              "Offset mismatch!");

} // namespace Amazon::Lambda::Model
// Type: Amazon.Lambda.Model::ListFunctionsByCodeSigningConfigPaginator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::ListFunctionsByCodeSigningConfigPaginator*
class CORDL_TYPE ListFunctionsByCodeSigningConfigPaginator : public ::System::Object {
public:
  // Declarations
  using _Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListFunctionsByCodeSigningConfigResponse_ - PaginateAsync_d__8 =
      ::Amazon::Lambda::Model::__ListFunctionsByCodeSigningConfigPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListFunctionsByCodeSigningConfigResponse_ - PaginateAsync_d__8;

  using __c = ::Amazon::Lambda::Model::__ListFunctionsByCodeSigningConfigPaginator____c;

  __declspec(property(get = get_FunctionArns))::Amazon::Runtime::IPaginatedEnumerable_1<::StringW>* FunctionArns;

  __declspec(property(get = get_Responses))::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse*>* Responses;

  /// @brief Field _client, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__client, put = __cordl_internal_set__client))::Amazon::Lambda::IAmazonLambda* _client;

  /// @brief Field _isPaginatorInUse, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__isPaginatorInUse, put = __cordl_internal_set__isPaginatorInUse)) int32_t _isPaginatorInUse;

  /// @brief Field _request, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__request, put = __cordl_internal_set__request))::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigRequest* _request;

  /// @brief Convert operator to "::Amazon::Lambda::Model::IListFunctionsByCodeSigningConfigPaginator"
  constexpr operator ::Amazon::Lambda::Model::IListFunctionsByCodeSigningConfigPaginator*() noexcept;

  /// @brief Convert operator to "::Amazon::Runtime::IPaginator_1<::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse*>"
  constexpr operator ::Amazon::Runtime::IPaginator_1<::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse*>*() noexcept;

  /// @brief Method Amazon.Runtime.IPaginator<Amazon.Lambda.Model.ListFunctionsByCodeSigningConfigResponse>.PaginateAsync, addr 0x311095c, size 0x74, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IAsyncEnumerable_1<::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse*>*
  Amazon_Runtime_IPaginator_Amazon_Lambda_Model_ListFunctionsByCodeSigningConfigResponse__PaginateAsync(::System::Threading::CancellationToken cancellationToken);

  static inline ::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigPaginator* New_ctor(::Amazon::Lambda::IAmazonLambda* client,
                                                                                             ::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigRequest* request);

  constexpr ::Amazon::Lambda::IAmazonLambda*& __cordl_internal_get__client();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::IAmazonLambda*> const& __cordl_internal_get__client() const;

  constexpr int32_t const& __cordl_internal_get__isPaginatorInUse() const;

  constexpr int32_t& __cordl_internal_get__isPaginatorInUse();

  constexpr ::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigRequest*& __cordl_internal_get__request();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigRequest*> const& __cordl_internal_get__request() const;

  constexpr void __cordl_internal_set__client(::Amazon::Lambda::IAmazonLambda* value);

  constexpr void __cordl_internal_set__isPaginatorInUse(int32_t value);

  constexpr void __cordl_internal_set__request(::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigRequest* value);

  /// @brief Method .ctor, addr 0x310d494, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Lambda::IAmazonLambda* client, ::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigRequest* request);

  /// @brief Method get_FunctionArns, addr 0x3110838, size 0x124, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::IPaginatedEnumerable_1<::StringW>* get_FunctionArns();

  /// @brief Method get_Responses, addr 0x31107c0, size 0x78, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse*>* get_Responses();

  /// @brief Convert to "::Amazon::Lambda::Model::IListFunctionsByCodeSigningConfigPaginator"
  constexpr ::Amazon::Lambda::Model::IListFunctionsByCodeSigningConfigPaginator* i___Amazon__Lambda__Model__IListFunctionsByCodeSigningConfigPaginator() noexcept;

  /// @brief Convert to "::Amazon::Runtime::IPaginator_1<::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse*>"
  constexpr ::Amazon::Runtime::IPaginator_1<::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse*>*
  i___Amazon__Runtime__IPaginator_1___Amazon__Lambda__Model__ListFunctionsByCodeSigningConfigResponse__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListFunctionsByCodeSigningConfigPaginator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListFunctionsByCodeSigningConfigPaginator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListFunctionsByCodeSigningConfigPaginator(ListFunctionsByCodeSigningConfigPaginator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListFunctionsByCodeSigningConfigPaginator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListFunctionsByCodeSigningConfigPaginator(ListFunctionsByCodeSigningConfigPaginator const&) = delete;

  /// @brief Field _client, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Lambda::IAmazonLambda* ____client;

  /// @brief Field _request, offset: 0x18, size: 0x8, def value: None
  ::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigRequest* ____request;

  /// @brief Field _isPaginatorInUse, offset: 0x20, size: 0x4, def value: None
  int32_t ____isPaginatorInUse;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigPaginator, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigPaginator, ____client) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigPaginator, ____request) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigPaginator, ____isPaginatorInUse) == 0x20, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigPaginator);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigPaginator*, "Amazon.Lambda.Model", "ListFunctionsByCodeSigningConfigPaginator");
NEED_NO_BOX(::Amazon::Lambda::Model::__ListFunctionsByCodeSigningConfigPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListFunctionsByCodeSigningConfigResponse_ -
            PaginateAsync_d__8);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::__ListFunctionsByCodeSigningConfigPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListFunctionsByCodeSigningConfigResponse_ -
                           PaginateAsync_d__8*,
                       "Amazon.Lambda.Model", "ListFunctionsByCodeSigningConfigPaginator/<Amazon-Runtime-IPaginator<Amazon-Lambda-Model-ListFunctionsByCodeSigningConfigResponse>-PaginateAsync>d__8");
NEED_NO_BOX(::Amazon::Lambda::Model::__ListFunctionsByCodeSigningConfigPaginator____c);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::__ListFunctionsByCodeSigningConfigPaginator____c*, "Amazon.Lambda.Model", "ListFunctionsByCodeSigningConfigPaginator/<>c");
