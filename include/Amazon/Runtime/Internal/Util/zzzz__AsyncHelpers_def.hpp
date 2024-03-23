#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncHelpers)
namespace Amazon::Runtime::Internal::Util {
class __AsyncHelpers__ExclusiveSynchronizationContext;
}
namespace Amazon::Runtime::Internal::Util {
class __AsyncHelpers____c__DisplayClass0_0;
}
namespace Amazon::Runtime::Internal::Util {
template <typename T> class __AsyncHelpers____c__DisplayClass1_0_1;
}
namespace GlobalNamespace {
struct __AsyncHelpers____c__DisplayClass0_0____RunSync_b__0_d;
}
namespace GlobalNamespace {
template <typename T> struct __AsyncHelpers____c__DisplayClass1_0_1____RunSync_b__0_d;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
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
namespace System::Threading {
class AutoResetEvent;
}
namespace System::Threading {
class SendOrPostCallback;
}
namespace System::Threading {
class SynchronizationContext;
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
namespace System {
template <typename T1, typename T2> class Tuple_2;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class AsyncHelpers;
}
namespace Amazon::Runtime::Internal::Util {
class __AsyncHelpers__ExclusiveSynchronizationContext;
}
namespace Amazon::Runtime::Internal::Util {
class __AsyncHelpers____c__DisplayClass0_0;
}
namespace Amazon::Runtime::Internal::Util {
template <typename T> class __AsyncHelpers____c__DisplayClass1_0_1;
}
namespace GlobalNamespace {
struct __AsyncHelpers____c__DisplayClass0_0____RunSync_b__0_d;
}
namespace GlobalNamespace {
template <typename T> struct __AsyncHelpers____c__DisplayClass1_0_1____RunSync_b__0_d;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::AsyncHelpers);
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext);
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass0_0);
MARK_GEN_REF_PTR_T(::Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass1_0_1);
MARK_VAL_T(::GlobalNamespace::__AsyncHelpers____c__DisplayClass0_0____RunSync_b__0_d);
MARK_GEN_VAL_T(::GlobalNamespace::__AsyncHelpers____c__DisplayClass1_0_1____RunSync_b__0_d);
// Type: ::ExclusiveSynchronizationContext
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::AsyncHelpers::ExclusiveSynchronizationContext*
class CORDL_TYPE __AsyncHelpers__ExclusiveSynchronizationContext : public ::System::Threading::SynchronizationContext {
public:
  // Declarations
  __declspec(property(get = get_ObjectException, put = set_ObjectException))::System::Exception* ObjectException;

  /// @brief Field <ObjectException>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__ObjectException_k__BackingField, put = __cordl_internal_set__ObjectException_k__BackingField))::System::Exception* _ObjectException_k__BackingField;

  /// @brief Field done, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_done, put = __cordl_internal_set_done)) bool done;

  /// @brief Field objects, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_objects,
                      put = __cordl_internal_set_objects))::System::Collections::Generic::Queue_1<::System::Tuple_2<::System::Threading::SendOrPostCallback*, ::System::Object*>*>* objects;

  /// @brief Field pendingObjects, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_pendingObjects, put = __cordl_internal_set_pendingObjects))::System::Threading::AutoResetEvent* pendingObjects;

  /// @brief Method BeginMessageLoop, addr 0x244828c, size 0x1cc, virtual false, abstract: false, final false
  inline void BeginMessageLoop();

  /// @brief Method CreateCopy, addr 0x2448688, size 0x4, virtual true, abstract: false, final false
  inline ::System::Threading::SynchronizationContext* CreateCopy();

  /// @brief Method EndMessageLoop, addr 0x24485fc, size 0x8c, virtual false, abstract: false, final false
  inline void EndMessageLoop();

  static inline ::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext* New_ctor();

  /// @brief Method Post, addr 0x24484b8, size 0x144, virtual true, abstract: false, final false
  inline void Post(::System::Threading::SendOrPostCallback* d, ::System::Object* state);

  /// @brief Method Send, addr 0x2448468, size 0x50, virtual true, abstract: false, final false
  inline void Send(::System::Threading::SendOrPostCallback* d, ::System::Object* state);

  /// @brief Method <EndMessageLoop>b__9_0, addr 0x244868c, size 0xc, virtual false, abstract: false, final false
  inline void _EndMessageLoop_b__9_0(::System::Object* _);

  constexpr ::System::Exception*& __cordl_internal_get__ObjectException_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& __cordl_internal_get__ObjectException_k__BackingField() const;

  constexpr bool const& __cordl_internal_get_done() const;

  constexpr bool& __cordl_internal_get_done();

  constexpr ::System::Collections::Generic::Queue_1<::System::Tuple_2<::System::Threading::SendOrPostCallback*, ::System::Object*>*>*& __cordl_internal_get_objects();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::System::Tuple_2<::System::Threading::SendOrPostCallback*, ::System::Object*>*>*> const&
  __cordl_internal_get_objects() const;

  constexpr ::System::Threading::AutoResetEvent*& __cordl_internal_get_pendingObjects();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::AutoResetEvent*> const& __cordl_internal_get_pendingObjects() const;

  constexpr void __cordl_internal_set__ObjectException_k__BackingField(::System::Exception* value);

  constexpr void __cordl_internal_set_done(bool value);

  constexpr void __cordl_internal_set_objects(::System::Collections::Generic::Queue_1<::System::Tuple_2<::System::Threading::SendOrPostCallback*, ::System::Object*>*>* value);

  constexpr void __cordl_internal_set_pendingObjects(::System::Threading::AutoResetEvent* value);

  /// @brief Method .ctor, addr 0x24481dc, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ObjectException, addr 0x2448458, size 0x8, virtual false, abstract: false, final false
  inline ::System::Exception* get_ObjectException();

  /// @brief Method set_ObjectException, addr 0x2448460, size 0x8, virtual false, abstract: false, final false
  inline void set_ObjectException(::System::Exception* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncHelpers__ExclusiveSynchronizationContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AsyncHelpers__ExclusiveSynchronizationContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AsyncHelpers__ExclusiveSynchronizationContext(__AsyncHelpers__ExclusiveSynchronizationContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AsyncHelpers__ExclusiveSynchronizationContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AsyncHelpers__ExclusiveSynchronizationContext(__AsyncHelpers__ExclusiveSynchronizationContext const&) = delete;

  /// @brief Field done, offset: 0x14, size: 0x1, def value: None
  bool ___done;

  /// @brief Field <ObjectException>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Exception* ____ObjectException_k__BackingField;

  /// @brief Field pendingObjects, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::AutoResetEvent* ___pendingObjects;

  /// @brief Field objects, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::System::Tuple_2<::System::Threading::SendOrPostCallback*, ::System::Object*>*>* ___objects;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext, ___done) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext, ____ObjectException_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext, ___pendingObjects) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext, ___objects) == 0x28, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
// Type: ::<<RunSync>b__0>d
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AsyncHelpers::<>c__DisplayClass0_0::<<RunSync>b__0>d
struct CORDL_TYPE __AsyncHelpers____c__DisplayClass0_0____RunSync_b__0_d {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x244874c, size 0x310, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2448a5c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncHelpers____c__DisplayClass0_0____RunSync_b__0_d();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass0_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __AsyncHelpers____c__DisplayClass0_0____RunSync_b__0_d(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                   ::Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass0_0* __4__this,
                                                                   ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass0_0* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AsyncHelpers____c__DisplayClass0_0____RunSync_b__0_d, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AsyncHelpers____c__DisplayClass0_0____RunSync_b__0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AsyncHelpers____c__DisplayClass0_0____RunSync_b__0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AsyncHelpers____c__DisplayClass0_0____RunSync_b__0_d, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AsyncHelpers____c__DisplayClass0_0____RunSync_b__0_d, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass0_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::AsyncHelpers::<>c__DisplayClass0_0*
class CORDL_TYPE __AsyncHelpers____c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  using __RunSync_b__0_d = ::GlobalNamespace::__AsyncHelpers____c__DisplayClass0_0____RunSync_b__0_d;

  /// @brief Field synch, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_synch, put = __cordl_internal_set_synch))::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext* synch;

  /// @brief Field workItem, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_workItem, put = __cordl_internal_set_workItem))::System::Func_1<::System::Threading::Tasks::Task*>* workItem;

  static inline ::Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass0_0* New_ctor();

  /// @brief Method <RunSync>b__0, addr 0x2448698, size 0xb4, virtual false, abstract: false, final false
  inline void _RunSync_b__0(::System::Object* _);

  constexpr ::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext*& __cordl_internal_get_synch();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext*> const& __cordl_internal_get_synch() const;

  constexpr ::System::Func_1<::System::Threading::Tasks::Task*>*& __cordl_internal_get_workItem();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::System::Threading::Tasks::Task*>*> const& __cordl_internal_get_workItem() const;

  constexpr void __cordl_internal_set_synch(::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext* value);

  constexpr void __cordl_internal_set_workItem(::System::Func_1<::System::Threading::Tasks::Task*>* value);

  /// @brief Method .ctor, addr 0x24481d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncHelpers____c__DisplayClass0_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AsyncHelpers____c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AsyncHelpers____c__DisplayClass0_0(__AsyncHelpers____c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AsyncHelpers____c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AsyncHelpers____c__DisplayClass0_0(__AsyncHelpers____c__DisplayClass0_0 const&) = delete;

  /// @brief Field workItem, offset: 0x10, size: 0x8, def value: None
  ::System::Func_1<::System::Threading::Tasks::Task*>* ___workItem;

  /// @brief Field synch, offset: 0x18, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext* ___synch;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass0_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass0_0, ___workItem) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass0_0, ___synch) == 0x18, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
// Type: ::<<RunSync>b__0>d
// SizeInfo { instance_size: 64, native_size: 80, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::AsyncHelpers::<>c__DisplayClass1_0`1::<<RunSync>b__0>d<T>
struct CORDL_TYPE __AsyncHelpers____c__DisplayClass1_0_1____RunSync_b__0_d {
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
  constexpr __AsyncHelpers____c__DisplayClass1_0_1____RunSync_b__0_d();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass1_0_1<T>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<T>", modifiers: "", def_value: None }]
  constexpr __AsyncHelpers____c__DisplayClass1_0_1____RunSync_b__0_d(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                     ::Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass1_0_1<T>* __4__this,
                                                                     ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<T> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass1_0_1<T>* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<T> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass1_0`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::AsyncHelpers::<>c__DisplayClass1_0`1<T>*
class CORDL_TYPE __AsyncHelpers____c__DisplayClass1_0_1 : public ::System::Object {
public:
  // Declarations
  using __RunSync_b__0_d = ::GlobalNamespace::__AsyncHelpers____c__DisplayClass1_0_1____RunSync_b__0_d<T>;

  /// @brief Field ret, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ret, put = __cordl_internal_set_ret)) T ret;

  /// @brief Field synch, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_synch, put = __cordl_internal_set_synch))::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext* synch;

  /// @brief Field workItem, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_workItem, put = __cordl_internal_set_workItem))::System::Func_1<::System::Threading::Tasks::Task_1<T>*>* workItem;

  static inline ::Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass1_0_1<T>* New_ctor();

  /// @brief Method <RunSync>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _RunSync_b__0(::System::Object* _);

  constexpr T const& __cordl_internal_get_ret() const;

  constexpr T& __cordl_internal_get_ret();

  constexpr ::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext*& __cordl_internal_get_synch();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext*> const& __cordl_internal_get_synch() const;

  constexpr ::System::Func_1<::System::Threading::Tasks::Task_1<T>*>*& __cordl_internal_get_workItem();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::System::Threading::Tasks::Task_1<T>*>*> const& __cordl_internal_get_workItem() const;

  constexpr void __cordl_internal_set_ret(T value);

  constexpr void __cordl_internal_set_synch(::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext* value);

  constexpr void __cordl_internal_set_workItem(::System::Func_1<::System::Threading::Tasks::Task_1<T>*>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncHelpers____c__DisplayClass1_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AsyncHelpers____c__DisplayClass1_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AsyncHelpers____c__DisplayClass1_0_1(__AsyncHelpers____c__DisplayClass1_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AsyncHelpers____c__DisplayClass1_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AsyncHelpers____c__DisplayClass1_0_1(__AsyncHelpers____c__DisplayClass1_0_1 const&) = delete;

  /// @brief Field workItem, offset: 0x10, size: 0x8, def value: None
  ::System::Func_1<::System::Threading::Tasks::Task_1<T>*>* ___workItem;

  /// @brief Field ret, offset: 0x18, size: 0x8, def value: None
  T ___ret;

  /// @brief Field synch, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext* ___synch;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal::Util
// Type: Amazon.Runtime.Internal.Util::AsyncHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::AsyncHelpers*
class CORDL_TYPE AsyncHelpers : public ::System::Object {
public:
  // Declarations
  using ExclusiveSynchronizationContext = ::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext;

  using __c__DisplayClass0_0 = ::Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass0_0;

  template <typename T> using __c__DisplayClass1_0_1 = ::Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass1_0_1<T>;

  /// @brief Method RunSync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T RunSync(::System::Func_1<::System::Threading::Tasks::Task_1<T>*>* workItem);

  /// @brief Method RunSync, addr 0x2448010, size 0x1c4, virtual false, abstract: false, final false
  static inline void RunSync(::System::Func_1<::System::Threading::Tasks::Task*>* workItem);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncHelpers(AsyncHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncHelpers(AsyncHelpers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::AsyncHelpers, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::AsyncHelpers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::AsyncHelpers*, "Amazon.Runtime.Internal.Util", "AsyncHelpers");
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::__AsyncHelpers__ExclusiveSynchronizationContext*, "Amazon.Runtime.Internal.Util", "AsyncHelpers/ExclusiveSynchronizationContext");
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass0_0*, "Amazon.Runtime.Internal.Util", "AsyncHelpers/<>c__DisplayClass0_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Runtime::Internal::Util::__AsyncHelpers____c__DisplayClass1_0_1, "Amazon.Runtime.Internal.Util", "AsyncHelpers/<>c__DisplayClass1_0`1");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AsyncHelpers____c__DisplayClass0_0____RunSync_b__0_d, "Amazon.Runtime.Internal.Util", "AsyncHelpers/<>c__DisplayClass0_0/<<RunSync>b__0>d");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__AsyncHelpers____c__DisplayClass1_0_1____RunSync_b__0_d, "Amazon.Runtime.Internal.Util",
                                      "AsyncHelpers/<>c__DisplayClass1_0`1/<<RunSync>b__0>d");
