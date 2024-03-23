#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/U2D/zzzz__PixelPerfectRendering_def.hpp"
//  Writing Method size for method: ::UnityEngine::U2D::PixelPerfectRendering.set_pixelSnapSpacing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t)>(&::UnityEngine::U2D::PixelPerfectRendering::set_pixelSnapSpacing)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2a86fac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::U2D::PixelPerfectRendering*>::get(), "set_pixelSnapSpacing",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::U2D::PixelPerfectRendering::set_pixelSnapSpacing(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::U2D::PixelPerfectRendering*>::get(), "set_pixelSnapSpacing",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::UnityEngine::U2D::PixelPerfectRendering::PixelPerfectRendering() {}
