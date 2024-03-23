#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/zzzz__AmazonServiceClient_def.hpp"
#include "Amazon/Runtime/Internal/Auth/zzzz__AbstractAWSSigner_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IMarshaller_2_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__ResponseUnmarshaller_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__Logger_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__DiscoveryEndpointBase_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__EndpointDiscoveryResolverBase_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__EndpointOperationContextBase_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__IRequest_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__IServiceMetadata_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__InvokeOptionsBase_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__RuntimePipeline_def.hpp"
#include "Amazon/Runtime/zzzz__AWSCredentials_def.hpp"
#include "Amazon/Runtime/zzzz__AmazonServiceClient_def.hpp"
#include "Amazon/Runtime/zzzz__AmazonWebServiceRequest_def.hpp"
#include "Amazon/Runtime/zzzz__ClientConfig_def.hpp"
#include "Amazon/Runtime/zzzz__ExceptionEventHandler_def.hpp"
#include "Amazon/Runtime/zzzz__IClientConfig_def.hpp"
#include "Amazon/Runtime/zzzz__IExecutionContext_def.hpp"
#include "Amazon/Runtime/zzzz__IRequestContext_def.hpp"
#include "Amazon/Runtime/zzzz__PreRequestEventHandler_def.hpp"
#include "Amazon/Runtime/zzzz__RequestEventHandler_def.hpp"
#include "Amazon/Runtime/zzzz__ResponseEventHandler_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::__AmazonServiceClient____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::__AmazonServiceClient____c::*)()>(&::Amazon::Runtime::__AmazonServiceClient____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fde95c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__AmazonServiceClient____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::__AmazonServiceClient____c._ComposeUrl_b__62_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::__AmazonServiceClient____c::*)(
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>)>(&::Amazon::Runtime::__AmazonServiceClient____c::_ComposeUrl_b__62_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1fde964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__AmazonServiceClient____c*>::get(), "<ComposeUrl>b__62_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::Runtime::__AmazonServiceClient____c::setStaticF___9(::Amazon::Runtime::__AmazonServiceClient____c* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::__AmazonServiceClient____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__AmazonServiceClient____c*>::get>(
      std::forward<::Amazon::Runtime::__AmazonServiceClient____c*>(value));
}
inline ::Amazon::Runtime::__AmazonServiceClient____c* Amazon::Runtime::__AmazonServiceClient____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::__AmazonServiceClient____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__AmazonServiceClient____c*>::get>();
}
inline void Amazon::Runtime::__AmazonServiceClient____c::setStaticF___9__62_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, bool>*, "<>9__62_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__AmazonServiceClient____c*>::get>(
      std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, bool>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, bool>* Amazon::Runtime::__AmazonServiceClient____c::getStaticF___9__62_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, bool>*, "<>9__62_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__AmazonServiceClient____c*>::get>();
}
inline ::Amazon::Runtime::__AmazonServiceClient____c* Amazon::Runtime::__AmazonServiceClient____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::__AmazonServiceClient____c*>());
}
inline void Amazon::Runtime::__AmazonServiceClient____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__AmazonServiceClient____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::__AmazonServiceClient____c::_ComposeUrl_b__62_0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> v) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__AmazonServiceClient____c*>::get(), "<ComposeUrl>b__62_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, v);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::__AmazonServiceClient____c::__AmazonServiceClient____c() {}
//  Writing Method size for method: ::Amazon::Runtime::AmazonServiceClient.get_EndpointDiscoveryResolver
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase* (::Amazon::Runtime::AmazonServiceClient::*)()>(
    &::Amazon::Runtime::AmazonServiceClient::get_EndpointDiscoveryResolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fdb234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(),
                                                                               "get_EndpointDiscoveryResolver", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonServiceClient.set_EndpointDiscoveryResolver
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::AmazonServiceClient::*)(::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase*)>(
    &::Amazon::Runtime::AmazonServiceClient::set_EndpointDiscoveryResolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fdb23c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "set_EndpointDiscoveryResolver", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonServiceClient.get_RuntimePipeline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::RuntimePipeline* (::Amazon::Runtime::AmazonServiceClient::*)()>(
    &::Amazon::Runtime::AmazonServiceClient::get_RuntimePipeline)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fdb244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(),
                                                                               "get_RuntimePipeline", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonServiceClient.set_RuntimePipeline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::AmazonServiceClient::*)(::Amazon::Runtime::Internal::RuntimePipeline*)>(
    &::Amazon::Runtime::AmazonServiceClient::set_RuntimePipeline)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fdb24c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "set_RuntimePipeline", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::RuntimePipeline*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonServiceClient.get_Credentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::AWSCredentials* (::Amazon::Runtime::AmazonServiceClient::*)()>(
    &::Amazon::Runtime::AmazonServiceClient::get_Credentials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fdb254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(),
                                                                               "get_Credentials", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonServiceClient.set_Credentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::AmazonServiceClient::*)(::Amazon::Runtime::AWSCredentials*)>(
    &::Amazon::Runtime::AmazonServiceClient::set_Credentials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fdb25c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "set_Credentials", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AWSCredentials*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonServiceClient.get_Config
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::IClientConfig* (::Amazon::Runtime::AmazonServiceClient::*)()>(
    &::Amazon::Runtime::AmazonServiceClient::get_Config)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fdb264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "get_Config",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonServiceClient.set_Config
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::AmazonServiceClient::*)(::Amazon::Runtime::IClientConfig*)>(
    &::Amazon::Runtime::AmazonServiceClient::set_Config)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fdb26c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "set_Config", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonServiceClient.get_ServiceMetadata
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::IServiceMetadata* (::Amazon::Runtime::AmazonServiceClient::*)()>(
    &::Amazon::Runtime::AmazonServiceClient::get_ServiceMetadata)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fdb274;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonServiceClient.get_SupportResponseLogging
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::AmazonServiceClient::*)()>(
    &::Amazon::Runtime::AmazonServiceClient::get_SupportResponseLogging)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fdb27c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonServiceClient.add_BeforeMarshallingEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::AmazonServiceClient::*)(::Amazon::Runtime::PreRequestEventHandler*)>(
    &::Amazon::Runtime::AmazonServiceClient::add_BeforeMarshallingEvent)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x1fdb284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "add_BeforeMarshallingEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::PreRequestEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonServiceClient.remove_BeforeMarshallingEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::AmazonServiceClient::*)(::Amazon::Runtime::PreRequestEventHandler*)>(
    &::Amazon::Runtime::AmazonServiceClient::remove_BeforeMarshallingEvent)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x1fdb3ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "remove_BeforeMarshallingEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::PreRequestEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonServiceClient.add_BeforeRequestEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::AmazonServiceClient::*)(::Amazon::Runtime::RequestEventHandler*)>(
    &::Amazon::Runtime::AmazonServiceClient::add_BeforeRequestEvent)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x1fdb4d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "add_BeforeRequestEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::RequestEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonServiceClient.remove_BeforeRequestEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::AmazonServiceClient::*)(::Amazon::Runtime::RequestEventHandler*)>(
    &::Amazon::Runtime::AmazonServiceClient::remove_BeforeRequestEvent)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x1fdb5fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "remove_BeforeRequestEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::RequestEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonServiceClient.add_AfterResponseEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::AmazonServiceClient::*)(::Amazon::Runtime::ResponseEventHandler*)>(
    &::Amazon::Runtime::AmazonServiceClient::add_AfterResponseEvent)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x1fdb724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "add_AfterResponseEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::ResponseEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonServiceClient.remove_AfterResponseEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::AmazonServiceClient::*)(::Amazon::Runtime::ResponseEventHandler*)>(
    &::Amazon::Runtime::AmazonServiceClient::remove_AfterResponseEvent)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x1fdb84c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "remove_AfterResponseEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::ResponseEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonServiceClient.add_ExceptionEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::AmazonServiceClient::*)(::Amazon::Runtime::ExceptionEventHandler*)>(
    &::Amazon::Runtime::AmazonServiceClient::add_ExceptionEvent)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x1fdb974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "add_ExceptionEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::ExceptionEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonServiceClient.remove_ExceptionEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::AmazonServiceClient::*)(::Amazon::Runtime::ExceptionEventHandler*)>(
    &::Amazon::Runtime::AmazonServiceClient::remove_ExceptionEvent)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x1fdba9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "remove_ExceptionEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::ExceptionEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonServiceClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Amazon::Runtime::AmazonServiceClient::*)(::Amazon::Runtime::AWSCredentials*, ::Amazon::Runtime::ClientConfig*)>(&::Amazon::Runtime::AmazonServiceClient::_ctor)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x1fdbbc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AWSCredentials*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::ClientConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonServiceClient.get_Signer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* (::Amazon::Runtime::AmazonServiceClient::*)()>(
    &::Amazon::Runtime::AmazonServiceClient::get_Signer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fdca88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "get_Signer",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonServiceClient.set_Signer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::AmazonServiceClient::*)(::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*)>(
    &::Amazon::Runtime::AmazonServiceClient::set_Signer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fdca90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "set_Signer", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonServiceClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::AmazonServiceClient::*)(::StringW, ::StringW, ::StringW, ::Amazon::Runtime::ClientConfig*)>(
    &::Amazon::Runtime::AmazonServiceClient::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1fdca98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::ClientConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonServiceClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::AmazonServiceClient::*)(::StringW, ::StringW, ::Amazon::Runtime::ClientConfig*)>(
    &::Amazon::Runtime::AmazonServiceClient::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1fdcc74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::ClientConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonServiceClient.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::AmazonServiceClient::*)()>(&::Amazon::Runtime::AmazonServiceClient::Initialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1fdcd90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonServiceClient.EndpointOperation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>* (
    ::Amazon::Runtime::AmazonServiceClient::*)(::Amazon::Runtime::Internal::EndpointOperationContextBase*)>(&::Amazon::Runtime::AmazonServiceClient::EndpointOperation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fdcd94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonServiceClient.ProcessPreRequestHandlers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::AmazonServiceClient::*)(::Amazon::Runtime::IExecutionContext*)>(
    &::Amazon::Runtime::AmazonServiceClient::ProcessPreRequestHandlers)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x1fdcd9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "ProcessPreRequestHandlers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IExecutionContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonServiceClient.ProcessRequestHandlers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::AmazonServiceClient::*)(::Amazon::Runtime::IExecutionContext*)>(
    &::Amazon::Runtime::AmazonServiceClient::ProcessRequestHandlers)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x1fdcef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "ProcessRequestHandlers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IExecutionContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonServiceClient.ProcessResponseHandlers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::AmazonServiceClient::*)(::Amazon::Runtime::IExecutionContext*)>(
    &::Amazon::Runtime::AmazonServiceClient::ProcessResponseHandlers)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x1fdd168;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "ProcessResponseHandlers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IExecutionContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonServiceClient.ProcessExceptionHandlers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::AmazonServiceClient::*)(::Amazon::Runtime::IExecutionContext*, ::System::Exception*)>(
    &::Amazon::Runtime::AmazonServiceClient::ProcessExceptionHandlers)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1fdd474;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonServiceClient.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::AmazonServiceClient::*)()>(&::Amazon::Runtime::AmazonServiceClient::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1fdd5e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonServiceClient.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::AmazonServiceClient::*)(bool)>(&::Amazon::Runtime::AmazonServiceClient::Dispose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1fdd650;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonServiceClient.ThrowIfDisposed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::AmazonServiceClient::*)()>(&::Amazon::Runtime::AmazonServiceClient::ThrowIfDisposed)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1fdd684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(),
                                                                               "ThrowIfDisposed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonServiceClient.CreateSigner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* (::Amazon::Runtime::AmazonServiceClient::*)()>(
    &::Amazon::Runtime::AmazonServiceClient::CreateSigner)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonServiceClient.CustomizeRuntimePipeline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::AmazonServiceClient::*)(::Amazon::Runtime::Internal::RuntimePipeline*)>(
    &::Amazon::Runtime::AmazonServiceClient::CustomizeRuntimePipeline)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1fdd708;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonServiceClient.BuildRuntimePipeline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::AmazonServiceClient::*)()>(&::Amazon::Runtime::AmazonServiceClient::BuildRuntimePipeline)> {
  constexpr static std::size_t size = 0xd1c;
  constexpr static std::size_t addrs = 0x1fdbd6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(),
                                                                               "BuildRuntimePipeline", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonServiceClient.ComposeUrl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (*)(::Amazon::Runtime::Internal::IRequest*)>(&::Amazon::Runtime::AmazonServiceClient::ComposeUrl)> {
  constexpr static std::size_t size = 0xb90;
  constexpr static std::size_t addrs = 0x1fdd70c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "ComposeUrl", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::IRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonServiceClient.DontUnescapePathDotsAndSlashes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Uri*)>(&::Amazon::Runtime::AmazonServiceClient::DontUnescapePathDotsAndSlashes)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1fde29c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "DontUnescapePathDotsAndSlashes",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonServiceClient.CloneConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::AmazonServiceClient::*)(::Amazon::Runtime::ClientConfig*)>(
    &::Amazon::Runtime::AmazonServiceClient::CloneConfig)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x1fde2a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "CloneConfig", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::ClientConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AmazonServiceClient.SetupCSMHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Amazon::Runtime::IRequestContext*)>(&::Amazon::Runtime::AmazonServiceClient::SetupCSMHandler)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1fde7b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "SetupCSMHandler", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IRequestContext*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr Amazon::Runtime::AmazonServiceClient::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Amazon::Runtime::AmazonServiceClient::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr bool& Amazon::Runtime::AmazonServiceClient::__cordl_internal_get__disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed;
}
constexpr bool const& Amazon::Runtime::AmazonServiceClient::__cordl_internal_get__disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed;
}
constexpr void Amazon::Runtime::AmazonServiceClient::__cordl_internal_set__disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed = value;
}
constexpr ::Amazon::Runtime::Internal::Util::Logger*& Amazon::Runtime::AmazonServiceClient::__cordl_internal_get__logger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::Logger*> const& Amazon::Runtime::AmazonServiceClient::__cordl_internal_get__logger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger;
}
constexpr void Amazon::Runtime::AmazonServiceClient::__cordl_internal_set__logger(::Amazon::Runtime::Internal::Util::Logger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____logger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase*& Amazon::Runtime::AmazonServiceClient::__cordl_internal_get__EndpointDiscoveryResolver_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EndpointDiscoveryResolver_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase*> const&
Amazon::Runtime::AmazonServiceClient::__cordl_internal_get__EndpointDiscoveryResolver_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EndpointDiscoveryResolver_k__BackingField;
}
constexpr void Amazon::Runtime::AmazonServiceClient::__cordl_internal_set__EndpointDiscoveryResolver_k__BackingField(::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____EndpointDiscoveryResolver_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::Internal::RuntimePipeline*& Amazon::Runtime::AmazonServiceClient::__cordl_internal_get__RuntimePipeline_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RuntimePipeline_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::RuntimePipeline*> const&
Amazon::Runtime::AmazonServiceClient::__cordl_internal_get__RuntimePipeline_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RuntimePipeline_k__BackingField;
}
constexpr void Amazon::Runtime::AmazonServiceClient::__cordl_internal_set__RuntimePipeline_k__BackingField(::Amazon::Runtime::Internal::RuntimePipeline* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____RuntimePipeline_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::AWSCredentials*& Amazon::Runtime::AmazonServiceClient::__cordl_internal_get__Credentials_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Credentials_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::AWSCredentials*> const& Amazon::Runtime::AmazonServiceClient::__cordl_internal_get__Credentials_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Credentials_k__BackingField;
}
constexpr void Amazon::Runtime::AmazonServiceClient::__cordl_internal_set__Credentials_k__BackingField(::Amazon::Runtime::AWSCredentials* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Credentials_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::IClientConfig*& Amazon::Runtime::AmazonServiceClient::__cordl_internal_get__Config_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Config_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::IClientConfig*> const& Amazon::Runtime::AmazonServiceClient::__cordl_internal_get__Config_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Config_k__BackingField;
}
constexpr void Amazon::Runtime::AmazonServiceClient::__cordl_internal_set__Config_k__BackingField(::Amazon::Runtime::IClientConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Config_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::Internal::IServiceMetadata*& Amazon::Runtime::AmazonServiceClient::__cordl_internal_get__ServiceMetadata_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ServiceMetadata_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::IServiceMetadata*> const&
Amazon::Runtime::AmazonServiceClient::__cordl_internal_get__ServiceMetadata_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ServiceMetadata_k__BackingField;
}
constexpr void Amazon::Runtime::AmazonServiceClient::__cordl_internal_set__ServiceMetadata_k__BackingField(::Amazon::Runtime::Internal::IServiceMetadata* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ServiceMetadata_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::PreRequestEventHandler*& Amazon::Runtime::AmazonServiceClient::__cordl_internal_get_mBeforeMarshallingEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mBeforeMarshallingEvent;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::PreRequestEventHandler*> const& Amazon::Runtime::AmazonServiceClient::__cordl_internal_get_mBeforeMarshallingEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mBeforeMarshallingEvent;
}
constexpr void Amazon::Runtime::AmazonServiceClient::__cordl_internal_set_mBeforeMarshallingEvent(::Amazon::Runtime::PreRequestEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mBeforeMarshallingEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::RequestEventHandler*& Amazon::Runtime::AmazonServiceClient::__cordl_internal_get_mBeforeRequestEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mBeforeRequestEvent;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::RequestEventHandler*> const& Amazon::Runtime::AmazonServiceClient::__cordl_internal_get_mBeforeRequestEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mBeforeRequestEvent;
}
constexpr void Amazon::Runtime::AmazonServiceClient::__cordl_internal_set_mBeforeRequestEvent(::Amazon::Runtime::RequestEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mBeforeRequestEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::ResponseEventHandler*& Amazon::Runtime::AmazonServiceClient::__cordl_internal_get_mAfterResponseEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mAfterResponseEvent;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::ResponseEventHandler*> const& Amazon::Runtime::AmazonServiceClient::__cordl_internal_get_mAfterResponseEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mAfterResponseEvent;
}
constexpr void Amazon::Runtime::AmazonServiceClient::__cordl_internal_set_mAfterResponseEvent(::Amazon::Runtime::ResponseEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mAfterResponseEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::ExceptionEventHandler*& Amazon::Runtime::AmazonServiceClient::__cordl_internal_get_mExceptionEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mExceptionEvent;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::ExceptionEventHandler*> const& Amazon::Runtime::AmazonServiceClient::__cordl_internal_get_mExceptionEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mExceptionEvent;
}
constexpr void Amazon::Runtime::AmazonServiceClient::__cordl_internal_set_mExceptionEvent(::Amazon::Runtime::ExceptionEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mExceptionEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*& Amazon::Runtime::AmazonServiceClient::__cordl_internal_get__Signer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Signer_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*> const& Amazon::Runtime::AmazonServiceClient::__cordl_internal_get__Signer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Signer_k__BackingField;
}
constexpr void Amazon::Runtime::AmazonServiceClient::__cordl_internal_set__Signer_k__BackingField(::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Signer_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase* Amazon::Runtime::AmazonServiceClient::get_EndpointDiscoveryResolver() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(),
                                                                             "get_EndpointDiscoveryResolver", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::AmazonServiceClient::set_EndpointDiscoveryResolver(::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "set_EndpointDiscoveryResolver", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::Internal::RuntimePipeline* Amazon::Runtime::AmazonServiceClient::get_RuntimePipeline() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(),
                                                                             "get_RuntimePipeline", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::RuntimePipeline*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::AmazonServiceClient::set_RuntimePipeline(::Amazon::Runtime::Internal::RuntimePipeline* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "set_RuntimePipeline", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::RuntimePipeline*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::AWSCredentials* Amazon::Runtime::AmazonServiceClient::get_Credentials() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "get_Credentials",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AWSCredentials*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::AmazonServiceClient::set_Credentials(::Amazon::Runtime::AWSCredentials* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "set_Credentials", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AWSCredentials*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::IClientConfig* Amazon::Runtime::AmazonServiceClient::get_Config() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "get_Config",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::IClientConfig*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::AmazonServiceClient::set_Config(::Amazon::Runtime::IClientConfig* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "set_Config", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::Internal::IServiceMetadata* Amazon::Runtime::AmazonServiceClient::get_ServiceMetadata() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::IServiceMetadata*, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::AmazonServiceClient::get_SupportResponseLogging() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Runtime::AmazonServiceClient::add_BeforeMarshallingEvent(::Amazon::Runtime::PreRequestEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "add_BeforeMarshallingEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::PreRequestEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Amazon::Runtime::AmazonServiceClient::remove_BeforeMarshallingEvent(::Amazon::Runtime::PreRequestEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "remove_BeforeMarshallingEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::PreRequestEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Amazon::Runtime::AmazonServiceClient::add_BeforeRequestEvent(::Amazon::Runtime::RequestEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "add_BeforeRequestEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::RequestEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Amazon::Runtime::AmazonServiceClient::remove_BeforeRequestEvent(::Amazon::Runtime::RequestEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "remove_BeforeRequestEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::RequestEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Amazon::Runtime::AmazonServiceClient::add_AfterResponseEvent(::Amazon::Runtime::ResponseEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "add_AfterResponseEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::ResponseEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Amazon::Runtime::AmazonServiceClient::remove_AfterResponseEvent(::Amazon::Runtime::ResponseEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "remove_AfterResponseEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::ResponseEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Amazon::Runtime::AmazonServiceClient::add_ExceptionEvent(::Amazon::Runtime::ExceptionEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "add_ExceptionEvent", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::ExceptionEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Amazon::Runtime::AmazonServiceClient::remove_ExceptionEvent(::Amazon::Runtime::ExceptionEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "remove_ExceptionEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::ExceptionEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::AmazonServiceClient* Amazon::Runtime::AmazonServiceClient::New_ctor(::Amazon::Runtime::AWSCredentials* credentials, ::Amazon::Runtime::ClientConfig* config) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::AmazonServiceClient*>(credentials, config));
}
inline void Amazon::Runtime::AmazonServiceClient::_ctor(::Amazon::Runtime::AWSCredentials* credentials, ::Amazon::Runtime::ClientConfig* config) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AWSCredentials*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::ClientConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, credentials, config);
}
inline ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* Amazon::Runtime::AmazonServiceClient::get_Signer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "get_Signer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::AmazonServiceClient::set_Signer(::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "set_Signer", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::AmazonServiceClient* Amazon::Runtime::AmazonServiceClient::New_ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::StringW awsSessionToken,
                                                                                              ::Amazon::Runtime::ClientConfig* config) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::AmazonServiceClient*>(awsAccessKeyId, awsSecretAccessKey, awsSessionToken, config));
}
inline void Amazon::Runtime::AmazonServiceClient::_ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::StringW awsSessionToken, ::Amazon::Runtime::ClientConfig* config) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::ClientConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, awsAccessKeyId, awsSecretAccessKey, awsSessionToken, config);
}
inline ::Amazon::Runtime::AmazonServiceClient* Amazon::Runtime::AmazonServiceClient::New_ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::Amazon::Runtime::ClientConfig* config) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::AmazonServiceClient*>(awsAccessKeyId, awsSecretAccessKey, config));
}
inline void Amazon::Runtime::AmazonServiceClient::_ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::Amazon::Runtime::ClientConfig* config) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::ClientConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, awsAccessKeyId, awsSecretAccessKey, config);
}
inline void Amazon::Runtime::AmazonServiceClient::Initialize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TRequest, typename TResponse>
inline TResponse
Amazon::Runtime::AmazonServiceClient::Invoke(TRequest request,
                                             ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>* marshaller,
                                             ::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller* unmarshaller) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "Invoke",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponse>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TRequest>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TRequest>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponse>::get() }));
  return ::cordl_internals::RunMethodRethrow<TResponse, false>(this, ___internal_method, request, marshaller, unmarshaller);
}
template <typename TResponse>
inline TResponse Amazon::Runtime::AmazonServiceClient::Invoke(::Amazon::Runtime::AmazonWebServiceRequest* request, ::Amazon::Runtime::Internal::InvokeOptionsBase* options) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "Invoke",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponse>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AmazonWebServiceRequest*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::InvokeOptionsBase*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponse>::get() }));
  return ::cordl_internals::RunMethodRethrow<TResponse, false>(this, ___internal_method, request, options);
}
template <typename TRequest, typename TResponse>
inline ::System::Threading::Tasks::Task_1<TResponse>* Amazon::Runtime::AmazonServiceClient::InvokeAsync(
    TRequest request, ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>* marshaller,
    ::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller* unmarshaller, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "InvokeAsync",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponse>::get() },
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TRequest>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TRequest>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponse>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResponse>*, false>(this, ___internal_method, request, marshaller, unmarshaller, cancellationToken);
}
template <typename TResponse>
inline ::System::Threading::Tasks::Task_1<TResponse>* Amazon::Runtime::AmazonServiceClient::InvokeAsync(::Amazon::Runtime::AmazonWebServiceRequest* request,
                                                                                                        ::Amazon::Runtime::Internal::InvokeOptionsBase* options,
                                                                                                        ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "InvokeAsync",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponse>::get() },
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AmazonWebServiceRequest*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::InvokeOptionsBase*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponse>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResponse>*, false>(this, ___internal_method, request, options, cancellationToken);
}
inline ::System::Collections::Generic::IEnumerable_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>*
Amazon::Runtime::AmazonServiceClient::EndpointOperation(::Amazon::Runtime::Internal::EndpointOperationContextBase* context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>*, false>(this, ___internal_method, context);
}
inline void Amazon::Runtime::AmazonServiceClient::ProcessPreRequestHandlers(::Amazon::Runtime::IExecutionContext* executionContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "ProcessPreRequestHandlers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IExecutionContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, executionContext);
}
inline void Amazon::Runtime::AmazonServiceClient::ProcessRequestHandlers(::Amazon::Runtime::IExecutionContext* executionContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "ProcessRequestHandlers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IExecutionContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, executionContext);
}
inline void Amazon::Runtime::AmazonServiceClient::ProcessResponseHandlers(::Amazon::Runtime::IExecutionContext* executionContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "ProcessResponseHandlers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IExecutionContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, executionContext);
}
inline void Amazon::Runtime::AmazonServiceClient::ProcessExceptionHandlers(::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, executionContext, exception);
}
inline void Amazon::Runtime::AmazonServiceClient::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Runtime::AmazonServiceClient::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void Amazon::Runtime::AmazonServiceClient::ThrowIfDisposed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "ThrowIfDisposed",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* Amazon::Runtime::AmazonServiceClient::CreateSigner() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::AmazonServiceClient::CustomizeRuntimePipeline(::Amazon::Runtime::Internal::RuntimePipeline* pipeline) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pipeline);
}
inline void Amazon::Runtime::AmazonServiceClient::BuildRuntimePipeline() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(),
                                                                             "BuildRuntimePipeline", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Uri* Amazon::Runtime::AmazonServiceClient::ComposeUrl(::Amazon::Runtime::Internal::IRequest* iRequest) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "ComposeUrl", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::IRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(nullptr, ___internal_method, iRequest);
}
inline void Amazon::Runtime::AmazonServiceClient::DontUnescapePathDotsAndSlashes(::System::Uri* uri) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "DontUnescapePathDotsAndSlashes",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, uri);
}
template <typename C> inline C Amazon::Runtime::AmazonServiceClient::CloneConfig() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "CloneConfig",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<C>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<C>::get() }));
  return ::cordl_internals::RunMethodRethrow<C, false>(this, ___internal_method);
}
inline void Amazon::Runtime::AmazonServiceClient::CloneConfig(::Amazon::Runtime::ClientConfig* newConfig) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "CloneConfig", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::ClientConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newConfig);
}
inline void Amazon::Runtime::AmazonServiceClient::SetupCSMHandler(::Amazon::Runtime::IRequestContext* requestContext) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AmazonServiceClient*>::get(), "SetupCSMHandler", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IRequestContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestContext);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::AmazonServiceClient::AmazonServiceClient() {}
