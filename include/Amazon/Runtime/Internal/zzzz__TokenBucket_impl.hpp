#pragma once
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__TokenBucket_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__TokenBucket_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::__TokenBucket___TryAcquireTokenAsync_d__55.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::__TokenBucket___TryAcquireTokenAsync_d__55::*)()>(
    &::Amazon::Runtime::Internal::__TokenBucket___TryAcquireTokenAsync_d__55::MoveNext)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x23f1a30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__TokenBucket___TryAcquireTokenAsync_d__55>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::__TokenBucket___TryAcquireTokenAsync_d__55.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::__TokenBucket___TryAcquireTokenAsync_d__55::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Amazon::Runtime::Internal::__TokenBucket___TryAcquireTokenAsync_d__55::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f1ca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__TokenBucket___TryAcquireTokenAsync_d__55>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Amazon::Runtime::Internal::__TokenBucket___TryAcquireTokenAsync_d__55::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Amazon::Runtime::Internal::__TokenBucket___TryAcquireTokenAsync_d__55::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Amazon::Runtime::Internal::__TokenBucket___TryAcquireTokenAsync_d__55::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__TokenBucket___TryAcquireTokenAsync_d__55>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::__TokenBucket___TryAcquireTokenAsync_d__55::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__TokenBucket___TryAcquireTokenAsync_d__55>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Amazon::Runtime::Internal::TokenBucket*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "amount", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "failFast", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_attempt_5__2", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Runtime::Internal::__TokenBucket___TryAcquireTokenAsync_d__55::__TokenBucket___TryAcquireTokenAsync_d__55(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::Amazon::Runtime::Internal::TokenBucket* __4__this, double_t amount, bool failFast,
    ::System::Threading::CancellationToken cancellationToken, int32_t _attempt_5__2, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->amount = amount;
  this->failFast = failFast;
  this->cancellationToken = cancellationToken;
  this->_attempt_5__2 = _attempt_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::__TokenBucket___TryAcquireTokenAsync_d__55::__TokenBucket___TryAcquireTokenAsync_d__55() {}
//  Writing Method size for method: ::Amazon::Runtime::Internal::__TokenBucket___WaitForTokenAsync_d__67.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::__TokenBucket___WaitForTokenAsync_d__67::*)()>(
    &::Amazon::Runtime::Internal::__TokenBucket___WaitForTokenAsync_d__67::MoveNext)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x23f1cf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__TokenBucket___WaitForTokenAsync_d__67>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::__TokenBucket___WaitForTokenAsync_d__67.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::__TokenBucket___WaitForTokenAsync_d__67::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Amazon::Runtime::Internal::__TokenBucket___WaitForTokenAsync_d__67::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23f1ea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__TokenBucket___WaitForTokenAsync_d__67>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Amazon::Runtime::Internal::__TokenBucket___WaitForTokenAsync_d__67::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Amazon::Runtime::Internal::__TokenBucket___WaitForTokenAsync_d__67::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Amazon::Runtime::Internal::__TokenBucket___WaitForTokenAsync_d__67::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__TokenBucket___WaitForTokenAsync_d__67>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::__TokenBucket___WaitForTokenAsync_d__67::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__TokenBucket___WaitForTokenAsync_d__67>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "delayMs", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Runtime::Internal::__TokenBucket___WaitForTokenAsync_d__67::__TokenBucket___WaitForTokenAsync_d__67(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, int32_t delayMs, ::System::Threading::CancellationToken cancellationToken,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->delayMs = delayMs;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::__TokenBucket___WaitForTokenAsync_d__67::__TokenBucket___WaitForTokenAsync_d__67() {}
//  Writing Method size for method: ::Amazon::Runtime::Internal::TokenBucket.get_FillRate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<double_t> (::Amazon::Runtime::Internal::TokenBucket::*)()>(
    &::Amazon::Runtime::Internal::TokenBucket::get_FillRate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23f0e0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), "get_FillRate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::TokenBucket.set_FillRate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::TokenBucket::*)(::System::Nullable_1<double_t>)>(
    &::Amazon::Runtime::Internal::TokenBucket::set_FillRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f0e18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), "set_FillRate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<double_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::TokenBucket.get_MaxCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<double_t> (::Amazon::Runtime::Internal::TokenBucket::*)()>(
    &::Amazon::Runtime::Internal::TokenBucket::get_MaxCapacity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23f0e20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(),
                                                                               "get_MaxCapacity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::TokenBucket.set_MaxCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::TokenBucket::*)(::System::Nullable_1<double_t>)>(
    &::Amazon::Runtime::Internal::TokenBucket::set_MaxCapacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f0e2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), "set_MaxCapacity", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<double_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::TokenBucket.get_CurrentCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::Amazon::Runtime::Internal::TokenBucket::*)()>(
    &::Amazon::Runtime::Internal::TokenBucket::get_CurrentCapacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f0e34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(),
                                                                               "get_CurrentCapacity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::TokenBucket.set_CurrentCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::TokenBucket::*)(double_t)>(
    &::Amazon::Runtime::Internal::TokenBucket::set_CurrentCapacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f0e3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), "set_CurrentCapacity",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::TokenBucket.get_LastTimestamp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<double_t> (::Amazon::Runtime::Internal::TokenBucket::*)()>(
    &::Amazon::Runtime::Internal::TokenBucket::get_LastTimestamp)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23f0e44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(),
                                                                               "get_LastTimestamp", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::TokenBucket.set_LastTimestamp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::TokenBucket::*)(::System::Nullable_1<double_t>)>(
    &::Amazon::Runtime::Internal::TokenBucket::set_LastTimestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f0e50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), "set_LastTimestamp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<double_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::TokenBucket.get_MeasuredTxRate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::Amazon::Runtime::Internal::TokenBucket::*)()>(
    &::Amazon::Runtime::Internal::TokenBucket::get_MeasuredTxRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f0e58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(),
                                                                               "get_MeasuredTxRate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::TokenBucket.set_MeasuredTxRate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::TokenBucket::*)(double_t)>(
    &::Amazon::Runtime::Internal::TokenBucket::set_MeasuredTxRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f0e60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), "set_MeasuredTxRate",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::TokenBucket.get_LastTxRateBucket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::Amazon::Runtime::Internal::TokenBucket::*)()>(
    &::Amazon::Runtime::Internal::TokenBucket::get_LastTxRateBucket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f0e68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(),
                                                                               "get_LastTxRateBucket", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::TokenBucket.set_LastTxRateBucket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::TokenBucket::*)(double_t)>(
    &::Amazon::Runtime::Internal::TokenBucket::set_LastTxRateBucket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f0e70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), "set_LastTxRateBucket",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::TokenBucket.get_RequestCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Amazon::Runtime::Internal::TokenBucket::*)()>(
    &::Amazon::Runtime::Internal::TokenBucket::get_RequestCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f0e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(),
                                                                               "get_RequestCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::TokenBucket.set_RequestCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::TokenBucket::*)(int64_t)>(
    &::Amazon::Runtime::Internal::TokenBucket::set_RequestCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f0e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), "set_RequestCount",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::TokenBucket.get_LastMaxRate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::Amazon::Runtime::Internal::TokenBucket::*)()>(
    &::Amazon::Runtime::Internal::TokenBucket::get_LastMaxRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f0e88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(),
                                                                               "get_LastMaxRate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::TokenBucket.set_LastMaxRate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::TokenBucket::*)(double_t)>(
    &::Amazon::Runtime::Internal::TokenBucket::set_LastMaxRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f0e90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), "set_LastMaxRate",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::TokenBucket.get_LastThrottleTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::Amazon::Runtime::Internal::TokenBucket::*)()>(
    &::Amazon::Runtime::Internal::TokenBucket::get_LastThrottleTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f0e98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(),
                                                                               "get_LastThrottleTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::TokenBucket.set_LastThrottleTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::TokenBucket::*)(double_t)>(
    &::Amazon::Runtime::Internal::TokenBucket::set_LastThrottleTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f0ea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), "set_LastThrottleTime",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::TokenBucket.get_TimeWindow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::Amazon::Runtime::Internal::TokenBucket::*)()>(
    &::Amazon::Runtime::Internal::TokenBucket::get_TimeWindow)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f0ea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(),
                                                                               "get_TimeWindow", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::TokenBucket.set_TimeWindow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::TokenBucket::*)(double_t)>(
    &::Amazon::Runtime::Internal::TokenBucket::set_TimeWindow)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f0eb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), "set_TimeWindow",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::TokenBucket.get_Enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::TokenBucket::*)()>(&::Amazon::Runtime::Internal::TokenBucket::get_Enabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f0eb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), "get_Enabled",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::TokenBucket.set_Enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::TokenBucket::*)(bool)>(&::Amazon::Runtime::Internal::TokenBucket::set_Enabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23f0ec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), "set_Enabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::TokenBucket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::TokenBucket::*)()>(&::Amazon::Runtime::Internal::TokenBucket::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x23ea450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::TokenBucket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::TokenBucket::*)(double_t, double_t, double_t, double_t, double_t)>(
    &::Amazon::Runtime::Internal::TokenBucket::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x23f0ecc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::TokenBucket.TryAcquireToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::TokenBucket::*)(double_t, bool)>(
    &::Amazon::Runtime::Internal::TokenBucket::TryAcquireToken)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x23eb110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), "TryAcquireToken", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::TokenBucket.TryAcquireTokenAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (
    ::Amazon::Runtime::Internal::TokenBucket::*)(double_t, bool, ::System::Threading::CancellationToken)>(&::Amazon::Runtime::Internal::TokenBucket::TryAcquireTokenAsync)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x23ec514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), "TryAcquireTokenAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::TokenBucket.SetupAcquireToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<bool> (::Amazon::Runtime::Internal::TokenBucket::*)(double_t)>(
    &::Amazon::Runtime::Internal::TokenBucket::SetupAcquireToken)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x23f0fcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), "SetupAcquireToken",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::TokenBucket.ObtainCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Runtime::Internal::TokenBucket::*)(double_t)>(
    &::Amazon::Runtime::Internal::TokenBucket::ObtainCapacity)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x23f1158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), "ObtainCapacity",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::TokenBucket.UpdateClientSendingRate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::TokenBucket::*)(bool)>(
    &::Amazon::Runtime::Internal::TokenBucket::UpdateClientSendingRate)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x23ea81c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), "UpdateClientSendingRate",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::TokenBucket.TokenBucketRefill
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::TokenBucket::*)()>(&::Amazon::Runtime::Internal::TokenBucket::TokenBucketRefill)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x23f12dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::TokenBucket.TokenBucketUpdateRate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::TokenBucket::*)(double_t)>(
    &::Amazon::Runtime::Internal::TokenBucket::TokenBucketUpdateRate)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x23f1434;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::TokenBucket.UpdateMeasuredRate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::TokenBucket::*)()>(
    &::Amazon::Runtime::Internal::TokenBucket::UpdateMeasuredRate)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x23f1558;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::TokenBucket.CalculateTimeWindow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::TokenBucket::*)()>(
    &::Amazon::Runtime::Internal::TokenBucket::CalculateTimeWindow)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x23f1620;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::TokenBucket.CUBICSuccess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::Amazon::Runtime::Internal::TokenBucket::*)(double_t)>(
    &::Amazon::Runtime::Internal::TokenBucket::CUBICSuccess)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x23f16ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::TokenBucket.CUBICThrottle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::Amazon::Runtime::Internal::TokenBucket::*)(double_t)>(
    &::Amazon::Runtime::Internal::TokenBucket::CUBICThrottle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23f1738;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::TokenBucket.CalculateWait
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Runtime::Internal::TokenBucket::*)(double_t, double_t, double_t)>(
    &::Amazon::Runtime::Internal::TokenBucket::CalculateWait)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x23f1744;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::TokenBucket.WaitForToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::TokenBucket::*)(int32_t)>(
    &::Amazon::Runtime::Internal::TokenBucket::WaitForToken)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f1774;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::TokenBucket.WaitForTokenAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Amazon::Runtime::Internal::TokenBucket::*)(int32_t, ::System::Threading::CancellationToken)>(&::Amazon::Runtime::Internal::TokenBucket::WaitForTokenAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x23f17cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::TokenBucket.GetTimestamp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::Amazon::Runtime::Internal::TokenBucket::*)()>(&::Amazon::Runtime::Internal::TokenBucket::GetTimestamp)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x23f18d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::TokenBucket.GetTimeInSeconds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)()>(&::Amazon::Runtime::Internal::TokenBucket::GetTimeInSeconds)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x23f191c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(),
                                                                               "GetTimeInSeconds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Object*& Amazon::Runtime::Internal::TokenBucket::__cordl_internal_get__bucketLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bucketLock;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Amazon::Runtime::Internal::TokenBucket::__cordl_internal_get__bucketLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bucketLock;
}
constexpr void Amazon::Runtime::Internal::TokenBucket::__cordl_internal_set__bucketLock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bucketLock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr double_t& Amazon::Runtime::Internal::TokenBucket::__cordl_internal_get__minFillRate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minFillRate;
}
constexpr double_t const& Amazon::Runtime::Internal::TokenBucket::__cordl_internal_get__minFillRate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minFillRate;
}
constexpr void Amazon::Runtime::Internal::TokenBucket::__cordl_internal_set__minFillRate(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minFillRate = value;
}
constexpr double_t& Amazon::Runtime::Internal::TokenBucket::__cordl_internal_get__minCapacity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minCapacity;
}
constexpr double_t const& Amazon::Runtime::Internal::TokenBucket::__cordl_internal_get__minCapacity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minCapacity;
}
constexpr void Amazon::Runtime::Internal::TokenBucket::__cordl_internal_set__minCapacity(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minCapacity = value;
}
constexpr double_t& Amazon::Runtime::Internal::TokenBucket::__cordl_internal_get__beta() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beta;
}
constexpr double_t const& Amazon::Runtime::Internal::TokenBucket::__cordl_internal_get__beta() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beta;
}
constexpr void Amazon::Runtime::Internal::TokenBucket::__cordl_internal_set__beta(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beta = value;
}
constexpr double_t& Amazon::Runtime::Internal::TokenBucket::__cordl_internal_get__scaleConstant() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scaleConstant;
}
constexpr double_t const& Amazon::Runtime::Internal::TokenBucket::__cordl_internal_get__scaleConstant() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scaleConstant;
}
constexpr void Amazon::Runtime::Internal::TokenBucket::__cordl_internal_set__scaleConstant(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scaleConstant = value;
}
constexpr double_t& Amazon::Runtime::Internal::TokenBucket::__cordl_internal_get__smooth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smooth;
}
constexpr double_t const& Amazon::Runtime::Internal::TokenBucket::__cordl_internal_get__smooth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smooth;
}
constexpr void Amazon::Runtime::Internal::TokenBucket::__cordl_internal_set__smooth(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____smooth = value;
}
constexpr ::System::Nullable_1<double_t>& Amazon::Runtime::Internal::TokenBucket::__cordl_internal_get__FillRate_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____FillRate_k__BackingField;
}
constexpr ::System::Nullable_1<double_t> const& Amazon::Runtime::Internal::TokenBucket::__cordl_internal_get__FillRate_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____FillRate_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::TokenBucket::__cordl_internal_set__FillRate_k__BackingField(::System::Nullable_1<double_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____FillRate_k__BackingField = value;
}
constexpr ::System::Nullable_1<double_t>& Amazon::Runtime::Internal::TokenBucket::__cordl_internal_get__MaxCapacity_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaxCapacity_k__BackingField;
}
constexpr ::System::Nullable_1<double_t> const& Amazon::Runtime::Internal::TokenBucket::__cordl_internal_get__MaxCapacity_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaxCapacity_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::TokenBucket::__cordl_internal_set__MaxCapacity_k__BackingField(::System::Nullable_1<double_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MaxCapacity_k__BackingField = value;
}
constexpr double_t& Amazon::Runtime::Internal::TokenBucket::__cordl_internal_get__CurrentCapacity_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CurrentCapacity_k__BackingField;
}
constexpr double_t const& Amazon::Runtime::Internal::TokenBucket::__cordl_internal_get__CurrentCapacity_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CurrentCapacity_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::TokenBucket::__cordl_internal_set__CurrentCapacity_k__BackingField(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CurrentCapacity_k__BackingField = value;
}
constexpr ::System::Nullable_1<double_t>& Amazon::Runtime::Internal::TokenBucket::__cordl_internal_get__LastTimestamp_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LastTimestamp_k__BackingField;
}
constexpr ::System::Nullable_1<double_t> const& Amazon::Runtime::Internal::TokenBucket::__cordl_internal_get__LastTimestamp_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LastTimestamp_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::TokenBucket::__cordl_internal_set__LastTimestamp_k__BackingField(::System::Nullable_1<double_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LastTimestamp_k__BackingField = value;
}
constexpr double_t& Amazon::Runtime::Internal::TokenBucket::__cordl_internal_get__MeasuredTxRate_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MeasuredTxRate_k__BackingField;
}
constexpr double_t const& Amazon::Runtime::Internal::TokenBucket::__cordl_internal_get__MeasuredTxRate_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MeasuredTxRate_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::TokenBucket::__cordl_internal_set__MeasuredTxRate_k__BackingField(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MeasuredTxRate_k__BackingField = value;
}
constexpr double_t& Amazon::Runtime::Internal::TokenBucket::__cordl_internal_get__LastTxRateBucket_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LastTxRateBucket_k__BackingField;
}
constexpr double_t const& Amazon::Runtime::Internal::TokenBucket::__cordl_internal_get__LastTxRateBucket_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LastTxRateBucket_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::TokenBucket::__cordl_internal_set__LastTxRateBucket_k__BackingField(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LastTxRateBucket_k__BackingField = value;
}
constexpr int64_t& Amazon::Runtime::Internal::TokenBucket::__cordl_internal_get__RequestCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RequestCount_k__BackingField;
}
constexpr int64_t const& Amazon::Runtime::Internal::TokenBucket::__cordl_internal_get__RequestCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RequestCount_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::TokenBucket::__cordl_internal_set__RequestCount_k__BackingField(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____RequestCount_k__BackingField = value;
}
constexpr double_t& Amazon::Runtime::Internal::TokenBucket::__cordl_internal_get__LastMaxRate_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LastMaxRate_k__BackingField;
}
constexpr double_t const& Amazon::Runtime::Internal::TokenBucket::__cordl_internal_get__LastMaxRate_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LastMaxRate_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::TokenBucket::__cordl_internal_set__LastMaxRate_k__BackingField(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LastMaxRate_k__BackingField = value;
}
constexpr double_t& Amazon::Runtime::Internal::TokenBucket::__cordl_internal_get__LastThrottleTime_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LastThrottleTime_k__BackingField;
}
constexpr double_t const& Amazon::Runtime::Internal::TokenBucket::__cordl_internal_get__LastThrottleTime_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LastThrottleTime_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::TokenBucket::__cordl_internal_set__LastThrottleTime_k__BackingField(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LastThrottleTime_k__BackingField = value;
}
constexpr double_t& Amazon::Runtime::Internal::TokenBucket::__cordl_internal_get__TimeWindow_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TimeWindow_k__BackingField;
}
constexpr double_t const& Amazon::Runtime::Internal::TokenBucket::__cordl_internal_get__TimeWindow_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TimeWindow_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::TokenBucket::__cordl_internal_set__TimeWindow_k__BackingField(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____TimeWindow_k__BackingField = value;
}
constexpr bool& Amazon::Runtime::Internal::TokenBucket::__cordl_internal_get__Enabled_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Enabled_k__BackingField;
}
constexpr bool const& Amazon::Runtime::Internal::TokenBucket::__cordl_internal_get__Enabled_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Enabled_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::TokenBucket::__cordl_internal_set__Enabled_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Enabled_k__BackingField = value;
}
inline void Amazon::Runtime::Internal::TokenBucket::setStaticF__epoch(::System::DateTime value) {
  ::cordl_internals::setStaticField<::System::DateTime, "_epoch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get>(
      std::forward<::System::DateTime>(value));
}
inline ::System::DateTime Amazon::Runtime::Internal::TokenBucket::getStaticF__epoch() {
  return ::cordl_internals::getStaticField<::System::DateTime, "_epoch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get>();
}
inline ::System::Nullable_1<double_t> Amazon::Runtime::Internal::TokenBucket::get_FillRate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), "get_FillRate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<double_t>, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::TokenBucket::set_FillRate(::System::Nullable_1<double_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), "set_FillRate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<double_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Nullable_1<double_t> Amazon::Runtime::Internal::TokenBucket::get_MaxCapacity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(),
                                                                             "get_MaxCapacity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<double_t>, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::TokenBucket::set_MaxCapacity(::System::Nullable_1<double_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), "set_MaxCapacity", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<double_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline double_t Amazon::Runtime::Internal::TokenBucket::get_CurrentCapacity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(),
                                                                             "get_CurrentCapacity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::TokenBucket::set_CurrentCapacity(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), "set_CurrentCapacity",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Nullable_1<double_t> Amazon::Runtime::Internal::TokenBucket::get_LastTimestamp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(),
                                                                             "get_LastTimestamp", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<double_t>, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::TokenBucket::set_LastTimestamp(::System::Nullable_1<double_t> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), "set_LastTimestamp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<double_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline double_t Amazon::Runtime::Internal::TokenBucket::get_MeasuredTxRate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(),
                                                                             "get_MeasuredTxRate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::TokenBucket::set_MeasuredTxRate(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), "set_MeasuredTxRate",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline double_t Amazon::Runtime::Internal::TokenBucket::get_LastTxRateBucket() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(),
                                                                             "get_LastTxRateBucket", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::TokenBucket::set_LastTxRateBucket(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), "set_LastTxRateBucket",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int64_t Amazon::Runtime::Internal::TokenBucket::get_RequestCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(),
                                                                             "get_RequestCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::TokenBucket::set_RequestCount(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), "set_RequestCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline double_t Amazon::Runtime::Internal::TokenBucket::get_LastMaxRate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(),
                                                                             "get_LastMaxRate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::TokenBucket::set_LastMaxRate(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), "set_LastMaxRate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline double_t Amazon::Runtime::Internal::TokenBucket::get_LastThrottleTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(),
                                                                             "get_LastThrottleTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::TokenBucket::set_LastThrottleTime(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), "set_LastThrottleTime",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline double_t Amazon::Runtime::Internal::TokenBucket::get_TimeWindow() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), "get_TimeWindow",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::TokenBucket::set_TimeWindow(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), "set_TimeWindow", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Runtime::Internal::TokenBucket::get_Enabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), "get_Enabled",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::TokenBucket::set_Enabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), "set_Enabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::Internal::TokenBucket* Amazon::Runtime::Internal::TokenBucket::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::TokenBucket*>());
}
inline void Amazon::Runtime::Internal::TokenBucket::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::Internal::TokenBucket* Amazon::Runtime::Internal::TokenBucket::New_ctor(double_t minFillRate, double_t minCapacity, double_t beta, double_t scaleConstant, double_t smooth) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::TokenBucket*>(minFillRate, minCapacity, beta, scaleConstant, smooth));
}
inline void Amazon::Runtime::Internal::TokenBucket::_ctor(double_t minFillRate, double_t minCapacity, double_t beta, double_t scaleConstant, double_t smooth) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, minFillRate, minCapacity, beta, scaleConstant, smooth);
}
inline bool Amazon::Runtime::Internal::TokenBucket::TryAcquireToken(double_t amount, bool failFast) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), "TryAcquireToken", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, amount, failFast);
}
inline ::System::Threading::Tasks::Task_1<bool>* Amazon::Runtime::Internal::TokenBucket::TryAcquireTokenAsync(double_t amount, bool failFast,
                                                                                                              ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), "TryAcquireTokenAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, amount, failFast, cancellationToken);
}
inline ::System::Nullable_1<bool> Amazon::Runtime::Internal::TokenBucket::SetupAcquireToken(double_t amount) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), "SetupAcquireToken",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>, false>(this, ___internal_method, amount);
}
inline int32_t Amazon::Runtime::Internal::TokenBucket::ObtainCapacity(double_t amount) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), "ObtainCapacity", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, amount);
}
inline void Amazon::Runtime::Internal::TokenBucket::UpdateClientSendingRate(bool isThrottlingError) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), "UpdateClientSendingRate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isThrottlingError);
}
inline void Amazon::Runtime::Internal::TokenBucket::TokenBucketRefill() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::TokenBucket::TokenBucketUpdateRate(double_t newRps) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newRps);
}
inline void Amazon::Runtime::Internal::TokenBucket::UpdateMeasuredRate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::TokenBucket::CalculateTimeWindow() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline double_t Amazon::Runtime::Internal::TokenBucket::CUBICSuccess(double_t timestamp) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method, timestamp);
}
inline double_t Amazon::Runtime::Internal::TokenBucket::CUBICThrottle(double_t rateToUse) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method, rateToUse);
}
inline int32_t Amazon::Runtime::Internal::TokenBucket::CalculateWait(double_t amount, double_t currentCapacity, double_t fillRate) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, amount, currentCapacity, fillRate);
}
inline void Amazon::Runtime::Internal::TokenBucket::WaitForToken(int32_t delayMs) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, delayMs);
}
inline ::System::Threading::Tasks::Task* Amazon::Runtime::Internal::TokenBucket::WaitForTokenAsync(int32_t delayMs, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, delayMs, cancellationToken);
}
inline double_t Amazon::Runtime::Internal::TokenBucket::GetTimestamp() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline double_t Amazon::Runtime::Internal::TokenBucket::GetTimeInSeconds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::TokenBucket*>::get(),
                                                                             "GetTimeInSeconds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::TokenBucket::TokenBucket() {}
