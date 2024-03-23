#pragma once
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseInteractable_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRGrabInteractable_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRGrabInteractable_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__IXRGrabTransformer_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRBaseGrabTransformer_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Pooling/zzzz__LinkedPool_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__BaseRegistrationList_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__SmallRegistrationList_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__TeleportationMonitor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRSelectInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectExitEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRGrabInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionUpdateOrder_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRGrabInteractable__AttachPointCompatibilityMode::__XRGrabInteractable__AttachPointCompatibilityMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRGrabInteractable__AttachPointCompatibilityMode::__XRGrabInteractable__AttachPointCompatibilityMode() {}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRGrabInteractable__AttachPointCompatibilityMode
    UnityEngine::XR::Interaction::Toolkit::__XRGrabInteractable__AttachPointCompatibilityMode::Default{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRGrabInteractable__AttachPointCompatibilityMode UnityEngine::XR::Interaction::Toolkit::__XRGrabInteractable__AttachPointCompatibilityMode::Legacy{
  static_cast<int32_t>(0x1)
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.get_attachTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_attachTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a05dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_attachTransform",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.set_attachTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(::UnityEngine::Transform*)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_attachTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a05e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_attachTransform", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.get_secondaryAttachTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_secondaryAttachTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a05ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                 "get_secondaryAttachTransform", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.set_secondaryAttachTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(::UnityEngine::Transform*)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_secondaryAttachTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a05f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_secondaryAttachTransform",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.get_useDynamicAttach
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_useDynamicAttach)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a05fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_useDynamicAttach",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.set_useDynamicAttach
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_useDynamicAttach)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25a0604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_useDynamicAttach",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.get_matchAttachPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_matchAttachPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a0610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_matchAttachPosition",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.set_matchAttachPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_matchAttachPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25a0618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_matchAttachPosition",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.get_matchAttachRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_matchAttachRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a0624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_matchAttachRotation",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.set_matchAttachRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_matchAttachRotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25a062c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_matchAttachRotation",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.get_snapToColliderVolume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_snapToColliderVolume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a0638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                 "get_snapToColliderVolume", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.set_snapToColliderVolume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_snapToColliderVolume)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25a0640;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_snapToColliderVolume",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.get_reinitializeDynamicAttachEverySingleGrab
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_reinitializeDynamicAttachEverySingleGrab)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a064c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                 "get_reinitializeDynamicAttachEverySingleGrab", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.set_reinitializeDynamicAttachEverySingleGrab
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_reinitializeDynamicAttachEverySingleGrab)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25a0654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_reinitializeDynamicAttachEverySingleGrab",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.get_attachEaseInTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_attachEaseInTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a0660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_attachEaseInTime",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.set_attachEaseInTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_attachEaseInTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a0668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_attachEaseInTime",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.get_movementType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType (
    ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_movementType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a0670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_movementType",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.set_movementType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType)>(&::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_movementType)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25a0678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_movementType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.get_velocityDamping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_velocityDamping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a09c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_velocityDamping",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.set_velocityDamping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_velocityDamping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a09c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_velocityDamping",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.get_velocityScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_velocityScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a09d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_velocityScale",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.set_velocityScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_velocityScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a09d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_velocityScale",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.get_angularVelocityDamping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_angularVelocityDamping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a09e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                 "get_angularVelocityDamping", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.set_angularVelocityDamping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_angularVelocityDamping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a09e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_angularVelocityDamping",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.get_angularVelocityScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_angularVelocityScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a09f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                 "get_angularVelocityScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.set_angularVelocityScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_angularVelocityScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a09f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_angularVelocityScale",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.get_trackPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_trackPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a0a00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_trackPosition",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.set_trackPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_trackPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25a0a08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_trackPosition",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.get_smoothPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_smoothPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a0a14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_smoothPosition",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.set_smoothPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_smoothPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25a0a1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_smoothPosition",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.get_smoothPositionAmount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_smoothPositionAmount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a0a28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                 "get_smoothPositionAmount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.set_smoothPositionAmount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_smoothPositionAmount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a0a30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_smoothPositionAmount",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.get_tightenPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_tightenPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a0a38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_tightenPosition",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.set_tightenPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_tightenPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a0a40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_tightenPosition",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.get_trackRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_trackRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a0a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_trackRotation",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.set_trackRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_trackRotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25a0a50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_trackRotation",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.get_smoothRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_smoothRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a0a5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_smoothRotation",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.set_smoothRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_smoothRotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25a0a64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_smoothRotation",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.get_smoothRotationAmount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_smoothRotationAmount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a0a70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                 "get_smoothRotationAmount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.set_smoothRotationAmount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_smoothRotationAmount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a0a78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_smoothRotationAmount",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.get_tightenRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_tightenRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a0a80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_tightenRotation",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.set_tightenRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_tightenRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a0a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_tightenRotation",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.get_throwOnDetach
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_throwOnDetach)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a0a90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_throwOnDetach",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.set_throwOnDetach
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_throwOnDetach)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25a0a98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_throwOnDetach",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.get_throwSmoothingDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_throwSmoothingDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a0aa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                 "get_throwSmoothingDuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.set_throwSmoothingDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_throwSmoothingDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a0aac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_throwSmoothingDuration",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.get_throwSmoothingCurve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationCurve* (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_throwSmoothingCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a0ab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_throwSmoothingCurve",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.set_throwSmoothingCurve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(::UnityEngine::AnimationCurve*)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_throwSmoothingCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a0abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_throwSmoothingCurve",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationCurve*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.get_throwVelocityScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_throwVelocityScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a0ac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_throwVelocityScale",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.set_throwVelocityScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_throwVelocityScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a0acc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_throwVelocityScale",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.get_throwAngularVelocityScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_throwAngularVelocityScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a0ad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                 "get_throwAngularVelocityScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.set_throwAngularVelocityScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_throwAngularVelocityScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a0adc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_throwAngularVelocityScale",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.get_forceGravityOnDetach
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_forceGravityOnDetach)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a0ae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                 "get_forceGravityOnDetach", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.set_forceGravityOnDetach
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_forceGravityOnDetach)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25a0aec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_forceGravityOnDetach",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.get_retainTransformParent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_retainTransformParent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a0af8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                 "get_retainTransformParent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.set_retainTransformParent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_retainTransformParent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25a0b00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_retainTransformParent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.get_attachPointCompatibilityMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::__XRGrabInteractable__AttachPointCompatibilityMode (
    ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_attachPointCompatibilityMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a0b0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                 "get_attachPointCompatibilityMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.set_attachPointCompatibilityMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::__XRGrabInteractable__AttachPointCompatibilityMode)>(&::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_attachPointCompatibilityMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a0b14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_attachPointCompatibilityMode",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__XRGrabInteractable__AttachPointCompatibilityMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.get_startingSingleGrabTransformers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>* (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_startingSingleGrabTransformers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a0b1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                 "get_startingSingleGrabTransformers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.set_startingSingleGrabTransformers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_startingSingleGrabTransformers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a0b24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                 "set_startingSingleGrabTransformers", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                     ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.get_startingMultipleGrabTransformers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>* (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_startingMultipleGrabTransformers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a0b2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                 "get_startingMultipleGrabTransformers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.set_startingMultipleGrabTransformers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_startingMultipleGrabTransformers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a0b34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                 "set_startingMultipleGrabTransformers", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                     ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.get_addDefaultGrabTransformers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_addDefaultGrabTransformers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a0b3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                 "get_addDefaultGrabTransformers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.set_addDefaultGrabTransformers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_addDefaultGrabTransformers)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25a0b44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_addDefaultGrabTransformers",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.get_singleGrabTransformersCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_singleGrabTransformersCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25a0b50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                 "get_singleGrabTransformersCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.get_multipleGrabTransformersCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_multipleGrabTransformersCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25a0ba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                 "get_multipleGrabTransformersCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::Awake)> {
  constexpr static std::size_t size = 0x5ec;
  constexpr static std::size_t addrs = 0x25a0bf0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), 54));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::OnDestroy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x25a1234;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), 57));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.ProcessInteractable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::ProcessInteractable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x25a1264;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), 66));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.GetAttachTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::GetAttachTransform)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x25a1b0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), 58));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.AddSingleGrabTransformer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*)>(&::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::AddSingleGrabTransformer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a11e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "AddSingleGrabTransformer",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.AddMultipleGrabTransformer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*)>(&::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::AddMultipleGrabTransformer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a11f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "AddMultipleGrabTransformer",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.RemoveSingleGrabTransformer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*)>(&::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::RemoveSingleGrabTransformer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a1ecc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "RemoveSingleGrabTransformer",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.RemoveMultipleGrabTransformer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*)>(&::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::RemoveMultipleGrabTransformer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a1f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "RemoveMultipleGrabTransformer",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.ClearSingleGrabTransformers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::ClearSingleGrabTransformers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a1254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                 "ClearSingleGrabTransformers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.ClearMultipleGrabTransformers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::ClearMultipleGrabTransformers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a125c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                 "ClearMultipleGrabTransformers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.GetSingleGrabTransformers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::GetSingleGrabTransformers)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x25a1fc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "GetSingleGrabTransformers",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.GetMultipleGrabTransformers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::GetMultipleGrabTransformers)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x25a2098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "GetMultipleGrabTransformers",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.GetSingleGrabTransformerAt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* (
    ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::GetSingleGrabTransformerAt)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x25a2100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "GetSingleGrabTransformerAt",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.GetMultipleGrabTransformerAt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* (
    ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::GetMultipleGrabTransformerAt)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x25a2120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "GetMultipleGrabTransformerAt",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.MoveSingleGrabTransformerTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*, int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::MoveSingleGrabTransformerTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a11dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "MoveSingleGrabTransformerTo",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.MoveMultipleGrabTransformerTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*, int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::MoveMultipleGrabTransformerTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a11ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "MoveMultipleGrabTransformerTo",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.AddGrabTransformer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*,
    ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::AddGrabTransformer)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x25a1d8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "AddGrabTransformer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.RemoveGrabTransformer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*,
    ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::RemoveGrabTransformer)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x25a1ed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "RemoveGrabTransformer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.ClearGrabTransformers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::ClearGrabTransformers)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x25a1f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "ClearGrabTransformers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.GetGrabTransformers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*,
                         ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*)>(
        &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::GetGrabTransformers)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x25a202c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "GetGrabTransformers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.MoveGrabTransformerTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*, int32_t,
    ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::MoveGrabTransformerTo)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x25a2140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "MoveGrabTransformerTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.FlushRegistration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::FlushRegistration)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x25a11fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "FlushRegistration",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.InvokeGrabTransformersOnGrab
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::InvokeGrabTransformersOnGrab)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x25a2578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                 "InvokeGrabTransformersOnGrab", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.InvokeGrabTransformersProcess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase, ByRef<::UnityEngine::Pose>, ByRef<::UnityEngine::Vector3>)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::InvokeGrabTransformersProcess)> {
  constexpr static std::size_t size = 0xcb8;
  constexpr static std::size_t addrs = 0x25a28ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "InvokeGrabTransformersProcess",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.CanProcessAnySingleGrabTransformer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::CanProcessAnySingleGrabTransformer)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x25a35a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                 "CanProcessAnySingleGrabTransformer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.OnAddedGrabTransformer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*)>(&::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::OnAddedGrabTransformer)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x25a22b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "OnAddedGrabTransformer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.OnRemovedGrabTransformer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*)>(&::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::OnRemovedGrabTransformer)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x25a249c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "OnRemovedGrabTransformer",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.AddDefaultGrabTransformers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::AddDefaultGrabTransformers)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x25a1364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                 "AddDefaultGrabTransformers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.AddDefaultSingleGrabTransformer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::AddDefaultSingleGrabTransformer)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x25a37e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), 97));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.AddDefaultMultipleGrabTransformer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::AddDefaultMultipleGrabTransformer)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x25a38a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), 98));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.GetOrAddDefaultGrabTransformer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* (
    ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::GetOrAddDefaultGrabTransformer)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x25a3858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                 "GetOrAddDefaultGrabTransformer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.UpdateTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::UpdateTarget)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x25a1848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "UpdateTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.StepSmoothing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(::UnityEngine::Pose, float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::StepSmoothing)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x25a3c04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "StepSmoothing", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.PerformInstantaneousUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::PerformInstantaneousUpdate)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x25a1a34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "PerformInstantaneousUpdate",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.PerformKinematicUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::PerformKinematicUpdate)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x25a1438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "PerformKinematicUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.PerformVelocityTrackingUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::PerformVelocityTrackingUpdate)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x25a1528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "PerformVelocityTrackingUpdate",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.UpdateCurrentMovementType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::UpdateCurrentMovementType)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x25a06d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                 "UpdateCurrentMovementType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.OnSelectEntering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::OnSelectEntering)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x25a3e08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), 73));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.OnSelectExiting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::OnSelectExiting)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x25a40e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), 75));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.OnSelectExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::OnSelectExited)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x25a4208;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), 76));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.CreateDynamicAttachTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::CreateDynamicAttachTransform)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x25a3f74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "CreateDynamicAttachTransform",
                                   std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.InitializeDynamicAttachPoseInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*, ::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::InitializeDynamicAttachPoseInternal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x25a3918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "InitializeDynamicAttachPoseInternal",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.InitializeDynamicAttachPoseWithStatic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*, ::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::InitializeDynamicAttachPoseWithStatic)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x25a4398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                    "InitializeDynamicAttachPoseWithStatic", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.ReleaseDynamicAttachTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::ReleaseDynamicAttachTransform)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x25a4244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "ReleaseDynamicAttachTransform",
                                   std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.ShouldMatchAttachPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::ShouldMatchAttachPosition)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x25a461c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), 99));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.ShouldMatchAttachRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::ShouldMatchAttachRotation)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x25a46e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), 100));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.ShouldSnapToColliderVolume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::ShouldSnapToColliderVolume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a4770;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), 101));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.InitializeDynamicAttachPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*, ::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::InitializeDynamicAttachPose)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x25a4778;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), 102));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.Grab
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::Grab)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x25a4994;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), 103));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.Drop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::Drop)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x25a4abc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), 104));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.Detach
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::Detach)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x25a4c88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), 105));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.SetupRigidbodyGrab
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(::UnityEngine::Rigidbody*)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::SetupRigidbodyGrab)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x25a4d64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), 106));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.SetupRigidbodyDrop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(::UnityEngine::Rigidbody*)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::SetupRigidbodyDrop)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x25a4e18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), 107));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.ResetThrowSmoothing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::ResetThrowSmoothing)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x25a4064;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "ResetThrowSmoothing",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.EndThrowSmoothing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::EndThrowSmoothing)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x25a4c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "EndThrowSmoothing",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.StepThrowSmoothing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(::UnityEngine::Pose, float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::StepThrowSmoothing)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x25a3954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "StepThrowSmoothing", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.GetSmoothedVelocityValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(
    ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>)>(&::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::GetSmoothedVelocityValue)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x25a4ebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "GetSmoothedVelocityValue",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.SubscribeTeleportationProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::SubscribeTeleportationProvider)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25a40cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "SubscribeTeleportationProvider",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.UnsubscribeTeleportationProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::UnsubscribeTeleportationProvider)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25a41ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "UnsubscribeTeleportationProvider",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.OnTeleported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(::UnityEngine::Pose)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::OnTeleported)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x25a50ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "OnTeleported",
                                   std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.OnCreatePooledItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::OnCreatePooledItem)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x25a5278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "OnCreatePooledItem",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.OnGetPooledItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::OnGetPooledItem)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x25a53ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "OnGetPooledItem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.OnReleasePooledItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Transform*)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::OnReleasePooledItem)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x25a543c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "OnReleasePooledItem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.OnDestroyPooledItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Transform*)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::OnDestroyPooledItem)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x25a54cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "OnDestroyPooledItem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.get_gravityOnDetach
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_gravityOnDetach)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a5570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_gravityOnDetach",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable.set_gravityOnDetach
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_gravityOnDetach)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25a5578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_gravityOnDetach",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::_ctor)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x25a5584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_AttachTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AttachTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_AttachTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AttachTransform;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_AttachTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AttachTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_SecondaryAttachTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SecondaryAttachTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_SecondaryAttachTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SecondaryAttachTransform;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_SecondaryAttachTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SecondaryAttachTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_UseDynamicAttach() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseDynamicAttach;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_UseDynamicAttach() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseDynamicAttach;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_UseDynamicAttach(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseDynamicAttach = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_MatchAttachPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MatchAttachPosition;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_MatchAttachPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MatchAttachPosition;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_MatchAttachPosition(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MatchAttachPosition = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_MatchAttachRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MatchAttachRotation;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_MatchAttachRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MatchAttachRotation;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_MatchAttachRotation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MatchAttachRotation = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_SnapToColliderVolume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SnapToColliderVolume;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_SnapToColliderVolume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SnapToColliderVolume;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_SnapToColliderVolume(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SnapToColliderVolume = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_ReinitializeDynamicAttachEverySingleGrab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReinitializeDynamicAttachEverySingleGrab;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_ReinitializeDynamicAttachEverySingleGrab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReinitializeDynamicAttachEverySingleGrab;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_ReinitializeDynamicAttachEverySingleGrab(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ReinitializeDynamicAttachEverySingleGrab = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_AttachEaseInTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AttachEaseInTime;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_AttachEaseInTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AttachEaseInTime;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_AttachEaseInTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AttachEaseInTime = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_MovementType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MovementType;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_MovementType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MovementType;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_MovementType(::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MovementType = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_VelocityDamping() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VelocityDamping;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_VelocityDamping() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VelocityDamping;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_VelocityDamping(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VelocityDamping = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_VelocityScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VelocityScale;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_VelocityScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VelocityScale;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_VelocityScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VelocityScale = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_AngularVelocityDamping() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AngularVelocityDamping;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_AngularVelocityDamping() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AngularVelocityDamping;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_AngularVelocityDamping(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AngularVelocityDamping = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_AngularVelocityScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AngularVelocityScale;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_AngularVelocityScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AngularVelocityScale;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_AngularVelocityScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AngularVelocityScale = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_TrackPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackPosition;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_TrackPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackPosition;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_TrackPosition(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TrackPosition = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_SmoothPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SmoothPosition;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_SmoothPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SmoothPosition;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_SmoothPosition(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SmoothPosition = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_SmoothPositionAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SmoothPositionAmount;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_SmoothPositionAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SmoothPositionAmount;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_SmoothPositionAmount(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SmoothPositionAmount = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_TightenPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TightenPosition;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_TightenPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TightenPosition;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_TightenPosition(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TightenPosition = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_TrackRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackRotation;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_TrackRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackRotation;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_TrackRotation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TrackRotation = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_SmoothRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SmoothRotation;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_SmoothRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SmoothRotation;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_SmoothRotation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SmoothRotation = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_SmoothRotationAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SmoothRotationAmount;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_SmoothRotationAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SmoothRotationAmount;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_SmoothRotationAmount(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SmoothRotationAmount = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_TightenRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TightenRotation;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_TightenRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TightenRotation;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_TightenRotation(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TightenRotation = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_ThrowOnDetach() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ThrowOnDetach;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_ThrowOnDetach() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ThrowOnDetach;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_ThrowOnDetach(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ThrowOnDetach = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_ThrowSmoothingDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ThrowSmoothingDuration;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_ThrowSmoothingDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ThrowSmoothingDuration;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_ThrowSmoothingDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ThrowSmoothingDuration = value;
}
constexpr ::UnityEngine::AnimationCurve*& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_ThrowSmoothingCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ThrowSmoothingCurve;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_ThrowSmoothingCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ThrowSmoothingCurve;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_ThrowSmoothingCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ThrowSmoothingCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_ThrowVelocityScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ThrowVelocityScale;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_ThrowVelocityScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ThrowVelocityScale;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_ThrowVelocityScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ThrowVelocityScale = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_ThrowAngularVelocityScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ThrowAngularVelocityScale;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_ThrowAngularVelocityScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ThrowAngularVelocityScale;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_ThrowAngularVelocityScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ThrowAngularVelocityScale = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_ForceGravityOnDetach() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForceGravityOnDetach;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_ForceGravityOnDetach() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForceGravityOnDetach;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_ForceGravityOnDetach(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ForceGravityOnDetach = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_RetainTransformParent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RetainTransformParent;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_RetainTransformParent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RetainTransformParent;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_RetainTransformParent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RetainTransformParent = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRGrabInteractable__AttachPointCompatibilityMode&
UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_AttachPointCompatibilityMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AttachPointCompatibilityMode;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRGrabInteractable__AttachPointCompatibilityMode const&
UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_AttachPointCompatibilityMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AttachPointCompatibilityMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_AttachPointCompatibilityMode(
    ::UnityEngine::XR::Interaction::Toolkit::__XRGrabInteractable__AttachPointCompatibilityMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AttachPointCompatibilityMode = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*&
UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_StartingSingleGrabTransformers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartingSingleGrabTransformers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*> const&
UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_StartingSingleGrabTransformers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartingSingleGrabTransformers;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_StartingSingleGrabTransformers(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_StartingSingleGrabTransformers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*&
UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_StartingMultipleGrabTransformers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartingMultipleGrabTransformers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*> const&
UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_StartingMultipleGrabTransformers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartingMultipleGrabTransformers;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_StartingMultipleGrabTransformers(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_StartingMultipleGrabTransformers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_AddDefaultGrabTransformers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AddDefaultGrabTransformers;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_AddDefaultGrabTransformers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AddDefaultGrabTransformers;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_AddDefaultGrabTransformers(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AddDefaultGrabTransformers = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*&
UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_SingleGrabTransformers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SingleGrabTransformers;
}
constexpr ::cordl_internals::to_const_pointer<
    ::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*> const&
UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_SingleGrabTransformers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SingleGrabTransformers;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_SingleGrabTransformers(
    ::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SingleGrabTransformers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*&
UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_MultipleGrabTransformers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MultipleGrabTransformers;
}
constexpr ::cordl_internals::to_const_pointer<
    ::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*> const&
UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_MultipleGrabTransformers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MultipleGrabTransformers;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_MultipleGrabTransformers(
    ::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MultipleGrabTransformers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*&
UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_GrabTransformersAddedWhenGrabbed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GrabTransformersAddedWhenGrabbed;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*> const&
UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_GrabTransformersAddedWhenGrabbed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GrabTransformersAddedWhenGrabbed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_GrabTransformersAddedWhenGrabbed(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GrabTransformersAddedWhenGrabbed)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_GrabCountChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GrabCountChanged;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_GrabCountChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GrabCountChanged;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_GrabCountChanged(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GrabCountChanged = value;
}
constexpr ::System::ValueTuple_2<int32_t, int32_t>& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_GrabCountBeforeAndAfterChange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GrabCountBeforeAndAfterChange;
}
constexpr ::System::ValueTuple_2<int32_t, int32_t> const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_GrabCountBeforeAndAfterChange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GrabCountBeforeAndAfterChange;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_GrabCountBeforeAndAfterChange(::System::ValueTuple_2<int32_t, int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GrabCountBeforeAndAfterChange = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_IsProcessingGrabTransformers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsProcessingGrabTransformers;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_IsProcessingGrabTransformers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsProcessingGrabTransformers;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_IsProcessingGrabTransformers(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsProcessingGrabTransformers = value;
}
constexpr ::UnityEngine::Pose& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_TargetPose() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TargetPose;
}
constexpr ::UnityEngine::Pose const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_TargetPose() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TargetPose;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_TargetPose(::UnityEngine::Pose value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TargetPose = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_TargetLocalScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TargetLocalScale;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_TargetLocalScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TargetLocalScale;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_TargetLocalScale(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TargetLocalScale = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_CurrentAttachEaseTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentAttachEaseTime;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_CurrentAttachEaseTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentAttachEaseTime;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_CurrentAttachEaseTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentAttachEaseTime = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_CurrentMovementType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentMovementType;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType const&
UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_CurrentMovementType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentMovementType;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_CurrentMovementType(::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentMovementType = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_DetachInLateUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DetachInLateUpdate;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_DetachInLateUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DetachInLateUpdate;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_DetachInLateUpdate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DetachInLateUpdate = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_DetachVelocity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DetachVelocity;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_DetachVelocity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DetachVelocity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_DetachVelocity(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DetachVelocity = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_DetachAngularVelocity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DetachAngularVelocity;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_DetachAngularVelocity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DetachAngularVelocity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_DetachAngularVelocity(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DetachAngularVelocity = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_ThrowSmoothingCurrentFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ThrowSmoothingCurrentFrame;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_ThrowSmoothingCurrentFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ThrowSmoothingCurrentFrame;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_ThrowSmoothingCurrentFrame(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ThrowSmoothingCurrentFrame = value;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_ThrowSmoothingFrameTimes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ThrowSmoothingFrameTimes;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_ThrowSmoothingFrameTimes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ThrowSmoothingFrameTimes;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_ThrowSmoothingFrameTimes(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ThrowSmoothingFrameTimes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_ThrowSmoothingVelocityFrames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ThrowSmoothingVelocityFrames;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const&
UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_ThrowSmoothingVelocityFrames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ThrowSmoothingVelocityFrames;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_ThrowSmoothingVelocityFrames(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ThrowSmoothingVelocityFrames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_ThrowSmoothingAngularVelocityFrames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ThrowSmoothingAngularVelocityFrames;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const&
UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_ThrowSmoothingAngularVelocityFrames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ThrowSmoothingAngularVelocityFrames;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_ThrowSmoothingAngularVelocityFrames(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ThrowSmoothingAngularVelocityFrames)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_ThrowSmoothingFirstUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ThrowSmoothingFirstUpdate;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_ThrowSmoothingFirstUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ThrowSmoothingFirstUpdate;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_ThrowSmoothingFirstUpdate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ThrowSmoothingFirstUpdate = value;
}
constexpr ::UnityEngine::Pose& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_LastThrowReferencePose() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastThrowReferencePose;
}
constexpr ::UnityEngine::Pose const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_LastThrowReferencePose() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastThrowReferencePose;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_LastThrowReferencePose(::UnityEngine::Pose value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastThrowReferencePose = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_Rigidbody() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Rigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_Rigidbody() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Rigidbody;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_Rigidbody(::UnityW<::UnityEngine::Rigidbody> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Rigidbody)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_WasKinematic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WasKinematic;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_WasKinematic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WasKinematic;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_WasKinematic(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WasKinematic = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_UsedGravity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UsedGravity;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_UsedGravity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UsedGravity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_UsedGravity(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UsedGravity = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_OldDrag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldDrag;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_OldDrag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldDrag;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_OldDrag(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OldDrag = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_OldAngularDrag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldAngularDrag;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_OldAngularDrag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldAngularDrag;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_OldAngularDrag(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OldAngularDrag = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_OriginalSceneParent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OriginalSceneParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_OriginalSceneParent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OriginalSceneParent;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_OriginalSceneParent(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OriginalSceneParent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*& UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_TeleportationMonitor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TeleportationMonitor;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*> const&
UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_TeleportationMonitor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TeleportationMonitor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_TeleportationMonitor(::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TeleportationMonitor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*, ::UnityW<::UnityEngine::Transform>>*&
UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_DynamicAttachTransforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DynamicAttachTransforms;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*, ::UnityW<::UnityEngine::Transform>>*> const&
UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_get_m_DynamicAttachTransforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DynamicAttachTransforms;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::__cordl_internal_set_m_DynamicAttachTransforms(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*, ::UnityW<::UnityEngine::Transform>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DynamicAttachTransforms)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::setStaticF_s_DynamicAttachTransformPool(
    ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityW<::UnityEngine::Transform>>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityW<::UnityEngine::Transform>>*, "s_DynamicAttachTransformPool",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get>(
      std::forward<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityW<::UnityEngine::Transform>>*>(value));
}
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityW<::UnityEngine::Transform>>*
UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::getStaticF_s_DynamicAttachTransformPool() {
  return ::cordl_internals::getStaticField<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityW<::UnityEngine::Transform>>*, "s_DynamicAttachTransformPool",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::setStaticF_s_ProcessGrabTransformersMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_ProcessGrabTransformersMarker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::getStaticF_s_ProcessGrabTransformersMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_ProcessGrabTransformersMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get>();
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_attachTransform() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_attachTransform",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_attachTransform(::UnityEngine::Transform* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_attachTransform", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_secondaryAttachTransform() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                               "get_secondaryAttachTransform", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_secondaryAttachTransform(::UnityEngine::Transform* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_secondaryAttachTransform",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_useDynamicAttach() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_useDynamicAttach",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_useDynamicAttach(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_useDynamicAttach",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_matchAttachPosition() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_matchAttachPosition",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_matchAttachPosition(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_matchAttachPosition",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_matchAttachRotation() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_matchAttachRotation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_matchAttachRotation(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_matchAttachRotation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_snapToColliderVolume() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_snapToColliderVolume",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_snapToColliderVolume(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_snapToColliderVolume",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_reinitializeDynamicAttachEverySingleGrab() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                               "get_reinitializeDynamicAttachEverySingleGrab", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_reinitializeDynamicAttachEverySingleGrab(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_reinitializeDynamicAttachEverySingleGrab",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_attachEaseInTime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_attachEaseInTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_attachEaseInTime(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_attachEaseInTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_movementType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_movementType",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_movementType(::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_movementType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_velocityDamping() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_velocityDamping",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_velocityDamping(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_velocityDamping",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_velocityScale() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_velocityScale",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_velocityScale(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_velocityScale",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_angularVelocityDamping() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                               "get_angularVelocityDamping", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_angularVelocityDamping(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_angularVelocityDamping",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_angularVelocityScale() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_angularVelocityScale",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_angularVelocityScale(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_angularVelocityScale",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_trackPosition() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_trackPosition",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_trackPosition(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_trackPosition",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_smoothPosition() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_smoothPosition",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_smoothPosition(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_smoothPosition",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_smoothPositionAmount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_smoothPositionAmount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_smoothPositionAmount(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_smoothPositionAmount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_tightenPosition() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_tightenPosition",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_tightenPosition(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_tightenPosition",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_trackRotation() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_trackRotation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_trackRotation(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_trackRotation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_smoothRotation() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_smoothRotation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_smoothRotation(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_smoothRotation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_smoothRotationAmount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_smoothRotationAmount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_smoothRotationAmount(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_smoothRotationAmount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_tightenRotation() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_tightenRotation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_tightenRotation(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_tightenRotation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_throwOnDetach() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_throwOnDetach",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_throwOnDetach(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_throwOnDetach",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_throwSmoothingDuration() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                               "get_throwSmoothingDuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_throwSmoothingDuration(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_throwSmoothingDuration",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::AnimationCurve* UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_throwSmoothingCurve() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_throwSmoothingCurve",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_throwSmoothingCurve(::UnityEngine::AnimationCurve* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_throwSmoothingCurve", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationCurve*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_throwVelocityScale() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_throwVelocityScale",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_throwVelocityScale(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_throwVelocityScale",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_throwAngularVelocityScale() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                               "get_throwAngularVelocityScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_throwAngularVelocityScale(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_throwAngularVelocityScale",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_forceGravityOnDetach() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_forceGravityOnDetach",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_forceGravityOnDetach(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_forceGravityOnDetach",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_retainTransformParent() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_retainTransformParent",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_retainTransformParent(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_retainTransformParent",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::__XRGrabInteractable__AttachPointCompatibilityMode UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_attachPointCompatibilityMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                               "get_attachPointCompatibilityMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::__XRGrabInteractable__AttachPointCompatibilityMode, false>(this, ___internal_method);
}
inline void
UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_attachPointCompatibilityMode(::UnityEngine::XR::Interaction::Toolkit::__XRGrabInteractable__AttachPointCompatibilityMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_attachPointCompatibilityMode",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__XRGrabInteractable__AttachPointCompatibilityMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*
UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_startingSingleGrabTransformers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                               "get_startingSingleGrabTransformers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*, false>(
      this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_startingSingleGrabTransformers(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                               "set_startingSingleGrabTransformers", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                   ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*
UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_startingMultipleGrabTransformers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                               "get_startingMultipleGrabTransformers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*, false>(
      this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_startingMultipleGrabTransformers(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                               "set_startingMultipleGrabTransformers", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                   ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_addDefaultGrabTransformers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                               "get_addDefaultGrabTransformers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_addDefaultGrabTransformers(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_addDefaultGrabTransformers",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_singleGrabTransformersCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                               "get_singleGrabTransformersCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_multipleGrabTransformersCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                               "get_multipleGrabTransformersCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::Awake() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), 54)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::OnDestroy() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), 57)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::ProcessInteractable(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), 66)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, updatePhase);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::GetAttachTransform(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), 58)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::AddSingleGrabTransformer(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* transformer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "AddSingleGrabTransformer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transformer);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::AddMultipleGrabTransformer(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* transformer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "AddMultipleGrabTransformer",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transformer);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::RemoveSingleGrabTransformer(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* transformer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "RemoveSingleGrabTransformer",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, transformer);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::RemoveMultipleGrabTransformer(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* transformer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "RemoveMultipleGrabTransformer",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, transformer);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::ClearSingleGrabTransformers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                               "ClearSingleGrabTransformers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::ClearMultipleGrabTransformers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                               "ClearMultipleGrabTransformers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::GetSingleGrabTransformers(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>* results) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "GetSingleGrabTransformers",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, results);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::GetMultipleGrabTransformers(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>* results) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "GetMultipleGrabTransformers",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, results);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::GetSingleGrabTransformerAt(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "GetSingleGrabTransformerAt",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*, false>(this, ___internal_method, index);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::GetMultipleGrabTransformerAt(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "GetMultipleGrabTransformerAt",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*, false>(this, ___internal_method, index);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::MoveSingleGrabTransformerTo(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* transformer,
                                                                                                   int32_t newIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "MoveSingleGrabTransformerTo",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transformer, newIndex);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::MoveMultipleGrabTransformerTo(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* transformer,
                                                                                                     int32_t newIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "MoveMultipleGrabTransformerTo",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transformer, newIndex);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::AddGrabTransformer(
    ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* transformer,
    ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>* grabTransformers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "AddGrabTransformer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transformer, grabTransformers);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::RemoveGrabTransformer(
    ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* transformer,
    ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>* grabTransformers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "RemoveGrabTransformer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, transformer, grabTransformers);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::ClearGrabTransformers(
    ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>* grabTransformers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "ClearGrabTransformers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, grabTransformers);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::GetGrabTransformers(
    ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>* grabTransformers,
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>* results) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "GetGrabTransformers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, grabTransformers, results);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::MoveGrabTransformerTo(
    ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* transformer, int32_t newIndex,
    ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>* grabTransformers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "MoveGrabTransformerTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transformer, newIndex, grabTransformers);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::FlushRegistration() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "FlushRegistration",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::InvokeGrabTransformersOnGrab() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                               "InvokeGrabTransformersOnGrab", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::InvokeGrabTransformersProcess(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase,
                                                                                                     ByRef<::UnityEngine::Pose> targetPose, ByRef<::UnityEngine::Vector3> localScale) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "InvokeGrabTransformersProcess",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, updatePhase, targetPose, localScale);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::CanProcessAnySingleGrabTransformer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                               "CanProcessAnySingleGrabTransformer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::OnAddedGrabTransformer(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* transformer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "OnAddedGrabTransformer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transformer);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::OnRemovedGrabTransformer(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* transformer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "OnRemovedGrabTransformer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transformer);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::AddDefaultGrabTransformers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                               "AddDefaultGrabTransformers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::AddDefaultSingleGrabTransformer() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), 97)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::AddDefaultMultipleGrabTransformer() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), 98)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::GetOrAddDefaultGrabTransformer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(),
                                               "GetOrAddDefaultGrabTransformer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*, false>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::GetOrAddComponent() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "GetOrAddComponent",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::UpdateTarget(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase, float_t deltaTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "UpdateTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, updatePhase, deltaTime);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::StepSmoothing(::UnityEngine::Pose rawTargetPose, float_t deltaTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "StepSmoothing", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rawTargetPose, deltaTime);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::PerformInstantaneousUpdate(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "PerformInstantaneousUpdate",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, updatePhase);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::PerformKinematicUpdate(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "PerformKinematicUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, updatePhase);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::PerformVelocityTrackingUpdate(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase,
                                                                                                     float_t deltaTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "PerformVelocityTrackingUpdate",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, updatePhase, deltaTime);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::UpdateCurrentMovementType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "UpdateCurrentMovementType",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::OnSelectEntering(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), 73)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), 75)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), 76)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline ::UnityW<::UnityEngine::Transform>
UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::CreateDynamicAttachTransform(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "CreateDynamicAttachTransform",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::InitializeDynamicAttachPoseInternal(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor,
                                                                                                           ::UnityEngine::Transform* dynamicAttachTransform) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "InitializeDynamicAttachPoseInternal",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactor, dynamicAttachTransform);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::InitializeDynamicAttachPoseWithStatic(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor,
                                                                                                             ::UnityEngine::Transform* dynamicAttachTransform) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "InitializeDynamicAttachPoseWithStatic",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactor, dynamicAttachTransform);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::ReleaseDynamicAttachTransform(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "ReleaseDynamicAttachTransform",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactor);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::ShouldMatchAttachPosition(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), 99)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, interactor);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::ShouldMatchAttachRotation(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), 100)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, interactor);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::ShouldSnapToColliderVolume(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), 101)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::InitializeDynamicAttachPose(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor,
                                                                                                   ::UnityEngine::Transform* dynamicAttachTransform) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), 102)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactor, dynamicAttachTransform);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::Grab() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), 103)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::Drop() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), 104)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::Detach() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), 105)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::SetupRigidbodyGrab(::UnityEngine::Rigidbody* rigidbody) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), 106)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rigidbody);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::SetupRigidbodyDrop(::UnityEngine::Rigidbody* rigidbody) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), 107)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rigidbody);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::ResetThrowSmoothing() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "ResetThrowSmoothing",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::EndThrowSmoothing() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "EndThrowSmoothing",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::StepThrowSmoothing(::UnityEngine::Pose targetPose, float_t deltaTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "StepThrowSmoothing", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, targetPose, deltaTime);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::GetSmoothedVelocityValue(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> velocityFrames) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "GetSmoothedVelocityValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, velocityFrames);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::SubscribeTeleportationProvider(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "SubscribeTeleportationProvider",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::UnsubscribeTeleportationProvider(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "UnsubscribeTeleportationProvider",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::OnTeleported(::UnityEngine::Pose offset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "OnTeleported",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, offset);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::OnCreatePooledItem() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "OnCreatePooledItem",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::OnGetPooledItem(::UnityEngine::Transform* item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "OnGetPooledItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, item);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::OnReleasePooledItem(::UnityEngine::Transform* item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "OnReleasePooledItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, item);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::OnDestroyPooledItem(::UnityEngine::Transform* item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "OnDestroyPooledItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, item);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::get_gravityOnDetach() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "get_gravityOnDetach",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::set_gravityOnDetach(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), "set_gravityOnDetach",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>());
}
inline void UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable::XRGrabInteractable() {}
