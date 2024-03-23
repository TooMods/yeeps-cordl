#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRInteractionStrengthInteractable_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__IReadOnlyBindableVariable_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionUpdateOrder_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable.get_largestInteractionStrength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<float_t>* (
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable::get_largestInteractionStrength)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable.GetInteractionStrength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable::GetInteractionStrength)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable.ProcessInteractionStrength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable::ProcessInteractionStrength)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable*>::get(), 2));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXRInteractable"
constexpr UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable::operator ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*() noexcept {
  return static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXRInteractable"
constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*
UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable::i___UnityEngine__XR__Interaction__Toolkit__IXRInteractable() noexcept {
  return static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>(static_cast<void*>(this));
}
inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<float_t>* UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable::get_largestInteractionStrength() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<float_t>*, false>(this, ___internal_method);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable::GetInteractionStrength(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, interactor);
}
inline void
UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable::ProcessInteractionStrength(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, updatePhase);
}
