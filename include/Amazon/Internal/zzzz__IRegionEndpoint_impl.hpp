#pragma once
#include "Amazon/Internal/zzzz__IRegionEndpoint_def.hpp"
#include "Amazon/zzzz__RegionEndpoint_def.hpp"
//  Writing Method size for method: ::Amazon::Internal::IRegionEndpoint.get_RegionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Internal::IRegionEndpoint::*)()>(&::Amazon::Internal::IRegionEndpoint::get_RegionName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::IRegionEndpoint*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::IRegionEndpoint*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::IRegionEndpoint.get_DisplayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Internal::IRegionEndpoint::*)()>(&::Amazon::Internal::IRegionEndpoint::get_DisplayName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::IRegionEndpoint*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::IRegionEndpoint*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::IRegionEndpoint.GetEndpointForService
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::__RegionEndpoint__Endpoint* (::Amazon::Internal::IRegionEndpoint::*)(::StringW, bool)>(
    &::Amazon::Internal::IRegionEndpoint::GetEndpointForService)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::IRegionEndpoint*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::IRegionEndpoint*>::get(), 2));
    return ___internal_method;
  }
};
inline ::StringW Amazon::Internal::IRegionEndpoint::get_RegionName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::IRegionEndpoint*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Amazon::Internal::IRegionEndpoint::get_DisplayName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::IRegionEndpoint*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Amazon::__RegionEndpoint__Endpoint* Amazon::Internal::IRegionEndpoint::GetEndpointForService(::StringW serviceName, bool dualStack) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::IRegionEndpoint*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::__RegionEndpoint__Endpoint*, false>(this, ___internal_method, serviceName, dualStack);
}
