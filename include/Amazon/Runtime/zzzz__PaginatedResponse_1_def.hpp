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
CORDL_MODULE_EXPORT(PaginatedResponse_1)
namespace Amazon::Runtime {
template <typename TResult> class IPaginatedEnumerable_1;
}
namespace Amazon::Runtime {
template <typename TResponse> class IPaginator_1;
}
namespace Amazon::Runtime {
template <typename TResponse> class __PaginatedResponse_1___GetAsyncEnumerator_d__2;
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
namespace Amazon::Runtime {
template <typename TResponse> class PaginatedResponse_1;
}
namespace Amazon::Runtime {
template <typename TResponse> class __PaginatedResponse_1___GetAsyncEnumerator_d__2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::Runtime::PaginatedResponse_1);
MARK_GEN_REF_PTR_T(::Amazon::Runtime::__PaginatedResponse_1___GetAsyncEnumerator_d__2);
// Type: ::<GetAsyncEnumerator>d__2
// SizeInfo { instance_size: 208, native_size: 208, calculated_instance_size: 208, calculated_native_size: 208, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// cpp template
template <typename TResponse>
// Is value type: false
// CS Name: ::PaginatedResponse`1::<GetAsyncEnumerator>d__2<TResponse>*
class CORDL_TYPE __PaginatedResponse_1___GetAsyncEnumerator_d__2 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IAsyncEnumerator_TResponse__get_Current)) TResponse System_Collections_Generic_IAsyncEnumerator_TResponse__Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) TResponse __2__current;

  /// @brief Field <>4__this, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Amazon::Runtime::PaginatedResponse_1<TResponse>* __4__this;

  /// @brief Field <>7__wrap1, offset 0x90, size 0x10
  __declspec(property(get = __cordl_internal_get___7__wrap1,
                      put = __cordl_internal_set___7__wrap1))::System::Runtime::CompilerServices::__ConfiguredCancelableAsyncEnumerable_1__Enumerator<TResponse> __7__wrap1;

  /// @brief Field <>7__wrap2, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap2, put = __cordl_internal_set___7__wrap2))::System::Object* __7__wrap2;

  /// @brief Field <>7__wrap3, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get___7__wrap3, put = __cordl_internal_set___7__wrap3)) int32_t __7__wrap3;

  /// @brief Field <>t__builder, offset 0x18, size 0x20
  __declspec(property(get = __cordl_internal_get___t__builder, put = __cordl_internal_set___t__builder))::System::Runtime::CompilerServices::AsyncIteratorMethodBuilder __t__builder;

  /// @brief Field <>u__1, offset 0xb0, size 0x10
  __declspec(property(get = __cordl_internal_get___u__1,
                      put = __cordl_internal_set___u__1))::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<bool> __u__1;

  /// @brief Field <>u__2, offset 0xc0, size 0x10
  __declspec(property(get = __cordl_internal_get___u__2, put = __cordl_internal_set___u__2))::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __u__2;

  /// @brief Field <>v__promiseOfValueOrEnd, offset 0x38, size 0x38
  __declspec(property(get = __cordl_internal_get___v__promiseOfValueOrEnd,
                      put = __cordl_internal_set___v__promiseOfValueOrEnd))::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<bool> __v__promiseOfValueOrEnd;

  /// @brief Field <>w__disposeMode, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get___w__disposeMode, put = __cordl_internal_set___w__disposeMode)) bool __w__disposeMode;

  /// @brief Field cancellationToken, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_cancellationToken, put = __cordl_internal_set_cancellationToken))::System::Threading::CancellationToken cancellationToken;

  /// @brief Convert operator to "::System::Collections::Generic::IAsyncEnumerator_1<TResponse>"
  constexpr operator ::System::Collections::Generic::IAsyncEnumerator_1<TResponse>*() noexcept;

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

  static inline ::Amazon::Runtime::__PaginatedResponse_1___GetAsyncEnumerator_d__2<TResponse>* New_ctor(int32_t __1__state);

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Method System.Collections.Generic.IAsyncEnumerator<TResponse>.MoveNextAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::ValueTask_1<bool> System_Collections_Generic_IAsyncEnumerator_TResponse__MoveNextAsync();

  /// @brief Method System.Collections.Generic.IAsyncEnumerator<TResponse>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TResponse System_Collections_Generic_IAsyncEnumerator_TResponse__get_Current();

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

  constexpr TResponse const& __cordl_internal_get___2__current() const;

  constexpr TResponse& __cordl_internal_get___2__current();

  constexpr ::Amazon::Runtime::PaginatedResponse_1<TResponse>*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::PaginatedResponse_1<TResponse>*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Runtime::CompilerServices::__ConfiguredCancelableAsyncEnumerable_1__Enumerator<TResponse> const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Runtime::CompilerServices::__ConfiguredCancelableAsyncEnumerable_1__Enumerator<TResponse>& __cordl_internal_get___7__wrap1();

  constexpr ::System::Object*& __cordl_internal_get___7__wrap2();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___7__wrap2() const;

  constexpr int32_t const& __cordl_internal_get___7__wrap3() const;

  constexpr int32_t& __cordl_internal_get___7__wrap3();

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

  constexpr void __cordl_internal_set___2__current(TResponse value);

  constexpr void __cordl_internal_set___4__this(::Amazon::Runtime::PaginatedResponse_1<TResponse>* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Runtime::CompilerServices::__ConfiguredCancelableAsyncEnumerable_1__Enumerator<TResponse> value);

  constexpr void __cordl_internal_set___7__wrap2(::System::Object* value);

  constexpr void __cordl_internal_set___7__wrap3(int32_t value);

  constexpr void __cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncIteratorMethodBuilder value);

  constexpr void __cordl_internal_set___u__1(::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<bool> value);

  constexpr void __cordl_internal_set___u__2(::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter value);

  constexpr void __cordl_internal_set___v__promiseOfValueOrEnd(::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<bool> value);

  constexpr void __cordl_internal_set___w__disposeMode(bool value);

  constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IAsyncEnumerator_1<TResponse>"
  constexpr ::System::Collections::Generic::IAsyncEnumerator_1<TResponse>* i___System__Collections__Generic__IAsyncEnumerator_1_TResponse_() noexcept;

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
  constexpr __PaginatedResponse_1___GetAsyncEnumerator_d__2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PaginatedResponse_1___GetAsyncEnumerator_d__2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PaginatedResponse_1___GetAsyncEnumerator_d__2(__PaginatedResponse_1___GetAsyncEnumerator_d__2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PaginatedResponse_1___GetAsyncEnumerator_d__2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PaginatedResponse_1___GetAsyncEnumerator_d__2(__PaginatedResponse_1___GetAsyncEnumerator_d__2 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>t__builder, offset: 0x18, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncIteratorMethodBuilder _____t__builder;

  /// @brief Field <>v__promiseOfValueOrEnd, offset: 0x38, size: 0x38, def value: None
  ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<bool> _____v__promiseOfValueOrEnd;

  /// @brief Field <>2__current, offset: 0x70, size: 0x8, def value: None
  TResponse _____2__current;

  /// @brief Field <>w__disposeMode, offset: 0x78, size: 0x1, def value: None
  bool _____w__disposeMode;

  /// @brief Field <>4__this, offset: 0x80, size: 0x8, def value: None
  ::Amazon::Runtime::PaginatedResponse_1<TResponse>* _____4__this;

  /// @brief Field cancellationToken, offset: 0x88, size: 0x8, def value: None
  ::System::Threading::CancellationToken ___cancellationToken;

  /// @brief Field <>7__wrap1, offset: 0x90, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredCancelableAsyncEnumerable_1__Enumerator<TResponse> _____7__wrap1;

  /// @brief Field <>7__wrap2, offset: 0xa0, size: 0x8, def value: None
  ::System::Object* _____7__wrap2;

  /// @brief Field <>7__wrap3, offset: 0xa8, size: 0x4, def value: None
  int32_t _____7__wrap3;

  /// @brief Field <>u__1, offset: 0xb0, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<bool> _____u__1;

  /// @brief Field <>u__2, offset: 0xc0, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter _____u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime
// Type: Amazon.Runtime::PaginatedResponse`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// cpp template
template <typename TResponse>
// Is value type: false
// CS Name: ::Amazon.Runtime::PaginatedResponse`1<TResponse>*
class CORDL_TYPE PaginatedResponse_1 : public ::System::Object {
public:
  // Declarations
  using _GetAsyncEnumerator_d__2 = ::Amazon::Runtime::__PaginatedResponse_1___GetAsyncEnumerator_d__2<TResponse>;

  /// @brief Field _paginator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__paginator, put = __cordl_internal_set__paginator))::Amazon::Runtime::IPaginator_1<TResponse>* _paginator;

  /// @brief Convert operator to "::Amazon::Runtime::IPaginatedEnumerable_1<TResponse>"
  constexpr operator ::Amazon::Runtime::IPaginatedEnumerable_1<TResponse>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IAsyncEnumerable_1<TResponse>"
  constexpr operator ::System::Collections::Generic::IAsyncEnumerable_1<TResponse>*() noexcept;

  /// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IAsyncEnumerator_1<TResponse>* GetAsyncEnumerator(::System::Threading::CancellationToken cancellationToken);

  static inline ::Amazon::Runtime::PaginatedResponse_1<TResponse>* New_ctor(::Amazon::Runtime::IPaginator_1<TResponse>* paginator);

  constexpr ::Amazon::Runtime::IPaginator_1<TResponse>*& __cordl_internal_get__paginator();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::IPaginator_1<TResponse>*> const& __cordl_internal_get__paginator() const;

  constexpr void __cordl_internal_set__paginator(::Amazon::Runtime::IPaginator_1<TResponse>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::IPaginator_1<TResponse>* paginator);

  /// @brief Convert to "::Amazon::Runtime::IPaginatedEnumerable_1<TResponse>"
  constexpr ::Amazon::Runtime::IPaginatedEnumerable_1<TResponse>* i___Amazon__Runtime__IPaginatedEnumerable_1_TResponse_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IAsyncEnumerable_1<TResponse>"
  constexpr ::System::Collections::Generic::IAsyncEnumerable_1<TResponse>* i___System__Collections__Generic__IAsyncEnumerable_1_TResponse_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PaginatedResponse_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PaginatedResponse_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PaginatedResponse_1(PaginatedResponse_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PaginatedResponse_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PaginatedResponse_1(PaginatedResponse_1 const&) = delete;

  /// @brief Field _paginator, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Runtime::IPaginator_1<TResponse>* ____paginator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Runtime::PaginatedResponse_1, "Amazon.Runtime", "PaginatedResponse`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Runtime::__PaginatedResponse_1___GetAsyncEnumerator_d__2, "Amazon.Runtime", "PaginatedResponse`1/<GetAsyncEnumerator>d__2");
