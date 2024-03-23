#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__XRInteractableUtility_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__DistanceInfo_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility.TryGetClosestCollider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, ::UnityEngine::Vector3, ByRef<::UnityEngine::XR::Interaction::Toolkit::DistanceInfo>)>(
        &::UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility::TryGetClosestCollider)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x301f468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility*>::get(), "TryGetClosestCollider",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::XR::Interaction::Toolkit::DistanceInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility.TryGetClosestPointOnCollider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, ::UnityEngine::Vector3, ByRef<::UnityEngine::XR::Interaction::Toolkit::DistanceInfo>)>(
        &::UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility::TryGetClosestPointOnCollider)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x301f790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility*>::get(),
                                    "TryGetClosestPointOnCollider", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::XR::Interaction::Toolkit::DistanceInfo>>::get() })));
    return ___internal_method;
  }
};
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility::TryGetClosestCollider(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable,
                                                                                                           ::UnityEngine::Vector3 position,
                                                                                                           ByRef<::UnityEngine::XR::Interaction::Toolkit::DistanceInfo> distanceInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility*>::get(), "TryGetClosestCollider",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::XR::Interaction::Toolkit::DistanceInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, interactable, position, distanceInfo);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility::TryGetClosestPointOnCollider(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable,
                                                                                                                  ::UnityEngine::Vector3 position,
                                                                                                                  ByRef<::UnityEngine::XR::Interaction::Toolkit::DistanceInfo> distanceInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility*>::get(),
                                  "TryGetClosestPointOnCollider", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::XR::Interaction::Toolkit::DistanceInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, interactable, position, distanceInfo);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility::XRInteractableUtility() {}
