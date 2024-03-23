#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRDirectInteractor_impl.hpp"
#include "GlobalNamespace/zzzz__XRDirectInteractorSingleHover_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRHoverInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRInteractable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XRDirectInteractorSingleHover.GetValidTargets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::XRDirectInteractorSingleHover::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>*)>(&::GlobalNamespace::XRDirectInteractorSingleHover::GetValidTargets)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x29d9824;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XRDirectInteractorSingleHover*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XRDirectInteractorSingleHover*>::get(), 57));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XRDirectInteractorSingleHover.CanHover
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::XRDirectInteractorSingleHover::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*)>(&::GlobalNamespace::XRDirectInteractorSingleHover::CanHover)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x29d9ad0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XRDirectInteractorSingleHover*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XRDirectInteractorSingleHover*>::get(), 64));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XRDirectInteractorSingleHover._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::XRDirectInteractorSingleHover::*)()>(
    &::GlobalNamespace::XRDirectInteractorSingleHover::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x29d9ccc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XRDirectInteractorSingleHover*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::XRDirectInteractorSingleHover::GetValidTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* targets) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XRDirectInteractorSingleHover*>::get(), 57)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, targets);
}
inline bool GlobalNamespace::XRDirectInteractorSingleHover::CanHover(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* interactable) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XRDirectInteractorSingleHover*>::get(), 64)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, interactable);
}
inline ::GlobalNamespace::XRDirectInteractorSingleHover* GlobalNamespace::XRDirectInteractorSingleHover::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::XRDirectInteractorSingleHover*>());
}
inline void GlobalNamespace::XRDirectInteractorSingleHover::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XRDirectInteractorSingleHover*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XRDirectInteractorSingleHover::XRDirectInteractorSingleHover() {}
