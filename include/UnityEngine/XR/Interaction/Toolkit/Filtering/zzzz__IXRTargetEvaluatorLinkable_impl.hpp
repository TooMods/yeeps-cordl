#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__IXRTargetEvaluatorLinkable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRInteractor_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable.OnLink
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable::OnLink)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable.OnUnlink
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable::OnUnlink)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable*>::get(), 1));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable::OnLink(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable::OnUnlink(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactor);
}
