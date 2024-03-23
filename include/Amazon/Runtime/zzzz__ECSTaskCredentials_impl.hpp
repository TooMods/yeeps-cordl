#pragma once
#include "Amazon/Runtime/zzzz__URIBasedRefreshingCredentialHelper_impl.hpp"
#include "Amazon/Runtime/zzzz__ECSTaskCredentials_def.hpp"
#include "Amazon/Runtime/zzzz__RefreshingAWSCredentials_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Net/zzzz__IWebProxy_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::ECSTaskCredentials.get_Uri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (::Amazon::Runtime::ECSTaskCredentials::*)()>(&::Amazon::Runtime::ECSTaskCredentials::get_Uri)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1fe8f18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ECSTaskCredentials*>::get(), "get_Uri",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ECSTaskCredentials._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ECSTaskCredentials::*)()>(&::Amazon::Runtime::ECSTaskCredentials::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe9098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ECSTaskCredentials*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ECSTaskCredentials._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ECSTaskCredentials::*)(::System::Net::IWebProxy*)>(
    &::Amazon::Runtime::ECSTaskCredentials::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1fe90a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ECSTaskCredentials*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IWebProxy*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ECSTaskCredentials.GenerateNewCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* (::Amazon::Runtime::ECSTaskCredentials::*)()>(
    &::Amazon::Runtime::ECSTaskCredentials::GenerateNewCredentials)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x1fe9124;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ECSTaskCredentials*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ECSTaskCredentials*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ECSTaskCredentials.CreateAuthorizationHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* (*)()>(
    &::Amazon::Runtime::ECSTaskCredentials::CreateAuthorizationHeader)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x1fe948c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ECSTaskCredentials*>::get(),
                                                                               "CreateAuthorizationHeader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::Runtime::ECSTaskCredentials::__cordl_internal_get_Server() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Server;
}
constexpr ::StringW const& Amazon::Runtime::ECSTaskCredentials::__cordl_internal_get_Server() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Server;
}
constexpr void Amazon::Runtime::ECSTaskCredentials::__cordl_internal_set_Server(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Server)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::IWebProxy*& Amazon::Runtime::ECSTaskCredentials::__cordl_internal_get_Proxy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Proxy;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::IWebProxy*> const& Amazon::Runtime::ECSTaskCredentials::__cordl_internal_get_Proxy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Proxy;
}
constexpr void Amazon::Runtime::ECSTaskCredentials::__cordl_internal_set_Proxy(::System::Net::IWebProxy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Proxy)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Amazon::Runtime::ECSTaskCredentials::setStaticF_MaxRetries(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "MaxRetries", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ECSTaskCredentials*>::get>(std::forward<int32_t>(value));
}
inline int32_t Amazon::Runtime::ECSTaskCredentials::getStaticF_MaxRetries() {
  return ::cordl_internals::getStaticField<int32_t, "MaxRetries", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ECSTaskCredentials*>::get>();
}
inline ::System::Uri* Amazon::Runtime::ECSTaskCredentials::get_Uri() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ECSTaskCredentials*>::get(), "get_Uri",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::ECSTaskCredentials* Amazon::Runtime::ECSTaskCredentials::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::ECSTaskCredentials*>());
}
inline void Amazon::Runtime::ECSTaskCredentials::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ECSTaskCredentials*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::ECSTaskCredentials* Amazon::Runtime::ECSTaskCredentials::New_ctor(::System::Net::IWebProxy* proxy) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::ECSTaskCredentials*>(proxy));
}
inline void Amazon::Runtime::ECSTaskCredentials::_ctor(::System::Net::IWebProxy* proxy) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ECSTaskCredentials*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IWebProxy*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, proxy);
}
inline ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* Amazon::Runtime::ECSTaskCredentials::GenerateNewCredentials() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ECSTaskCredentials*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* Amazon::Runtime::ECSTaskCredentials::CreateAuthorizationHeader() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ECSTaskCredentials*>::get(),
                                                                             "CreateAuthorizationHeader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::ECSTaskCredentials::ECSTaskCredentials() {}
