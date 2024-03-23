#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRHoverInteractorExtensions_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRHoverInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRHoverInteractor_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRHoverInteractorExtensions.GetOldestInteractableHovered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* (*)(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*)>(
        &::UnityEngine::XR::Interaction::Toolkit::XRHoverInteractorExtensions::GetOldestInteractableHovered)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x25a6dbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRHoverInteractorExtensions*>::get(),
                                    "GetOldestInteractableHovered", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*
UnityEngine::XR::Interaction::Toolkit::XRHoverInteractorExtensions::GetOldestInteractableHovered(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* interactor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRHoverInteractorExtensions*>::get(), "GetOldestInteractableHovered",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*, false>(nullptr, ___internal_method, interactor);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRHoverInteractorExtensions::XRHoverInteractorExtensions() {}
