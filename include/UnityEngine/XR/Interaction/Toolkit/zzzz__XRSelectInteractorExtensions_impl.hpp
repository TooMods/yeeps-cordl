#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRSelectInteractorExtensions_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRSelectInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRSelectInteractor_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRSelectInteractorExtensions.GetOldestInteractableSelected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* (*)(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*)>(
        &::UnityEngine::XR::Interaction::Toolkit::XRSelectInteractorExtensions::GetOldestInteractableSelected)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x25a6ff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRSelectInteractorExtensions*>::get(),
                                   "GetOldestInteractableSelected", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*
UnityEngine::XR::Interaction::Toolkit::XRSelectInteractorExtensions::GetOldestInteractableSelected(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRSelectInteractorExtensions*>::get(),
                                  "GetOldestInteractableSelected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*, false>(nullptr, ___internal_method, interactor);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRSelectInteractorExtensions::XRSelectInteractorExtensions() {}
