#pragma once
#include "UnityEngine/SpatialTracking/zzzz__TrackedPoseDriver_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/SpatialTracking/zzzz__TrackedPoseDriver_def.hpp"
#include "UnityEngine/Experimental/XR/Interaction/zzzz__BasePoseProvider_def.hpp"
#include "UnityEngine/SpatialTracking/zzzz__PoseDataFlags_def.hpp"
#include "UnityEngine/SpatialTracking/zzzz__TrackedPoseDriver_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType::__TrackedPoseDriver__DeviceType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType::__TrackedPoseDriver__DeviceType() {}
constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType::GenericXRDevice{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType::GenericXRController{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType::GenericXRRemote{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose::__TrackedPoseDriver__TrackedPose(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose::__TrackedPoseDriver__TrackedPose() {}
constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose::LeftEye{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose::RightEye{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose::Center{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose::Head{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose::LeftPose{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose::RightPose{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose::ColorCamera{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose::DepthCameraDeprecated{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose::FisheyeCameraDeprected{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose::DeviceDeprecated{ static_cast<int32_t>(0x9) };
constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose::RemotePose{ static_cast<int32_t>(0xa) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType::__TrackedPoseDriver__TrackingType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType::__TrackedPoseDriver__TrackingType() {}
constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType::RotationAndPosition{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType::RotationOnly{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType::PositionOnly{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType::__TrackedPoseDriver__UpdateType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType::__TrackedPoseDriver__UpdateType() {}
constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType::UpdateAndBeforeRender{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType::Update{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType::BeforeRender{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.get_deviceType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType (
    ::UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(&::UnityEngine::SpatialTracking::TrackedPoseDriver::get_deviceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2436f50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(),
                                                                               "get_deviceType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.set_deviceType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)(
    ::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType)>(&::UnityEngine::SpatialTracking::TrackedPoseDriver::set_deviceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2436f58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(), "set_deviceType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.get_poseSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose (
    ::UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(&::UnityEngine::SpatialTracking::TrackedPoseDriver::get_poseSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2436f60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(),
                                                                               "get_poseSource", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.set_poseSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)(
    ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose)>(&::UnityEngine::SpatialTracking::TrackedPoseDriver::set_poseSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2436f68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(), "set_poseSource", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.SetPoseSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)(
    ::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType, ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose)>(
    &::UnityEngine::SpatialTracking::TrackedPoseDriver::SetPoseSource)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2436f70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(), "SetPoseSource", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.get_poseProviderComponent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider> (
    ::UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(&::UnityEngine::SpatialTracking::TrackedPoseDriver::get_poseProviderComponent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24370b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(),
                                                                               "get_poseProviderComponent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.set_poseProviderComponent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)(
    ::UnityEngine::Experimental::XR::Interaction::BasePoseProvider*)>(&::UnityEngine::SpatialTracking::TrackedPoseDriver::set_poseProviderComponent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24370bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(), "set_poseProviderComponent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.GetPoseData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SpatialTracking::PoseDataFlags (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)(
    ::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType, ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose, ByRef<::UnityEngine::Pose>)>(
    &::UnityEngine::SpatialTracking::TrackedPoseDriver::GetPoseData)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x24370c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(), "GetPoseData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.get_trackingType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType (
    ::UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(&::UnityEngine::SpatialTracking::TrackedPoseDriver::get_trackingType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2437190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(),
                                                                               "get_trackingType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.set_trackingType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)(
    ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType)>(&::UnityEngine::SpatialTracking::TrackedPoseDriver::set_trackingType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2437198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(), "set_trackingType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.get_updateType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType (
    ::UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(&::UnityEngine::SpatialTracking::TrackedPoseDriver::get_updateType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24371a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(),
                                                                               "get_updateType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.set_updateType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)(
    ::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType)>(&::UnityEngine::SpatialTracking::TrackedPoseDriver::set_updateType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24371a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(), "set_updateType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.get_UseRelativeTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(
    &::UnityEngine::SpatialTracking::TrackedPoseDriver::get_UseRelativeTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24371b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(),
                                                                               "get_UseRelativeTransform", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.set_UseRelativeTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)(bool)>(
    &::UnityEngine::SpatialTracking::TrackedPoseDriver::set_UseRelativeTransform)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24371b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(), "set_UseRelativeTransform",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.get_originPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Pose (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(
    &::UnityEngine::SpatialTracking::TrackedPoseDriver::get_originPose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x24371c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(),
                                                                               "get_originPose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.set_originPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)(::UnityEngine::Pose)>(
    &::UnityEngine::SpatialTracking::TrackedPoseDriver::set_originPose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x24371d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(), "set_originPose",
                                   std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.CacheLocalPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(
    &::UnityEngine::SpatialTracking::TrackedPoseDriver::CacheLocalPosition)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x24371f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(),
                                                                               "CacheLocalPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.ResetToCachedLocalPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(
    &::UnityEngine::SpatialTracking::TrackedPoseDriver::ResetToCachedLocalPosition)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2437244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(),
                                                                               "ResetToCachedLocalPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(
    &::UnityEngine::SpatialTracking::TrackedPoseDriver::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2437264;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(
    &::UnityEngine::SpatialTracking::TrackedPoseDriver::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2437268;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(
    &::UnityEngine::SpatialTracking::TrackedPoseDriver::OnEnable)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x243726c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(
    &::UnityEngine::SpatialTracking::TrackedPoseDriver::OnDisable)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x24372e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.FixedUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(
    &::UnityEngine::SpatialTracking::TrackedPoseDriver::FixedUpdate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x243735c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(
    &::UnityEngine::SpatialTracking::TrackedPoseDriver::Update)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2437378;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.OnBeforeRender
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(
    &::UnityEngine::SpatialTracking::TrackedPoseDriver::OnBeforeRender)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2437394;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.SetLocalTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::SpatialTracking::PoseDataFlags)>(&::UnityEngine::SpatialTracking::TrackedPoseDriver::SetLocalTransform)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x24373b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.TransformPoseByOriginIfNeeded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Pose (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)(::UnityEngine::Pose)>(
    &::UnityEngine::SpatialTracking::TrackedPoseDriver::TransformPoseByOriginIfNeeded)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2437498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(), "TransformPoseByOriginIfNeeded",
                                   std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.HasStereoCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(
    &::UnityEngine::SpatialTracking::TrackedPoseDriver::HasStereoCamera)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x24374fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(),
                                                                               "HasStereoCamera", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.PerformUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(
    &::UnityEngine::SpatialTracking::TrackedPoseDriver::PerformUpdate)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x24375b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(
    &::UnityEngine::SpatialTracking::TrackedPoseDriver::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2437678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType& UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_get_m_Device() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Device;
}
constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType const& UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_get_m_Device() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Device;
}
constexpr void UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_set_m_Device(::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Device = value;
}
constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose& UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_get_m_PoseSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PoseSource;
}
constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose const& UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_get_m_PoseSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PoseSource;
}
constexpr void UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_set_m_PoseSource(::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PoseSource = value;
}
constexpr ::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider>& UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_get_m_PoseProviderComponent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PoseProviderComponent;
}
constexpr ::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider> const& UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_get_m_PoseProviderComponent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PoseProviderComponent;
}
constexpr void UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_set_m_PoseProviderComponent(::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PoseProviderComponent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType& UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_get_m_TrackingType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackingType;
}
constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType const& UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_get_m_TrackingType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackingType;
}
constexpr void UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_set_m_TrackingType(::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TrackingType = value;
}
constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType& UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_get_m_UpdateType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateType;
}
constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType const& UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_get_m_UpdateType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateType;
}
constexpr void UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_set_m_UpdateType(::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdateType = value;
}
constexpr bool& UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_get_m_UseRelativeTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseRelativeTransform;
}
constexpr bool const& UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_get_m_UseRelativeTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseRelativeTransform;
}
constexpr void UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_set_m_UseRelativeTransform(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseRelativeTransform = value;
}
constexpr ::UnityEngine::Pose& UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_get_m_OriginPose() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OriginPose;
}
constexpr ::UnityEngine::Pose const& UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_get_m_OriginPose() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OriginPose;
}
constexpr void UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_set_m_OriginPose(::UnityEngine::Pose value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OriginPose = value;
}
inline ::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType UnityEngine::SpatialTracking::TrackedPoseDriver::get_deviceType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(),
                                                                             "get_deviceType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType, false>(this, ___internal_method);
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriver::set_deviceType(::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(), "set_deviceType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose UnityEngine::SpatialTracking::TrackedPoseDriver::get_poseSource() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(),
                                                                             "get_poseSource", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose, false>(this, ___internal_method);
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriver::set_poseSource(::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(), "set_poseSource", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::SpatialTracking::TrackedPoseDriver::SetPoseSource(::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType deviceType,
                                                                           ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose pose) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(), "SetPoseSource", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, deviceType, pose);
}
inline ::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider> UnityEngine::SpatialTracking::TrackedPoseDriver::get_poseProviderComponent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(),
                                                                             "get_poseProviderComponent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider>, false>(this, ___internal_method);
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriver::set_poseProviderComponent(::UnityEngine::Experimental::XR::Interaction::BasePoseProvider* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(), "set_poseProviderComponent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::SpatialTracking::PoseDataFlags UnityEngine::SpatialTracking::TrackedPoseDriver::GetPoseData(::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType device,
                                                                                                                  ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose poseSource,
                                                                                                                  ByRef<::UnityEngine::Pose> resultPose) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(), "GetPoseData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SpatialTracking::PoseDataFlags, false>(this, ___internal_method, device, poseSource, resultPose);
}
inline ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType UnityEngine::SpatialTracking::TrackedPoseDriver::get_trackingType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(),
                                                                             "get_trackingType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType, false>(this, ___internal_method);
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriver::set_trackingType(::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(), "set_trackingType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType UnityEngine::SpatialTracking::TrackedPoseDriver::get_updateType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(),
                                                                             "get_updateType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType, false>(this, ___internal_method);
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriver::set_updateType(::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(), "set_updateType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::SpatialTracking::TrackedPoseDriver::get_UseRelativeTransform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(),
                                                                             "get_UseRelativeTransform", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriver::set_UseRelativeTransform(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(), "set_UseRelativeTransform",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Pose UnityEngine::SpatialTracking::TrackedPoseDriver::get_originPose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(),
                                                                             "get_originPose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose, false>(this, ___internal_method);
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriver::set_originPose(::UnityEngine::Pose value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(), "set_originPose",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriver::CacheLocalPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(),
                                                                             "CacheLocalPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriver::ResetToCachedLocalPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(),
                                                                             "ResetToCachedLocalPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriver::Awake() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriver::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriver::OnEnable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriver::OnDisable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriver::FixedUpdate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriver::Update() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriver::OnBeforeRender() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriver::SetLocalTransform(::UnityEngine::Vector3 newPosition, ::UnityEngine::Quaternion newRotation,
                                                                               ::UnityEngine::SpatialTracking::PoseDataFlags poseFlags) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newPosition, newRotation, poseFlags);
}
inline ::UnityEngine::Pose UnityEngine::SpatialTracking::TrackedPoseDriver::TransformPoseByOriginIfNeeded(::UnityEngine::Pose pose) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(), "TransformPoseByOriginIfNeeded",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose, false>(this, ___internal_method, pose);
}
inline bool UnityEngine::SpatialTracking::TrackedPoseDriver::HasStereoCamera() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(),
                                                                             "HasStereoCamera", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriver::PerformUpdate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::SpatialTracking::TrackedPoseDriver* UnityEngine::SpatialTracking::TrackedPoseDriver::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::SpatialTracking::TrackedPoseDriver*>());
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriver::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriver::TrackedPoseDriver() {}
