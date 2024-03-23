#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__BaseTeleportationInteractable_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__TeleportationArea_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__TeleportRequest_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::TeleportationArea.GenerateTeleportRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::TeleportationArea::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*, ::UnityEngine::RaycastHit, ByRef<::UnityEngine::XR::Interaction::Toolkit::TeleportRequest>)>(
    &::UnityEngine::XR::Interaction::Toolkit::TeleportationArea::GenerateTeleportRequest)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x301add4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TeleportationArea*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TeleportationArea*>::get(), 98));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::TeleportationArea._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::TeleportationArea::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::TeleportationArea::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x301aea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TeleportationArea*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool UnityEngine::XR::Interaction::Toolkit::TeleportationArea::GenerateTeleportRequest(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor, ::UnityEngine::RaycastHit raycastHit,
                                                                                              ByRef<::UnityEngine::XR::Interaction::Toolkit::TeleportRequest> teleportRequest) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TeleportationArea*>::get(), 98)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, interactor, raycastHit, teleportRequest);
}
inline ::UnityEngine::XR::Interaction::Toolkit::TeleportationArea* UnityEngine::XR::Interaction::Toolkit::TeleportationArea::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::TeleportationArea*>());
}
inline void UnityEngine::XR::Interaction::Toolkit::TeleportationArea::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TeleportationArea*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::TeleportationArea::TeleportationArea() {}
