#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ITunnelingVignetteProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__VignetteParameters_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider.get_vignetteParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::VignetteParameters* (
    ::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider::get_vignetteParameters)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider*>::get(), 0));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::Interaction::Toolkit::VignetteParameters* UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider::get_vignetteParameters() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::VignetteParameters*, false>(this, ___internal_method);
}
