#pragma once
#include "Amazon/Runtime/Internal/zzzz__EndpointDiscoveryDataBase_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__EndpointDiscoveryData_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::EndpointDiscoveryData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::EndpointDiscoveryData::*)(bool)>(
    &::Amazon::Runtime::Internal::EndpointDiscoveryData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d6928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EndpointDiscoveryData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline ::Amazon::Runtime::Internal::EndpointDiscoveryData* Amazon::Runtime::Internal::EndpointDiscoveryData::New_ctor(bool required) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::EndpointDiscoveryData*>(required));
}
inline void Amazon::Runtime::Internal::EndpointDiscoveryData::_ctor(bool required) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EndpointDiscoveryData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, required);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::EndpointDiscoveryData::EndpointDiscoveryData() {}
