#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__IXRInteractionStrengthFilter_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRInteractor_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter.get_canProcess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter::get_canProcess)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*, ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter::Process)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*>::get(), 1));
    return ___internal_method;
  }
};
inline bool UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter::get_canProcess() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter::Process(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor,
                                                                                                       ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable,
                                                                                                       float_t interactionStrength) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, interactor, interactable, interactionStrength);
}
