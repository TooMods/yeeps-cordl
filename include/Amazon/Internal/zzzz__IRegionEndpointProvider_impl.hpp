#pragma once
#include "Amazon/Internal/zzzz__IRegionEndpointProvider_def.hpp"
#include "Amazon/Internal/zzzz__IRegionEndpoint_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::Amazon::Internal::IRegionEndpointProvider.get_AllRegionEndpoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Amazon::Internal::IRegionEndpoint*>* (
    ::Amazon::Internal::IRegionEndpointProvider::*)()>(&::Amazon::Internal::IRegionEndpointProvider::get_AllRegionEndpoints)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::IRegionEndpointProvider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::IRegionEndpointProvider*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::IRegionEndpointProvider.GetRegionEndpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Internal::IRegionEndpoint* (::Amazon::Internal::IRegionEndpointProvider::*)(::StringW)>(
    &::Amazon::Internal::IRegionEndpointProvider::GetRegionEndpoint)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::IRegionEndpointProvider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::IRegionEndpointProvider*>::get(), 1));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IEnumerable_1<::Amazon::Internal::IRegionEndpoint*>* Amazon::Internal::IRegionEndpointProvider::get_AllRegionEndpoints() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::IRegionEndpointProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Amazon::Internal::IRegionEndpoint*>*, false>(this, ___internal_method);
}
inline ::Amazon::Internal::IRegionEndpoint* Amazon::Internal::IRegionEndpointProvider::GetRegionEndpoint(::StringW regionName) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::IRegionEndpointProvider*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Internal::IRegionEndpoint*, false>(this, ___internal_method, regionName);
}
