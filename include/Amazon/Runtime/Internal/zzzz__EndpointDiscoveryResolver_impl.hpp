#pragma once
#include "Amazon/Runtime/Internal/zzzz__EndpointDiscoveryResolverBase_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__EndpointDiscoveryResolver_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__Logger_def.hpp"
#include "Amazon/Runtime/zzzz__IClientConfig_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::EndpointDiscoveryResolver._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::EndpointDiscoveryResolver::*)(
    ::Amazon::Runtime::IClientConfig*, ::Amazon::Runtime::Internal::Util::Logger*)>(&::Amazon::Runtime::Internal::EndpointDiscoveryResolver::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23d7b44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EndpointDiscoveryResolver*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Util::Logger*>::get() })));
    return ___internal_method;
  }
};
inline ::Amazon::Runtime::Internal::EndpointDiscoveryResolver* Amazon::Runtime::Internal::EndpointDiscoveryResolver::New_ctor(::Amazon::Runtime::IClientConfig* config,
                                                                                                                              ::Amazon::Runtime::Internal::Util::Logger* logger) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::EndpointDiscoveryResolver*>(config, logger));
}
inline void Amazon::Runtime::Internal::EndpointDiscoveryResolver::_ctor(::Amazon::Runtime::IClientConfig* config, ::Amazon::Runtime::Internal::Util::Logger* logger) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EndpointDiscoveryResolver*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Util::Logger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, config, logger);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::EndpointDiscoveryResolver::EndpointDiscoveryResolver() {}
