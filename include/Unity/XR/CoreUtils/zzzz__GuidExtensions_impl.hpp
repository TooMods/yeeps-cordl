#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__GuidExtensions_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::GuidExtensions.Decompose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Guid, ByRef<uint64_t>, ByRef<uint64_t>)>(&::Unity::XR::CoreUtils::GuidExtensions::Decompose)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x287472c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::GuidExtensions*>::get(), "Decompose", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get() })));
    return ___internal_method;
  }
};
inline void Unity::XR::CoreUtils::GuidExtensions::Decompose(::System::Guid guid, ByRef<uint64_t> low, ByRef<uint64_t> high) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::GuidExtensions*>::get(), "Decompose", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, guid, low, high);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::GuidExtensions::GuidExtensions() {}
