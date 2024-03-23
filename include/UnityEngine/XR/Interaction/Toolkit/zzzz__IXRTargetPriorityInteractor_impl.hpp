#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRTargetPriorityInteractor_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRSelectInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__TargetPriorityMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor.get_targetPriorityMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode (
    ::UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor::get_targetPriorityMode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor.get_targetsForSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*>* (
    ::UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor::get_targetsForSelection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor*>::get(), 1));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXRInteractor"
constexpr UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor::operator ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*() noexcept {
  return static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXRInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*
UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor::i___UnityEngine__XR__Interaction__Toolkit__IXRInteractor() noexcept {
  return static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>(static_cast<void*>(this));
}
inline ::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor::get_targetPriorityMode() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*>*
UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor::get_targetsForSelection() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*>*, false>(this, ___internal_method);
}
