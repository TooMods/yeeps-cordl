#pragma once
#include "Amazon/Runtime/Internal/zzzz__CapacityManager_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__RequestContext_def.hpp"
#include "Amazon/Runtime/Internal/Auth/zzzz__AbstractAWSSigner_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IMarshaller_2_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__ResponseUnmarshaller_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__RequestMetrics_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__CapacityManager_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__IRequest_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__IServiceMetadata_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__InvokeOptionsBase_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__MonitoringAPICallAttempt_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__MonitoringAPICallEvent_def.hpp"
#include "Amazon/Runtime/zzzz__AmazonWebServiceRequest_def.hpp"
#include "Amazon/Runtime/zzzz__IClientConfig_def.hpp"
#include "Amazon/Runtime/zzzz__IRequestContext_def.hpp"
#include "Amazon/Runtime/zzzz__ImmutableCredentials_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::RequestContext::*)(bool, ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*)>(
    &::Amazon::Runtime::Internal::RequestContext::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x23dc980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.get_Request
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::IRequest* (::Amazon::Runtime::Internal::RequestContext::*)()>(
    &::Amazon::Runtime::Internal::RequestContext::get_Request)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dca68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(),
                                                                               "get_Request", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.set_Request
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::RequestContext::*)(::Amazon::Runtime::Internal::IRequest*)>(
    &::Amazon::Runtime::Internal::RequestContext::set_Request)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dca70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "set_Request", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::IRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.get_Metrics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Util::RequestMetrics* (::Amazon::Runtime::Internal::RequestContext::*)()>(
    &::Amazon::Runtime::Internal::RequestContext::get_Metrics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dca78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(),
                                                                               "get_Metrics", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.set_Metrics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::RequestContext::*)(::Amazon::Runtime::Internal::Util::RequestMetrics*)>(
    &::Amazon::Runtime::Internal::RequestContext::set_Metrics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dca80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "set_Metrics", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.get_ClientConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::IClientConfig* (::Amazon::Runtime::Internal::RequestContext::*)()>(
    &::Amazon::Runtime::Internal::RequestContext::get_ClientConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dca88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(),
                                                                               "get_ClientConfig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.set_ClientConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::RequestContext::*)(::Amazon::Runtime::IClientConfig*)>(
    &::Amazon::Runtime::Internal::RequestContext::set_ClientConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dca90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "set_ClientConfig", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.get_Retries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Runtime::Internal::RequestContext::*)()>(
    &::Amazon::Runtime::Internal::RequestContext::get_Retries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dca98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(),
                                                                               "get_Retries", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.set_Retries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::RequestContext::*)(int32_t)>(
    &::Amazon::Runtime::Internal::RequestContext::set_Retries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcaa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "set_Retries",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.get_LastCapacityType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::__CapacityManager__CapacityType (::Amazon::Runtime::Internal::RequestContext::*)()>(
    &::Amazon::Runtime::Internal::RequestContext::get_LastCapacityType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcaa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(),
                                                                               "get_LastCapacityType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.set_LastCapacityType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::RequestContext::*)(::Amazon::Runtime::Internal::__CapacityManager__CapacityType)>(
    &::Amazon::Runtime::Internal::RequestContext::set_LastCapacityType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "set_LastCapacityType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::__CapacityManager__CapacityType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.get_EndpointDiscoveryRetries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Runtime::Internal::RequestContext::*)()>(
    &::Amazon::Runtime::Internal::RequestContext::get_EndpointDiscoveryRetries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(),
                                                                               "get_EndpointDiscoveryRetries", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.set_EndpointDiscoveryRetries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::RequestContext::*)(int32_t)>(
    &::Amazon::Runtime::Internal::RequestContext::set_EndpointDiscoveryRetries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "set_EndpointDiscoveryRetries",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.get_IsSigned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::RequestContext::*)()>(
    &::Amazon::Runtime::Internal::RequestContext::get_IsSigned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(),
                                                                               "get_IsSigned", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.set_IsSigned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::RequestContext::*)(bool)>(
    &::Amazon::Runtime::Internal::RequestContext::set_IsSigned)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23dcad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "set_IsSigned",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.get_IsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::RequestContext::*)()>(&::Amazon::Runtime::Internal::RequestContext::get_IsAsync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcadc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(),
                                                                               "get_IsAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.set_IsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::RequestContext::*)(bool)>(
    &::Amazon::Runtime::Internal::RequestContext::set_IsAsync)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23dcae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "set_IsAsync",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.get_OriginalRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::AmazonWebServiceRequest* (::Amazon::Runtime::Internal::RequestContext::*)()>(
    &::Amazon::Runtime::Internal::RequestContext::get_OriginalRequest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcaf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(),
                                                                               "get_OriginalRequest", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.set_OriginalRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::RequestContext::*)(::Amazon::Runtime::AmazonWebServiceRequest*)>(
    &::Amazon::Runtime::Internal::RequestContext::set_OriginalRequest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcaf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "set_OriginalRequest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AmazonWebServiceRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.get_Marshaller
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>* (::Amazon::Runtime::Internal::RequestContext::*)()>(
    &::Amazon::Runtime::Internal::RequestContext::get_Marshaller)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcb00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(),
                                                                               "get_Marshaller", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.set_Marshaller
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::RequestContext::*)(
    ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>*)>(
    &::Amazon::Runtime::Internal::RequestContext::set_Marshaller)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcb08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "set_Marshaller", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.get_Unmarshaller
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller* (::Amazon::Runtime::Internal::RequestContext::*)()>(
    &::Amazon::Runtime::Internal::RequestContext::get_Unmarshaller)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcb10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(),
                                                                               "get_Unmarshaller", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.set_Unmarshaller
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::RequestContext::*)(::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller*)>(
    &::Amazon::Runtime::Internal::RequestContext::set_Unmarshaller)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcb18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "set_Unmarshaller", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.get_Options
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::InvokeOptionsBase* (::Amazon::Runtime::Internal::RequestContext::*)()>(
    &::Amazon::Runtime::Internal::RequestContext::get_Options)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcb20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(),
                                                                               "get_Options", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.set_Options
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::RequestContext::*)(::Amazon::Runtime::Internal::InvokeOptionsBase*)>(
    &::Amazon::Runtime::Internal::RequestContext::set_Options)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcb28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "set_Options", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::InvokeOptionsBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.get_ImmutableCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::ImmutableCredentials* (::Amazon::Runtime::Internal::RequestContext::*)()>(
    &::Amazon::Runtime::Internal::RequestContext::get_ImmutableCredentials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcb30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(),
                                                                               "get_ImmutableCredentials", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.set_ImmutableCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::RequestContext::*)(::Amazon::Runtime::ImmutableCredentials*)>(
    &::Amazon::Runtime::Internal::RequestContext::set_ImmutableCredentials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcb38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "set_ImmutableCredentials", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::ImmutableCredentials*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.get_Signer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* (::Amazon::Runtime::Internal::RequestContext::*)()>(
    &::Amazon::Runtime::Internal::RequestContext::get_Signer)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23dcb40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(),
                                                                               "get_Signer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.get_CancellationToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::CancellationToken (::Amazon::Runtime::Internal::RequestContext::*)()>(
    &::Amazon::Runtime::Internal::RequestContext::get_CancellationToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcb68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(),
                                                                               "get_CancellationToken", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.set_CancellationToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::RequestContext::*)(::System::Threading::CancellationToken)>(
    &::Amazon::Runtime::Internal::RequestContext::set_CancellationToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcb70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "set_CancellationToken", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.get_RequestName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::RequestContext::*)()>(
    &::Amazon::Runtime::Internal::RequestContext::get_RequestName)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23dcb78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(),
                                                                               "get_RequestName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.get_CSMCallAttempt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::MonitoringAPICallAttempt* (::Amazon::Runtime::Internal::RequestContext::*)()>(
    &::Amazon::Runtime::Internal::RequestContext::get_CSMCallAttempt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(),
                                                                               "get_CSMCallAttempt", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.set_CSMCallAttempt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::RequestContext::*)(::Amazon::Runtime::Internal::MonitoringAPICallAttempt*)>(
    &::Amazon::Runtime::Internal::RequestContext::set_CSMCallAttempt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcbac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "set_CSMCallAttempt", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::MonitoringAPICallAttempt*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.get_CSMCallEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::MonitoringAPICallEvent* (::Amazon::Runtime::Internal::RequestContext::*)()>(
    &::Amazon::Runtime::Internal::RequestContext::get_CSMCallEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcbb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(),
                                                                               "get_CSMCallEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.set_CSMCallEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::RequestContext::*)(::Amazon::Runtime::Internal::MonitoringAPICallEvent*)>(
    &::Amazon::Runtime::Internal::RequestContext::set_CSMCallEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcbbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "set_CSMCallEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::MonitoringAPICallEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.get_ServiceMetaData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::IServiceMetadata* (::Amazon::Runtime::Internal::RequestContext::*)()>(
    &::Amazon::Runtime::Internal::RequestContext::get_ServiceMetaData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcbc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(),
                                                                               "get_ServiceMetaData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.set_ServiceMetaData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::RequestContext::*)(::Amazon::Runtime::Internal::IServiceMetadata*)>(
    &::Amazon::Runtime::Internal::RequestContext::set_ServiceMetaData)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x23dcbcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "set_ServiceMetaData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::IServiceMetadata*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.get_CSMEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::RequestContext::*)()>(
    &::Amazon::Runtime::Internal::RequestContext::get_CSMEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcd0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(),
                                                                               "get_CSMEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.set_CSMEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::RequestContext::*)(bool)>(
    &::Amazon::Runtime::Internal::RequestContext::set_CSMEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23dcd14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "set_CSMEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.get_IsLastExceptionRetryable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::RequestContext::*)()>(
    &::Amazon::Runtime::Internal::RequestContext::get_IsLastExceptionRetryable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcd20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(),
                                                                               "get_IsLastExceptionRetryable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.set_IsLastExceptionRetryable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::RequestContext::*)(bool)>(
    &::Amazon::Runtime::Internal::RequestContext::set_IsLastExceptionRetryable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23dcd28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "set_IsLastExceptionRetryable",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.get_InvocationId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::Amazon::Runtime::Internal::RequestContext::*)()>(
    &::Amazon::Runtime::Internal::RequestContext::get_InvocationId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23dcd34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(),
                                                                               "get_InvocationId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RequestContext.set_InvocationId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::RequestContext::*)(::System::Guid)>(
    &::Amazon::Runtime::Internal::RequestContext::set_InvocationId)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23dcd44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "set_InvocationId",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::IRequestContext"
constexpr Amazon::Runtime::Internal::RequestContext::operator ::Amazon::Runtime::IRequestContext*() noexcept {
  return static_cast<::Amazon::Runtime::IRequestContext*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::IRequestContext"
constexpr ::Amazon::Runtime::IRequestContext* Amazon::Runtime::Internal::RequestContext::i___Amazon__Runtime__IRequestContext() noexcept {
  return static_cast<::Amazon::Runtime::IRequestContext*>(static_cast<void*>(this));
}
constexpr ::Amazon::Runtime::Internal::IServiceMetadata*& Amazon::Runtime::Internal::RequestContext::__cordl_internal_get__serviceMetadata() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serviceMetadata;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::IServiceMetadata*> const& Amazon::Runtime::Internal::RequestContext::__cordl_internal_get__serviceMetadata() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serviceMetadata;
}
constexpr void Amazon::Runtime::Internal::RequestContext::__cordl_internal_set__serviceMetadata(::Amazon::Runtime::Internal::IServiceMetadata* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____serviceMetadata)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*& Amazon::Runtime::Internal::RequestContext::__cordl_internal_get_clientSigner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientSigner;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*> const& Amazon::Runtime::Internal::RequestContext::__cordl_internal_get_clientSigner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientSigner;
}
constexpr void Amazon::Runtime::Internal::RequestContext::__cordl_internal_set_clientSigner(::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___clientSigner)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::Internal::IRequest*& Amazon::Runtime::Internal::RequestContext::__cordl_internal_get__Request_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Request_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::IRequest*> const& Amazon::Runtime::Internal::RequestContext::__cordl_internal_get__Request_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Request_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::RequestContext::__cordl_internal_set__Request_k__BackingField(::Amazon::Runtime::Internal::IRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Request_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::Internal::Util::RequestMetrics*& Amazon::Runtime::Internal::RequestContext::__cordl_internal_get__Metrics_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Metrics_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::RequestMetrics*> const&
Amazon::Runtime::Internal::RequestContext::__cordl_internal_get__Metrics_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Metrics_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::RequestContext::__cordl_internal_set__Metrics_k__BackingField(::Amazon::Runtime::Internal::Util::RequestMetrics* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Metrics_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::IClientConfig*& Amazon::Runtime::Internal::RequestContext::__cordl_internal_get__ClientConfig_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ClientConfig_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::IClientConfig*> const& Amazon::Runtime::Internal::RequestContext::__cordl_internal_get__ClientConfig_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ClientConfig_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::RequestContext::__cordl_internal_set__ClientConfig_k__BackingField(::Amazon::Runtime::IClientConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ClientConfig_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Amazon::Runtime::Internal::RequestContext::__cordl_internal_get__Retries_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Retries_k__BackingField;
}
constexpr int32_t const& Amazon::Runtime::Internal::RequestContext::__cordl_internal_get__Retries_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Retries_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::RequestContext::__cordl_internal_set__Retries_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Retries_k__BackingField = value;
}
constexpr ::Amazon::Runtime::Internal::__CapacityManager__CapacityType& Amazon::Runtime::Internal::RequestContext::__cordl_internal_get__LastCapacityType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LastCapacityType_k__BackingField;
}
constexpr ::Amazon::Runtime::Internal::__CapacityManager__CapacityType const& Amazon::Runtime::Internal::RequestContext::__cordl_internal_get__LastCapacityType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LastCapacityType_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::RequestContext::__cordl_internal_set__LastCapacityType_k__BackingField(::Amazon::Runtime::Internal::__CapacityManager__CapacityType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LastCapacityType_k__BackingField = value;
}
constexpr int32_t& Amazon::Runtime::Internal::RequestContext::__cordl_internal_get__EndpointDiscoveryRetries_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EndpointDiscoveryRetries_k__BackingField;
}
constexpr int32_t const& Amazon::Runtime::Internal::RequestContext::__cordl_internal_get__EndpointDiscoveryRetries_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EndpointDiscoveryRetries_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::RequestContext::__cordl_internal_set__EndpointDiscoveryRetries_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____EndpointDiscoveryRetries_k__BackingField = value;
}
constexpr bool& Amazon::Runtime::Internal::RequestContext::__cordl_internal_get__IsSigned_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsSigned_k__BackingField;
}
constexpr bool const& Amazon::Runtime::Internal::RequestContext::__cordl_internal_get__IsSigned_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsSigned_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::RequestContext::__cordl_internal_set__IsSigned_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsSigned_k__BackingField = value;
}
constexpr bool& Amazon::Runtime::Internal::RequestContext::__cordl_internal_get__IsAsync_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsAsync_k__BackingField;
}
constexpr bool const& Amazon::Runtime::Internal::RequestContext::__cordl_internal_get__IsAsync_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsAsync_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::RequestContext::__cordl_internal_set__IsAsync_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsAsync_k__BackingField = value;
}
constexpr ::Amazon::Runtime::AmazonWebServiceRequest*& Amazon::Runtime::Internal::RequestContext::__cordl_internal_get__OriginalRequest_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OriginalRequest_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::AmazonWebServiceRequest*> const&
Amazon::Runtime::Internal::RequestContext::__cordl_internal_get__OriginalRequest_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OriginalRequest_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::RequestContext::__cordl_internal_set__OriginalRequest_k__BackingField(::Amazon::Runtime::AmazonWebServiceRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____OriginalRequest_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>*&
Amazon::Runtime::Internal::RequestContext::__cordl_internal_get__Marshaller_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Marshaller_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>*> const&
Amazon::Runtime::Internal::RequestContext::__cordl_internal_get__Marshaller_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Marshaller_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::RequestContext::__cordl_internal_set__Marshaller_k__BackingField(
    ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Marshaller_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller*& Amazon::Runtime::Internal::RequestContext::__cordl_internal_get__Unmarshaller_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Unmarshaller_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller*> const&
Amazon::Runtime::Internal::RequestContext::__cordl_internal_get__Unmarshaller_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Unmarshaller_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::RequestContext::__cordl_internal_set__Unmarshaller_k__BackingField(::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Unmarshaller_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::Internal::InvokeOptionsBase*& Amazon::Runtime::Internal::RequestContext::__cordl_internal_get__Options_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Options_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::InvokeOptionsBase*> const& Amazon::Runtime::Internal::RequestContext::__cordl_internal_get__Options_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Options_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::RequestContext::__cordl_internal_set__Options_k__BackingField(::Amazon::Runtime::Internal::InvokeOptionsBase* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Options_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::ImmutableCredentials*& Amazon::Runtime::Internal::RequestContext::__cordl_internal_get__ImmutableCredentials_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ImmutableCredentials_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::ImmutableCredentials*> const&
Amazon::Runtime::Internal::RequestContext::__cordl_internal_get__ImmutableCredentials_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ImmutableCredentials_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::RequestContext::__cordl_internal_set__ImmutableCredentials_k__BackingField(::Amazon::Runtime::ImmutableCredentials* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ImmutableCredentials_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationToken& Amazon::Runtime::Internal::RequestContext::__cordl_internal_get__CancellationToken_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CancellationToken_k__BackingField;
}
constexpr ::System::Threading::CancellationToken const& Amazon::Runtime::Internal::RequestContext::__cordl_internal_get__CancellationToken_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CancellationToken_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::RequestContext::__cordl_internal_set__CancellationToken_k__BackingField(::System::Threading::CancellationToken value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CancellationToken_k__BackingField = value;
}
constexpr ::Amazon::Runtime::Internal::MonitoringAPICallAttempt*& Amazon::Runtime::Internal::RequestContext::__cordl_internal_get__CSMCallAttempt_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CSMCallAttempt_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::MonitoringAPICallAttempt*> const&
Amazon::Runtime::Internal::RequestContext::__cordl_internal_get__CSMCallAttempt_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CSMCallAttempt_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::RequestContext::__cordl_internal_set__CSMCallAttempt_k__BackingField(::Amazon::Runtime::Internal::MonitoringAPICallAttempt* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____CSMCallAttempt_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::Internal::MonitoringAPICallEvent*& Amazon::Runtime::Internal::RequestContext::__cordl_internal_get__CSMCallEvent_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CSMCallEvent_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::MonitoringAPICallEvent*> const&
Amazon::Runtime::Internal::RequestContext::__cordl_internal_get__CSMCallEvent_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CSMCallEvent_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::RequestContext::__cordl_internal_set__CSMCallEvent_k__BackingField(::Amazon::Runtime::Internal::MonitoringAPICallEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____CSMCallEvent_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Amazon::Runtime::Internal::RequestContext::__cordl_internal_get__CSMEnabled_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CSMEnabled_k__BackingField;
}
constexpr bool const& Amazon::Runtime::Internal::RequestContext::__cordl_internal_get__CSMEnabled_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CSMEnabled_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::RequestContext::__cordl_internal_set__CSMEnabled_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CSMEnabled_k__BackingField = value;
}
constexpr bool& Amazon::Runtime::Internal::RequestContext::__cordl_internal_get__IsLastExceptionRetryable_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsLastExceptionRetryable_k__BackingField;
}
constexpr bool const& Amazon::Runtime::Internal::RequestContext::__cordl_internal_get__IsLastExceptionRetryable_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsLastExceptionRetryable_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::RequestContext::__cordl_internal_set__IsLastExceptionRetryable_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsLastExceptionRetryable_k__BackingField = value;
}
constexpr ::System::Guid& Amazon::Runtime::Internal::RequestContext::__cordl_internal_get__InvocationId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InvocationId_k__BackingField;
}
constexpr ::System::Guid const& Amazon::Runtime::Internal::RequestContext::__cordl_internal_get__InvocationId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InvocationId_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::RequestContext::__cordl_internal_set__InvocationId_k__BackingField(::System::Guid value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____InvocationId_k__BackingField = value;
}
inline ::Amazon::Runtime::Internal::RequestContext* Amazon::Runtime::Internal::RequestContext::New_ctor(bool enableMetrics, ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* clientSigner) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::RequestContext*>(enableMetrics, clientSigner));
}
inline void Amazon::Runtime::Internal::RequestContext::_ctor(bool enableMetrics, ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* clientSigner) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enableMetrics, clientSigner);
}
inline ::Amazon::Runtime::Internal::IRequest* Amazon::Runtime::Internal::RequestContext::get_Request() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "get_Request",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::IRequest*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::RequestContext::set_Request(::Amazon::Runtime::Internal::IRequest* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "set_Request", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::IRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::Internal::Util::RequestMetrics* Amazon::Runtime::Internal::RequestContext::get_Metrics() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "get_Metrics",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Util::RequestMetrics*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::RequestContext::set_Metrics(::Amazon::Runtime::Internal::Util::RequestMetrics* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "set_Metrics", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::IClientConfig* Amazon::Runtime::Internal::RequestContext::get_ClientConfig() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(),
                                                                             "get_ClientConfig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::IClientConfig*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::RequestContext::set_ClientConfig(::Amazon::Runtime::IClientConfig* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "set_ClientConfig", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Amazon::Runtime::Internal::RequestContext::get_Retries() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "get_Retries",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::RequestContext::set_Retries(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "set_Retries",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::Internal::__CapacityManager__CapacityType Amazon::Runtime::Internal::RequestContext::get_LastCapacityType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(),
                                                                             "get_LastCapacityType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::__CapacityManager__CapacityType, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::RequestContext::set_LastCapacityType(::Amazon::Runtime::Internal::__CapacityManager__CapacityType value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "set_LastCapacityType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::__CapacityManager__CapacityType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Amazon::Runtime::Internal::RequestContext::get_EndpointDiscoveryRetries() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(),
                                                                             "get_EndpointDiscoveryRetries", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::RequestContext::set_EndpointDiscoveryRetries(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "set_EndpointDiscoveryRetries",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Runtime::Internal::RequestContext::get_IsSigned() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(),
                                                                             "get_IsSigned", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::RequestContext::set_IsSigned(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "set_IsSigned",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Runtime::Internal::RequestContext::get_IsAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "get_IsAsync",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::RequestContext::set_IsAsync(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "set_IsAsync",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::AmazonWebServiceRequest* Amazon::Runtime::Internal::RequestContext::get_OriginalRequest() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(),
                                                                             "get_OriginalRequest", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AmazonWebServiceRequest*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::RequestContext::set_OriginalRequest(::Amazon::Runtime::AmazonWebServiceRequest* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "set_OriginalRequest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AmazonWebServiceRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>*
Amazon::Runtime::Internal::RequestContext::get_Marshaller() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(),
                                                                             "get_Marshaller", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>*, false>(
      this, ___internal_method);
}
inline void Amazon::Runtime::Internal::RequestContext::set_Marshaller(
    ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "set_Marshaller", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller* Amazon::Runtime::Internal::RequestContext::get_Unmarshaller() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(),
                                                                             "get_Unmarshaller", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::RequestContext::set_Unmarshaller(::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "set_Unmarshaller", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::Internal::InvokeOptionsBase* Amazon::Runtime::Internal::RequestContext::get_Options() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "get_Options",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::InvokeOptionsBase*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::RequestContext::set_Options(::Amazon::Runtime::Internal::InvokeOptionsBase* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "set_Options", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::InvokeOptionsBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::ImmutableCredentials* Amazon::Runtime::Internal::RequestContext::get_ImmutableCredentials() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(),
                                                                             "get_ImmutableCredentials", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::ImmutableCredentials*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::RequestContext::set_ImmutableCredentials(::Amazon::Runtime::ImmutableCredentials* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "set_ImmutableCredentials", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::ImmutableCredentials*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* Amazon::Runtime::Internal::RequestContext::get_Signer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "get_Signer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*, false>(this, ___internal_method);
}
inline ::System::Threading::CancellationToken Amazon::Runtime::Internal::RequestContext::get_CancellationToken() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(),
                                                                             "get_CancellationToken", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationToken, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::RequestContext::set_CancellationToken(::System::Threading::CancellationToken value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "set_CancellationToken", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::Runtime::Internal::RequestContext::get_RequestName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(),
                                                                             "get_RequestName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::Internal::MonitoringAPICallAttempt* Amazon::Runtime::Internal::RequestContext::get_CSMCallAttempt() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(),
                                                                             "get_CSMCallAttempt", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::MonitoringAPICallAttempt*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::RequestContext::set_CSMCallAttempt(::Amazon::Runtime::Internal::MonitoringAPICallAttempt* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "set_CSMCallAttempt", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::MonitoringAPICallAttempt*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::Internal::MonitoringAPICallEvent* Amazon::Runtime::Internal::RequestContext::get_CSMCallEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(),
                                                                             "get_CSMCallEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::MonitoringAPICallEvent*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::RequestContext::set_CSMCallEvent(::Amazon::Runtime::Internal::MonitoringAPICallEvent* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "set_CSMCallEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::MonitoringAPICallEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::Internal::IServiceMetadata* Amazon::Runtime::Internal::RequestContext::get_ServiceMetaData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(),
                                                                             "get_ServiceMetaData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::IServiceMetadata*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::RequestContext::set_ServiceMetaData(::Amazon::Runtime::Internal::IServiceMetadata* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "set_ServiceMetaData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::IServiceMetadata*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Runtime::Internal::RequestContext::get_CSMEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(),
                                                                             "get_CSMEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::RequestContext::set_CSMEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "set_CSMEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Runtime::Internal::RequestContext::get_IsLastExceptionRetryable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(),
                                                                             "get_IsLastExceptionRetryable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::RequestContext::set_IsLastExceptionRetryable(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "set_IsLastExceptionRetryable",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Guid Amazon::Runtime::Internal::RequestContext::get_InvocationId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(),
                                                                             "get_InvocationId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::RequestContext::set_InvocationId(::System::Guid value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RequestContext*>::get(), "set_InvocationId",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::RequestContext::RequestContext() {}
