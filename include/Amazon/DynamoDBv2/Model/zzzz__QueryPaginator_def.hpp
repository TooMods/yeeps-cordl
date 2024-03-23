#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/Model/zzzz__QueryResponse_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncIteratorMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__ManualResetValueTaskSourceCore_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(QueryPaginator)
namespace Amazon::DynamoDBv2::Model {
class AttributeValue;
}
namespace Amazon::DynamoDBv2::Model {
class IQueryPaginator;
}
namespace Amazon::DynamoDBv2::Model {
class QueryRequest;
}
namespace Amazon::DynamoDBv2::Model {
class QueryResponse;
}
namespace Amazon::DynamoDBv2::Model {
class __QueryPaginator___Amazon - Runtime - IPaginator_Amazon - DynamoDBv2 - Model - QueryResponse_ - PaginateAsync_d__6;
}
namespace Amazon::DynamoDBv2 {
class IAmazonDynamoDB;
}
namespace Amazon::Runtime {
template <typename TResult> class IPaginatedEnumerable_1;
}
namespace Amazon::Runtime {
template <typename TResponse> class IPaginator_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IAsyncEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IAsyncEnumerator_1;
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
class IAsyncDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class QueryPaginator;
}
namespace Amazon::DynamoDBv2::Model {
class __QueryPaginator___Amazon - Runtime - IPaginator_Amazon - DynamoDBv2 - Model - QueryResponse_ - PaginateAsync_d__6;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::QueryPaginator);
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::__QueryPaginator___Amazon - Runtime - IPaginator_Amazon - DynamoDBv2 - Model - QueryResponse_ - PaginateAsync_d__6);
// Type: ::<Amazon-Runtime-IPaginator<Amazon-DynamoDBv2-Model-QueryResponse>-PaginateAsync>d__6
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::QueryPaginator::<Amazon-Runtime-IPaginator<Amazon-DynamoDBv2-Model-QueryResponse>-PaginateAsync>d__6*
class CORDL_TYPE __QueryPaginator___Amazon - Runtime - IPaginator_Amazon - DynamoDBv2 - Model - QueryResponse_ - PaginateAsync_d__6 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IAsyncEnumerator_Amazon_DynamoDBv2_Model_QueryResponse__get_Current))::Amazon::DynamoDBv2::Model::QueryResponse*
      System_Collections_Generic_IAsyncEnumerator_Amazon_DynamoDBv2_Model_QueryResponse__Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::Amazon::DynamoDBv2::Model::QueryResponse* __2__current;

  /// @brief Field <>3__cancellationToken, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get___3__cancellationToken, put = __cordl_internal_set___3__cancellationToken))::System::Threading::CancellationToken __3__cancellationToken;

  /// @brief Field <>4__this, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Amazon::DynamoDBv2::Model::QueryPaginator* __4__this;

  /// @brief Field <>l__initialThreadId, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>t__builder, offset 0x18, size 0x20
  __declspec(property(get = __cordl_internal_get___t__builder, put = __cordl_internal_set___t__builder))::System::Runtime::CompilerServices::AsyncIteratorMethodBuilder __t__builder;

  /// @brief Field <>u__1, offset 0xa0, size 0x10
  __declspec(property(get = __cordl_internal_get___u__1,
                      put = __cordl_internal_set___u__1))::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::Model::QueryResponse*>
      __u__1;

  /// @brief Field <>v__promiseOfValueOrEnd, offset 0x38, size 0x38
  __declspec(
      property(get = __cordl_internal_get___v__promiseOfValueOrEnd, put = __cordl_internal_set___v__promiseOfValueOrEnd))::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<bool>
      __v__promiseOfValueOrEnd;

  /// @brief Field <>w__disposeMode, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get___w__disposeMode, put = __cordl_internal_set___w__disposeMode)) bool __w__disposeMode;

  /// @brief Field <exclusiveStartKey>5__2, offset 0x98, size 0x8
  __declspec(
      property(get = __cordl_internal_get__exclusiveStartKey_5__2,
               put = __cordl_internal_set__exclusiveStartKey_5__2))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* _exclusiveStartKey_5__2;

  /// @brief Field cancellationToken, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_cancellationToken, put = __cordl_internal_set_cancellationToken))::System::Threading::CancellationToken cancellationToken;

  /// @brief Convert operator to "::System::Collections::Generic::IAsyncEnumerable_1<::Amazon::DynamoDBv2::Model::QueryResponse*>"
  constexpr operator ::System::Collections::Generic::IAsyncEnumerable_1<::Amazon::DynamoDBv2::Model::QueryResponse*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IAsyncEnumerator_1<::Amazon::DynamoDBv2::Model::QueryResponse*>"
  constexpr operator ::System::Collections::Generic::IAsyncEnumerator_1<::Amazon::DynamoDBv2::Model::QueryResponse*>*() noexcept;

  /// @brief Convert operator to "::System::IAsyncDisposable"
  constexpr operator ::System::IAsyncDisposable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept;

  /// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
  constexpr operator ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept;

  /// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<bool>"
  constexpr operator ::System::Threading::Tasks::Sources::IValueTaskSource_1<bool>*() noexcept;

  /// @brief Method MoveNext, addr 0x10573ec, size 0x400, virtual true, abstract: false, final true
  inline void MoveNext();

  static inline ::Amazon::DynamoDBv2::Model::__QueryPaginator___Amazon - Runtime - IPaginator_Amazon - DynamoDBv2 - Model - QueryResponse_ - PaginateAsync_d__6* New_ctor(int32_t __1__state);

  /// @brief Method SetStateMachine, addr 0x10577ec, size 0x4, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine * stateMachine);

  /// @brief Method System.Collections.Generic.IAsyncEnumerable<Amazon.DynamoDBv2.Model.QueryResponse>.GetAsyncEnumerator, addr 0x10577f0, size 0xc8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IAsyncEnumerator_1<::Amazon::DynamoDBv2::Model::QueryResponse*>*
  System_Collections_Generic_IAsyncEnumerable_Amazon_DynamoDBv2_Model_QueryResponse__GetAsyncEnumerator(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method System.Collections.Generic.IAsyncEnumerator<Amazon.DynamoDBv2.Model.QueryResponse>.MoveNextAsync, addr 0x10578b8, size 0x138, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::ValueTask_1<bool> System_Collections_Generic_IAsyncEnumerator_Amazon_DynamoDBv2_Model_QueryResponse__MoveNextAsync();

  /// @brief Method System.Collections.Generic.IAsyncEnumerator<Amazon.DynamoDBv2.Model.QueryResponse>.get_Current, addr 0x10579f0, size 0x8, virtual true, abstract: false, final true
  inline ::Amazon::DynamoDBv2::Model::QueryResponse* System_Collections_Generic_IAsyncEnumerator_Amazon_DynamoDBv2_Model_QueryResponse__get_Current();

  /// @brief Method System.IAsyncDisposable.DisposeAsync, addr 0x1057c48, size 0xfc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::ValueTask System_IAsyncDisposable_DisposeAsync();

  /// @brief Method System.Threading.Tasks.Sources.IValueTaskSource.GetResult, addr 0x1057b20, size 0x58, virtual true, abstract: false, final true
  inline void System_Threading_Tasks_Sources_IValueTaskSource_GetResult(int16_t token);

  /// @brief Method System.Threading.Tasks.Sources.IValueTaskSource.GetStatus, addr 0x1057b78, size 0x58, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Sources::ValueTaskSourceStatus System_Threading_Tasks_Sources_IValueTaskSource_GetStatus(int16_t token);

  /// @brief Method System.Threading.Tasks.Sources.IValueTaskSource.OnCompleted, addr 0x1057bd0, size 0x78, virtual true, abstract: false, final true
  inline void System_Threading_Tasks_Sources_IValueTaskSource_OnCompleted(::System::Action_1<::System::Object*> * continuation, ::System::Object * state, int16_t token,
                                                                          ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags flags);

  /// @brief Method System.Threading.Tasks.Sources.IValueTaskSource<System.Boolean>.GetResult, addr 0x10579f8, size 0x58, virtual true, abstract: false, final true
  inline bool System_Threading_Tasks_Sources_IValueTaskSource_System_Boolean__GetResult(int16_t token);

  /// @brief Method System.Threading.Tasks.Sources.IValueTaskSource<System.Boolean>.GetStatus, addr 0x1057a50, size 0x58, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Sources::ValueTaskSourceStatus System_Threading_Tasks_Sources_IValueTaskSource_System_Boolean__GetStatus(int16_t token);

  /// @brief Method System.Threading.Tasks.Sources.IValueTaskSource<System.Boolean>.OnCompleted, addr 0x1057aa8, size 0x78, virtual true, abstract: false, final true
  inline void System_Threading_Tasks_Sources_IValueTaskSource_System_Boolean__OnCompleted(::System::Action_1<::System::Object*> * continuation, ::System::Object * state, int16_t token,
                                                                                          ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags flags);

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::Amazon::DynamoDBv2::Model::QueryResponse*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::QueryResponse*> const& __cordl_internal_get___2__current() const;

  constexpr ::System::Threading::CancellationToken const& __cordl_internal_get___3__cancellationToken() const;

  constexpr ::System::Threading::CancellationToken& __cordl_internal_get___3__cancellationToken();

  constexpr ::Amazon::DynamoDBv2::Model::QueryPaginator*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::QueryPaginator*> const& __cordl_internal_get___4__this() const;

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Runtime::CompilerServices::AsyncIteratorMethodBuilder const& __cordl_internal_get___t__builder() const;

  constexpr ::System::Runtime::CompilerServices::AsyncIteratorMethodBuilder& __cordl_internal_get___t__builder();

  constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::Model::QueryResponse*> const& __cordl_internal_get___u__1() const;

  constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::Model::QueryResponse*>& __cordl_internal_get___u__1();

  constexpr ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<bool> const& __cordl_internal_get___v__promiseOfValueOrEnd() const;

  constexpr ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<bool>& __cordl_internal_get___v__promiseOfValueOrEnd();

  constexpr bool const& __cordl_internal_get___w__disposeMode() const;

  constexpr bool& __cordl_internal_get___w__disposeMode();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*& __cordl_internal_get__exclusiveStartKey_5__2();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*> const&
  __cordl_internal_get__exclusiveStartKey_5__2() const;

  constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

  constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::Amazon::DynamoDBv2::Model::QueryResponse * value);

  constexpr void __cordl_internal_set___3__cancellationToken(::System::Threading::CancellationToken value);

  constexpr void __cordl_internal_set___4__this(::Amazon::DynamoDBv2::Model::QueryPaginator * value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncIteratorMethodBuilder value);

  constexpr void __cordl_internal_set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::Model::QueryResponse*> value);

  constexpr void __cordl_internal_set___v__promiseOfValueOrEnd(::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<bool> value);

  constexpr void __cordl_internal_set___w__disposeMode(bool value);

  constexpr void __cordl_internal_set__exclusiveStartKey_5__2(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*> * value);

  constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken value);

  /// @brief Method .ctor, addr 0x1057394, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IAsyncEnumerable_1<::Amazon::DynamoDBv2::Model::QueryResponse*>"
  constexpr ::System::Collections::Generic::IAsyncEnumerable_1<::Amazon::DynamoDBv2::Model::QueryResponse*>*
  i___System__Collections__Generic__IAsyncEnumerable_1___Amazon__DynamoDBv2__Model__QueryResponse__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IAsyncEnumerator_1<::Amazon::DynamoDBv2::Model::QueryResponse*>"
  constexpr ::System::Collections::Generic::IAsyncEnumerator_1<::Amazon::DynamoDBv2::Model::QueryResponse*>*
  i___System__Collections__Generic__IAsyncEnumerator_1___Amazon__DynamoDBv2__Model__QueryResponse__() noexcept;

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
  constexpr __QueryPaginator___Amazon - Runtime - IPaginator_Amazon - DynamoDBv2 - Model - QueryResponse_ - PaginateAsync_d__6();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__QueryPaginator___Amazon-Runtime-IPaginator_Amazon-DynamoDBv2-Model-QueryResponse_-PaginateAsync_d__6", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __QueryPaginator___Amazon - Runtime - IPaginator_Amazon - DynamoDBv2 - Model - QueryResponse_ -
      PaginateAsync_d__6(__QueryPaginator___Amazon - Runtime - IPaginator_Amazon - DynamoDBv2 - Model - QueryResponse_ - PaginateAsync_d__6&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__QueryPaginator___Amazon-Runtime-IPaginator_Amazon-DynamoDBv2-Model-QueryResponse_-PaginateAsync_d__6", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __QueryPaginator___Amazon - Runtime - IPaginator_Amazon - DynamoDBv2 - Model - QueryResponse_ -
      PaginateAsync_d__6(__QueryPaginator___Amazon - Runtime - IPaginator_Amazon - DynamoDBv2 - Model - QueryResponse_ - PaginateAsync_d__6 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>t__builder, offset: 0x18, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncIteratorMethodBuilder _____t__builder;

  /// @brief Field <>v__promiseOfValueOrEnd, offset: 0x38, size: 0x38, def value: None
  ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<bool> _____v__promiseOfValueOrEnd;

  /// @brief Field <>2__current, offset: 0x70, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::QueryResponse* _____2__current;

  /// @brief Field <>w__disposeMode, offset: 0x78, size: 0x1, def value: None
  bool _____w__disposeMode;

  /// @brief Field <>l__initialThreadId, offset: 0x7c, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x80, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::QueryPaginator* _____4__this;

  /// @brief Field cancellationToken, offset: 0x88, size: 0x8, def value: None
  ::System::Threading::CancellationToken ___cancellationToken;

  /// @brief Field <>3__cancellationToken, offset: 0x90, size: 0x8, def value: None
  ::System::Threading::CancellationToken _____3__cancellationToken;

  /// @brief Field <exclusiveStartKey>5__2, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* ____exclusiveStartKey_5__2;

  /// @brief Field <>u__1, offset: 0xa0, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::Model::QueryResponse*> _____u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::__QueryPaginator___Amazon - Runtime - IPaginator_Amazon - DynamoDBv2 - Model - QueryResponse_ - PaginateAsync_d__6, 0xb0>,
              "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::__QueryPaginator___Amazon - Runtime - IPaginator_Amazon - DynamoDBv2 - Model - QueryResponse_ - PaginateAsync_d__6, _____1__state) == 0x10,
              "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::__QueryPaginator___Amazon - Runtime - IPaginator_Amazon - DynamoDBv2 - Model - QueryResponse_ - PaginateAsync_d__6, _____t__builder) == 0x18,
              "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::__QueryPaginator___Amazon - Runtime - IPaginator_Amazon - DynamoDBv2 - Model - QueryResponse_ - PaginateAsync_d__6, _____v__promiseOfValueOrEnd) ==
                  0x38,
              "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::__QueryPaginator___Amazon - Runtime - IPaginator_Amazon - DynamoDBv2 - Model - QueryResponse_ - PaginateAsync_d__6, _____2__current) == 0x70,
              "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::__QueryPaginator___Amazon - Runtime - IPaginator_Amazon - DynamoDBv2 - Model - QueryResponse_ - PaginateAsync_d__6, _____w__disposeMode) == 0x78,
              "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::__QueryPaginator___Amazon - Runtime - IPaginator_Amazon - DynamoDBv2 - Model - QueryResponse_ - PaginateAsync_d__6, _____l__initialThreadId) ==
                  0x7c,
              "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::__QueryPaginator___Amazon - Runtime - IPaginator_Amazon - DynamoDBv2 - Model - QueryResponse_ - PaginateAsync_d__6, _____4__this) == 0x80,
              "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::__QueryPaginator___Amazon - Runtime - IPaginator_Amazon - DynamoDBv2 - Model - QueryResponse_ - PaginateAsync_d__6, ___cancellationToken) == 0x88,
              "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::__QueryPaginator___Amazon - Runtime - IPaginator_Amazon - DynamoDBv2 - Model - QueryResponse_ - PaginateAsync_d__6, _____3__cancellationToken) ==
                  0x90,
              "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::__QueryPaginator___Amazon - Runtime - IPaginator_Amazon - DynamoDBv2 - Model - QueryResponse_ - PaginateAsync_d__6, ____exclusiveStartKey_5__2) ==
                  0x98,
              "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::__QueryPaginator___Amazon - Runtime - IPaginator_Amazon - DynamoDBv2 - Model - QueryResponse_ - PaginateAsync_d__6, _____u__1) == 0xa0,
              "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
// Type: Amazon.DynamoDBv2.Model::QueryPaginator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::QueryPaginator*
class CORDL_TYPE QueryPaginator : public ::System::Object {
public:
  // Declarations
  using _Amazon - Runtime - IPaginator_Amazon - DynamoDBv2 - Model - QueryResponse_ - PaginateAsync_d__6 =
      ::Amazon::DynamoDBv2::Model::__QueryPaginator___Amazon - Runtime - IPaginator_Amazon - DynamoDBv2 - Model - QueryResponse_ - PaginateAsync_d__6;

  __declspec(property(get = get_Responses))::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::DynamoDBv2::Model::QueryResponse*>* Responses;

  /// @brief Field _client, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__client, put = __cordl_internal_set__client))::Amazon::DynamoDBv2::IAmazonDynamoDB* _client;

  /// @brief Field _isPaginatorInUse, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__isPaginatorInUse, put = __cordl_internal_set__isPaginatorInUse)) int32_t _isPaginatorInUse;

  /// @brief Field _request, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__request, put = __cordl_internal_set__request))::Amazon::DynamoDBv2::Model::QueryRequest* _request;

  /// @brief Convert operator to "::Amazon::DynamoDBv2::Model::IQueryPaginator"
  constexpr operator ::Amazon::DynamoDBv2::Model::IQueryPaginator*() noexcept;

  /// @brief Convert operator to "::Amazon::Runtime::IPaginator_1<::Amazon::DynamoDBv2::Model::QueryResponse*>"
  constexpr operator ::Amazon::Runtime::IPaginator_1<::Amazon::DynamoDBv2::Model::QueryResponse*>*() noexcept;

  /// @brief Method Amazon.Runtime.IPaginator<Amazon.DynamoDBv2.Model.QueryResponse>.PaginateAsync, addr 0x1057320, size 0x74, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IAsyncEnumerable_1<::Amazon::DynamoDBv2::Model::QueryResponse*>*
  Amazon_Runtime_IPaginator_Amazon_DynamoDBv2_Model_QueryResponse__PaginateAsync(::System::Threading::CancellationToken cancellationToken);

  static inline ::Amazon::DynamoDBv2::Model::QueryPaginator* New_ctor(::Amazon::DynamoDBv2::IAmazonDynamoDB* client, ::Amazon::DynamoDBv2::Model::QueryRequest* request);

  constexpr ::Amazon::DynamoDBv2::IAmazonDynamoDB*& __cordl_internal_get__client();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::IAmazonDynamoDB*> const& __cordl_internal_get__client() const;

  constexpr int32_t const& __cordl_internal_get__isPaginatorInUse() const;

  constexpr int32_t& __cordl_internal_get__isPaginatorInUse();

  constexpr ::Amazon::DynamoDBv2::Model::QueryRequest*& __cordl_internal_get__request();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::QueryRequest*> const& __cordl_internal_get__request() const;

  constexpr void __cordl_internal_set__client(::Amazon::DynamoDBv2::IAmazonDynamoDB* value);

  constexpr void __cordl_internal_set__isPaginatorInUse(int32_t value);

  constexpr void __cordl_internal_set__request(::Amazon::DynamoDBv2::Model::QueryRequest* value);

  /// @brief Method .ctor, addr 0x10565bc, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::IAmazonDynamoDB* client, ::Amazon::DynamoDBv2::Model::QueryRequest* request);

  /// @brief Method get_Responses, addr 0x10572a8, size 0x78, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::DynamoDBv2::Model::QueryResponse*>* get_Responses();

  /// @brief Convert to "::Amazon::DynamoDBv2::Model::IQueryPaginator"
  constexpr ::Amazon::DynamoDBv2::Model::IQueryPaginator* i___Amazon__DynamoDBv2__Model__IQueryPaginator() noexcept;

  /// @brief Convert to "::Amazon::Runtime::IPaginator_1<::Amazon::DynamoDBv2::Model::QueryResponse*>"
  constexpr ::Amazon::Runtime::IPaginator_1<::Amazon::DynamoDBv2::Model::QueryResponse*>* i___Amazon__Runtime__IPaginator_1___Amazon__DynamoDBv2__Model__QueryResponse__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QueryPaginator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QueryPaginator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QueryPaginator(QueryPaginator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QueryPaginator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QueryPaginator(QueryPaginator const&) = delete;

  /// @brief Field _client, offset: 0x10, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::IAmazonDynamoDB* ____client;

  /// @brief Field _request, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::QueryRequest* ____request;

  /// @brief Field _isPaginatorInUse, offset: 0x20, size: 0x4, def value: None
  int32_t ____isPaginatorInUse;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::QueryPaginator, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::QueryPaginator, ____client) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::QueryPaginator, ____request) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::QueryPaginator, ____isPaginatorInUse) == 0x20, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::QueryPaginator);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::QueryPaginator*, "Amazon.DynamoDBv2.Model", "QueryPaginator");
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::__QueryPaginator___Amazon - Runtime - IPaginator_Amazon - DynamoDBv2 - Model - QueryResponse_ - PaginateAsync_d__6);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::__QueryPaginator___Amazon - Runtime - IPaginator_Amazon - DynamoDBv2 - Model - QueryResponse_ - PaginateAsync_d__6*, "Amazon.DynamoDBv2.Model",
                       "QueryPaginator/<Amazon-Runtime-IPaginator<Amazon-DynamoDBv2-Model-QueryResponse>-PaginateAsync>d__6");
