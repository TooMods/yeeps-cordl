#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRBaseGrabTransformer_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRSingleGrabFreeTransformer_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRGrabInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionUpdateOrder_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*, ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase, ByRef<::UnityEngine::Pose>,
    ByRef<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer::Process)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2fee6e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer.UpdateTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*, ByRef<::UnityEngine::Pose>)>(
    &::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer::UpdateTarget)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x2feb134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer*>::get(), "UpdateTarget",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fee700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer::Process(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable,
                                                                                                      ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase,
                                                                                                      ByRef<::UnityEngine::Pose> targetPose, ByRef<::UnityEngine::Vector3> localScale) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, grabInteractable, updatePhase, targetPose, localScale);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer::UpdateTarget(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable,
                                                                                                           ByRef<::UnityEngine::Pose> targetPose) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer*>::get(), "UpdateTarget",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, grabInteractable, targetPose);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer* UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer*>());
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer::XRSingleGrabFreeTransformer() {}
