#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__GuidUtil_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::GuidUtil.Compose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (*)(uint64_t, uint64_t)>(&::Unity::XR::CoreUtils::GuidUtil::Compose)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x287cb68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::GuidUtil*>::get(), "Compose", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
inline ::System::Guid Unity::XR::CoreUtils::GuidUtil::Compose(uint64_t low, uint64_t high) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::GuidUtil*>::get(), "Compose", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(nullptr, ___internal_method, low, high);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::GuidUtil::GuidUtil() {}
