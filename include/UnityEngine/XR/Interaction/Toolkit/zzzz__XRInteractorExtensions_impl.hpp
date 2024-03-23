#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractorExtensions_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRInteractor_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractorExtensions.IsBlockedByInteractionWithinGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRInteractorExtensions::IsBlockedByInteractionWithinGroup)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x25a6f08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractorExtensions*>::get(),
                                    "IsBlockedByInteractionWithinGroup", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>::get() })));
    return ___internal_method;
  }
};
inline bool UnityEngine::XR::Interaction::Toolkit::XRInteractorExtensions::IsBlockedByInteractionWithinGroup(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractorExtensions*>::get(), "IsBlockedByInteractionWithinGroup",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, interactor);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRInteractorExtensions::XRInteractorExtensions() {}
