#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__BoundsExtensions_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::BoundsExtensions.ContainsCompletely
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Bounds, ::UnityEngine::Bounds)>(
    &::Unity::XR::CoreUtils::BoundsExtensions::ContainsCompletely)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x28735ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::BoundsExtensions*>::get(), "ContainsCompletely", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Bounds>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Bounds>::get() })));
    return ___internal_method;
  }
};
inline bool Unity::XR::CoreUtils::BoundsExtensions::ContainsCompletely(::UnityEngine::Bounds outerBounds, ::UnityEngine::Bounds innerBounds) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::BoundsExtensions*>::get(), "ContainsCompletely", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Bounds>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Bounds>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, outerBounds, innerBounds);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::BoundsExtensions::BoundsExtensions() {}
