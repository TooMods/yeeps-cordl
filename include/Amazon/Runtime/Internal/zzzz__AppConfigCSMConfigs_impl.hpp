#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__AppConfigCSMConfigs_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__CSMFallbackConfigChain_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::AppConfigCSMConfigs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::AppConfigCSMConfigs::*)(::Amazon::Runtime::Internal::CSMFallbackConfigChain*)>(
    &::Amazon::Runtime::Internal::AppConfigCSMConfigs::_ctor)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x23d3a0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AppConfigCSMConfigs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get() })));
    return ___internal_method;
  }
};
inline ::Amazon::Runtime::Internal::AppConfigCSMConfigs* Amazon::Runtime::Internal::AppConfigCSMConfigs::New_ctor(::Amazon::Runtime::Internal::CSMFallbackConfigChain* cSMFallbackConfigChain) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::AppConfigCSMConfigs*>(cSMFallbackConfigChain));
}
inline void Amazon::Runtime::Internal::AppConfigCSMConfigs::_ctor(::Amazon::Runtime::Internal::CSMFallbackConfigChain* cSMFallbackConfigChain) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AppConfigCSMConfigs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cSMFallbackConfigChain);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::AppConfigCSMConfigs::AppConfigCSMConfigs() {}
