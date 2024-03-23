#pragma once
#include "Amazon/Runtime/zzzz__RefreshingAWSCredentials_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "Amazon/Runtime/zzzz__FederatedAWSCredentials_def.hpp"
#include "Amazon/Runtime/CredentialManagement/Internal/zzzz__SAMLRoleSessionManager_def.hpp"
#include "Amazon/Runtime/CredentialManagement/zzzz__SAMLEndpoint_def.hpp"
#include "Amazon/Runtime/zzzz__FederatedAWSCredentialsOptions_def.hpp"
#include "Amazon/Runtime/zzzz__RefreshingAWSCredentials_def.hpp"
#include "Amazon/Runtime/zzzz__SAMLImmutableCredentials_def.hpp"
#include "Amazon/zzzz__RegionEndpoint_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::FederatedAWSCredentials._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Amazon::Runtime::FederatedAWSCredentials::*)(::Amazon::Runtime::CredentialManagement::SAMLEndpoint*, ::StringW)>(&::Amazon::Runtime::FederatedAWSCredentials::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1feb02c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FederatedAWSCredentials*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::SAMLEndpoint*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::FederatedAWSCredentials._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::FederatedAWSCredentials::*)(
    ::Amazon::Runtime::CredentialManagement::SAMLEndpoint*, ::StringW, ::Amazon::Runtime::FederatedAWSCredentialsOptions*)>(&::Amazon::Runtime::FederatedAWSCredentials::_ctor)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x1feb10c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FederatedAWSCredentials*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::SAMLEndpoint*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::FederatedAWSCredentialsOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::FederatedAWSCredentials.get_SAMLEndpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::CredentialManagement::SAMLEndpoint* (::Amazon::Runtime::FederatedAWSCredentials::*)()>(
    &::Amazon::Runtime::FederatedAWSCredentials::get_SAMLEndpoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1feb2a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FederatedAWSCredentials*>::get(),
                                                                               "get_SAMLEndpoint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::FederatedAWSCredentials.set_SAMLEndpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::FederatedAWSCredentials::*)(::Amazon::Runtime::CredentialManagement::SAMLEndpoint*)>(
    &::Amazon::Runtime::FederatedAWSCredentials::set_SAMLEndpoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1feb2b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FederatedAWSCredentials*>::get(), "set_SAMLEndpoint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::SAMLEndpoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::FederatedAWSCredentials.get_RoleArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::FederatedAWSCredentials::*)()>(
    &::Amazon::Runtime::FederatedAWSCredentials::get_RoleArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1feb2b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FederatedAWSCredentials*>::get(),
                                                                               "get_RoleArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::FederatedAWSCredentials.set_RoleArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::FederatedAWSCredentials::*)(::StringW)>(
    &::Amazon::Runtime::FederatedAWSCredentials::set_RoleArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1feb2c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FederatedAWSCredentials*>::get(), "set_RoleArn", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::FederatedAWSCredentials.get_Options
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::FederatedAWSCredentialsOptions* (::Amazon::Runtime::FederatedAWSCredentials::*)()>(
    &::Amazon::Runtime::FederatedAWSCredentials::get_Options)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1feb2c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FederatedAWSCredentials*>::get(),
                                                                               "get_Options", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::FederatedAWSCredentials.set_Options
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::FederatedAWSCredentials::*)(::Amazon::Runtime::FederatedAWSCredentialsOptions*)>(
    &::Amazon::Runtime::FederatedAWSCredentials::set_Options)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1feb2d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FederatedAWSCredentials*>::get(), "set_Options", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::FederatedAWSCredentialsOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::FederatedAWSCredentials.GenerateNewCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* (
    ::Amazon::Runtime::FederatedAWSCredentials::*)()>(&::Amazon::Runtime::FederatedAWSCredentials::GenerateNewCredentials)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x1feb2d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FederatedAWSCredentials*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FederatedAWSCredentials*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::FederatedAWSCredentials.Authenticate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* (
    ::Amazon::Runtime::FederatedAWSCredentials::*)(::System::Net::ICredentials*)>(&::Amazon::Runtime::FederatedAWSCredentials::Authenticate)> {
  constexpr static std::size_t size = 0x614;
  constexpr static std::size_t addrs = 0x1febb38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FederatedAWSCredentials*>::get(), "Authenticate", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::FederatedAWSCredentials.GetRoleSessionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::FederatedAWSCredentials::*)()>(
    &::Amazon::Runtime::FederatedAWSCredentials::GetRoleSessionName)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x1fec324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FederatedAWSCredentials*>::get(),
                                                                               "GetRoleSessionName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::FederatedAWSCredentials.TryGetRoleSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::FederatedAWSCredentials::*)(ByRef<::Amazon::Runtime::SAMLImmutableCredentials*>)>(
    &::Amazon::Runtime::FederatedAWSCredentials::TryGetRoleSession)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1feb708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FederatedAWSCredentials*>::get(), "TryGetRoleSession", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::SAMLImmutableCredentials*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::FederatedAWSCredentials.RegisterRoleSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::FederatedAWSCredentials::*)(::Amazon::Runtime::SAMLImmutableCredentials*)>(
    &::Amazon::Runtime::FederatedAWSCredentials::RegisterRoleSession)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1fec2cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FederatedAWSCredentials*>::get(), "RegisterRoleSession", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::SAMLImmutableCredentials*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::FederatedAWSCredentials.ClearCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::FederatedAWSCredentials::*)()>(
    &::Amazon::Runtime::FederatedAWSCredentials::ClearCredentials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fec4cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FederatedAWSCredentials*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FederatedAWSCredentials*>::get(), 11));
    return ___internal_method;
  }
};
constexpr ::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager*& Amazon::Runtime::FederatedAWSCredentials::__cordl_internal_get_sessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sessionManager;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager*> const&
Amazon::Runtime::FederatedAWSCredentials::__cordl_internal_get_sessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sessionManager;
}
constexpr void Amazon::Runtime::FederatedAWSCredentials::__cordl_internal_set_sessionManager(::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sessionManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::CredentialManagement::SAMLEndpoint*& Amazon::Runtime::FederatedAWSCredentials::__cordl_internal_get__SAMLEndpoint_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SAMLEndpoint_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::CredentialManagement::SAMLEndpoint*> const&
Amazon::Runtime::FederatedAWSCredentials::__cordl_internal_get__SAMLEndpoint_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SAMLEndpoint_k__BackingField;
}
constexpr void Amazon::Runtime::FederatedAWSCredentials::__cordl_internal_set__SAMLEndpoint_k__BackingField(::Amazon::Runtime::CredentialManagement::SAMLEndpoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SAMLEndpoint_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Runtime::FederatedAWSCredentials::__cordl_internal_get__RoleArn_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RoleArn_k__BackingField;
}
constexpr ::StringW const& Amazon::Runtime::FederatedAWSCredentials::__cordl_internal_get__RoleArn_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RoleArn_k__BackingField;
}
constexpr void Amazon::Runtime::FederatedAWSCredentials::__cordl_internal_set__RoleArn_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____RoleArn_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::FederatedAWSCredentialsOptions*& Amazon::Runtime::FederatedAWSCredentials::__cordl_internal_get__Options_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Options_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::FederatedAWSCredentialsOptions*> const&
Amazon::Runtime::FederatedAWSCredentials::__cordl_internal_get__Options_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Options_k__BackingField;
}
constexpr void Amazon::Runtime::FederatedAWSCredentials::__cordl_internal_set__Options_k__BackingField(::Amazon::Runtime::FederatedAWSCredentialsOptions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Options_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Amazon::Runtime::FederatedAWSCredentials::setStaticF_DefaultSTSClientRegion(::Amazon::RegionEndpoint* value) {
  ::cordl_internals::setStaticField<::Amazon::RegionEndpoint*, "DefaultSTSClientRegion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FederatedAWSCredentials*>::get>(
      std::forward<::Amazon::RegionEndpoint*>(value));
}
inline ::Amazon::RegionEndpoint* Amazon::Runtime::FederatedAWSCredentials::getStaticF_DefaultSTSClientRegion() {
  return ::cordl_internals::getStaticField<::Amazon::RegionEndpoint*, "DefaultSTSClientRegion",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FederatedAWSCredentials*>::get>();
}
inline void Amazon::Runtime::FederatedAWSCredentials::setStaticF_MaximumCredentialTimespan(::System::TimeSpan value) {
  ::cordl_internals::setStaticField<::System::TimeSpan, "MaximumCredentialTimespan", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FederatedAWSCredentials*>::get>(
      std::forward<::System::TimeSpan>(value));
}
inline ::System::TimeSpan Amazon::Runtime::FederatedAWSCredentials::getStaticF_MaximumCredentialTimespan() {
  return ::cordl_internals::getStaticField<::System::TimeSpan, "MaximumCredentialTimespan", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FederatedAWSCredentials*>::get>();
}
inline void Amazon::Runtime::FederatedAWSCredentials::setStaticF_DefaultPreemptExpiryTime(::System::TimeSpan value) {
  ::cordl_internals::setStaticField<::System::TimeSpan, "DefaultPreemptExpiryTime", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FederatedAWSCredentials*>::get>(
      std::forward<::System::TimeSpan>(value));
}
inline ::System::TimeSpan Amazon::Runtime::FederatedAWSCredentials::getStaticF_DefaultPreemptExpiryTime() {
  return ::cordl_internals::getStaticField<::System::TimeSpan, "DefaultPreemptExpiryTime", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FederatedAWSCredentials*>::get>();
}
inline ::Amazon::Runtime::FederatedAWSCredentials* Amazon::Runtime::FederatedAWSCredentials::New_ctor(::Amazon::Runtime::CredentialManagement::SAMLEndpoint* samlEndpoint, ::StringW roleArn) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::FederatedAWSCredentials*>(samlEndpoint, roleArn));
}
inline void Amazon::Runtime::FederatedAWSCredentials::_ctor(::Amazon::Runtime::CredentialManagement::SAMLEndpoint* samlEndpoint, ::StringW roleArn) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FederatedAWSCredentials*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::SAMLEndpoint*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, samlEndpoint, roleArn);
}
inline ::Amazon::Runtime::FederatedAWSCredentials* Amazon::Runtime::FederatedAWSCredentials::New_ctor(::Amazon::Runtime::CredentialManagement::SAMLEndpoint* samlEndpoint, ::StringW roleArn,
                                                                                                      ::Amazon::Runtime::FederatedAWSCredentialsOptions* options) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::FederatedAWSCredentials*>(samlEndpoint, roleArn, options));
}
inline void Amazon::Runtime::FederatedAWSCredentials::_ctor(::Amazon::Runtime::CredentialManagement::SAMLEndpoint* samlEndpoint, ::StringW roleArn,
                                                            ::Amazon::Runtime::FederatedAWSCredentialsOptions* options) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FederatedAWSCredentials*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::SAMLEndpoint*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::FederatedAWSCredentialsOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, samlEndpoint, roleArn, options);
}
inline ::Amazon::Runtime::CredentialManagement::SAMLEndpoint* Amazon::Runtime::FederatedAWSCredentials::get_SAMLEndpoint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FederatedAWSCredentials*>::get(),
                                                                             "get_SAMLEndpoint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::CredentialManagement::SAMLEndpoint*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::FederatedAWSCredentials::set_SAMLEndpoint(::Amazon::Runtime::CredentialManagement::SAMLEndpoint* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FederatedAWSCredentials*>::get(), "set_SAMLEndpoint", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::SAMLEndpoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::Runtime::FederatedAWSCredentials::get_RoleArn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FederatedAWSCredentials*>::get(), "get_RoleArn",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Runtime::FederatedAWSCredentials::set_RoleArn(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FederatedAWSCredentials*>::get(), "set_RoleArn", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::FederatedAWSCredentialsOptions* Amazon::Runtime::FederatedAWSCredentials::get_Options() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FederatedAWSCredentials*>::get(), "get_Options",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::FederatedAWSCredentialsOptions*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::FederatedAWSCredentials::set_Options(::Amazon::Runtime::FederatedAWSCredentialsOptions* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FederatedAWSCredentials*>::get(), "set_Options", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::FederatedAWSCredentialsOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* Amazon::Runtime::FederatedAWSCredentials::GenerateNewCredentials() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FederatedAWSCredentials*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* Amazon::Runtime::FederatedAWSCredentials::Authenticate(::System::Net::ICredentials* userCredential) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FederatedAWSCredentials*>::get(), "Authenticate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*, false>(this, ___internal_method, userCredential);
}
inline ::StringW Amazon::Runtime::FederatedAWSCredentials::GetRoleSessionName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FederatedAWSCredentials*>::get(),
                                                                             "GetRoleSessionName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::FederatedAWSCredentials::TryGetRoleSession(ByRef<::Amazon::Runtime::SAMLImmutableCredentials*> sessionCredentials) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FederatedAWSCredentials*>::get(), "TryGetRoleSession", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::SAMLImmutableCredentials*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, sessionCredentials);
}
inline void Amazon::Runtime::FederatedAWSCredentials::RegisterRoleSession(::Amazon::Runtime::SAMLImmutableCredentials* sessionCredentials) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FederatedAWSCredentials*>::get(), "RegisterRoleSession", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::SAMLImmutableCredentials*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionCredentials);
}
inline void Amazon::Runtime::FederatedAWSCredentials::ClearCredentials() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FederatedAWSCredentials*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::FederatedAWSCredentials::FederatedAWSCredentials() {}
