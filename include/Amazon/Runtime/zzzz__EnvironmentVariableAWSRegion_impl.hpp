#pragma once
#include "Amazon/Runtime/zzzz__AWSRegion_impl.hpp"
#include "Amazon/Runtime/zzzz__EnvironmentVariableAWSRegion_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::EnvironmentVariableAWSRegion._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::EnvironmentVariableAWSRegion::*)()>(
    &::Amazon::Runtime::EnvironmentVariableAWSRegion::_ctor)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x1fdf844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EnvironmentVariableAWSRegion*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Amazon::Runtime::EnvironmentVariableAWSRegion* Amazon::Runtime::EnvironmentVariableAWSRegion::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::EnvironmentVariableAWSRegion*>());
}
inline void Amazon::Runtime::EnvironmentVariableAWSRegion::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EnvironmentVariableAWSRegion*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::EnvironmentVariableAWSRegion::EnvironmentVariableAWSRegion() {}
