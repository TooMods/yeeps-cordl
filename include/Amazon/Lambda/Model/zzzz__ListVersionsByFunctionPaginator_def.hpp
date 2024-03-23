#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Lambda/Model/zzzz__ListVersionsByFunctionResponse_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncIteratorMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__ManualResetValueTaskSourceCore_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListVersionsByFunctionPaginator)
namespace Amazon::Lambda::Model {
class FunctionConfiguration;
}
namespace Amazon::Lambda::Model {
class IListVersionsByFunctionPaginator;
}
namespace Amazon::Lambda::Model {
class ListVersionsByFunctionRequest;
}
namespace Amazon::Lambda::Model {
class ListVersionsByFunctionResponse;
}
namespace Amazon::Lambda::Model {
class __ListVersionsByFunctionPaginator___Amazon_Runtime_IPaginator_Amazon_Lambda_Model_ListVersionsByFunctionResponse__PaginateAsync_d__8;
}
namespace Amazon::Lambda::Model {
class __ListVersionsByFunctionPaginator____c;
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
class ListVersionsByFunctionPaginator;
}
namespace Amazon::Lambda::Model {
class __ListVersionsByFunctionPaginator___Amazon_Runtime_IPaginator_Amazon_Lambda_Model_ListVersionsByFunctionResponse__PaginateAsync_d__8;
}
namespace Amazon::Lambda::Model {
class __ListVersionsByFunctionPaginator____c;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::ListVersionsByFunctionPaginator);
MARK_REF_PTR_T(::Amazon::Lambda::Model::__ListVersionsByFunctionPaginator___Amazon_Runtime_IPaginator_Amazon_Lambda_Model_ListVersionsByFunctionResponse__PaginateAsync_d__8);
MARK_REF_PTR_T(::Amazon::Lambda::Model::__ListVersionsByFunctionPaginator____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::ListVersionsByFunctionPaginator::<>c*
class CORDL_TYPE __ListVersionsByFunctionPaginator____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Amazon::Lambda::Model::__ListVersionsByFunctionPaginator____c* __9;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__6_0,
                             put = setStaticF___9__6_0))::System::Func_2<::Amazon::Lambda::Model::ListVersionsByFunctionResponse*,
                                                                         ::System::Collections::Generic::IEnumerable_1<::Amazon::Lambda::Model::FunctionConfiguration*>*>* __9__6_0;

  static inline ::Amazon::Lambda::Model::__ListVersionsByFunctionPaginator____c* New_ctor();

  /// @brief Method .ctor, addr 0x311472c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_Versions>b__6_0, addr 0x3114734, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Amazon::Lambda::Model::FunctionConfiguration*>* _get_Versions_b__6_0(::Amazon::Lambda::Model::ListVersionsByFunctionResponse* i);

  static inline ::Amazon::Lambda::Model::__ListVersionsByFunctionPaginator____c* getStaticF___9();

  static inline ::System::Func_2<::Amazon::Lambda::Model::ListVersionsByFunctionResponse*, ::System::Collections::Generic::IEnumerable_1<::Amazon::Lambda::Model::FunctionConfiguration*>*>*
  getStaticF___9__6_0();

  static inline void setStaticF___9(::Amazon::Lambda::Model::__ListVersionsByFunctionPaginator____c* value);

  static inline void setStaticF___9__6_0(
      ::System::Func_2<::Amazon::Lambda::Model::ListVersionsByFunctionResponse*, ::System::Collections::Generic::IEnumerable_1<::Amazon::Lambda::Model::FunctionConfiguration*>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ListVersionsByFunctionPaginator____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ListVersionsByFunctionPaginator____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ListVersionsByFunctionPaginator____c(__ListVersionsByFunctionPaginator____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ListVersionsByFunctionPaginator____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ListVersionsByFunctionPaginator____c(__ListVersionsByFunctionPaginator____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::__ListVersionsByFunctionPaginator____c, 0x10>, "Size mismatch!");

} // namespace Amazon::Lambda::Model
// Type: ::<Amazon-Runtime-IPaginator<Amazon-Lambda-Model-ListVersionsByFunctionResponse>-PaginateAsync>d__8
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::ListVersionsByFunctionPaginator::<Amazon-Runtime-IPaginator<Amazon-Lambda-Model-ListVersionsByFunctionResponse>-PaginateAsync>d__8*
class CORDL_TYPE __ListVersionsByFunctionPaginator___Amazon_Runtime_IPaginator_Amazon_Lambda_Model_ListVersionsByFunctionResponse__PaginateAsync_d__8 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IAsyncEnumerator_Amazon_Lambda_Model_ListVersionsByFunctionResponse__get_Current))::Amazon::Lambda::Model::
      ListVersionsByFunctionResponse* System_Collections_Generic_IAsyncEnumerator_Amazon_Lambda_Model_ListVersionsByFunctionResponse__Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::Amazon::Lambda::Model::ListVersionsByFunctionResponse* __2__current;

  /// @brief Field <>3__cancellationToken, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get___3__cancellationToken, put = __cordl_internal_set___3__cancellationToken))::System::Threading::CancellationToken __3__cancellationToken;

  /// @brief Field <>4__this, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Amazon::Lambda::Model::ListVersionsByFunctionPaginator* __4__this;

  /// @brief Field <>l__initialThreadId, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>t__builder, offset 0x18, size 0x20
  __declspec(property(get = __cordl_internal_get___t__builder, put = __cordl_internal_set___t__builder))::System::Runtime::CompilerServices::AsyncIteratorMethodBuilder __t__builder;

  /// @brief Field <>u__1, offset 0xa0, size 0x10
  __declspec(property(
      get = __cordl_internal_get___u__1,
      put = __cordl_internal_set___u__1))::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Lambda::Model::ListVersionsByFunctionResponse*> __u__1;

  /// @brief Field <>v__promiseOfValueOrEnd, offset 0x38, size 0x38
  __declspec(property(get = __cordl_internal_get___v__promiseOfValueOrEnd,
                      put = __cordl_internal_set___v__promiseOfValueOrEnd))::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<bool> __v__promiseOfValueOrEnd;

  /// @brief Field <>w__disposeMode, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get___w__disposeMode, put = __cordl_internal_set___w__disposeMode)) bool __w__disposeMode;

  /// @brief Field <marker>5__2, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__marker_5__2, put = __cordl_internal_set__marker_5__2))::StringW _marker_5__2;

  /// @brief Field cancellationToken, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_cancellationToken, put = __cordl_internal_set_cancellationToken))::System::Threading::CancellationToken cancellationToken;

  /// @brief Convert operator to "::System::Collections::Generic::IAsyncEnumerable_1<::Amazon::Lambda::Model::ListVersionsByFunctionResponse*>"
  constexpr operator ::System::Collections::Generic::IAsyncEnumerable_1<::Amazon::Lambda::Model::ListVersionsByFunctionResponse*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IAsyncEnumerator_1<::Amazon::Lambda::Model::ListVersionsByFunctionResponse*>"
  constexpr operator ::System::Collections::Generic::IAsyncEnumerator_1<::Amazon::Lambda::Model::ListVersionsByFunctionResponse*>*() noexcept;

  /// @brief Convert operator to "::System::IAsyncDisposable"
  constexpr operator ::System::IAsyncDisposable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept;

  /// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
  constexpr operator ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept;

  /// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<bool>"
  constexpr operator ::System::Threading::Tasks::Sources::IValueTaskSource_1<bool>*() noexcept;

  /// @brief Method MoveNext, addr 0x311474c, size 0x3dc, virtual true, abstract: false, final true
  inline void MoveNext();

  static inline ::Amazon::Lambda::Model::__ListVersionsByFunctionPaginator___Amazon_Runtime_IPaginator_Amazon_Lambda_Model_ListVersionsByFunctionResponse__PaginateAsync_d__8*
  New_ctor(int32_t __1__state);

  /// @brief Method SetStateMachine, addr 0x3114b28, size 0x4, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Method System.Collections.Generic.IAsyncEnumerable<Amazon.Lambda.Model.ListVersionsByFunctionResponse>.GetAsyncEnumerator, addr 0x3114b2c, size 0xc8, virtual true, abstract: false, final
  /// true
  inline ::System::Collections::Generic::IAsyncEnumerator_1<::Amazon::Lambda::Model::ListVersionsByFunctionResponse*>*
  System_Collections_Generic_IAsyncEnumerable_Amazon_Lambda_Model_ListVersionsByFunctionResponse__GetAsyncEnumerator(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method System.Collections.Generic.IAsyncEnumerator<Amazon.Lambda.Model.ListVersionsByFunctionResponse>.MoveNextAsync, addr 0x3114bf4, size 0x138, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::ValueTask_1<bool> System_Collections_Generic_IAsyncEnumerator_Amazon_Lambda_Model_ListVersionsByFunctionResponse__MoveNextAsync();

  /// @brief Method System.Collections.Generic.IAsyncEnumerator<Amazon.Lambda.Model.ListVersionsByFunctionResponse>.get_Current, addr 0x3114d2c, size 0x8, virtual true, abstract: false, final true
  inline ::Amazon::Lambda::Model::ListVersionsByFunctionResponse* System_Collections_Generic_IAsyncEnumerator_Amazon_Lambda_Model_ListVersionsByFunctionResponse__get_Current();

  /// @brief Method System.IAsyncDisposable.DisposeAsync, addr 0x3114f84, size 0xfc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::ValueTask System_IAsyncDisposable_DisposeAsync();

  /// @brief Method System.Threading.Tasks.Sources.IValueTaskSource.GetResult, addr 0x3114e5c, size 0x58, virtual true, abstract: false, final true
  inline void System_Threading_Tasks_Sources_IValueTaskSource_GetResult(int16_t token);

  /// @brief Method System.Threading.Tasks.Sources.IValueTaskSource.GetStatus, addr 0x3114eb4, size 0x58, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Sources::ValueTaskSourceStatus System_Threading_Tasks_Sources_IValueTaskSource_GetStatus(int16_t token);

  /// @brief Method System.Threading.Tasks.Sources.IValueTaskSource.OnCompleted, addr 0x3114f0c, size 0x78, virtual true, abstract: false, final true
  inline void System_Threading_Tasks_Sources_IValueTaskSource_OnCompleted(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, int16_t token,
                                                                          ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags flags);

  /// @brief Method System.Threading.Tasks.Sources.IValueTaskSource<System.Boolean>.GetResult, addr 0x3114d34, size 0x58, virtual true, abstract: false, final true
  inline bool System_Threading_Tasks_Sources_IValueTaskSource_System_Boolean__GetResult(int16_t token);

  /// @brief Method System.Threading.Tasks.Sources.IValueTaskSource<System.Boolean>.GetStatus, addr 0x3114d8c, size 0x58, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Sources::ValueTaskSourceStatus System_Threading_Tasks_Sources_IValueTaskSource_System_Boolean__GetStatus(int16_t token);

  /// @brief Method System.Threading.Tasks.Sources.IValueTaskSource<System.Boolean>.OnCompleted, addr 0x3114de4, size 0x78, virtual true, abstract: false, final true
  inline void System_Threading_Tasks_Sources_IValueTaskSource_System_Boolean__OnCompleted(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, int16_t token,
                                                                                          ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags flags);

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::Amazon::Lambda::Model::ListVersionsByFunctionResponse*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::ListVersionsByFunctionResponse*> const& __cordl_internal_get___2__current() const;

  constexpr ::System::Threading::CancellationToken const& __cordl_internal_get___3__cancellationToken() const;

  constexpr ::System::Threading::CancellationToken& __cordl_internal_get___3__cancellationToken();

  constexpr ::Amazon::Lambda::Model::ListVersionsByFunctionPaginator*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::ListVersionsByFunctionPaginator*> const& __cordl_internal_get___4__this() const;

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Runtime::CompilerServices::AsyncIteratorMethodBuilder const& __cordl_internal_get___t__builder() const;

  constexpr ::System::Runtime::CompilerServices::AsyncIteratorMethodBuilder& __cordl_internal_get___t__builder();

  constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Lambda::Model::ListVersionsByFunctionResponse*> const&
  __cordl_internal_get___u__1() const;

  constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Lambda::Model::ListVersionsByFunctionResponse*>& __cordl_internal_get___u__1();

  constexpr ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<bool> const& __cordl_internal_get___v__promiseOfValueOrEnd() const;

  constexpr ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<bool>& __cordl_internal_get___v__promiseOfValueOrEnd();

  constexpr bool const& __cordl_internal_get___w__disposeMode() const;

  constexpr bool& __cordl_internal_get___w__disposeMode();

  constexpr ::StringW const& __cordl_internal_get__marker_5__2() const;

  constexpr ::StringW& __cordl_internal_get__marker_5__2();

  constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

  constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::Amazon::Lambda::Model::ListVersionsByFunctionResponse* value);

  constexpr void __cordl_internal_set___3__cancellationToken(::System::Threading::CancellationToken value);

  constexpr void __cordl_internal_set___4__this(::Amazon::Lambda::Model::ListVersionsByFunctionPaginator* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncIteratorMethodBuilder value);

  constexpr void __cordl_internal_set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Lambda::Model::ListVersionsByFunctionResponse*> value);

  constexpr void __cordl_internal_set___v__promiseOfValueOrEnd(::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<bool> value);

  constexpr void __cordl_internal_set___w__disposeMode(bool value);

  constexpr void __cordl_internal_set__marker_5__2(::StringW value);

  constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken value);

  /// @brief Method .ctor, addr 0x3114670, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IAsyncEnumerable_1<::Amazon::Lambda::Model::ListVersionsByFunctionResponse*>"
  constexpr ::System::Collections::Generic::IAsyncEnumerable_1<::Amazon::Lambda::Model::ListVersionsByFunctionResponse*>*
  i___System__Collections__Generic__IAsyncEnumerable_1___Amazon__Lambda__Model__ListVersionsByFunctionResponse__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IAsyncEnumerator_1<::Amazon::Lambda::Model::ListVersionsByFunctionResponse*>"
  constexpr ::System::Collections::Generic::IAsyncEnumerator_1<::Amazon::Lambda::Model::ListVersionsByFunctionResponse*>*
  i___System__Collections__Generic__IAsyncEnumerator_1___Amazon__Lambda__Model__ListVersionsByFunctionResponse__() noexcept;

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
  constexpr __ListVersionsByFunctionPaginator___Amazon_Runtime_IPaginator_Amazon_Lambda_Model_ListVersionsByFunctionResponse__PaginateAsync_d__8();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ListVersionsByFunctionPaginator___Amazon_Runtime_IPaginator_Amazon_Lambda_Model_ListVersionsByFunctionResponse__PaginateAsync_d__8", modifiers: "&&",
  // def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ListVersionsByFunctionPaginator___Amazon_Runtime_IPaginator_Amazon_Lambda_Model_ListVersionsByFunctionResponse__PaginateAsync_d__8(
      __ListVersionsByFunctionPaginator___Amazon_Runtime_IPaginator_Amazon_Lambda_Model_ListVersionsByFunctionResponse__PaginateAsync_d__8&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ListVersionsByFunctionPaginator___Amazon_Runtime_IPaginator_Amazon_Lambda_Model_ListVersionsByFunctionResponse__PaginateAsync_d__8", modifiers:
  // "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ListVersionsByFunctionPaginator___Amazon_Runtime_IPaginator_Amazon_Lambda_Model_ListVersionsByFunctionResponse__PaginateAsync_d__8(
      __ListVersionsByFunctionPaginator___Amazon_Runtime_IPaginator_Amazon_Lambda_Model_ListVersionsByFunctionResponse__PaginateAsync_d__8 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>t__builder, offset: 0x18, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncIteratorMethodBuilder _____t__builder;

  /// @brief Field <>v__promiseOfValueOrEnd, offset: 0x38, size: 0x38, def value: None
  ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<bool> _____v__promiseOfValueOrEnd;

  /// @brief Field <>2__current, offset: 0x70, size: 0x8, def value: None
  ::Amazon::Lambda::Model::ListVersionsByFunctionResponse* _____2__current;

  /// @brief Field <>w__disposeMode, offset: 0x78, size: 0x1, def value: None
  bool _____w__disposeMode;

  /// @brief Field <>l__initialThreadId, offset: 0x7c, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x80, size: 0x8, def value: None
  ::Amazon::Lambda::Model::ListVersionsByFunctionPaginator* _____4__this;

  /// @brief Field cancellationToken, offset: 0x88, size: 0x8, def value: None
  ::System::Threading::CancellationToken ___cancellationToken;

  /// @brief Field <>3__cancellationToken, offset: 0x90, size: 0x8, def value: None
  ::System::Threading::CancellationToken _____3__cancellationToken;

  /// @brief Field <marker>5__2, offset: 0x98, size: 0x8, def value: None
  ::StringW ____marker_5__2;

  /// @brief Field <>u__1, offset: 0xa0, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Lambda::Model::ListVersionsByFunctionResponse*> _____u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<
                  ::Amazon::Lambda::Model::__ListVersionsByFunctionPaginator___Amazon_Runtime_IPaginator_Amazon_Lambda_Model_ListVersionsByFunctionResponse__PaginateAsync_d__8, 0xb0>,
              "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::__ListVersionsByFunctionPaginator___Amazon_Runtime_IPaginator_Amazon_Lambda_Model_ListVersionsByFunctionResponse__PaginateAsync_d__8, _____1__state) ==
                  0x10,
              "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::__ListVersionsByFunctionPaginator___Amazon_Runtime_IPaginator_Amazon_Lambda_Model_ListVersionsByFunctionResponse__PaginateAsync_d__8,
                       _____t__builder) == 0x18,
              "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::__ListVersionsByFunctionPaginator___Amazon_Runtime_IPaginator_Amazon_Lambda_Model_ListVersionsByFunctionResponse__PaginateAsync_d__8,
                       _____v__promiseOfValueOrEnd) == 0x38,
              "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::__ListVersionsByFunctionPaginator___Amazon_Runtime_IPaginator_Amazon_Lambda_Model_ListVersionsByFunctionResponse__PaginateAsync_d__8,
                       _____2__current) == 0x70,
              "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::__ListVersionsByFunctionPaginator___Amazon_Runtime_IPaginator_Amazon_Lambda_Model_ListVersionsByFunctionResponse__PaginateAsync_d__8,
                       _____w__disposeMode) == 0x78,
              "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::__ListVersionsByFunctionPaginator___Amazon_Runtime_IPaginator_Amazon_Lambda_Model_ListVersionsByFunctionResponse__PaginateAsync_d__8,
                       _____l__initialThreadId) == 0x7c,
              "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::__ListVersionsByFunctionPaginator___Amazon_Runtime_IPaginator_Amazon_Lambda_Model_ListVersionsByFunctionResponse__PaginateAsync_d__8, _____4__this) ==
                  0x80,
              "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::__ListVersionsByFunctionPaginator___Amazon_Runtime_IPaginator_Amazon_Lambda_Model_ListVersionsByFunctionResponse__PaginateAsync_d__8,
                       ___cancellationToken) == 0x88,
              "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::__ListVersionsByFunctionPaginator___Amazon_Runtime_IPaginator_Amazon_Lambda_Model_ListVersionsByFunctionResponse__PaginateAsync_d__8,
                       _____3__cancellationToken) == 0x90,
              "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::__ListVersionsByFunctionPaginator___Amazon_Runtime_IPaginator_Amazon_Lambda_Model_ListVersionsByFunctionResponse__PaginateAsync_d__8,
                       ____marker_5__2) == 0x98,
              "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::__ListVersionsByFunctionPaginator___Amazon_Runtime_IPaginator_Amazon_Lambda_Model_ListVersionsByFunctionResponse__PaginateAsync_d__8, _____u__1) ==
                  0xa0,
              "Offset mismatch!");

} // namespace Amazon::Lambda::Model
// Type: Amazon.Lambda.Model::ListVersionsByFunctionPaginator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::ListVersionsByFunctionPaginator*
class CORDL_TYPE ListVersionsByFunctionPaginator : public ::System::Object {
public:
  // Declarations
  using _Amazon_Runtime_IPaginator_Amazon_Lambda_Model_ListVersionsByFunctionResponse__PaginateAsync_d__8 =
      ::Amazon::Lambda::Model::__ListVersionsByFunctionPaginator___Amazon_Runtime_IPaginator_Amazon_Lambda_Model_ListVersionsByFunctionResponse__PaginateAsync_d__8;

  using __c = ::Amazon::Lambda::Model::__ListVersionsByFunctionPaginator____c;

  __declspec(property(get = get_Responses))::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::ListVersionsByFunctionResponse*>* Responses;

  __declspec(property(get = get_Versions))::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::FunctionConfiguration*>* Versions;

  /// @brief Field _client, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__client, put = __cordl_internal_set__client))::Amazon::Lambda::IAmazonLambda* _client;

  /// @brief Field _isPaginatorInUse, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__isPaginatorInUse, put = __cordl_internal_set__isPaginatorInUse)) int32_t _isPaginatorInUse;

  /// @brief Field _request, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__request, put = __cordl_internal_set__request))::Amazon::Lambda::Model::ListVersionsByFunctionRequest* _request;

  /// @brief Convert operator to "::Amazon::Lambda::Model::IListVersionsByFunctionPaginator"
  constexpr operator ::Amazon::Lambda::Model::IListVersionsByFunctionPaginator*() noexcept;

  /// @brief Convert operator to "::Amazon::Runtime::IPaginator_1<::Amazon::Lambda::Model::ListVersionsByFunctionResponse*>"
  constexpr operator ::Amazon::Runtime::IPaginator_1<::Amazon::Lambda::Model::ListVersionsByFunctionResponse*>*() noexcept;

  /// @brief Method Amazon.Runtime.IPaginator<Amazon.Lambda.Model.ListVersionsByFunctionResponse>.PaginateAsync, addr 0x31145fc, size 0x74, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IAsyncEnumerable_1<::Amazon::Lambda::Model::ListVersionsByFunctionResponse*>*
  Amazon_Runtime_IPaginator_Amazon_Lambda_Model_ListVersionsByFunctionResponse__PaginateAsync(::System::Threading::CancellationToken cancellationToken);

  static inline ::Amazon::Lambda::Model::ListVersionsByFunctionPaginator* New_ctor(::Amazon::Lambda::IAmazonLambda* client, ::Amazon::Lambda::Model::ListVersionsByFunctionRequest* request);

  constexpr ::Amazon::Lambda::IAmazonLambda*& __cordl_internal_get__client();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::IAmazonLambda*> const& __cordl_internal_get__client() const;

  constexpr int32_t const& __cordl_internal_get__isPaginatorInUse() const;

  constexpr int32_t& __cordl_internal_get__isPaginatorInUse();

  constexpr ::Amazon::Lambda::Model::ListVersionsByFunctionRequest*& __cordl_internal_get__request();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::ListVersionsByFunctionRequest*> const& __cordl_internal_get__request() const;

  constexpr void __cordl_internal_set__client(::Amazon::Lambda::IAmazonLambda* value);

  constexpr void __cordl_internal_set__isPaginatorInUse(int32_t value);

  constexpr void __cordl_internal_set__request(::Amazon::Lambda::Model::ListVersionsByFunctionRequest* value);

  /// @brief Method .ctor, addr 0x310d714, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Lambda::IAmazonLambda* client, ::Amazon::Lambda::Model::ListVersionsByFunctionRequest* request);

  /// @brief Method get_Responses, addr 0x3114460, size 0x78, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::ListVersionsByFunctionResponse*>* get_Responses();

  /// @brief Method get_Versions, addr 0x31144d8, size 0x124, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::FunctionConfiguration*>* get_Versions();

  /// @brief Convert to "::Amazon::Lambda::Model::IListVersionsByFunctionPaginator"
  constexpr ::Amazon::Lambda::Model::IListVersionsByFunctionPaginator* i___Amazon__Lambda__Model__IListVersionsByFunctionPaginator() noexcept;

  /// @brief Convert to "::Amazon::Runtime::IPaginator_1<::Amazon::Lambda::Model::ListVersionsByFunctionResponse*>"
  constexpr ::Amazon::Runtime::IPaginator_1<::Amazon::Lambda::Model::ListVersionsByFunctionResponse*>*
  i___Amazon__Runtime__IPaginator_1___Amazon__Lambda__Model__ListVersionsByFunctionResponse__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListVersionsByFunctionPaginator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListVersionsByFunctionPaginator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListVersionsByFunctionPaginator(ListVersionsByFunctionPaginator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListVersionsByFunctionPaginator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListVersionsByFunctionPaginator(ListVersionsByFunctionPaginator const&) = delete;

  /// @brief Field _client, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Lambda::IAmazonLambda* ____client;

  /// @brief Field _request, offset: 0x18, size: 0x8, def value: None
  ::Amazon::Lambda::Model::ListVersionsByFunctionRequest* ____request;

  /// @brief Field _isPaginatorInUse, offset: 0x20, size: 0x4, def value: None
  int32_t ____isPaginatorInUse;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::ListVersionsByFunctionPaginator, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListVersionsByFunctionPaginator, ____client) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListVersionsByFunctionPaginator, ____request) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListVersionsByFunctionPaginator, ____isPaginatorInUse) == 0x20, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::ListVersionsByFunctionPaginator);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::ListVersionsByFunctionPaginator*, "Amazon.Lambda.Model", "ListVersionsByFunctionPaginator");
NEED_NO_BOX(::Amazon::Lambda::Model::__ListVersionsByFunctionPaginator___Amazon_Runtime_IPaginator_Amazon_Lambda_Model_ListVersionsByFunctionResponse__PaginateAsync_d__8);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::__ListVersionsByFunctionPaginator___Amazon_Runtime_IPaginator_Amazon_Lambda_Model_ListVersionsByFunctionResponse__PaginateAsync_d__8*,
                       "Amazon.Lambda.Model", "ListVersionsByFunctionPaginator/<Amazon-Runtime-IPaginator<Amazon-Lambda-Model-ListVersionsByFunctionResponse>-PaginateAsync>d__8");
NEED_NO_BOX(::Amazon::Lambda::Model::__ListVersionsByFunctionPaginator____c);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::__ListVersionsByFunctionPaginator____c*, "Amazon.Lambda.Model", "ListVersionsByFunctionPaginator/<>c");
