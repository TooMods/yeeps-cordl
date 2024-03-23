#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRGazeInteractor_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRRayInteractor_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRGazeInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRGazeInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractableSnapVolume_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionUpdateOrder_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRGazeInteractor__GazeAssistanceCalculation::__XRGazeInteractor__GazeAssistanceCalculation(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRGazeInteractor__GazeAssistanceCalculation::__XRGazeInteractor__GazeAssistanceCalculation() {}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRGazeInteractor__GazeAssistanceCalculation UnityEngine::XR::Interaction::Toolkit::__XRGazeInteractor__GazeAssistanceCalculation::FixedSize{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRGazeInteractor__GazeAssistanceCalculation UnityEngine::XR::Interaction::Toolkit::__XRGazeInteractor__GazeAssistanceCalculation::ColliderSize{
  static_cast<int32_t>(0x1)
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor.get_gazeAssistanceCalculation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::__XRGazeInteractor__GazeAssistanceCalculation (
    ::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::get_gazeAssistanceCalculation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cef4ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(),
                                                 "get_gazeAssistanceCalculation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor.set_gazeAssistanceCalculation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::*)(
    ::UnityEngine::XR::Interaction::Toolkit::__XRGazeInteractor__GazeAssistanceCalculation)>(&::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::set_gazeAssistanceCalculation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cef4b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(), "set_gazeAssistanceCalculation",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__XRGazeInteractor__GazeAssistanceCalculation>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor.get_gazeAssistanceColliderFixedSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::get_gazeAssistanceColliderFixedSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cef4bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(),
                                                 "get_gazeAssistanceColliderFixedSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor.set_gazeAssistanceColliderFixedSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::set_gazeAssistanceColliderFixedSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cef4c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(), "set_gazeAssistanceColliderFixedSize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor.get_gazeAssistanceColliderScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::get_gazeAssistanceColliderScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cef4cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(),
                                                 "get_gazeAssistanceColliderScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor.set_gazeAssistanceColliderScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::set_gazeAssistanceColliderScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cef4d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(), "set_gazeAssistanceColliderScale",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor.get_gazeAssistanceSnapVolume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume> (
    ::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::get_gazeAssistanceSnapVolume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cef4dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(),
                                                 "get_gazeAssistanceSnapVolume", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor.set_gazeAssistanceSnapVolume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume*)>(&::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::set_gazeAssistanceSnapVolume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cef4e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(), "set_gazeAssistanceSnapVolume",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor.get_gazeAssistanceDistanceScaling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::get_gazeAssistanceDistanceScaling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cef4ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(),
                                                 "get_gazeAssistanceDistanceScaling", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor.set_gazeAssistanceDistanceScaling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::set_gazeAssistanceDistanceScaling)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2cef4f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(), "set_gazeAssistanceDistanceScaling",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor.get_clampGazeAssistanceDistanceScaling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::get_clampGazeAssistanceDistanceScaling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cef500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(),
                                                 "get_clampGazeAssistanceDistanceScaling", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor.set_clampGazeAssistanceDistanceScaling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::set_clampGazeAssistanceDistanceScaling)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2cef508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(), "set_clampGazeAssistanceDistanceScaling",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor.get_gazeAssistanceDistanceScalingClampValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::get_gazeAssistanceDistanceScalingClampValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cef514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(),
                                                 "get_gazeAssistanceDistanceScalingClampValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor.set_gazeAssistanceDistanceScalingClampValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::set_gazeAssistanceDistanceScalingClampValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cef51c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(), "set_gazeAssistanceDistanceScalingClampValue",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::Awake)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2cef524;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(), 51));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor.CreateGazeAssistanceSnapVolume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::CreateGazeAssistanceSnapVolume)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x2cef5e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(),
                                                 "CreateGazeAssistanceSnapVolume", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor.PreprocessInteractor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::*)(
    ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::PreprocessInteractor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2cef7f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(), 67));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor.UpdateSnapVolumeInteractable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::UpdateSnapVolumeInteractable)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0x2cefb80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(), 114));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor.CalculateSnapColliderSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::*)(::UnityEngine::Collider*)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::CalculateSnapColliderSize)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2cf02a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(), "CalculateSnapColliderSize",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor.CanInteract
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::CanInteract)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2cefaa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(), "CanInteract", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor.GetHoverTimeToSelect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::GetHoverTimeToSelect)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2cf0384;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(), 112));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor.GetTimeToAutoDeselect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::GetTimeToAutoDeselect)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2cf04ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(), 113));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2cf05d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRGazeInteractor__GazeAssistanceCalculation&
UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::__cordl_internal_get_m_GazeAssistanceCalculation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GazeAssistanceCalculation;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRGazeInteractor__GazeAssistanceCalculation const&
UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::__cordl_internal_get_m_GazeAssistanceCalculation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GazeAssistanceCalculation;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::__cordl_internal_set_m_GazeAssistanceCalculation(
    ::UnityEngine::XR::Interaction::Toolkit::__XRGazeInteractor__GazeAssistanceCalculation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GazeAssistanceCalculation = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::__cordl_internal_get_m_GazeAssistanceColliderFixedSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GazeAssistanceColliderFixedSize;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::__cordl_internal_get_m_GazeAssistanceColliderFixedSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GazeAssistanceColliderFixedSize;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::__cordl_internal_set_m_GazeAssistanceColliderFixedSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GazeAssistanceColliderFixedSize = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::__cordl_internal_get_m_GazeAssistanceColliderScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GazeAssistanceColliderScale;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::__cordl_internal_get_m_GazeAssistanceColliderScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GazeAssistanceColliderScale;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::__cordl_internal_set_m_GazeAssistanceColliderScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GazeAssistanceColliderScale = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume>& UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::__cordl_internal_get_m_GazeAssistanceSnapVolume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GazeAssistanceSnapVolume;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume> const&
UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::__cordl_internal_get_m_GazeAssistanceSnapVolume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GazeAssistanceSnapVolume;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::__cordl_internal_set_m_GazeAssistanceSnapVolume(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GazeAssistanceSnapVolume)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::__cordl_internal_get_m_GazeAssistanceDistanceScaling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GazeAssistanceDistanceScaling;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::__cordl_internal_get_m_GazeAssistanceDistanceScaling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GazeAssistanceDistanceScaling;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::__cordl_internal_set_m_GazeAssistanceDistanceScaling(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GazeAssistanceDistanceScaling = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::__cordl_internal_get_m_ClampGazeAssistanceDistanceScaling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClampGazeAssistanceDistanceScaling;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::__cordl_internal_get_m_ClampGazeAssistanceDistanceScaling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClampGazeAssistanceDistanceScaling;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::__cordl_internal_set_m_ClampGazeAssistanceDistanceScaling(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ClampGazeAssistanceDistanceScaling = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::__cordl_internal_get_m_GazeAssistanceDistanceScalingClampValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GazeAssistanceDistanceScalingClampValue;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::__cordl_internal_get_m_GazeAssistanceDistanceScalingClampValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GazeAssistanceDistanceScalingClampValue;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::__cordl_internal_set_m_GazeAssistanceDistanceScalingClampValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GazeAssistanceDistanceScalingClampValue = value;
}
inline ::UnityEngine::XR::Interaction::Toolkit::__XRGazeInteractor__GazeAssistanceCalculation UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::get_gazeAssistanceCalculation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(),
                                                                             "get_gazeAssistanceCalculation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::__XRGazeInteractor__GazeAssistanceCalculation, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::set_gazeAssistanceCalculation(::UnityEngine::XR::Interaction::Toolkit::__XRGazeInteractor__GazeAssistanceCalculation value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(), "set_gazeAssistanceCalculation",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__XRGazeInteractor__GazeAssistanceCalculation>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::get_gazeAssistanceColliderFixedSize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(),
                                               "get_gazeAssistanceColliderFixedSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::set_gazeAssistanceColliderFixedSize(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(), "set_gazeAssistanceColliderFixedSize",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::get_gazeAssistanceColliderScale() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(),
                                                                             "get_gazeAssistanceColliderScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::set_gazeAssistanceColliderScale(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(), "set_gazeAssistanceColliderScale",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume> UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::get_gazeAssistanceSnapVolume() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(),
                                                                             "get_gazeAssistanceSnapVolume", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::set_gazeAssistanceSnapVolume(::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(), "set_gazeAssistanceSnapVolume",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::get_gazeAssistanceDistanceScaling() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(),
                                               "get_gazeAssistanceDistanceScaling", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::set_gazeAssistanceDistanceScaling(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(), "set_gazeAssistanceDistanceScaling",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::get_clampGazeAssistanceDistanceScaling() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(),
                                               "get_clampGazeAssistanceDistanceScaling", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::set_clampGazeAssistanceDistanceScaling(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(), "set_clampGazeAssistanceDistanceScaling",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::get_gazeAssistanceDistanceScalingClampValue() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(),
                                               "get_gazeAssistanceDistanceScalingClampValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::set_gazeAssistanceDistanceScalingClampValue(float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(),
                                                                             "set_gazeAssistanceDistanceScalingClampValue", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::Awake() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(), 51)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::CreateGazeAssistanceSnapVolume() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(),
                                                                             "CreateGazeAssistanceSnapVolume", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::PreprocessInteractor(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(), 67)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, updatePhase);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::UpdateSnapVolumeInteractable(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(), 114)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactable);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::CalculateSnapColliderSize(::UnityEngine::Collider* interactableCollider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(), "CalculateSnapColliderSize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, interactableCollider);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::CanInteract(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(), "CanInteract", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, interactable);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::GetHoverTimeToSelect(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(), 112)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, interactable);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::GetTimeToAutoDeselect(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(), 113)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, interactable);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor* UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>());
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor::XRGazeInteractor() {}
