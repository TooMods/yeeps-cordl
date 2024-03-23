#pragma once
#include "Amazon/Runtime/zzzz__IAmazonService_def.hpp"
#include "Amazon/Runtime/zzzz__IClientConfig_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::IAmazonService.get_Config
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::IClientConfig* (::Amazon::Runtime::IAmazonService::*)()>(
    &::Amazon::Runtime::IAmazonService::get_Config)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IAmazonService*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IAmazonService*>::get(), 0));
    return ___internal_method;
  }
};
inline ::Amazon::Runtime::IClientConfig* Amazon::Runtime::IAmazonService::get_Config() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IAmazonService*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::IClientConfig*, false>(this, ___internal_method);
}
