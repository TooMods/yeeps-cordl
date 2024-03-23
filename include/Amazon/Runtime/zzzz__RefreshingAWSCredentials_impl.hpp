#pragma once
#include "Amazon/Runtime/zzzz__AWSCredentials_impl.hpp"
#include "Amazon/Runtime/zzzz__ImmutableCredentials_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "Amazon/Runtime/zzzz__RefreshingAWSCredentials_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__Logger_def.hpp"
#include "Amazon/Runtime/zzzz__ImmutableCredentials_def.hpp"
#include "Amazon/Runtime/zzzz__RefreshingAWSCredentials_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__SemaphoreSlim_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState.get_Credentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::ImmutableCredentials* (
    ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState::*)()>(&::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState::get_Credentials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1ff04e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>::get(),
                                                 "get_Credentials", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState.set_Credentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState::*)(
    ::Amazon::Runtime::ImmutableCredentials*)>(&::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState::set_Credentials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1ff04e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>::get(), "set_Credentials",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::ImmutableCredentials*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState.get_Expiration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState::*)()>(
    &::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState::get_Expiration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1ff04f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>::get(),
                                                 "get_Expiration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState.set_Expiration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState::*)(::System::DateTime)>(
    &::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState::set_Expiration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1ff04f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>::get(), "set_Expiration",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState::*)()>(
    &::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1ff0500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState::*)(
    ::Amazon::Runtime::ImmutableCredentials*, ::System::DateTime)>(&::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1fe54ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::ImmutableCredentials*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState.IsExpiredWithin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState::*)(::System::TimeSpan)>(
    &::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState::IsExpiredWithin)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1feb768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>::get(), "IsExpiredWithin",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
    return ___internal_method;
  }
};
constexpr ::Amazon::Runtime::ImmutableCredentials*& Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState::__cordl_internal_get__Credentials_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Credentials_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::ImmutableCredentials*> const&
Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState::__cordl_internal_get__Credentials_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Credentials_k__BackingField;
}
constexpr void Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState::__cordl_internal_set__Credentials_k__BackingField(::Amazon::Runtime::ImmutableCredentials* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Credentials_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::DateTime& Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState::__cordl_internal_get__Expiration_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Expiration_k__BackingField;
}
constexpr ::System::DateTime const& Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState::__cordl_internal_get__Expiration_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Expiration_k__BackingField;
}
constexpr void Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState::__cordl_internal_set__Expiration_k__BackingField(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Expiration_k__BackingField = value;
}
inline ::Amazon::Runtime::ImmutableCredentials* Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState::get_Credentials() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>::get(),
                                               "get_Credentials", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::ImmutableCredentials*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState::set_Credentials(::Amazon::Runtime::ImmutableCredentials* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>::get(), "set_Credentials",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::ImmutableCredentials*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::DateTime Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState::get_Expiration() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>::get(), "get_Expiration",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline void Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState::set_Expiration(::System::DateTime value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>::get(), "set_Expiration",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>());
}
inline void Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*
Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState::New_ctor(::Amazon::Runtime::ImmutableCredentials* credentials, ::System::DateTime expiration) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>(credentials, expiration));
}
inline void Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState::_ctor(::Amazon::Runtime::ImmutableCredentials* credentials, ::System::DateTime expiration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::ImmutableCredentials*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, credentials, expiration);
}
inline bool Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState::IsExpiredWithin(::System::TimeSpan preemptExpiryTime) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>::get(), "IsExpiredWithin",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, preemptExpiryTime);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState::__RefreshingAWSCredentials__CredentialsRefreshState() {}
//  Writing Method size for method: ::Amazon::Runtime::__RefreshingAWSCredentials___GetCredentialsAsync_d__10.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::__RefreshingAWSCredentials___GetCredentialsAsync_d__10::*)()>(
    &::Amazon::Runtime::__RefreshingAWSCredentials___GetCredentialsAsync_d__10::MoveNext)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x1ff0508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__RefreshingAWSCredentials___GetCredentialsAsync_d__10>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::__RefreshingAWSCredentials___GetCredentialsAsync_d__10.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::__RefreshingAWSCredentials___GetCredentialsAsync_d__10::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Amazon::Runtime::__RefreshingAWSCredentials___GetCredentialsAsync_d__10::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1ff0938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__RefreshingAWSCredentials___GetCredentialsAsync_d__10>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Amazon::Runtime::__RefreshingAWSCredentials___GetCredentialsAsync_d__10::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Amazon::Runtime::__RefreshingAWSCredentials___GetCredentialsAsync_d__10::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Amazon::Runtime::__RefreshingAWSCredentials___GetCredentialsAsync_d__10::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__RefreshingAWSCredentials___GetCredentialsAsync_d__10>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Runtime::__RefreshingAWSCredentials___GetCredentialsAsync_d__10::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__RefreshingAWSCredentials___GetCredentialsAsync_d__10>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::Runtime::ImmutableCredentials*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Amazon::Runtime::RefreshingAWSCredentials*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>", modifiers: "", def_value:
// Some("{}") }]
constexpr ::Amazon::Runtime::__RefreshingAWSCredentials___GetCredentialsAsync_d__10::__RefreshingAWSCredentials___GetCredentialsAsync_d__10(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::Runtime::ImmutableCredentials*> __t__builder, ::Amazon::Runtime::RefreshingAWSCredentials* __4__this,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::__RefreshingAWSCredentials___GetCredentialsAsync_d__10::__RefreshingAWSCredentials___GetCredentialsAsync_d__10() {}
//  Writing Method size for method: ::Amazon::Runtime::RefreshingAWSCredentials.get_PreemptExpiryTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::Amazon::Runtime::RefreshingAWSCredentials::*)()>(
    &::Amazon::Runtime::RefreshingAWSCredentials::get_PreemptExpiryTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fefa9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RefreshingAWSCredentials*>::get(),
                                                                               "get_PreemptExpiryTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RefreshingAWSCredentials.set_PreemptExpiryTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::RefreshingAWSCredentials::*)(::System::TimeSpan)>(
    &::Amazon::Runtime::RefreshingAWSCredentials::set_PreemptExpiryTime)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x1fe4f08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RefreshingAWSCredentials*>::get(), "set_PreemptExpiryTime",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RefreshingAWSCredentials.GetCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::ImmutableCredentials* (::Amazon::Runtime::RefreshingAWSCredentials::*)()>(
    &::Amazon::Runtime::RefreshingAWSCredentials::GetCredentials)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x1fefaa4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RefreshingAWSCredentials*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RefreshingAWSCredentials*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RefreshingAWSCredentials.GetCredentialsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Amazon::Runtime::ImmutableCredentials*>* (
    ::Amazon::Runtime::RefreshingAWSCredentials::*)()>(&::Amazon::Runtime::RefreshingAWSCredentials::GetCredentialsAsync)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x1ff020c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RefreshingAWSCredentials*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RefreshingAWSCredentials*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RefreshingAWSCredentials.UpdateToGeneratedCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*, ::System::TimeSpan)>(
    &::Amazon::Runtime::RefreshingAWSCredentials::UpdateToGeneratedCredentials)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x1fefe5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RefreshingAWSCredentials*>::get(), "UpdateToGeneratedCredentials", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RefreshingAWSCredentials.get_ShouldUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::RefreshingAWSCredentials::*)()>(
    &::Amazon::Runtime::RefreshingAWSCredentials::get_ShouldUpdate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1ff0324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RefreshingAWSCredentials*>::get(),
                                                                               "get_ShouldUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RefreshingAWSCredentials.ShouldUpdateState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*, ::System::TimeSpan)>(
    &::Amazon::Runtime::RefreshingAWSCredentials::ShouldUpdateState)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x1fefbb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RefreshingAWSCredentials*>::get(), "ShouldUpdateState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RefreshingAWSCredentials.GenerateNewCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* (
    ::Amazon::Runtime::RefreshingAWSCredentials::*)()>(&::Amazon::Runtime::RefreshingAWSCredentials::GenerateNewCredentials)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1ff0330;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RefreshingAWSCredentials*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RefreshingAWSCredentials*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RefreshingAWSCredentials.GenerateNewCredentialsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>* (
    ::Amazon::Runtime::RefreshingAWSCredentials::*)()>(&::Amazon::Runtime::RefreshingAWSCredentials::GenerateNewCredentialsAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1ff0370;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RefreshingAWSCredentials*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RefreshingAWSCredentials*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RefreshingAWSCredentials.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::RefreshingAWSCredentials::*)(bool)>(&::Amazon::Runtime::RefreshingAWSCredentials::Dispose)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1ff0430;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RefreshingAWSCredentials*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RefreshingAWSCredentials*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RefreshingAWSCredentials.ClearCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::RefreshingAWSCredentials::*)()>(
    &::Amazon::Runtime::RefreshingAWSCredentials::ClearCredentials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fec4d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RefreshingAWSCredentials*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RefreshingAWSCredentials*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RefreshingAWSCredentials.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::RefreshingAWSCredentials::*)()>(&::Amazon::Runtime::RefreshingAWSCredentials::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1ff0468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RefreshingAWSCredentials*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RefreshingAWSCredentials._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::RefreshingAWSCredentials::*)()>(&::Amazon::Runtime::RefreshingAWSCredentials::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1fe4dd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RefreshingAWSCredentials*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RefreshingAWSCredentials._GenerateNewCredentialsAsync_b__16_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* (
    ::Amazon::Runtime::RefreshingAWSCredentials::*)()>(&::Amazon::Runtime::RefreshingAWSCredentials::_GenerateNewCredentialsAsync_b__16_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1ff04d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RefreshingAWSCredentials*>::get(), "<GenerateNewCredentialsAsync>b__16_0",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr Amazon::Runtime::RefreshingAWSCredentials::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Amazon::Runtime::RefreshingAWSCredentials::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::Amazon::Runtime::Internal::Util::Logger*& Amazon::Runtime::RefreshingAWSCredentials::__cordl_internal_get__logger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::Logger*> const& Amazon::Runtime::RefreshingAWSCredentials::__cordl_internal_get__logger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger;
}
constexpr void Amazon::Runtime::RefreshingAWSCredentials::__cordl_internal_set__logger(::Amazon::Runtime::Internal::Util::Logger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____logger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*& Amazon::Runtime::RefreshingAWSCredentials::__cordl_internal_get_currentState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentState;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*> const&
Amazon::Runtime::RefreshingAWSCredentials::__cordl_internal_get_currentState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentState;
}
constexpr void Amazon::Runtime::RefreshingAWSCredentials::__cordl_internal_set_currentState(::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___currentState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::TimeSpan& Amazon::Runtime::RefreshingAWSCredentials::__cordl_internal_get__preemptExpiryTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preemptExpiryTime;
}
constexpr ::System::TimeSpan const& Amazon::Runtime::RefreshingAWSCredentials::__cordl_internal_get__preemptExpiryTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preemptExpiryTime;
}
constexpr void Amazon::Runtime::RefreshingAWSCredentials::__cordl_internal_set__preemptExpiryTime(::System::TimeSpan value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____preemptExpiryTime = value;
}
constexpr bool& Amazon::Runtime::RefreshingAWSCredentials::__cordl_internal_get__disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed;
}
constexpr bool const& Amazon::Runtime::RefreshingAWSCredentials::__cordl_internal_get__disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed;
}
constexpr void Amazon::Runtime::RefreshingAWSCredentials::__cordl_internal_set__disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed = value;
}
constexpr ::System::Threading::SemaphoreSlim*& Amazon::Runtime::RefreshingAWSCredentials::__cordl_internal_get__updateGeneratedCredentialsSemaphore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updateGeneratedCredentialsSemaphore;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::SemaphoreSlim*> const& Amazon::Runtime::RefreshingAWSCredentials::__cordl_internal_get__updateGeneratedCredentialsSemaphore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updateGeneratedCredentialsSemaphore;
}
constexpr void Amazon::Runtime::RefreshingAWSCredentials::__cordl_internal_set__updateGeneratedCredentialsSemaphore(::System::Threading::SemaphoreSlim* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____updateGeneratedCredentialsSemaphore)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::TimeSpan Amazon::Runtime::RefreshingAWSCredentials::get_PreemptExpiryTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RefreshingAWSCredentials*>::get(),
                                                                             "get_PreemptExpiryTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(this, ___internal_method);
}
inline void Amazon::Runtime::RefreshingAWSCredentials::set_PreemptExpiryTime(::System::TimeSpan value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RefreshingAWSCredentials*>::get(), "set_PreemptExpiryTime",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::ImmutableCredentials* Amazon::Runtime::RefreshingAWSCredentials::GetCredentials() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RefreshingAWSCredentials*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::ImmutableCredentials*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Amazon::Runtime::ImmutableCredentials*>* Amazon::Runtime::RefreshingAWSCredentials::GetCredentialsAsync() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RefreshingAWSCredentials*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Amazon::Runtime::ImmutableCredentials*>*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::RefreshingAWSCredentials::UpdateToGeneratedCredentials(::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* state,
                                                                                    ::System::TimeSpan preemptExpiryTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RefreshingAWSCredentials*>::get(), "UpdateToGeneratedCredentials", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, state, preemptExpiryTime);
}
inline bool Amazon::Runtime::RefreshingAWSCredentials::get_ShouldUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RefreshingAWSCredentials*>::get(),
                                                                             "get_ShouldUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::RefreshingAWSCredentials::ShouldUpdateState(::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* state, ::System::TimeSpan preemptExpiryTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RefreshingAWSCredentials*>::get(), "ShouldUpdateState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, state, preemptExpiryTime);
}
inline ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* Amazon::Runtime::RefreshingAWSCredentials::GenerateNewCredentials() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RefreshingAWSCredentials*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>* Amazon::Runtime::RefreshingAWSCredentials::GenerateNewCredentialsAsync() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RefreshingAWSCredentials*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::RefreshingAWSCredentials::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RefreshingAWSCredentials*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void Amazon::Runtime::RefreshingAWSCredentials::ClearCredentials() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RefreshingAWSCredentials*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Runtime::RefreshingAWSCredentials::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RefreshingAWSCredentials*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::RefreshingAWSCredentials* Amazon::Runtime::RefreshingAWSCredentials::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::RefreshingAWSCredentials*>());
}
inline void Amazon::Runtime::RefreshingAWSCredentials::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RefreshingAWSCredentials*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* Amazon::Runtime::RefreshingAWSCredentials::_GenerateNewCredentialsAsync_b__16_0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RefreshingAWSCredentials*>::get(), "<GenerateNewCredentialsAsync>b__16_0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::RefreshingAWSCredentials::RefreshingAWSCredentials() {}
