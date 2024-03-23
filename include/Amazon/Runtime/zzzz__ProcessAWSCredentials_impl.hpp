#pragma once
#include "Amazon/Runtime/zzzz__RefreshingAWSCredentials_impl.hpp"
#include "Amazon/Util/zzzz__ProcessExecutionResult_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "Amazon/Runtime/zzzz__ProcessAWSCredentials_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__Logger_def.hpp"
#include "Amazon/Runtime/zzzz__ProcessAWSCredentials_def.hpp"
#include "Amazon/Runtime/zzzz__RefreshingAWSCredentials_def.hpp"
#include "Amazon/Util/zzzz__ProcessExecutionResult_def.hpp"
#include "System/Diagnostics/zzzz__ProcessStartInfo_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::__ProcessAWSCredentials___DetermineProcessCredentialAsync_d__7.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::__ProcessAWSCredentials___DetermineProcessCredentialAsync_d__7::*)()>(
    &::Amazon::Runtime::__ProcessAWSCredentials___DetermineProcessCredentialAsync_d__7::MoveNext)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x1fef5f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__ProcessAWSCredentials___DetermineProcessCredentialAsync_d__7>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::__ProcessAWSCredentials___DetermineProcessCredentialAsync_d__7.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::__ProcessAWSCredentials___DetermineProcessCredentialAsync_d__7::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Amazon::Runtime::__ProcessAWSCredentials___DetermineProcessCredentialAsync_d__7::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1fefa44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__ProcessAWSCredentials___DetermineProcessCredentialAsync_d__7>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Amazon::Runtime::__ProcessAWSCredentials___DetermineProcessCredentialAsync_d__7::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Amazon::Runtime::__ProcessAWSCredentials___DetermineProcessCredentialAsync_d__7::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Amazon::Runtime::__ProcessAWSCredentials___DetermineProcessCredentialAsync_d__7::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__ProcessAWSCredentials___DetermineProcessCredentialAsync_d__7>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Runtime::__ProcessAWSCredentials___DetermineProcessCredentialAsync_d__7::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__ProcessAWSCredentials___DetermineProcessCredentialAsync_d__7>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__4__this", ty: "::Amazon::Runtime::ProcessAWSCredentials*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Util::ProcessExecutionResult*>", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Runtime::__ProcessAWSCredentials___DetermineProcessCredentialAsync_d__7::__ProcessAWSCredentials___DetermineProcessCredentialAsync_d__7(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*> __t__builder,
    ::Amazon::Runtime::ProcessAWSCredentials* __4__this,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Util::ProcessExecutionResult*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::__ProcessAWSCredentials___DetermineProcessCredentialAsync_d__7::__ProcessAWSCredentials___DetermineProcessCredentialAsync_d__7() {}
//  Writing Method size for method: ::Amazon::Runtime::ProcessAWSCredentials._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ProcessAWSCredentials::*)(::StringW)>(&::Amazon::Runtime::ProcessAWSCredentials::_ctor)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x1fee8fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ProcessAWSCredentials*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ProcessAWSCredentials.GenerateNewCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* (
    ::Amazon::Runtime::ProcessAWSCredentials::*)()>(&::Amazon::Runtime::ProcessAWSCredentials::GenerateNewCredentials)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1feec04;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ProcessAWSCredentials*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ProcessAWSCredentials*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ProcessAWSCredentials.GenerateNewCredentialsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>* (
    ::Amazon::Runtime::ProcessAWSCredentials::*)()>(&::Amazon::Runtime::ProcessAWSCredentials::GenerateNewCredentialsAsync)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1feee14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ProcessAWSCredentials*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ProcessAWSCredentials*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ProcessAWSCredentials.DetermineProcessCredential
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* (
    ::Amazon::Runtime::ProcessAWSCredentials::*)()>(&::Amazon::Runtime::ProcessAWSCredentials::DetermineProcessCredential)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x1feec08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ProcessAWSCredentials*>::get(),
                                                                               "DetermineProcessCredential", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ProcessAWSCredentials.DetermineProcessCredentialAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>* (
    ::Amazon::Runtime::ProcessAWSCredentials::*)()>(&::Amazon::Runtime::ProcessAWSCredentials::DetermineProcessCredentialAsync)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1feee18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ProcessAWSCredentials*>::get(), "DetermineProcessCredentialAsync",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ProcessAWSCredentials.SetCredentialsRefreshState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* (
    ::Amazon::Runtime::ProcessAWSCredentials::*)(::Amazon::Util::ProcessExecutionResult*)>(&::Amazon::Runtime::ProcessAWSCredentials::SetCredentialsRefreshState)> {
  constexpr static std::size_t size = 0x5e4;
  constexpr static std::size_t addrs = 0x1feef38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ProcessAWSCredentials*>::get(), "SetCredentialsRefreshState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::ProcessExecutionResult*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Amazon::Runtime::Internal::Util::Logger*& Amazon::Runtime::ProcessAWSCredentials::__cordl_internal_get__logger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::Logger*> const& Amazon::Runtime::ProcessAWSCredentials::__cordl_internal_get__logger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger;
}
constexpr void Amazon::Runtime::ProcessAWSCredentials::__cordl_internal_set__logger(::Amazon::Runtime::Internal::Util::Logger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____logger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Diagnostics::ProcessStartInfo*& Amazon::Runtime::ProcessAWSCredentials::__cordl_internal_get__processStartInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____processStartInfo;
}
constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::ProcessStartInfo*> const& Amazon::Runtime::ProcessAWSCredentials::__cordl_internal_get__processStartInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____processStartInfo;
}
constexpr void Amazon::Runtime::ProcessAWSCredentials::__cordl_internal_set__processStartInfo(::System::Diagnostics::ProcessStartInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____processStartInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Runtime::ProcessAWSCredentials* Amazon::Runtime::ProcessAWSCredentials::New_ctor(::StringW processCredentialInfo) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::ProcessAWSCredentials*>(processCredentialInfo));
}
inline void Amazon::Runtime::ProcessAWSCredentials::_ctor(::StringW processCredentialInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ProcessAWSCredentials*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, processCredentialInfo);
}
inline ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* Amazon::Runtime::ProcessAWSCredentials::GenerateNewCredentials() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ProcessAWSCredentials*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>* Amazon::Runtime::ProcessAWSCredentials::GenerateNewCredentialsAsync() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ProcessAWSCredentials*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>*, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* Amazon::Runtime::ProcessAWSCredentials::DetermineProcessCredential() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ProcessAWSCredentials*>::get(),
                                                                             "DetermineProcessCredential", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>* Amazon::Runtime::ProcessAWSCredentials::DetermineProcessCredentialAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ProcessAWSCredentials*>::get(),
                                                                             "DetermineProcessCredentialAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>*, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* Amazon::Runtime::ProcessAWSCredentials::SetCredentialsRefreshState(::Amazon::Util::ProcessExecutionResult* processInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ProcessAWSCredentials*>::get(), "SetCredentialsRefreshState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::ProcessExecutionResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*, false>(this, ___internal_method, processInfo);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::ProcessAWSCredentials::ProcessAWSCredentials() {}
