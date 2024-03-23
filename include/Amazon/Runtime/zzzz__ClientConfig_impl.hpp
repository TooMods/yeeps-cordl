#pragma once
#include "Amazon/Runtime/zzzz__RequestRetryMode_impl.hpp"
#include "Amazon/Runtime/zzzz__SigningAlgorithm_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "Amazon/Runtime/zzzz__ClientConfig_def.hpp"
#include "Amazon/Runtime/zzzz__HttpClientFactory_def.hpp"
#include "Amazon/Runtime/zzzz__IClientConfig_def.hpp"
#include "Amazon/Runtime/zzzz__RequestRetryMode_def.hpp"
#include "Amazon/Runtime/zzzz__SigningAlgorithm_def.hpp"
#include "Amazon/zzzz__RegionEndpoint_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Net/zzzz__IWebProxy_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.get_ServiceVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::ClientConfig::*)()>(&::Amazon::Runtime::ClientConfig::get_ServiceVersion)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), 45));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.get_SignatureMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::SigningAlgorithm (::Amazon::Runtime::ClientConfig::*)()>(
    &::Amazon::Runtime::ClientConfig::get_SignatureMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe1530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_SignatureMethod",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.set_SignatureMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ClientConfig::*)(::Amazon::Runtime::SigningAlgorithm)>(
    &::Amazon::Runtime::ClientConfig::set_SignatureMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe1538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_SignatureMethod", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::SigningAlgorithm>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.get_SignatureVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::ClientConfig::*)()>(&::Amazon::Runtime::ClientConfig::get_SignatureVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe1540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_SignatureVersion",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.set_SignatureVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ClientConfig::*)(::StringW)>(&::Amazon::Runtime::ClientConfig::set_SignatureVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe1548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_SignatureVersion", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.get_UserAgent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::ClientConfig::*)()>(&::Amazon::Runtime::ClientConfig::get_UserAgent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), 46));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.get_UseAlternateUserAgentHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::ClientConfig::*)()>(&::Amazon::Runtime::ClientConfig::get_UseAlternateUserAgentHeader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe1550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_UseAlternateUserAgentHeader",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.set_UseAlternateUserAgentHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ClientConfig::*)(bool)>(&::Amazon::Runtime::ClientConfig::set_UseAlternateUserAgentHeader)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe1558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_UseAlternateUserAgentHeader",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.get_RegionEndpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::RegionEndpoint* (::Amazon::Runtime::ClientConfig::*)()>(
    &::Amazon::Runtime::ClientConfig::get_RegionEndpoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1fe1564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_RegionEndpoint",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.set_RegionEndpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ClientConfig::*)(::Amazon::RegionEndpoint*)>(
    &::Amazon::Runtime::ClientConfig::set_RegionEndpoint)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1fde65c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_RegionEndpoint", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::RegionEndpoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.get_RegionEndpointServiceName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::ClientConfig::*)()>(&::Amazon::Runtime::ClientConfig::get_RegionEndpointServiceName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), 47));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.get_ServiceURL
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::ClientConfig::*)()>(&::Amazon::Runtime::ClientConfig::get_ServiceURL)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe1620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_ServiceURL",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.set_ServiceURL
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ClientConfig::*)(::StringW)>(&::Amazon::Runtime::ClientConfig::set_ServiceURL)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1fe1628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_ServiceURL", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.get_UseHttp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::ClientConfig::*)()>(&::Amazon::Runtime::ClientConfig::get_UseHttp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe1638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_UseHttp",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.set_UseHttp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ClientConfig::*)(bool)>(&::Amazon::Runtime::ClientConfig::set_UseHttp)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe1640;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_UseHttp",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.DetermineServiceURL
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::ClientConfig::*)()>(&::Amazon::Runtime::ClientConfig::DetermineServiceURL)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x1fe164c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), 48));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.GetUrl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Amazon::RegionEndpoint*, ::StringW, bool, bool)>(&::Amazon::Runtime::ClientConfig::GetUrl)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x1fe1704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "GetUrl", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::RegionEndpoint*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.get_AuthenticationRegion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::ClientConfig::*)()>(&::Amazon::Runtime::ClientConfig::get_AuthenticationRegion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe1830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(),
                                                                               "get_AuthenticationRegion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.set_AuthenticationRegion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ClientConfig::*)(::StringW)>(&::Amazon::Runtime::ClientConfig::set_AuthenticationRegion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe1838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_AuthenticationRegion",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.get_AuthenticationServiceName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::ClientConfig::*)()>(&::Amazon::Runtime::ClientConfig::get_AuthenticationServiceName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe1840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(),
                                                                               "get_AuthenticationServiceName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.set_AuthenticationServiceName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ClientConfig::*)(::StringW)>(
    &::Amazon::Runtime::ClientConfig::set_AuthenticationServiceName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe1848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_AuthenticationServiceName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.get_MaxErrorRetry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Runtime::ClientConfig::*)()>(&::Amazon::Runtime::ClientConfig::get_MaxErrorRetry)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x1fe1850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_MaxErrorRetry",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.set_MaxErrorRetry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ClientConfig::*)(int32_t)>(&::Amazon::Runtime::ClientConfig::set_MaxErrorRetry)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1fe19f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_MaxErrorRetry", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.get_IsMaxErrorRetrySet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::ClientConfig::*)()>(&::Amazon::Runtime::ClientConfig::get_IsMaxErrorRetrySet)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1fe1a58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(),
                                                                               "get_IsMaxErrorRetrySet", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.get_LogResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::ClientConfig::*)()>(&::Amazon::Runtime::ClientConfig::get_LogResponse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe1a94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_LogResponse",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.set_LogResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ClientConfig::*)(bool)>(&::Amazon::Runtime::ClientConfig::set_LogResponse)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe1a9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_LogResponse",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.get_ReadEntireResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::ClientConfig::*)()>(&::Amazon::Runtime::ClientConfig::get_ReadEntireResponse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe1aa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(),
                                                                               "get_ReadEntireResponse", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.set_ReadEntireResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ClientConfig::*)(bool)>(&::Amazon::Runtime::ClientConfig::set_ReadEntireResponse)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe1ab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_ReadEntireResponse",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.get_BufferSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Runtime::ClientConfig::*)()>(&::Amazon::Runtime::ClientConfig::get_BufferSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe1abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_BufferSize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.set_BufferSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ClientConfig::*)(int32_t)>(&::Amazon::Runtime::ClientConfig::set_BufferSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe1ac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_BufferSize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.get_ProgressUpdateInterval
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Amazon::Runtime::ClientConfig::*)()>(&::Amazon::Runtime::ClientConfig::get_ProgressUpdateInterval)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe1acc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(),
                                                                               "get_ProgressUpdateInterval", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.set_ProgressUpdateInterval
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ClientConfig::*)(int64_t)>(&::Amazon::Runtime::ClientConfig::set_ProgressUpdateInterval)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe1ad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_ProgressUpdateInterval",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.get_ResignRetries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::ClientConfig::*)()>(&::Amazon::Runtime::ClientConfig::get_ResignRetries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe1adc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_ResignRetries",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.set_ResignRetries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ClientConfig::*)(bool)>(&::Amazon::Runtime::ClientConfig::set_ResignRetries)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe1ae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_ResignRetries",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.get_AllowAutoRedirect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::ClientConfig::*)()>(&::Amazon::Runtime::ClientConfig::get_AllowAutoRedirect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe1af0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_AllowAutoRedirect",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.set_AllowAutoRedirect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ClientConfig::*)(bool)>(&::Amazon::Runtime::ClientConfig::set_AllowAutoRedirect)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe1af8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_AllowAutoRedirect",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.get_LogMetrics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::ClientConfig::*)()>(&::Amazon::Runtime::ClientConfig::get_LogMetrics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe1b04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_LogMetrics",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.set_LogMetrics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ClientConfig::*)(bool)>(&::Amazon::Runtime::ClientConfig::set_LogMetrics)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe1b0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_LogMetrics",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.get_DisableLogging
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::ClientConfig::*)()>(&::Amazon::Runtime::ClientConfig::get_DisableLogging)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe1b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_DisableLogging",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.set_DisableLogging
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ClientConfig::*)(bool)>(&::Amazon::Runtime::ClientConfig::set_DisableLogging)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe1b20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_DisableLogging",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.get_ProxyCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ICredentials* (::Amazon::Runtime::ClientConfig::*)()>(
    &::Amazon::Runtime::ClientConfig::get_ProxyCredentials)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x1fe1b2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_ProxyCredentials",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.set_ProxyCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ClientConfig::*)(::System::Net::ICredentials*)>(
    &::Amazon::Runtime::ClientConfig::set_ProxyCredentials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe1c64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_ProxyCredentials", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ClientConfig::*)()>(&::Amazon::Runtime::ClientConfig::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x1fe1c6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ClientConfig::*)()>(&::Amazon::Runtime::ClientConfig::Initialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1fe1da0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), 49));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.get_Timeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::TimeSpan> (::Amazon::Runtime::ClientConfig::*)()>(
    &::Amazon::Runtime::ClientConfig::get_Timeout)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe1da4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_Timeout",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.set_Timeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ClientConfig::*)(::System::Nullable_1<::System::TimeSpan>)>(
    &::Amazon::Runtime::ClientConfig::set_Timeout)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1fe1db0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_Timeout", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::TimeSpan>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.get_UseDualstackEndpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::ClientConfig::*)()>(&::Amazon::Runtime::ClientConfig::get_UseDualstackEndpoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe1ff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(),
                                                                               "get_UseDualstackEndpoint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.set_UseDualstackEndpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ClientConfig::*)(bool)>(&::Amazon::Runtime::ClientConfig::set_UseDualstackEndpoint)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe1ffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_UseDualstackEndpoint",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.get_ThrottleRetries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::ClientConfig::*)()>(&::Amazon::Runtime::ClientConfig::get_ThrottleRetries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe2008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_ThrottleRetries",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.set_ThrottleRetries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ClientConfig::*)(bool)>(&::Amazon::Runtime::ClientConfig::set_ThrottleRetries)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe2010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_ThrottleRetries",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.SetUseNagleIfAvailable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ClientConfig::*)(bool)>(&::Amazon::Runtime::ClientConfig::SetUseNagleIfAvailable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1fe201c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "SetUseNagleIfAvailable",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.Validate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ClientConfig::*)()>(&::Amazon::Runtime::ClientConfig::Validate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1fe2020;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), 50));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.get_CorrectedUtcNow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::Amazon::Runtime::ClientConfig::*)()>(&::Amazon::Runtime::ClientConfig::get_CorrectedUtcNow)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1fe2090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_CorrectedUtcNow",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.get_ClockOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::Amazon::Runtime::ClientConfig::*)()>(&::Amazon::Runtime::ClientConfig::get_ClockOffset)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x1fe23d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_ClockOffset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.get_DisableHostPrefixInjection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::ClientConfig::*)()>(&::Amazon::Runtime::ClientConfig::get_DisableHostPrefixInjection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe2700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(),
                                                                               "get_DisableHostPrefixInjection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.set_DisableHostPrefixInjection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ClientConfig::*)(bool)>(&::Amazon::Runtime::ClientConfig::set_DisableHostPrefixInjection)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe2708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_DisableHostPrefixInjection",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.get_EndpointDiscoveryEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::ClientConfig::*)()>(&::Amazon::Runtime::ClientConfig::get_EndpointDiscoveryEnabled)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x1fe2714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(),
                                                                               "get_EndpointDiscoveryEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.set_EndpointDiscoveryEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ClientConfig::*)(bool)>(&::Amazon::Runtime::ClientConfig::set_EndpointDiscoveryEnabled)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1fe27c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_EndpointDiscoveryEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.get_EndpointDiscoveryCacheLimit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Runtime::ClientConfig::*)()>(&::Amazon::Runtime::ClientConfig::get_EndpointDiscoveryCacheLimit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe2828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_EndpointDiscoveryCacheLimit",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.set_EndpointDiscoveryCacheLimit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ClientConfig::*)(int32_t)>(
    &::Amazon::Runtime::ClientConfig::set_EndpointDiscoveryCacheLimit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe2830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_EndpointDiscoveryCacheLimit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.get_RetryMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::RequestRetryMode (::Amazon::Runtime::ClientConfig::*)()>(
    &::Amazon::Runtime::ClientConfig::get_RetryMode)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x1fe194c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_RetryMode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.set_RetryMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ClientConfig::*)(::Amazon::Runtime::RequestRetryMode)>(
    &::Amazon::Runtime::ClientConfig::set_RetryMode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1fe2838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_RetryMode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::RequestRetryMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.get_FastFailRequests
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::ClientConfig::*)()>(&::Amazon::Runtime::ClientConfig::get_FastFailRequests)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe28a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_FastFailRequests",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.set_FastFailRequests
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ClientConfig::*)(bool)>(&::Amazon::Runtime::ClientConfig::set_FastFailRequests)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe28a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_FastFailRequests",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.ValidateTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Nullable_1<::System::TimeSpan>)>(&::Amazon::Runtime::ClientConfig::ValidateTimeout)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x1fe1e20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "ValidateTimeout", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::TimeSpan>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.GetTimeoutValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Nullable_1<::System::TimeSpan> (*)(::System::Nullable_1<::System::TimeSpan>, ::System::Nullable_1<::System::TimeSpan>)>(&::Amazon::Runtime::ClientConfig::GetTimeoutValue)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1fe28b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "GetTimeoutValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::TimeSpan>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::TimeSpan>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.get_CacheHttpClient
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::ClientConfig::*)()>(&::Amazon::Runtime::ClientConfig::get_CacheHttpClient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe291c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_CacheHttpClient",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.set_CacheHttpClient
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ClientConfig::*)(bool)>(&::Amazon::Runtime::ClientConfig::set_CacheHttpClient)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe2924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_CacheHttpClient",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.get_HttpClientCacheSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Runtime::ClientConfig::*)()>(&::Amazon::Runtime::ClientConfig::get_HttpClientCacheSize)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x1fe2930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(),
                                                                               "get_HttpClientCacheSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.set_HttpClientCacheSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ClientConfig::*)(int32_t)>(&::Amazon::Runtime::ClientConfig::set_HttpClientCacheSize)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1fe2a44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_HttpClientCacheSize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.get_ReadWriteTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::TimeSpan> (::Amazon::Runtime::ClientConfig::*)()>(
    &::Amazon::Runtime::ClientConfig::get_ReadWriteTimeout)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe2aac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_ReadWriteTimeout",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.set_ReadWriteTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ClientConfig::*)(::System::Nullable_1<::System::TimeSpan>)>(
    &::Amazon::Runtime::ClientConfig::set_ReadWriteTimeout)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1fe2ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_ReadWriteTimeout", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::TimeSpan>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.GetDefaultRegionEndpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::RegionEndpoint* (*)()>(&::Amazon::Runtime::ClientConfig::GetDefaultRegionEndpoint)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x1fe15d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(),
                                                                               "GetDefaultRegionEndpoint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.GetWebProxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IWebProxy* (::Amazon::Runtime::ClientConfig::*)()>(&::Amazon::Runtime::ClientConfig::GetWebProxy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe2b28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "GetWebProxy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.SetWebProxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ClientConfig::*)(::System::Net::IWebProxy*)>(
    &::Amazon::Runtime::ClientConfig::SetWebProxy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe2b30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "SetWebProxy", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IWebProxy*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.get_ProxyHost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::ClientConfig::*)()>(&::Amazon::Runtime::ClientConfig::get_ProxyHost)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1fe2b38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_ProxyHost",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.set_ProxyHost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ClientConfig::*)(::StringW)>(&::Amazon::Runtime::ClientConfig::set_ProxyHost)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x1fde674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_ProxyHost", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.get_ProxyPort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Runtime::ClientConfig::*)()>(&::Amazon::Runtime::ClientConfig::get_ProxyPort)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1fe2bb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_ProxyPort",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.set_ProxyPort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ClientConfig::*)(int32_t)>(&::Amazon::Runtime::ClientConfig::set_ProxyPort)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1fde718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_ProxyPort", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.get_MaxConnectionsPerServer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int32_t> (::Amazon::Runtime::ClientConfig::*)()>(
    &::Amazon::Runtime::ClientConfig::get_MaxConnectionsPerServer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe2c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(),
                                                                               "get_MaxConnectionsPerServer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.set_MaxConnectionsPerServer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ClientConfig::*)(::System::Nullable_1<int32_t>)>(
    &::Amazon::Runtime::ClientConfig::set_MaxConnectionsPerServer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe2c34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_MaxConnectionsPerServer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.get_HttpClientFactory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::HttpClientFactory* (::Amazon::Runtime::ClientConfig::*)()>(
    &::Amazon::Runtime::ClientConfig::get_HttpClientFactory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe2c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_HttpClientFactory",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.set_HttpClientFactory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ClientConfig::*)(::Amazon::Runtime::HttpClientFactory*)>(
    &::Amazon::Runtime::ClientConfig::set_HttpClientFactory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe2c44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_HttpClientFactory", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::HttpClientFactory*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.CacheHttpClients
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Amazon::Runtime::IClientConfig*)>(&::Amazon::Runtime::ClientConfig::CacheHttpClients)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x1fe2c4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "CacheHttpClients", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.DisposeHttpClients
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Amazon::Runtime::IClientConfig*)>(&::Amazon::Runtime::ClientConfig::DisposeHttpClients)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x1fe2db8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "DisposeHttpClients", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.CreateConfigUniqueString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Amazon::Runtime::IClientConfig*)>(&::Amazon::Runtime::ClientConfig::CreateConfigUniqueString)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x1fe2f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "CreateConfigUniqueString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ClientConfig.UseGlobalHttpClientCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Amazon::Runtime::IClientConfig*)>(&::Amazon::Runtime::ClientConfig::UseGlobalHttpClientCache)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x1fe34f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "UseGlobalHttpClientCache", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::IClientConfig"
constexpr Amazon::Runtime::ClientConfig::operator ::Amazon::Runtime::IClientConfig*() noexcept {
  return static_cast<::Amazon::Runtime::IClientConfig*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::IClientConfig"
constexpr ::Amazon::Runtime::IClientConfig* Amazon::Runtime::ClientConfig::i___Amazon__Runtime__IClientConfig() noexcept {
  return static_cast<::Amazon::Runtime::IClientConfig*>(static_cast<void*>(this));
}
constexpr ::Amazon::RegionEndpoint*& Amazon::Runtime::ClientConfig::__cordl_internal_get_regionEndpoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___regionEndpoint;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::RegionEndpoint*> const& Amazon::Runtime::ClientConfig::__cordl_internal_get_regionEndpoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___regionEndpoint;
}
constexpr void Amazon::Runtime::ClientConfig::__cordl_internal_set_regionEndpoint(::Amazon::RegionEndpoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___regionEndpoint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Amazon::Runtime::ClientConfig::__cordl_internal_get_probeForRegionEndpoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeForRegionEndpoint;
}
constexpr bool const& Amazon::Runtime::ClientConfig::__cordl_internal_get_probeForRegionEndpoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeForRegionEndpoint;
}
constexpr void Amazon::Runtime::ClientConfig::__cordl_internal_set_probeForRegionEndpoint(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___probeForRegionEndpoint = value;
}
constexpr bool& Amazon::Runtime::ClientConfig::__cordl_internal_get_throttleRetries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___throttleRetries;
}
constexpr bool const& Amazon::Runtime::ClientConfig::__cordl_internal_get_throttleRetries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___throttleRetries;
}
constexpr void Amazon::Runtime::ClientConfig::__cordl_internal_set_throttleRetries(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___throttleRetries = value;
}
constexpr bool& Amazon::Runtime::ClientConfig::__cordl_internal_get_useHttp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useHttp;
}
constexpr bool const& Amazon::Runtime::ClientConfig::__cordl_internal_get_useHttp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useHttp;
}
constexpr void Amazon::Runtime::ClientConfig::__cordl_internal_set_useHttp(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useHttp = value;
}
constexpr bool& Amazon::Runtime::ClientConfig::__cordl_internal_get_useAlternateUserAgentHeader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useAlternateUserAgentHeader;
}
constexpr bool const& Amazon::Runtime::ClientConfig::__cordl_internal_get_useAlternateUserAgentHeader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useAlternateUserAgentHeader;
}
constexpr void Amazon::Runtime::ClientConfig::__cordl_internal_set_useAlternateUserAgentHeader(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useAlternateUserAgentHeader = value;
}
constexpr ::StringW& Amazon::Runtime::ClientConfig::__cordl_internal_get_serviceURL() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serviceURL;
}
constexpr ::StringW const& Amazon::Runtime::ClientConfig::__cordl_internal_get_serviceURL() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serviceURL;
}
constexpr void Amazon::Runtime::ClientConfig::__cordl_internal_set_serviceURL(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serviceURL)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Runtime::ClientConfig::__cordl_internal_get_authRegion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authRegion;
}
constexpr ::StringW const& Amazon::Runtime::ClientConfig::__cordl_internal_get_authRegion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authRegion;
}
constexpr void Amazon::Runtime::ClientConfig::__cordl_internal_set_authRegion(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___authRegion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Runtime::ClientConfig::__cordl_internal_get_authServiceName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authServiceName;
}
constexpr ::StringW const& Amazon::Runtime::ClientConfig::__cordl_internal_get_authServiceName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authServiceName;
}
constexpr void Amazon::Runtime::ClientConfig::__cordl_internal_set_authServiceName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___authServiceName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Runtime::ClientConfig::__cordl_internal_get_signatureVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signatureVersion;
}
constexpr ::StringW const& Amazon::Runtime::ClientConfig::__cordl_internal_get_signatureVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signatureVersion;
}
constexpr void Amazon::Runtime::ClientConfig::__cordl_internal_set_signatureVersion(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___signatureVersion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::SigningAlgorithm& Amazon::Runtime::ClientConfig::__cordl_internal_get_signatureMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signatureMethod;
}
constexpr ::Amazon::Runtime::SigningAlgorithm const& Amazon::Runtime::ClientConfig::__cordl_internal_get_signatureMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signatureMethod;
}
constexpr void Amazon::Runtime::ClientConfig::__cordl_internal_set_signatureMethod(::Amazon::Runtime::SigningAlgorithm value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signatureMethod = value;
}
constexpr bool& Amazon::Runtime::ClientConfig::__cordl_internal_get_readEntireResponse() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readEntireResponse;
}
constexpr bool const& Amazon::Runtime::ClientConfig::__cordl_internal_get_readEntireResponse() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readEntireResponse;
}
constexpr void Amazon::Runtime::ClientConfig::__cordl_internal_set_readEntireResponse(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___readEntireResponse = value;
}
constexpr bool& Amazon::Runtime::ClientConfig::__cordl_internal_get_logResponse() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logResponse;
}
constexpr bool const& Amazon::Runtime::ClientConfig::__cordl_internal_get_logResponse() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logResponse;
}
constexpr void Amazon::Runtime::ClientConfig::__cordl_internal_set_logResponse(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___logResponse = value;
}
constexpr int32_t& Amazon::Runtime::ClientConfig::__cordl_internal_get_bufferSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufferSize;
}
constexpr int32_t const& Amazon::Runtime::ClientConfig::__cordl_internal_get_bufferSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufferSize;
}
constexpr void Amazon::Runtime::ClientConfig::__cordl_internal_set_bufferSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bufferSize = value;
}
constexpr int64_t& Amazon::Runtime::ClientConfig::__cordl_internal_get_progressUpdateInterval() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___progressUpdateInterval;
}
constexpr int64_t const& Amazon::Runtime::ClientConfig::__cordl_internal_get_progressUpdateInterval() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___progressUpdateInterval;
}
constexpr void Amazon::Runtime::ClientConfig::__cordl_internal_set_progressUpdateInterval(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___progressUpdateInterval = value;
}
constexpr bool& Amazon::Runtime::ClientConfig::__cordl_internal_get_resignRetries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resignRetries;
}
constexpr bool const& Amazon::Runtime::ClientConfig::__cordl_internal_get_resignRetries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resignRetries;
}
constexpr void Amazon::Runtime::ClientConfig::__cordl_internal_set_resignRetries(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resignRetries = value;
}
constexpr ::System::Net::ICredentials*& Amazon::Runtime::ClientConfig::__cordl_internal_get_proxyCredentials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___proxyCredentials;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::ICredentials*> const& Amazon::Runtime::ClientConfig::__cordl_internal_get_proxyCredentials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___proxyCredentials;
}
constexpr void Amazon::Runtime::ClientConfig::__cordl_internal_set_proxyCredentials(::System::Net::ICredentials* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___proxyCredentials)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Amazon::Runtime::ClientConfig::__cordl_internal_get_logMetrics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logMetrics;
}
constexpr bool const& Amazon::Runtime::ClientConfig::__cordl_internal_get_logMetrics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logMetrics;
}
constexpr void Amazon::Runtime::ClientConfig::__cordl_internal_set_logMetrics(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___logMetrics = value;
}
constexpr bool& Amazon::Runtime::ClientConfig::__cordl_internal_get_disableLogging() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disableLogging;
}
constexpr bool const& Amazon::Runtime::ClientConfig::__cordl_internal_get_disableLogging() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disableLogging;
}
constexpr void Amazon::Runtime::ClientConfig::__cordl_internal_set_disableLogging(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disableLogging = value;
}
constexpr ::System::Nullable_1<::System::TimeSpan>& Amazon::Runtime::ClientConfig::__cordl_internal_get_timeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeout;
}
constexpr ::System::Nullable_1<::System::TimeSpan> const& Amazon::Runtime::ClientConfig::__cordl_internal_get_timeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeout;
}
constexpr void Amazon::Runtime::ClientConfig::__cordl_internal_set_timeout(::System::Nullable_1<::System::TimeSpan> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___timeout = value;
}
constexpr bool& Amazon::Runtime::ClientConfig::__cordl_internal_get_allowAutoRedirect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowAutoRedirect;
}
constexpr bool const& Amazon::Runtime::ClientConfig::__cordl_internal_get_allowAutoRedirect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowAutoRedirect;
}
constexpr void Amazon::Runtime::ClientConfig::__cordl_internal_set_allowAutoRedirect(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allowAutoRedirect = value;
}
constexpr bool& Amazon::Runtime::ClientConfig::__cordl_internal_get_useDualstackEndpoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useDualstackEndpoint;
}
constexpr bool const& Amazon::Runtime::ClientConfig::__cordl_internal_get_useDualstackEndpoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useDualstackEndpoint;
}
constexpr void Amazon::Runtime::ClientConfig::__cordl_internal_set_useDualstackEndpoint(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useDualstackEndpoint = value;
}
constexpr ::System::Nullable_1<::System::TimeSpan>& Amazon::Runtime::ClientConfig::__cordl_internal_get_readWriteTimeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readWriteTimeout;
}
constexpr ::System::Nullable_1<::System::TimeSpan> const& Amazon::Runtime::ClientConfig::__cordl_internal_get_readWriteTimeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readWriteTimeout;
}
constexpr void Amazon::Runtime::ClientConfig::__cordl_internal_set_readWriteTimeout(::System::Nullable_1<::System::TimeSpan> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___readWriteTimeout = value;
}
constexpr bool& Amazon::Runtime::ClientConfig::__cordl_internal_get_disableHostPrefixInjection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disableHostPrefixInjection;
}
constexpr bool const& Amazon::Runtime::ClientConfig::__cordl_internal_get_disableHostPrefixInjection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disableHostPrefixInjection;
}
constexpr void Amazon::Runtime::ClientConfig::__cordl_internal_set_disableHostPrefixInjection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disableHostPrefixInjection = value;
}
constexpr ::System::Nullable_1<bool>& Amazon::Runtime::ClientConfig::__cordl_internal_get_endpointDiscoveryEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endpointDiscoveryEnabled;
}
constexpr ::System::Nullable_1<bool> const& Amazon::Runtime::ClientConfig::__cordl_internal_get_endpointDiscoveryEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endpointDiscoveryEnabled;
}
constexpr void Amazon::Runtime::ClientConfig::__cordl_internal_set_endpointDiscoveryEnabled(::System::Nullable_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___endpointDiscoveryEnabled = value;
}
constexpr int32_t& Amazon::Runtime::ClientConfig::__cordl_internal_get_endpointDiscoveryCacheLimit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endpointDiscoveryCacheLimit;
}
constexpr int32_t const& Amazon::Runtime::ClientConfig::__cordl_internal_get_endpointDiscoveryCacheLimit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endpointDiscoveryCacheLimit;
}
constexpr void Amazon::Runtime::ClientConfig::__cordl_internal_set_endpointDiscoveryCacheLimit(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___endpointDiscoveryCacheLimit = value;
}
constexpr ::System::Nullable_1<::Amazon::Runtime::RequestRetryMode>& Amazon::Runtime::ClientConfig::__cordl_internal_get_retryMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___retryMode;
}
constexpr ::System::Nullable_1<::Amazon::Runtime::RequestRetryMode> const& Amazon::Runtime::ClientConfig::__cordl_internal_get_retryMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___retryMode;
}
constexpr void Amazon::Runtime::ClientConfig::__cordl_internal_set_retryMode(::System::Nullable_1<::Amazon::Runtime::RequestRetryMode> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___retryMode = value;
}
constexpr ::System::Nullable_1<int32_t>& Amazon::Runtime::ClientConfig::__cordl_internal_get_maxRetries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxRetries;
}
constexpr ::System::Nullable_1<int32_t> const& Amazon::Runtime::ClientConfig::__cordl_internal_get_maxRetries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxRetries;
}
constexpr void Amazon::Runtime::ClientConfig::__cordl_internal_set_maxRetries(::System::Nullable_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxRetries = value;
}
constexpr bool& Amazon::Runtime::ClientConfig::__cordl_internal_get__FastFailRequests_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____FastFailRequests_k__BackingField;
}
constexpr bool const& Amazon::Runtime::ClientConfig::__cordl_internal_get__FastFailRequests_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____FastFailRequests_k__BackingField;
}
constexpr void Amazon::Runtime::ClientConfig::__cordl_internal_set__FastFailRequests_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____FastFailRequests_k__BackingField = value;
}
constexpr bool& Amazon::Runtime::ClientConfig::__cordl_internal_get__CacheHttpClient_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CacheHttpClient_k__BackingField;
}
constexpr bool const& Amazon::Runtime::ClientConfig::__cordl_internal_get__CacheHttpClient_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CacheHttpClient_k__BackingField;
}
constexpr void Amazon::Runtime::ClientConfig::__cordl_internal_set__CacheHttpClient_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CacheHttpClient_k__BackingField = value;
}
constexpr ::System::Nullable_1<int32_t>& Amazon::Runtime::ClientConfig::__cordl_internal_get__httpClientCacheSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____httpClientCacheSize;
}
constexpr ::System::Nullable_1<int32_t> const& Amazon::Runtime::ClientConfig::__cordl_internal_get__httpClientCacheSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____httpClientCacheSize;
}
constexpr void Amazon::Runtime::ClientConfig::__cordl_internal_set__httpClientCacheSize(::System::Nullable_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____httpClientCacheSize = value;
}
constexpr ::System::Net::IWebProxy*& Amazon::Runtime::ClientConfig::__cordl_internal_get_proxy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___proxy;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::IWebProxy*> const& Amazon::Runtime::ClientConfig::__cordl_internal_get_proxy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___proxy;
}
constexpr void Amazon::Runtime::ClientConfig::__cordl_internal_set_proxy(::System::Net::IWebProxy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___proxy)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Runtime::ClientConfig::__cordl_internal_get_proxyHost() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___proxyHost;
}
constexpr ::StringW const& Amazon::Runtime::ClientConfig::__cordl_internal_get_proxyHost() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___proxyHost;
}
constexpr void Amazon::Runtime::ClientConfig::__cordl_internal_set_proxyHost(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___proxyHost)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Amazon::Runtime::ClientConfig::__cordl_internal_get_proxyPort() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___proxyPort;
}
constexpr int32_t const& Amazon::Runtime::ClientConfig::__cordl_internal_get_proxyPort() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___proxyPort;
}
constexpr void Amazon::Runtime::ClientConfig::__cordl_internal_set_proxyPort(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___proxyPort = value;
}
constexpr ::System::Nullable_1<int32_t>& Amazon::Runtime::ClientConfig::__cordl_internal_get__MaxConnectionsPerServer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaxConnectionsPerServer_k__BackingField;
}
constexpr ::System::Nullable_1<int32_t> const& Amazon::Runtime::ClientConfig::__cordl_internal_get__MaxConnectionsPerServer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaxConnectionsPerServer_k__BackingField;
}
constexpr void Amazon::Runtime::ClientConfig::__cordl_internal_set__MaxConnectionsPerServer_k__BackingField(::System::Nullable_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MaxConnectionsPerServer_k__BackingField = value;
}
constexpr ::Amazon::Runtime::HttpClientFactory*& Amazon::Runtime::ClientConfig::__cordl_internal_get__HttpClientFactory_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HttpClientFactory_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::HttpClientFactory*> const& Amazon::Runtime::ClientConfig::__cordl_internal_get__HttpClientFactory_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HttpClientFactory_k__BackingField;
}
constexpr void Amazon::Runtime::ClientConfig::__cordl_internal_set__HttpClientFactory_k__BackingField(::Amazon::Runtime::HttpClientFactory* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____HttpClientFactory_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Amazon::Runtime::ClientConfig::setStaticF_InfiniteTimeout(::System::TimeSpan value) {
  ::cordl_internals::setStaticField<::System::TimeSpan, "InfiniteTimeout", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get>(
      std::forward<::System::TimeSpan>(value));
}
inline ::System::TimeSpan Amazon::Runtime::ClientConfig::getStaticF_InfiniteTimeout() {
  return ::cordl_internals::getStaticField<::System::TimeSpan, "InfiniteTimeout", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get>();
}
inline void Amazon::Runtime::ClientConfig::setStaticF_MaxTimeout(::System::TimeSpan value) {
  ::cordl_internals::setStaticField<::System::TimeSpan, "MaxTimeout", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get>(
      std::forward<::System::TimeSpan>(value));
}
inline ::System::TimeSpan Amazon::Runtime::ClientConfig::getStaticF_MaxTimeout() {
  return ::cordl_internals::getStaticField<::System::TimeSpan, "MaxTimeout", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get>();
}
inline ::StringW Amazon::Runtime::ClientConfig::get_ServiceVersion() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), 45)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::SigningAlgorithm Amazon::Runtime::ClientConfig::get_SignatureMethod() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_SignatureMethod",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::SigningAlgorithm, false>(this, ___internal_method);
}
inline void Amazon::Runtime::ClientConfig::set_SignatureMethod(::Amazon::Runtime::SigningAlgorithm value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_SignatureMethod", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::SigningAlgorithm>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::Runtime::ClientConfig::get_SignatureVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_SignatureVersion",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Runtime::ClientConfig::set_SignatureVersion(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_SignatureVersion", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::Runtime::ClientConfig::get_UserAgent() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), 46)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::ClientConfig::get_UseAlternateUserAgentHeader() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(),
                                                                             "get_UseAlternateUserAgentHeader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Runtime::ClientConfig::set_UseAlternateUserAgentHeader(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_UseAlternateUserAgentHeader",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::RegionEndpoint* Amazon::Runtime::ClientConfig::get_RegionEndpoint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_RegionEndpoint",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::RegionEndpoint*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::ClientConfig::set_RegionEndpoint(::Amazon::RegionEndpoint* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_RegionEndpoint", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::RegionEndpoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::Runtime::ClientConfig::get_RegionEndpointServiceName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), 47)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Amazon::Runtime::ClientConfig::get_ServiceURL() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_ServiceURL",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Runtime::ClientConfig::set_ServiceURL(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_ServiceURL", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Runtime::ClientConfig::get_UseHttp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_UseHttp",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Runtime::ClientConfig::set_UseHttp(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_UseHttp", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::Runtime::ClientConfig::DetermineServiceURL() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), 48)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Amazon::Runtime::ClientConfig::GetUrl(::Amazon::RegionEndpoint* regionEndpoint, ::StringW regionEndpointServiceName, bool useHttp, bool useDualStack) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "GetUrl", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::RegionEndpoint*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, regionEndpoint, regionEndpointServiceName, useHttp, useDualStack);
}
inline ::StringW Amazon::Runtime::ClientConfig::get_AuthenticationRegion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(),
                                                                             "get_AuthenticationRegion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Runtime::ClientConfig::set_AuthenticationRegion(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_AuthenticationRegion", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::Runtime::ClientConfig::get_AuthenticationServiceName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(),
                                                                             "get_AuthenticationServiceName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Runtime::ClientConfig::set_AuthenticationServiceName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_AuthenticationServiceName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Amazon::Runtime::ClientConfig::get_MaxErrorRetry() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_MaxErrorRetry",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Amazon::Runtime::ClientConfig::set_MaxErrorRetry(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_MaxErrorRetry",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Runtime::ClientConfig::get_IsMaxErrorRetrySet() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_IsMaxErrorRetrySet",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::ClientConfig::get_LogResponse() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_LogResponse",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Runtime::ClientConfig::set_LogResponse(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_LogResponse",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Runtime::ClientConfig::get_ReadEntireResponse() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_ReadEntireResponse",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Runtime::ClientConfig::set_ReadEntireResponse(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_ReadEntireResponse",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Amazon::Runtime::ClientConfig::get_BufferSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_BufferSize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Amazon::Runtime::ClientConfig::set_BufferSize(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_BufferSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int64_t Amazon::Runtime::ClientConfig::get_ProgressUpdateInterval() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(),
                                                                             "get_ProgressUpdateInterval", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void Amazon::Runtime::ClientConfig::set_ProgressUpdateInterval(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_ProgressUpdateInterval",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Runtime::ClientConfig::get_ResignRetries() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_ResignRetries",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Runtime::ClientConfig::set_ResignRetries(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_ResignRetries",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Runtime::ClientConfig::get_AllowAutoRedirect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_AllowAutoRedirect",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Runtime::ClientConfig::set_AllowAutoRedirect(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_AllowAutoRedirect",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Runtime::ClientConfig::get_LogMetrics() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_LogMetrics",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Runtime::ClientConfig::set_LogMetrics(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_LogMetrics",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Runtime::ClientConfig::get_DisableLogging() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_DisableLogging",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Runtime::ClientConfig::set_DisableLogging(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_DisableLogging",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Net::ICredentials* Amazon::Runtime::ClientConfig::get_ProxyCredentials() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_ProxyCredentials",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::ICredentials*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::ClientConfig::set_ProxyCredentials(::System::Net::ICredentials* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_ProxyCredentials", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::ClientConfig* Amazon::Runtime::ClientConfig::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::ClientConfig*>());
}
inline void Amazon::Runtime::ClientConfig::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Runtime::ClientConfig::Initialize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), 49)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Nullable_1<::System::TimeSpan> Amazon::Runtime::ClientConfig::get_Timeout() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_Timeout",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::TimeSpan>, false>(this, ___internal_method);
}
inline void Amazon::Runtime::ClientConfig::set_Timeout(::System::Nullable_1<::System::TimeSpan> value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_Timeout", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::TimeSpan>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Runtime::ClientConfig::get_UseDualstackEndpoint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(),
                                                                             "get_UseDualstackEndpoint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Runtime::ClientConfig::set_UseDualstackEndpoint(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_UseDualstackEndpoint",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Runtime::ClientConfig::get_ThrottleRetries() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_ThrottleRetries",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Runtime::ClientConfig::set_ThrottleRetries(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_ThrottleRetries",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Amazon::Runtime::ClientConfig::SetUseNagleIfAvailable(bool useNagle) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "SetUseNagleIfAvailable",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, useNagle);
}
inline void Amazon::Runtime::ClientConfig::Validate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), 50)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::DateTime Amazon::Runtime::ClientConfig::get_CorrectedUtcNow() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_CorrectedUtcNow",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline ::System::TimeSpan Amazon::Runtime::ClientConfig::get_ClockOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_ClockOffset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::ClientConfig::get_DisableHostPrefixInjection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(),
                                                                             "get_DisableHostPrefixInjection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Runtime::ClientConfig::set_DisableHostPrefixInjection(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_DisableHostPrefixInjection",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Runtime::ClientConfig::get_EndpointDiscoveryEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(),
                                                                             "get_EndpointDiscoveryEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Runtime::ClientConfig::set_EndpointDiscoveryEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_EndpointDiscoveryEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Amazon::Runtime::ClientConfig::get_EndpointDiscoveryCacheLimit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(),
                                                                             "get_EndpointDiscoveryCacheLimit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Amazon::Runtime::ClientConfig::set_EndpointDiscoveryCacheLimit(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_EndpointDiscoveryCacheLimit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::RequestRetryMode Amazon::Runtime::ClientConfig::get_RetryMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_RetryMode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::RequestRetryMode, false>(this, ___internal_method);
}
inline void Amazon::Runtime::ClientConfig::set_RetryMode(::Amazon::Runtime::RequestRetryMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_RetryMode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::RequestRetryMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Runtime::ClientConfig::get_FastFailRequests() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_FastFailRequests",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Runtime::ClientConfig::set_FastFailRequests(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_FastFailRequests",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Amazon::Runtime::ClientConfig::ValidateTimeout(::System::Nullable_1<::System::TimeSpan> timeout) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "ValidateTimeout", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::TimeSpan>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, timeout);
}
inline ::System::Nullable_1<::System::TimeSpan> Amazon::Runtime::ClientConfig::GetTimeoutValue(::System::Nullable_1<::System::TimeSpan> clientTimeout,
                                                                                               ::System::Nullable_1<::System::TimeSpan> requestTimeout) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "GetTimeoutValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::TimeSpan>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::TimeSpan>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::TimeSpan>, false>(nullptr, ___internal_method, clientTimeout, requestTimeout);
}
inline bool Amazon::Runtime::ClientConfig::get_CacheHttpClient() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_CacheHttpClient",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Runtime::ClientConfig::set_CacheHttpClient(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_CacheHttpClient",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Amazon::Runtime::ClientConfig::get_HttpClientCacheSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_HttpClientCacheSize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Amazon::Runtime::ClientConfig::set_HttpClientCacheSize(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_HttpClientCacheSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Nullable_1<::System::TimeSpan> Amazon::Runtime::ClientConfig::get_ReadWriteTimeout() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_ReadWriteTimeout",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::TimeSpan>, false>(this, ___internal_method);
}
inline void Amazon::Runtime::ClientConfig::set_ReadWriteTimeout(::System::Nullable_1<::System::TimeSpan> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_ReadWriteTimeout", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::TimeSpan>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::RegionEndpoint* Amazon::Runtime::ClientConfig::GetDefaultRegionEndpoint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(),
                                                                             "GetDefaultRegionEndpoint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::RegionEndpoint*, false>(nullptr, ___internal_method);
}
inline ::System::Net::IWebProxy* Amazon::Runtime::ClientConfig::GetWebProxy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "GetWebProxy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IWebProxy*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::ClientConfig::SetWebProxy(::System::Net::IWebProxy* proxy) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "SetWebProxy", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IWebProxy*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, proxy);
}
inline ::StringW Amazon::Runtime::ClientConfig::get_ProxyHost() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_ProxyHost",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Runtime::ClientConfig::set_ProxyHost(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_ProxyHost", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Amazon::Runtime::ClientConfig::get_ProxyPort() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_ProxyPort",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Amazon::Runtime::ClientConfig::set_ProxyPort(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_ProxyPort",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Nullable_1<int32_t> Amazon::Runtime::ClientConfig::get_MaxConnectionsPerServer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(),
                                                                             "get_MaxConnectionsPerServer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>, false>(this, ___internal_method);
}
inline void Amazon::Runtime::ClientConfig::set_MaxConnectionsPerServer(::System::Nullable_1<int32_t> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_MaxConnectionsPerServer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::HttpClientFactory* Amazon::Runtime::ClientConfig::get_HttpClientFactory() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "get_HttpClientFactory",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::HttpClientFactory*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::ClientConfig::set_HttpClientFactory(::Amazon::Runtime::HttpClientFactory* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "set_HttpClientFactory", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::HttpClientFactory*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Runtime::ClientConfig::CacheHttpClients(::Amazon::Runtime::IClientConfig* clientConfig) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "CacheHttpClients", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, clientConfig);
}
inline bool Amazon::Runtime::ClientConfig::DisposeHttpClients(::Amazon::Runtime::IClientConfig* clientConfig) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "DisposeHttpClients", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, clientConfig);
}
inline ::StringW Amazon::Runtime::ClientConfig::CreateConfigUniqueString(::Amazon::Runtime::IClientConfig* clientConfig) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "CreateConfigUniqueString", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, clientConfig);
}
inline bool Amazon::Runtime::ClientConfig::UseGlobalHttpClientCache(::Amazon::Runtime::IClientConfig* clientConfig) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ClientConfig*>::get(), "UseGlobalHttpClientCache", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, clientConfig);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::ClientConfig::ClientConfig() {}
