#pragma once
#include "Amazon/Runtime/Internal/zzzz__DiscoveryEndpointBase_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__DiscoveryEndpoint_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::DiscoveryEndpoint._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::DiscoveryEndpoint::*)(::StringW, int64_t)>(
    &::Amazon::Runtime::Internal::DiscoveryEndpoint::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23d6870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DiscoveryEndpoint*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
inline ::Amazon::Runtime::Internal::DiscoveryEndpoint* Amazon::Runtime::Internal::DiscoveryEndpoint::New_ctor(::StringW address, int64_t cachePeriodInMinutes) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::DiscoveryEndpoint*>(address, cachePeriodInMinutes));
}
inline void Amazon::Runtime::Internal::DiscoveryEndpoint::_ctor(::StringW address, int64_t cachePeriodInMinutes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DiscoveryEndpoint*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, address, cachePeriodInMinutes);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::DiscoveryEndpoint::DiscoveryEndpoint() {}
