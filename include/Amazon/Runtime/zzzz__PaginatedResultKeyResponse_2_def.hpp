#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncIteratorMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredCancelableAsyncEnumerable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__ManualResetValueTaskSourceCore_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PaginatedResultKeyResponse_2)
namespace Amazon::Runtime {
template <typename TResult> class IPaginatedEnumerable_1;
}
namespace Amazon::Runtime {
template <typename TResponse> class IPaginator_1;
}
namespace Amazon::Runtime {
template <typename TResponse, typename TResultKey> class __PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3;
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
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
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
namespace Amazon::Runtime {
template <typename TResponse, typename TResultKey> class PaginatedResultKeyResponse_2;
}
namespace Amazon::Runtime {
template <typename TResponse, typename TResultKey> class __PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::Runtime::PaginatedResultKeyResponse_2);
MARK_GEN_REF_PTR_T(::Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3);
// Type: ::<GetAsyncEnumerator>d__3
// SizeInfo { instance_size: 216, native_size: 216, calculated_instance_size: 216, calculated_native_size: 216, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// cpp template
template <typename TResponse, typename TResultKey>
// Is value type: false
// CS Name: ::PaginatedResultKeyResponse`2::<GetAsyncEnumerator>d__3<TResponse,TResultKey>*
class CORDL_TYPE __PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IAsyncEnumerator_TResultKey__get_Current)) TResultKey System_Collections_Generic_IAsyncEnumerator_TResultKey__Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) TResultKey __2__current;

  /// @brief Field <>4__this, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Amazon::Runtime::PaginatedResultKeyResponse_2<TResponse, TResultKey>* __4__this;

  /// @brief Field <>7__wrap1, offset 0x90, size 0x10
  __declspec(property(get = __cordl_internal_get___7__wrap1,
                      put = __cordl_internal_set___7__wrap1))::System::Runtime::CompilerServices::__ConfiguredCancelableAsyncEnumerable_1__Enumerator<TResponse> __7__wrap1;

  /// @brief Field <>7__wrap2, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap2, put = __cordl_internal_set___7__wrap2))::System::Object* __7__wrap2;

  /// @brief Field <>7__wrap3, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get___7__wrap3, put = __cordl_internal_set___7__wrap3)) int32_t __7__wrap3;

  /// @brief Field <>7__wrap4, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap4, put = __cordl_internal_set___7__wrap4))::System::Collections::Generic::IEnumerator_1<TResultKey>* __7__wrap4;

  /// @brief Field <>t__builder, offset 0x18, size 0x20
  __declspec(property(get = __cordl_internal_get___t__builder, put = __cordl_internal_set___t__builder))::System::Runtime::CompilerServices::AsyncIteratorMethodBuilder __t__builder;

  /// @brief Field <>u__1, offset 0xb8, size 0x10
  __declspec(property(get = __cordl_internal_get___u__1,
                      put = __cordl_internal_set___u__1))::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<bool> __u__1;

  /// @brief Field <>u__2, offset 0xc8, size 0x10
  __declspec(property(get = __cordl_internal_get___u__2, put = __cordl_internal_set___u__2))::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __u__2;

  /// @brief Field <>v__promiseOfValueOrEnd, offset 0x38, size 0x38
  __declspec(property(get = __cordl_internal_get___v__promiseOfValueOrEnd,
                      put = __cordl_internal_set___v__promiseOfValueOrEnd))::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<bool> __v__promiseOfValueOrEnd;

  /// @brief Field <>w__disposeMode, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get___w__disposeMode, put = __cordl_internal_set___w__disposeMode)) bool __w__disposeMode;

  /// @brief Field cancellationToken, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_cancellationToken, put = __cordl_internal_set_cancellationToken))::System::Threading::CancellationToken cancellationToken;

  /// @brief Convert operator to "::System::Collections::Generic::IAsyncEnumerator_1<TResultKey>"
  constexpr operator ::System::Collections::Generic::IAsyncEnumerator_1<TResultKey>*() noexcept;

  /// @brief Convert operator to "::System::IAsyncDisposable"
  constexpr operator ::System::IAsyncDisposable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept;

  /// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
  constexpr operator ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept;

  /// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<bool>"
  constexpr operator ::System::Threading::Tasks::Sources::IValueTaskSource_1<bool>*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  static inline ::Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>* New_ctor(int32_t __1__state);

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Method System.Collections.Generic.IAsyncEnumerator<TResultKey>.MoveNextAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::ValueTask_1<bool> System_Collections_Generic_IAsyncEnumerator_TResultKey__MoveNextAsync();

  /// @brief Method System.Collections.Generic.IAsyncEnumerator<TResultKey>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TResultKey System_Collections_Generic_IAsyncEnumerator_TResultKey__get_Current();

  /// @brief Method System.IAsyncDisposable.DisposeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::ValueTask System_IAsyncDisposable_DisposeAsync();

  /// @brief Method System.Threading.Tasks.Sources.IValueTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Threading_Tasks_Sources_IValueTaskSource_GetResult(int16_t token);

  /// @brief Method System.Threading.Tasks.Sources.IValueTaskSource.GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Sources::ValueTaskSourceStatus System_Threading_Tasks_Sources_IValueTaskSource_GetStatus(int16_t token);

  /// @brief Method System.Threading.Tasks.Sources.IValueTaskSource.OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Threading_Tasks_Sources_IValueTaskSource_OnCompleted(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, int16_t token,
                                                                          ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags flags);

  /// @brief Method System.Threading.Tasks.Sources.IValueTaskSource<System.Boolean>.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Threading_Tasks_Sources_IValueTaskSource_System_Boolean__GetResult(int16_t token);

  /// @brief Method System.Threading.Tasks.Sources.IValueTaskSource<System.Boolean>.GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Sources::ValueTaskSourceStatus System_Threading_Tasks_Sources_IValueTaskSource_System_Boolean__GetStatus(int16_t token);

  /// @brief Method System.Threading.Tasks.Sources.IValueTaskSource<System.Boolean>.OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Threading_Tasks_Sources_IValueTaskSource_System_Boolean__OnCompleted(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, int16_t token,
                                                                                          ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags flags);

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr TResultKey const& __cordl_internal_get___2__current() const;

  constexpr TResultKey& __cordl_internal_get___2__current();

  constexpr ::Amazon::Runtime::PaginatedResultKeyResponse_2<TResponse, TResultKey>*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::PaginatedResultKeyResponse_2<TResponse, TResultKey>*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Runtime::CompilerServices::__ConfiguredCancelableAsyncEnumerable_1__Enumerator<TResponse> const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Runtime::CompilerServices::__ConfiguredCancelableAsyncEnumerable_1__Enumerator<TResponse>& __cordl_internal_get___7__wrap1();

  constexpr ::System::Object*& __cordl_internal_get___7__wrap2();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___7__wrap2() const;

  constexpr int32_t const& __cordl_internal_get___7__wrap3() const;

  constexpr int32_t& __cordl_internal_get___7__wrap3();

  constexpr ::System::Collections::Generic::IEnumerator_1<TResultKey>*& __cordl_internal_get___7__wrap4();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<TResultKey>*> const& __cordl_internal_get___7__wrap4() const;

  constexpr ::System::Runtime::CompilerServices::AsyncIteratorMethodBuilder const& __cordl_internal_get___t__builder() const;

  constexpr ::System::Runtime::CompilerServices::AsyncIteratorMethodBuilder& __cordl_internal_get___t__builder();

  constexpr ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<bool> const& __cordl_internal_get___u__1() const;

  constexpr ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<bool>& __cordl_internal_get___u__1();

  constexpr ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter const& __cordl_internal_get___u__2() const;

  constexpr ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter& __cordl_internal_get___u__2();

  constexpr ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<bool> const& __cordl_internal_get___v__promiseOfValueOrEnd() const;

  constexpr ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<bool>& __cordl_internal_get___v__promiseOfValueOrEnd();

  constexpr bool const& __cordl_internal_get___w__disposeMode() const;

  constexpr bool& __cordl_internal_get___w__disposeMode();

  constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

  constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(TResultKey value);

  constexpr void __cordl_internal_set___4__this(::Amazon::Runtime::PaginatedResultKeyResponse_2<TResponse, TResultKey>* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Runtime::CompilerServices::__ConfiguredCancelableAsyncEnumerable_1__Enumerator<TResponse> value);

  constexpr void __cordl_internal_set___7__wrap2(::System::Object* value);

  constexpr void __cordl_internal_set___7__wrap3(int32_t value);

  constexpr void __cordl_internal_set___7__wrap4(::System::Collections::Generic::IEnumerator_1<TResultKey>* value);

  constexpr void __cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncIteratorMethodBuilder value);

  constexpr void __cordl_internal_set___u__1(::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<bool> value);

  constexpr void __cordl_internal_set___u__2(::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter value);

  constexpr void __cordl_internal_set___v__promiseOfValueOrEnd(::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<bool> value);

  constexpr void __cordl_internal_set___w__disposeMode(bool value);

  constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IAsyncEnumerator_1<TResultKey>"
  constexpr ::System::Collections::Generic::IAsyncEnumerator_1<TResultKey>* i___System__Collections__Generic__IAsyncEnumerator_1_TResultKey_() noexcept;

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
  constexpr __PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3(__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3(__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>t__builder, offset: 0x18, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncIteratorMethodBuilder _____t__builder;

  /// @brief Field <>v__promiseOfValueOrEnd, offset: 0x38, size: 0x38, def value: None
  ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<bool> _____v__promiseOfValueOrEnd;

  /// @brief Field <>2__current, offset: 0x70, size: 0x8, def value: None
  TResultKey _____2__current;

  /// @brief Field <>w__disposeMode, offset: 0x78, size: 0x1, def value: None
  bool _____w__disposeMode;

  /// @brief Field <>4__this, offset: 0x80, size: 0x8, def value: None
  ::Amazon::Runtime::PaginatedResultKeyResponse_2<TResponse, TResultKey>* _____4__this;

  /// @brief Field cancellationToken, offset: 0x88, size: 0x8, def value: None
  ::System::Threading::CancellationToken ___cancellationToken;

  /// @brief Field <>7__wrap1, offset: 0x90, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredCancelableAsyncEnumerable_1__Enumerator<TResponse> _____7__wrap1;

  /// @brief Field <>7__wrap2, offset: 0xa0, size: 0x8, def value: None
  ::System::Object* _____7__wrap2;

  /// @brief Field <>7__wrap3, offset: 0xa8, size: 0x4, def value: None
  int32_t _____7__wrap3;

  /// @brief Field <>7__wrap4, offset: 0xb0, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<TResultKey>* _____7__wrap4;

  /// @brief Field <>u__1, offset: 0xb8, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<bool> _____u__1;

  /// @brief Field <>u__2, offset: 0xc8, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter _____u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime
// Type: Amazon.Runtime::PaginatedResultKeyResponse`2
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// cpp template
template <typename TResponse, typename TResultKey>
// Is value type: false
// CS Name: ::Amazon.Runtime::PaginatedResultKeyResponse`2<TResponse,TResultKey>*
class CORDL_TYPE PaginatedResultKeyResponse_2 : public ::System::Object {
public:
  // Declarations
  using _GetAsyncEnumerator_d__3 = ::Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>;

  /// @brief Field _paginator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__paginator, put = __cordl_internal_set__paginator))::Amazon::Runtime::IPaginator_1<TResponse>* _paginator;

  /// @brief Field _resultKeySelector, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__resultKeySelector,
                      put = __cordl_internal_set__resultKeySelector))::System::Func_2<TResponse, ::System::Collections::Generic::IEnumerable_1<TResultKey>*>* _resultKeySelector;

  /// @brief Convert operator to "::Amazon::Runtime::IPaginatedEnumerable_1<TResultKey>"
  constexpr operator ::Amazon::Runtime::IPaginatedEnumerable_1<TResultKey>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IAsyncEnumerable_1<TResultKey>"
  constexpr operator ::System::Collections::Generic::IAsyncEnumerable_1<TResultKey>*() noexcept;

  /// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IAsyncEnumerator_1<TResultKey>* GetAsyncEnumerator(::System::Threading::CancellationToken cancellationToken);

  static inline ::Amazon::Runtime::PaginatedResultKeyResponse_2<TResponse, TResultKey>*
  New_ctor(::Amazon::Runtime::IPaginator_1<TResponse>* paginator, ::System::Func_2<TResponse, ::System::Collections::Generic::IEnumerable_1<TResultKey>*>* resultKeySelector);

  constexpr ::Amazon::Runtime::IPaginator_1<TResponse>*& __cordl_internal_get__paginator();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::IPaginator_1<TResponse>*> const& __cordl_internal_get__paginator() const;

  constexpr ::System::Func_2<TResponse, ::System::Collections::Generic::IEnumerable_1<TResultKey>*>*& __cordl_internal_get__resultKeySelector();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TResponse, ::System::Collections::Generic::IEnumerable_1<TResultKey>*>*> const& __cordl_internal_get__resultKeySelector() const;

  constexpr void __cordl_internal_set__paginator(::Amazon::Runtime::IPaginator_1<TResponse>* value);

  constexpr void __cordl_internal_set__resultKeySelector(::System::Func_2<TResponse, ::System::Collections::Generic::IEnumerable_1<TResultKey>*>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::IPaginator_1<TResponse>* paginator, ::System::Func_2<TResponse, ::System::Collections::Generic::IEnumerable_1<TResultKey>*>* resultKeySelector);

  /// @brief Convert to "::Amazon::Runtime::IPaginatedEnumerable_1<TResultKey>"
  constexpr ::Amazon::Runtime::IPaginatedEnumerable_1<TResultKey>* i___Amazon__Runtime__IPaginatedEnumerable_1_TResultKey_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IAsyncEnumerable_1<TResultKey>"
  constexpr ::System::Collections::Generic::IAsyncEnumerable_1<TResultKey>* i___System__Collections__Generic__IAsyncEnumerable_1_TResultKey_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PaginatedResultKeyResponse_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PaginatedResultKeyResponse_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PaginatedResultKeyResponse_2(PaginatedResultKeyResponse_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PaginatedResultKeyResponse_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PaginatedResultKeyResponse_2(PaginatedResultKeyResponse_2 const&) = delete;

  /// @brief Field _paginator, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Runtime::IPaginator_1<TResponse>* ____paginator;

  /// @brief Field _resultKeySelector, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<TResponse, ::System::Collections::Generic::IEnumerable_1<TResultKey>*>* ____resultKeySelector;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Runtime::PaginatedResultKeyResponse_2, "Amazon.Runtime", "PaginatedResultKeyResponse`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3, "Amazon.Runtime", "PaginatedResultKeyResponse`2/<GetAsyncEnumerator>d__3");
