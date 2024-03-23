#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncRunner)
namespace Amazon::Runtime::Internal {
class __AsyncRunner____c__DisplayClass0_0;
}
namespace Amazon::Runtime::Internal {
template <typename T> class __AsyncRunner____c__DisplayClass1_0_1;
}
namespace Amazon::Runtime::Internal {
template <typename T> class __AsyncRunner____c__DisplayClass1_1_1;
}
namespace GlobalNamespace {
template <typename T> struct __AsyncRunner____c__DisplayClass1_0_1____Run_b__0_d;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
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
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading {
class SemaphoreSlim;
}
namespace System::Threading {
class Thread;
}
namespace System {
class Action;
}
namespace System {
class Exception;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class AsyncRunner;
}
namespace Amazon::Runtime::Internal {
class __AsyncRunner____c__DisplayClass0_0;
}
namespace Amazon::Runtime::Internal {
template <typename T> class __AsyncRunner____c__DisplayClass1_0_1;
}
namespace Amazon::Runtime::Internal {
template <typename T> class __AsyncRunner____c__DisplayClass1_1_1;
}
namespace GlobalNamespace {
template <typename T> struct __AsyncRunner____c__DisplayClass1_0_1____Run_b__0_d;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::AsyncRunner);
MARK_REF_PTR_T(::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass0_0);
MARK_GEN_REF_PTR_T(::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_0_1);
MARK_GEN_REF_PTR_T(::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_1_1);
MARK_GEN_VAL_T(::GlobalNamespace::__AsyncRunner____c__DisplayClass1_0_1____Run_b__0_d);
// Type: ::<>c__DisplayClass0_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::AsyncRunner::<>c__DisplayClass0_0*
class CORDL_TYPE __AsyncRunner____c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field action, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_action, put = __cordl_internal_set_action))::System::Action* action;

  static inline ::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass0_0* New_ctor();

  /// @brief Method <Run>b__0, addr 0x23dbdbc, size 0x2c, virtual false, abstract: false, final false
  inline ::System::Object* _Run_b__0();

  constexpr ::System::Action*& __cordl_internal_get_action();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_action() const;

  constexpr void __cordl_internal_set_action(::System::Action* value);

  /// @brief Method .ctor, addr 0x23dbdb4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncRunner____c__DisplayClass0_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AsyncRunner____c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AsyncRunner____c__DisplayClass0_0(__AsyncRunner____c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AsyncRunner____c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AsyncRunner____c__DisplayClass0_0(__AsyncRunner____c__DisplayClass0_0 const&) = delete;

  /// @brief Field action, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___action;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass0_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass0_0, ___action) == 0x10, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
// Type: ::<<Run>b__0>d
// SizeInfo { instance_size: 72, native_size: 88, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::AsyncRunner::<>c__DisplayClass1_0`1::<<Run>b__0>d<T>
struct CORDL_TYPE __AsyncRunner____c__DisplayClass1_0_1____Run_b__0_d {
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
  constexpr __AsyncRunner____c__DisplayClass1_0_1____Run_b__0_d();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_0_1<T>*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty:
  // "::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_1_1<T>*", modifiers: "", def_value: None }, CppParam { name: "_thread_5__2", ty: "::System::Threading::Thread*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __AsyncRunner____c__DisplayClass1_0_1____Run_b__0_d(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder,
                                                                ::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_0_1<T>* __4__this,
                                                                ::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_1_1<T>* __8__1, ::System::Threading::Thread* _thread_5__2,
                                                                ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_0_1<T>* __4__this;

  /// @brief Field <>8__1, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_1_1<T>* __8__1;

  /// @brief Field <thread>5__2, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::Thread* _thread_5__2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass1_0`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::AsyncRunner::<>c__DisplayClass1_0`1<T>*
class CORDL_TYPE __AsyncRunner____c__DisplayClass1_0_1 : public ::System::Object {
public:
  // Declarations
  using __Run_b__0_d = ::GlobalNamespace::__AsyncRunner____c__DisplayClass1_0_1____Run_b__0_d<T>;

  /// @brief Field action, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_action, put = __cordl_internal_set_action))::System::Func_1<T>* action;

  /// @brief Field cancellationToken, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_cancellationToken, put = __cordl_internal_set_cancellationToken))::System::Threading::CancellationToken cancellationToken;

  static inline ::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_0_1<T>* New_ctor();

  /// @brief Method <Run>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<T>* _Run_b__0();

  constexpr ::System::Func_1<T>*& __cordl_internal_get_action();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<T>*> const& __cordl_internal_get_action() const;

  constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

  constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken();

  constexpr void __cordl_internal_set_action(::System::Func_1<T>* value);

  constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncRunner____c__DisplayClass1_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AsyncRunner____c__DisplayClass1_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AsyncRunner____c__DisplayClass1_0_1(__AsyncRunner____c__DisplayClass1_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AsyncRunner____c__DisplayClass1_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AsyncRunner____c__DisplayClass1_0_1(__AsyncRunner____c__DisplayClass1_0_1 const&) = delete;

  /// @brief Field action, offset: 0x10, size: 0x8, def value: None
  ::System::Func_1<T>* ___action;

  /// @brief Field cancellationToken, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::CancellationToken ___cancellationToken;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal
// Type: ::<>c__DisplayClass1_1`1
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::AsyncRunner::<>c__DisplayClass1_1`1<T>*
class CORDL_TYPE __AsyncRunner____c__DisplayClass1_1_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals1, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1, put = __cordl_internal_set_CS$__8__locals1))::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_0_1<T>* CS$__8__locals1;

  /// @brief Field exception, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_exception, put = __cordl_internal_set_exception))::System::Exception* exception;

  /// @brief Field result, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_result, put = __cordl_internal_set_result)) T result;

  /// @brief Field semaphore, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_semaphore, put = __cordl_internal_set_semaphore))::System::Threading::SemaphoreSlim* semaphore;

  static inline ::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_1_1<T>* New_ctor();

  /// @brief Method <Run>b__1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _Run_b__1();

  constexpr ::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_0_1<T>*& __cordl_internal_get_CS$__8__locals1();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_0_1<T>*> const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr ::System::Exception*& __cordl_internal_get_exception();

  constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& __cordl_internal_get_exception() const;

  constexpr T const& __cordl_internal_get_result() const;

  constexpr T& __cordl_internal_get_result();

  constexpr ::System::Threading::SemaphoreSlim*& __cordl_internal_get_semaphore();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::SemaphoreSlim*> const& __cordl_internal_get_semaphore() const;

  constexpr void __cordl_internal_set_CS$__8__locals1(::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_0_1<T>* value);

  constexpr void __cordl_internal_set_exception(::System::Exception* value);

  constexpr void __cordl_internal_set_result(T value);

  constexpr void __cordl_internal_set_semaphore(::System::Threading::SemaphoreSlim* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncRunner____c__DisplayClass1_1_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AsyncRunner____c__DisplayClass1_1_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AsyncRunner____c__DisplayClass1_1_1(__AsyncRunner____c__DisplayClass1_1_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AsyncRunner____c__DisplayClass1_1_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AsyncRunner____c__DisplayClass1_1_1(__AsyncRunner____c__DisplayClass1_1_1 const&) = delete;

  /// @brief Field result, offset: 0x10, size: 0x8, def value: None
  T ___result;

  /// @brief Field exception, offset: 0x18, size: 0x8, def value: None
  ::System::Exception* ___exception;

  /// @brief Field semaphore, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::SemaphoreSlim* ___semaphore;

  /// @brief Field CS$<>8__locals1, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_0_1<T>* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal
// Type: Amazon.Runtime.Internal::AsyncRunner
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::AsyncRunner*
class CORDL_TYPE AsyncRunner : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass0_0 = ::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass0_0;

  template <typename T> using __c__DisplayClass1_0_1 = ::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_0_1<T>;

  template <typename T> using __c__DisplayClass1_1_1 = ::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_1_1<T>;

  /// @brief Method Run, addr 0x23dbce0, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* Run(::System::Action* action, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Run, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Threading::Tasks::Task_1<T>* Run(::System::Func_1<T>* action, ::System::Threading::CancellationToken cancellationToken);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncRunner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncRunner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncRunner(AsyncRunner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncRunner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncRunner(AsyncRunner const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::AsyncRunner, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::AsyncRunner);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::AsyncRunner*, "Amazon.Runtime.Internal", "AsyncRunner");
NEED_NO_BOX(::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass0_0*, "Amazon.Runtime.Internal", "AsyncRunner/<>c__DisplayClass0_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_0_1, "Amazon.Runtime.Internal", "AsyncRunner/<>c__DisplayClass1_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_1_1, "Amazon.Runtime.Internal", "AsyncRunner/<>c__DisplayClass1_1`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__AsyncRunner____c__DisplayClass1_0_1____Run_b__0_d, "Amazon.Runtime.Internal", "AsyncRunner/<>c__DisplayClass1_0`1/<<Run>b__0>d");
