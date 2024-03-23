#pragma once
#include "Amazon/Runtime/Internal/zzzz__EndpointOperationContextBase_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__EndpointOperationContext_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__EndpointDiscoveryDataBase_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::EndpointOperationContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::EndpointOperationContext::*)(
    ::StringW, ::StringW, ::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*, bool, ::System::Uri*)>(&::Amazon::Runtime::Internal::EndpointOperationContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d7c50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EndpointOperationContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
    return ___internal_method;
  }
};
inline ::Amazon::Runtime::Internal::EndpointOperationContext*
Amazon::Runtime::Internal::EndpointOperationContext::New_ctor(::StringW customerCredentials, ::StringW operationName, ::Amazon::Runtime::Internal::EndpointDiscoveryDataBase* endpointDiscoveryData,
                                                              bool evictCacheKey, ::System::Uri* evictUri) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::EndpointOperationContext*>(customerCredentials, operationName, endpointDiscoveryData, evictCacheKey, evictUri));
}
inline void Amazon::Runtime::Internal::EndpointOperationContext::_ctor(::StringW customerCredentials, ::StringW operationName,
                                                                       ::Amazon::Runtime::Internal::EndpointDiscoveryDataBase* endpointDiscoveryData, bool evictCacheKey, ::System::Uri* evictUri) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EndpointOperationContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, customerCredentials, operationName, endpointDiscoveryData, evictCacheKey, evictUri);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::EndpointOperationContext::EndpointOperationContext() {}
