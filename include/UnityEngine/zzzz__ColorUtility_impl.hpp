#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ColorUtility_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::UnityEngine::ColorUtility.ToHtmlStringRGBA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::Color)>(&::UnityEngine::ColorUtility::ToHtmlStringRGBA)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x2845234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ColorUtility*>::get(), "ToHtmlStringRGBA", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::ColorUtility::ToHtmlStringRGBA(::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ColorUtility*>::get(), "ToHtmlStringRGBA", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, color);
}
// Ctor Parameters []
constexpr ::UnityEngine::ColorUtility::ColorUtility() {}
