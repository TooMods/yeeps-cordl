#pragma once
#include "Amazon/Runtime/Internal/zzzz__StandardRetryPolicy_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__AdaptiveRetryPolicy_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__AdaptiveRetryPolicy_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__TokenBucket_def.hpp"
#include "Amazon/Runtime/zzzz__IClientConfig_def.hpp"
#include "Amazon/Runtime/zzzz__IExecutionContext_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::__AdaptiveRetryPolicy___ObtainSendTokenAsync_d__11.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::__AdaptiveRetryPolicy___ObtainSendTokenAsync_d__11::*)()>(
    &::Amazon::Runtime::Internal::__AdaptiveRetryPolicy___ObtainSendTokenAsync_d__11::MoveNext)> {
  constexpr static std::size_t size = 0x6f0;
  constexpr static std::size_t addrs = 0x23ebe24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__AdaptiveRetryPolicy___ObtainSendTokenAsync_d__11>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::__AdaptiveRetryPolicy___ObtainSendTokenAsync_d__11.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::__AdaptiveRetryPolicy___ObtainSendTokenAsync_d__11::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Amazon::Runtime::Internal::__AdaptiveRetryPolicy___ObtainSendTokenAsync_d__11::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23ec66c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__AdaptiveRetryPolicy___ObtainSendTokenAsync_d__11>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Amazon::Runtime::Internal::__AdaptiveRetryPolicy___ObtainSendTokenAsync_d__11::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Amazon::Runtime::Internal::__AdaptiveRetryPolicy___ObtainSendTokenAsync_d__11::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Amazon::Runtime::Internal::__AdaptiveRetryPolicy___ObtainSendTokenAsync_d__11::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__AdaptiveRetryPolicy___ObtainSendTokenAsync_d__11>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::__AdaptiveRetryPolicy___ObtainSendTokenAsync_d__11::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__AdaptiveRetryPolicy___ObtainSendTokenAsync_d__11>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Amazon::Runtime::Internal::AdaptiveRetryPolicy*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "executionContext", ty: "::Amazon::Runtime::IExecutionContext*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "exception", ty: "::System::Exception*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Runtime::Internal::__AdaptiveRetryPolicy___ObtainSendTokenAsync_d__11::__AdaptiveRetryPolicy___ObtainSendTokenAsync_d__11(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Amazon::Runtime::Internal::AdaptiveRetryPolicy* __4__this,
    ::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->executionContext = executionContext;
  this->exception = exception;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::__AdaptiveRetryPolicy___ObtainSendTokenAsync_d__11::__AdaptiveRetryPolicy___ObtainSendTokenAsync_d__11() {}
//  Writing Method size for method: ::Amazon::Runtime::Internal::AdaptiveRetryPolicy.get_TokenBucket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::TokenBucket* (::Amazon::Runtime::Internal::AdaptiveRetryPolicy::*)()>(
    &::Amazon::Runtime::Internal::AdaptiveRetryPolicy::get_TokenBucket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ea38c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AdaptiveRetryPolicy*>::get(),
                                                                               "get_TokenBucket", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::AdaptiveRetryPolicy.set_TokenBucket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::AdaptiveRetryPolicy::*)(::Amazon::Runtime::Internal::TokenBucket*)>(
    &::Amazon::Runtime::Internal::AdaptiveRetryPolicy::set_TokenBucket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ea394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AdaptiveRetryPolicy*>::get(), "set_TokenBucket", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::TokenBucket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::AdaptiveRetryPolicy._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::AdaptiveRetryPolicy::*)(int32_t)>(
    &::Amazon::Runtime::Internal::AdaptiveRetryPolicy::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x23ea39c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AdaptiveRetryPolicy*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::AdaptiveRetryPolicy._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::AdaptiveRetryPolicy::*)(::Amazon::Runtime::IClientConfig*)>(
    &::Amazon::Runtime::Internal::AdaptiveRetryPolicy::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x23ea4e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AdaptiveRetryPolicy*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::AdaptiveRetryPolicy.OnRetry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::AdaptiveRetryPolicy::*)(::Amazon::Runtime::IExecutionContext*, bool, bool)>(
    &::Amazon::Runtime::Internal::AdaptiveRetryPolicy::OnRetry)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x23ea7d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AdaptiveRetryPolicy*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AdaptiveRetryPolicy*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::AdaptiveRetryPolicy.ObtainSendToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::AdaptiveRetryPolicy::*)(
    ::Amazon::Runtime::IExecutionContext*, ::System::Exception*)>(&::Amazon::Runtime::Internal::AdaptiveRetryPolicy::ObtainSendToken)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x23ead74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AdaptiveRetryPolicy*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AdaptiveRetryPolicy*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::AdaptiveRetryPolicy.NotifySuccess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::AdaptiveRetryPolicy::*)(::Amazon::Runtime::IExecutionContext*)>(
    &::Amazon::Runtime::Internal::AdaptiveRetryPolicy::NotifySuccess)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x23eb1fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AdaptiveRetryPolicy*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AdaptiveRetryPolicy*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::AdaptiveRetryPolicy.RetryForExceptionAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (
    ::Amazon::Runtime::Internal::AdaptiveRetryPolicy::*)(::Amazon::Runtime::IExecutionContext*, ::System::Exception*)>(&::Amazon::Runtime::Internal::AdaptiveRetryPolicy::RetryForExceptionAsync)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x23eb528;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AdaptiveRetryPolicy*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AdaptiveRetryPolicy*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::AdaptiveRetryPolicy.WaitBeforeRetryAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Amazon::Runtime::Internal::AdaptiveRetryPolicy::*)(::Amazon::Runtime::IExecutionContext*)>(&::Amazon::Runtime::Internal::AdaptiveRetryPolicy::WaitBeforeRetryAsync)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x23eb8d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AdaptiveRetryPolicy*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AdaptiveRetryPolicy*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::AdaptiveRetryPolicy.ObtainSendTokenAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Amazon::Runtime::Internal::AdaptiveRetryPolicy::*)(::Amazon::Runtime::IExecutionContext*, ::System::Exception*)>(&::Amazon::Runtime::Internal::AdaptiveRetryPolicy::ObtainSendTokenAsync)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x23ebd0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AdaptiveRetryPolicy*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AdaptiveRetryPolicy*>::get(), 18));
    return ___internal_method;
  }
};
constexpr ::Amazon::Runtime::Internal::TokenBucket*& Amazon::Runtime::Internal::AdaptiveRetryPolicy::__cordl_internal_get__TokenBucket_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TokenBucket_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::TokenBucket*> const&
Amazon::Runtime::Internal::AdaptiveRetryPolicy::__cordl_internal_get__TokenBucket_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TokenBucket_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::AdaptiveRetryPolicy::__cordl_internal_set__TokenBucket_k__BackingField(::Amazon::Runtime::Internal::TokenBucket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____TokenBucket_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Runtime::Internal::TokenBucket* Amazon::Runtime::Internal::AdaptiveRetryPolicy::get_TokenBucket() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AdaptiveRetryPolicy*>::get(),
                                                                             "get_TokenBucket", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::TokenBucket*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::AdaptiveRetryPolicy::set_TokenBucket(::Amazon::Runtime::Internal::TokenBucket* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AdaptiveRetryPolicy*>::get(), "set_TokenBucket", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::TokenBucket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::Internal::AdaptiveRetryPolicy* Amazon::Runtime::Internal::AdaptiveRetryPolicy::New_ctor(int32_t maxRetries) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::AdaptiveRetryPolicy*>(maxRetries));
}
inline void Amazon::Runtime::Internal::AdaptiveRetryPolicy::_ctor(int32_t maxRetries) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AdaptiveRetryPolicy*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maxRetries);
}
inline ::Amazon::Runtime::Internal::AdaptiveRetryPolicy* Amazon::Runtime::Internal::AdaptiveRetryPolicy::New_ctor(::Amazon::Runtime::IClientConfig* config) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::AdaptiveRetryPolicy*>(config));
}
inline void Amazon::Runtime::Internal::AdaptiveRetryPolicy::_ctor(::Amazon::Runtime::IClientConfig* config) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AdaptiveRetryPolicy*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, config);
}
inline bool Amazon::Runtime::Internal::AdaptiveRetryPolicy::OnRetry(::Amazon::Runtime::IExecutionContext* executionContext, bool bypassAcquireCapacity, bool isThrottlingError) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AdaptiveRetryPolicy*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, executionContext, bypassAcquireCapacity, isThrottlingError);
}
inline void Amazon::Runtime::Internal::AdaptiveRetryPolicy::ObtainSendToken(::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AdaptiveRetryPolicy*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, executionContext, exception);
}
inline void Amazon::Runtime::Internal::AdaptiveRetryPolicy::NotifySuccess(::Amazon::Runtime::IExecutionContext* executionContext) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AdaptiveRetryPolicy*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, executionContext);
}
inline ::System::Threading::Tasks::Task_1<bool>* Amazon::Runtime::Internal::AdaptiveRetryPolicy::RetryForExceptionAsync(::Amazon::Runtime::IExecutionContext* executionContext,
                                                                                                                        ::System::Exception* exception) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AdaptiveRetryPolicy*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, executionContext, exception);
}
inline ::System::Threading::Tasks::Task* Amazon::Runtime::Internal::AdaptiveRetryPolicy::WaitBeforeRetryAsync(::Amazon::Runtime::IExecutionContext* executionContext) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AdaptiveRetryPolicy*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, executionContext);
}
inline ::System::Threading::Tasks::Task* Amazon::Runtime::Internal::AdaptiveRetryPolicy::ObtainSendTokenAsync(::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AdaptiveRetryPolicy*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, executionContext, exception);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::AdaptiveRetryPolicy::AdaptiveRetryPolicy() {}
