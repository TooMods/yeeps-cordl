#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRReticleDirectionProvider_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::IXRReticleDirectionProvider.GetReticleDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::IXRReticleDirectionProvider::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*, ::UnityEngine::Vector3, ByRef<::UnityEngine::Vector3>, ByRef<::System::Nullable_1<::UnityEngine::Vector3>>)>(
    &::UnityEngine::XR::Interaction::Toolkit::IXRReticleDirectionProvider::GetReticleDirection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::IXRReticleDirectionProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::IXRReticleDirectionProvider*>::get(), 0));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::IXRReticleDirectionProvider::GetReticleDirection(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor,
                                                                                                    ::UnityEngine::Vector3 hitNormal, ByRef<::UnityEngine::Vector3> reticleUp,
                                                                                                    ByRef<::System::Nullable_1<::UnityEngine::Vector3>> optionalReticleForward) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::IXRReticleDirectionProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactor, hitNormal, reticleUp, optionalReticleForward);
}
