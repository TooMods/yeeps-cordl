#pragma once
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__AsyncRunner_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__AsyncRunner_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/zzzz__SemaphoreSlim_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass0_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass0_0::*)()>(
    &::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dbdb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass0_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass0_0._Run_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass0_0::*)()>(
    &::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass0_0::_Run_b__0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23dbdbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass0_0*>::get(), "<Run>b__0",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Action*& Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass0_0::__cordl_internal_get_action() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___action;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass0_0::__cordl_internal_get_action() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___action;
}
constexpr void Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass0_0::__cordl_internal_set_action(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___action)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass0_0* Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass0_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass0_0*>());
}
inline void Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass0_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass0_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass0_0::_Run_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass0_0*>::get(), "<Run>b__0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass0_0::__AsyncRunner____c__DisplayClass0_0() {}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T> constexpr GlobalNamespace::__AsyncRunner____c__DisplayClass1_0_1____Run_b__0_d<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__AsyncRunner____c__DisplayClass1_0_1____Run_b__0_d<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename T> inline void GlobalNamespace::__AsyncRunner____c__DisplayClass1_0_1____Run_b__0_d<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AsyncRunner____c__DisplayClass1_0_1____Run_b__0_d<T>>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__AsyncRunner____c__DisplayClass1_0_1____Run_b__0_d<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AsyncRunner____c__DisplayClass1_0_1____Run_b__0_d<T>>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_0_1<T>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__8__1", ty:
// "::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_1_1<T>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_thread_5__2", ty: "::System::Threading::Thread*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value:
// Some("{}") }]
template <typename T>
constexpr ::GlobalNamespace::__AsyncRunner____c__DisplayClass1_0_1____Run_b__0_d<T>::__AsyncRunner____c__DisplayClass1_0_1____Run_b__0_d(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder, ::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_0_1<T>* __4__this,
    ::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_1_1<T>* __8__1, ::System::Threading::Thread* _thread_5__2,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__8__1 = __8__1;
  this->_thread_5__2 = _thread_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::__AsyncRunner____c__DisplayClass1_0_1____Run_b__0_d<T>::__AsyncRunner____c__DisplayClass1_0_1____Run_b__0_d() {}
template <typename T> constexpr ::System::Func_1<T>*& Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_0_1<T>::__cordl_internal_get_action() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___action;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<T>*> const& Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_0_1<T>::__cordl_internal_get_action() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___action;
}
template <typename T> constexpr void Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_0_1<T>::__cordl_internal_set_action(::System::Func_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___action)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Threading::CancellationToken& Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_0_1<T>::__cordl_internal_get_cancellationToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancellationToken;
}
template <typename T> constexpr ::System::Threading::CancellationToken const& Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_0_1<T>::__cordl_internal_get_cancellationToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancellationToken;
}
template <typename T> constexpr void Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_0_1<T>::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cancellationToken = value;
}
template <typename T> inline ::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_0_1<T>* Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_0_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_0_1<T>*>());
}
template <typename T> inline void Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_0_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_0_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::System::Threading::Tasks::Task_1<T>* Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_0_1<T>::_Run_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_0_1<T>*>::get(), "<Run>b__0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_0_1<T>::__AsyncRunner____c__DisplayClass1_0_1() {}
template <typename T> constexpr T& Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_1_1<T>::__cordl_internal_get_result() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___result;
}
template <typename T> constexpr T const& Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_1_1<T>::__cordl_internal_get_result() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___result;
}
template <typename T> constexpr void Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_1_1<T>::__cordl_internal_set_result(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___result)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Exception*& Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_1_1<T>::__cordl_internal_get_exception() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exception;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_1_1<T>::__cordl_internal_get_exception() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exception;
}
template <typename T> constexpr void Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_1_1<T>::__cordl_internal_set_exception(::System::Exception* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___exception)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Threading::SemaphoreSlim*& Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_1_1<T>::__cordl_internal_get_semaphore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___semaphore;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::SemaphoreSlim*> const& Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_1_1<T>::__cordl_internal_get_semaphore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___semaphore;
}
template <typename T> constexpr void Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_1_1<T>::__cordl_internal_set_semaphore(::System::Threading::SemaphoreSlim* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___semaphore)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_0_1<T>*& Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_1_1<T>::__cordl_internal_get_CS$__8__locals1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_0_1<T>*> const&
Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_1_1<T>::__cordl_internal_get_CS$__8__locals1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
template <typename T>
constexpr void Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_1_1<T>::__cordl_internal_set_CS$__8__locals1(::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_0_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CS$__8__locals1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_1_1<T>* Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_1_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_1_1<T>*>());
}
template <typename T> inline void Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_1_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_1_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_1_1<T>::_Run_b__1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_1_1<T>*>::get(), "<Run>b__1",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::Amazon::Runtime::Internal::__AsyncRunner____c__DisplayClass1_1_1<T>::__AsyncRunner____c__DisplayClass1_1_1() {}
//  Writing Method size for method: ::Amazon::Runtime::Internal::AsyncRunner.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (*)(::System::Action*, ::System::Threading::CancellationToken)>(
    &::Amazon::Runtime::Internal::AsyncRunner::Run)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x23dbce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AsyncRunner*>::get(), "Run", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task* Amazon::Runtime::Internal::AsyncRunner::Run(::System::Action* action, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AsyncRunner*>::get(), "Run", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(nullptr, ___internal_method, action, cancellationToken);
}
template <typename T> inline ::System::Threading::Tasks::Task_1<T>* Amazon::Runtime::Internal::AsyncRunner::Run(::System::Func_1<T>* action, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AsyncRunner*>::get(), "Run",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(nullptr, ___internal_method, action, cancellationToken);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::AsyncRunner::AsyncRunner() {}
