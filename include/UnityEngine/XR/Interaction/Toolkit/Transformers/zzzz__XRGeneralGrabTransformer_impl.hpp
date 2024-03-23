#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRBaseGrabTransformer_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRGeneralGrabTransformer_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRGeneralGrabTransformer_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRBaseGrabTransformer_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRGeneralGrabTransformer_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRGrabInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionUpdateOrder_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes::__XRGeneralGrabTransformer__ManipulationAxes(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes::__XRGeneralGrabTransformer__ManipulationAxes() {}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes
    UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes::X{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes
    UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes::Y{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes
    UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes::Z{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes
    UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes::All{ static_cast<int32_t>(0x7) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode(
    int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode() {}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode
    UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode::ObjectRelative{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode
    UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode::ObjectRelativeWithLockedWorldUp{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode
    UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode::WorldAxisRelative{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__TwoHandedRotationMode::__XRGeneralGrabTransformer__TwoHandedRotationMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__TwoHandedRotationMode::__XRGeneralGrabTransformer__TwoHandedRotationMode() {}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__TwoHandedRotationMode
    UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__TwoHandedRotationMode::FirstHandOnly{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__TwoHandedRotationMode
    UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__TwoHandedRotationMode::FirstHandDirectedTowardsSecondHand{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__TwoHandedRotationMode
    UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__TwoHandedRotationMode::TwoHandedAverage{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.get_permittedDisplacementAxes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes (
    ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_permittedDisplacementAxes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2febccc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(),
                                                 "get_permittedDisplacementAxes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.set_permittedDisplacementAxes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)(
    ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes)>(
    &::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::set_permittedDisplacementAxes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2febcd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(), "set_permittedDisplacementAxes",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.get_constrainedAxisDisplacementMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode (
    ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_constrainedAxisDisplacementMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2febcdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(),
                                                 "get_constrainedAxisDisplacementMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.set_constrainedAxisDisplacementMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)(
    ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode)>(
    &::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::set_constrainedAxisDisplacementMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2febce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(), "set_constrainedAxisDisplacementMode",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.get_allowTwoHandedRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__TwoHandedRotationMode (
    ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_allowTwoHandedRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2febcec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(),
                                                 "get_allowTwoHandedRotation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.set_allowTwoHandedRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)(
    ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__TwoHandedRotationMode)>(
    &::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::set_allowTwoHandedRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2febcf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(), "set_allowTwoHandedRotation",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__TwoHandedRotationMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.get_allowTwoHandedScaling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_allowTwoHandedScaling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2febcfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(),
                                                 "get_allowTwoHandedScaling", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.set_allowTwoHandedScaling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::set_allowTwoHandedScaling)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2febd04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(), "set_allowTwoHandedScaling",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.get_thresholdMoveRatioForScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_thresholdMoveRatioForScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2febd10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(),
                                                 "get_thresholdMoveRatioForScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.set_thresholdMoveRatioForScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::set_thresholdMoveRatioForScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2febd18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(), "set_thresholdMoveRatioForScale",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.get_clampScaling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_clampScaling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2febd20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(),
                                                 "get_clampScaling", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.set_clampScaling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::set_clampScaling)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2febd28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(), "set_clampScaling",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.get_minimumScaleRatio
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_minimumScaleRatio)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2febd34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(),
                                                 "get_minimumScaleRatio", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.set_minimumScaleRatio
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::set_minimumScaleRatio)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2febd3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(), "set_minimumScaleRatio",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.get_maximumScaleRatio
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_maximumScaleRatio)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2febd64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(),
                                                 "get_maximumScaleRatio", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.set_maximumScaleRatio
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::set_maximumScaleRatio)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2febd6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(), "set_maximumScaleRatio",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.get_scaleMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_scaleMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2febd94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(),
                                                 "get_scaleMultiplier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.set_scaleMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::set_scaleMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2febd9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(), "set_scaleMultiplier",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.get_registrationMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRBaseGrabTransformer__RegistrationMode (
    ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_registrationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2febda4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::Awake)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2febdac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(),
                                                 "Awake", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*, ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase, ByRef<::UnityEngine::Pose>,
    ByRef<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::Process)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2febddc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.OnGrab
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::OnGrab)> {
  constexpr static std::size_t size = 0x5c8;
  constexpr static std::size_t addrs = 0x2febf38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.OnGrabCountChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*, ::UnityEngine::Pose, ::UnityEngine::Vector3)>(
    &::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::OnGrabCountChanged)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x2fed2b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.ComputeAdjustedInteractorPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Pose (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*, ByRef<::UnityEngine::Vector3>)>(
    &::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::ComputeAdjustedInteractorPose)> {
  constexpr static std::size_t size = 0x860;
  constexpr static std::size_t addrs = 0x2fed4e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(),
                                    "ComputeAdjustedInteractorPose", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.TranslateSetup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)(
    ::UnityEngine::Pose, ::UnityEngine::Vector3, ::UnityEngine::Pose, ::UnityEngine::Vector3)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::TranslateSetup)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2fed1e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(),
                                                 "TranslateSetup", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.ComputeNewObjectPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)(
    ::UnityEngine::Pose, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, bool)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::ComputeNewObjectPosition)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2fedd40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(),
                                                 "ComputeNewObjectPosition", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.ComputeNewObjectRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)(
    ::UnityEngine::Pose, bool)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::ComputeNewObjectRotation)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2fede5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(), "ComputeNewObjectRotation",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.AdjustPositionForPermittedAxes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Pose, ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes,
                                           ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode)>(
        &::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::AdjustPositionForPermittedAxes)> {
  constexpr static std::size_t size = 0xce4;
  constexpr static std::size_t addrs = 0x2fec500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(), "AdjustPositionForPermittedAxes",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.ComputeNewScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::ComputeNewScale)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2fedef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(), "ComputeNewScale",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.UpdateTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*, ByRef<::UnityEngine::Pose>, ByRef<::UnityEngine::Vector3>)>(
    &::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::UpdateTarget)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2febdf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(), "UpdateTarget",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2fee0b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes&
UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_PermittedDisplacementAxes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PermittedDisplacementAxes;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes const&
UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_PermittedDisplacementAxes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PermittedDisplacementAxes;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_PermittedDisplacementAxes(
    ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PermittedDisplacementAxes = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode&
UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_ConstrainedAxisDisplacementMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ConstrainedAxisDisplacementMode;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode const&
UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_ConstrainedAxisDisplacementMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ConstrainedAxisDisplacementMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_ConstrainedAxisDisplacementMode(
    ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ConstrainedAxisDisplacementMode = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__TwoHandedRotationMode&
UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_TwoHandedRotationMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TwoHandedRotationMode;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__TwoHandedRotationMode const&
UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_TwoHandedRotationMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TwoHandedRotationMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_TwoHandedRotationMode(
    ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__TwoHandedRotationMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TwoHandedRotationMode = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_AllowTwoHandedScaling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowTwoHandedScaling;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_AllowTwoHandedScaling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowTwoHandedScaling;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_AllowTwoHandedScaling(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AllowTwoHandedScaling = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_ThresholdMoveRatioForScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ThresholdMoveRatioForScale;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_ThresholdMoveRatioForScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ThresholdMoveRatioForScale;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_ThresholdMoveRatioForScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ThresholdMoveRatioForScale = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_ClampScaling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClampScaling;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_ClampScaling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClampScaling;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_ClampScaling(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ClampScaling = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_MinimumScaleRatio() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MinimumScaleRatio;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_MinimumScaleRatio() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MinimumScaleRatio;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_MinimumScaleRatio(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MinimumScaleRatio = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_MaximumScaleRatio() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaximumScaleRatio;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_MaximumScaleRatio() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaximumScaleRatio;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_MaximumScaleRatio(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaximumScaleRatio = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_ScaleMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScaleMultiplier;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_ScaleMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScaleMultiplier;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_ScaleMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScaleMultiplier = value;
}
constexpr ::UnityEngine::Pose& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_OriginalObjectPose() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OriginalObjectPose;
}
constexpr ::UnityEngine::Pose const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_OriginalObjectPose() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OriginalObjectPose;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_OriginalObjectPose(::UnityEngine::Pose value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OriginalObjectPose = value;
}
constexpr ::UnityEngine::Pose& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_OffsetPose() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OffsetPose;
}
constexpr ::UnityEngine::Pose const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_OffsetPose() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OffsetPose;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_OffsetPose(::UnityEngine::Pose value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OffsetPose = value;
}
constexpr ::UnityEngine::Pose& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_OriginalInteractorPose() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OriginalInteractorPose;
}
constexpr ::UnityEngine::Pose const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_OriginalInteractorPose() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OriginalInteractorPose;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_OriginalInteractorPose(::UnityEngine::Pose value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OriginalInteractorPose = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_InteractorLocalGrabPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InteractorLocalGrabPoint;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_InteractorLocalGrabPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InteractorLocalGrabPoint;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_InteractorLocalGrabPoint(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InteractorLocalGrabPoint = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_ObjectLocalGrabPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ObjectLocalGrabPoint;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_ObjectLocalGrabPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ObjectLocalGrabPoint;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_ObjectLocalGrabPoint(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ObjectLocalGrabPoint = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_OriginalInteractor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OriginalInteractor;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*> const&
UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_OriginalInteractor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OriginalInteractor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_OriginalInteractor(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OriginalInteractor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_LastGrabCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastGrabCount;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_LastGrabCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastGrabCount;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_LastGrabCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastGrabCount = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_StartHandleBar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartHandleBar;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_StartHandleBar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartHandleBar;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_StartHandleBar(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StartHandleBar = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_ScaleAtGrabStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScaleAtGrabStart;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_ScaleAtGrabStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScaleAtGrabStart;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_ScaleAtGrabStart(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScaleAtGrabStart = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_FirstFrameSinceTwoHandedGrab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstFrameSinceTwoHandedGrab;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_FirstFrameSinceTwoHandedGrab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstFrameSinceTwoHandedGrab;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_FirstFrameSinceTwoHandedGrab(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FirstFrameSinceTwoHandedGrab = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_LastTwoHandedUp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastTwoHandedUp;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_LastTwoHandedUp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastTwoHandedUp;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_LastTwoHandedUp(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastTwoHandedUp = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_InitialScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InitialScale;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_InitialScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InitialScale;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_InitialScale(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InitialScale = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_MinimumScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MinimumScale;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_MinimumScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MinimumScale;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_MinimumScale(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MinimumScale = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_MaximumScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaximumScale;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_MaximumScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaximumScale;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_MaximumScale(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaximumScale = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode&
UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_ConstrainedAxisDisplacementModeOnGrab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ConstrainedAxisDisplacementModeOnGrab;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode const&
UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_ConstrainedAxisDisplacementModeOnGrab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ConstrainedAxisDisplacementModeOnGrab;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_ConstrainedAxisDisplacementModeOnGrab(
    ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ConstrainedAxisDisplacementModeOnGrab = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes&
UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_PermittedDisplacementAxesOnGrab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PermittedDisplacementAxesOnGrab;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes const&
UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_PermittedDisplacementAxesOnGrab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PermittedDisplacementAxesOnGrab;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_PermittedDisplacementAxesOnGrab(
    ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PermittedDisplacementAxesOnGrab = value;
}
inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes
UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_permittedDisplacementAxes() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(),
                                               "get_permittedDisplacementAxes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::set_permittedDisplacementAxes(
    ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(), "set_permittedDisplacementAxes",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode
UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_constrainedAxisDisplacementMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(),
                                               "get_constrainedAxisDisplacementMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::set_constrainedAxisDisplacementMode(
    ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(), "set_constrainedAxisDisplacementMode",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__TwoHandedRotationMode
UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_allowTwoHandedRotation() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(),
                                               "get_allowTwoHandedRotation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__TwoHandedRotationMode, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::set_allowTwoHandedRotation(
    ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__TwoHandedRotationMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(), "set_allowTwoHandedRotation",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__TwoHandedRotationMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_allowTwoHandedScaling() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(),
                                               "get_allowTwoHandedScaling", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::set_allowTwoHandedScaling(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(), "set_allowTwoHandedScaling",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_thresholdMoveRatioForScale() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(),
                                               "get_thresholdMoveRatioForScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::set_thresholdMoveRatioForScale(float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(), "set_thresholdMoveRatioForScale",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_clampScaling() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(),
                                               "get_clampScaling", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::set_clampScaling(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(), "set_clampScaling",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_minimumScaleRatio() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(),
                                               "get_minimumScaleRatio", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::set_minimumScaleRatio(float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(), "set_minimumScaleRatio",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_maximumScaleRatio() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(),
                                               "get_maximumScaleRatio", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::set_maximumScaleRatio(float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(), "set_maximumScaleRatio",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_scaleMultiplier() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(),
                                               "get_scaleMultiplier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::set_scaleMultiplier(float_t value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(), "set_scaleMultiplier",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRBaseGrabTransformer__RegistrationMode
UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_registrationMode() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRBaseGrabTransformer__RegistrationMode, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::Awake() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(), "Awake",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::Process(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable,
                                                                                                   ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase,
                                                                                                   ByRef<::UnityEngine::Pose> targetPose, ByRef<::UnityEngine::Vector3> localScale) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, grabInteractable, updatePhase, targetPose, localScale);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::OnGrab(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, grabInteractable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::OnGrabCountChanged(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable,
                                                                                                              ::UnityEngine::Pose targetPose, ::UnityEngine::Vector3 localScale) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, grabInteractable, targetPose, localScale);
}
inline ::UnityEngine::Pose
UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::ComputeAdjustedInteractorPose(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable,
                                                                                                             ByRef<::UnityEngine::Vector3> newHandleBar) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(),
                                  "ComputeAdjustedInteractorPose", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose, false>(this, ___internal_method, grabInteractable, newHandleBar);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::TranslateSetup(::UnityEngine::Pose interactorCentroidPose, ::UnityEngine::Vector3 grabCentroid,
                                                                                                          ::UnityEngine::Pose objectPose, ::UnityEngine::Vector3 objectScale) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(),
                                               "TranslateSetup", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactorCentroidPose, grabCentroid, objectPose, objectScale);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::ComputeNewObjectPosition(::UnityEngine::Pose newInteractionPose,
                                                                                                                                      ::UnityEngine::Quaternion objectRotation,
                                                                                                                                      ::UnityEngine::Vector3 objectScale, bool trackRotation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(), "ComputeNewObjectPosition",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, newInteractionPose, objectRotation, objectScale, trackRotation);
}
inline ::UnityEngine::Quaternion UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::ComputeNewObjectRotation(::UnityEngine::Pose newInteractionPose, bool trackRotation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(), "ComputeNewObjectRotation",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method, newInteractionPose, trackRotation);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::AdjustPositionForPermittedAxes(
    ::UnityEngine::Vector3 targetPosition, ::UnityEngine::Pose originalObjectPose, ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes permittedAxes,
    ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode axisDisplacementMode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(), "AdjustPositionForPermittedAxes",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, targetPosition, originalObjectPose, permittedAxes, axisDisplacementMode);
}
inline ::UnityEngine::Vector3
UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::ComputeNewScale(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable,
                                                                                               ::UnityEngine::Vector3 startScale, ::UnityEngine::Vector3 currentScale,
                                                                                               ::UnityEngine::Vector3 startHandleBar, ::UnityEngine::Vector3 newHandleBar) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(), "ComputeNewScale",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, grabInteractable, startScale, currentScale, startHandleBar, newHandleBar);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::UpdateTarget(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable,
                                                                                                        ByRef<::UnityEngine::Pose> targetPose, ByRef<::UnityEngine::Vector3> localScale) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(), "UpdateTarget",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, grabInteractable, targetPose, localScale);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer* UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>());
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::XRGeneralGrabTransformer() {}
