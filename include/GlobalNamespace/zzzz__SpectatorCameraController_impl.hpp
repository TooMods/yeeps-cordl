#pragma once
#include "GlobalNamespace/zzzz__SpectatorCameraController_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SpectatorCameraController_def.hpp"
#include "GlobalNamespace/zzzz__MasterPlayer_def.hpp"
#include "GlobalNamespace/zzzz__MobileTravelAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OverrideCamera_def.hpp"
#include "GlobalNamespace/zzzz__Player_def.hpp"
#include "GlobalNamespace/zzzz__SpectatorCameraController_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "defaultFOV", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "inAnchorFOV", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "inFirstPersonFOV", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "inThirdPersonFOV", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "inOverrideCameraFOV", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "idealThirdPersonOffset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") },
// CppParam { name: "thirdPersonRotationOffset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SpectatorCameraController__FOVData::__SpectatorCameraController__FOVData(float_t defaultFOV, float_t inAnchorFOV, float_t inFirstPersonFOV, float_t inThirdPersonFOV,
                                                                                                        float_t inOverrideCameraFOV, ::UnityEngine::Vector3 idealThirdPersonOffset,
                                                                                                        ::UnityEngine::Vector3 thirdPersonRotationOffset) noexcept {
  this->defaultFOV = defaultFOV;
  this->inAnchorFOV = inAnchorFOV;
  this->inFirstPersonFOV = inFirstPersonFOV;
  this->inThirdPersonFOV = inThirdPersonFOV;
  this->inOverrideCameraFOV = inOverrideCameraFOV;
  this->idealThirdPersonOffset = idealThirdPersonOffset;
  this->thirdPersonRotationOffset = thirdPersonRotationOffset;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SpectatorCameraController__FOVData::__SpectatorCameraController__FOVData() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SpectatorCameraController__FollowPlayerMode::__SpectatorCameraController__FollowPlayerMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SpectatorCameraController__FollowPlayerMode::__SpectatorCameraController__FollowPlayerMode() {}
constexpr ::GlobalNamespace::__SpectatorCameraController__FollowPlayerMode GlobalNamespace::__SpectatorCameraController__FollowPlayerMode::orbit{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__SpectatorCameraController__FollowPlayerMode GlobalNamespace::__SpectatorCameraController__FollowPlayerMode::firstPerson{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__SpectatorCameraController__FollowPlayerMode GlobalNamespace::__SpectatorCameraController__FollowPlayerMode::thirdPerson{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::SpectatorCameraController.get_isInitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SpectatorCameraController::*)()>(
    &::GlobalNamespace::SpectatorCameraController::get_isInitialized)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1752c64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(),
                                                                               "get_isInitialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpectatorCameraController.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpectatorCameraController::*)(::UnityEngine::Camera*, bool)>(
    &::GlobalNamespace::SpectatorCameraController::Initialize)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x1752cc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(),
                                                                               "Initialize", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpectatorCameraController.OnOrientationChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpectatorCameraController::*)(bool)>(
    &::GlobalNamespace::SpectatorCameraController::OnOrientationChanged)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x1753330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(), "OnOrientationChanged",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpectatorCameraController.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpectatorCameraController::*)()>(&::GlobalNamespace::SpectatorCameraController::OnEnable)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x175360c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpectatorCameraController.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpectatorCameraController::*)()>(&::GlobalNamespace::SpectatorCameraController::OnDisable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1753638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(),
                                                                               "OnDisable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpectatorCameraController.Register
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpectatorCameraController::*)()>(&::GlobalNamespace::SpectatorCameraController::Register)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x17530b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(), "Register",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpectatorCameraController.Deregister
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpectatorCameraController::*)()>(
    &::GlobalNamespace::SpectatorCameraController::Deregister)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x1753648;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(),
                                                                               "Deregister", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpectatorCameraController.SetActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpectatorCameraController::*)(bool)>(
    &::GlobalNamespace::SpectatorCameraController::SetActive)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x1752f48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(), "SetActive",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpectatorCameraController.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpectatorCameraController::*)()>(
    &::GlobalNamespace::SpectatorCameraController::LateUpdate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1753b34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(),
                                                                               "LateUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpectatorCameraController.FixedUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpectatorCameraController::*)()>(
    &::GlobalNamespace::SpectatorCameraController::FixedUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1754ab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(),
                                                                               "FixedUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpectatorCameraController.DoUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpectatorCameraController::*)(float_t)>(
    &::GlobalNamespace::SpectatorCameraController::DoUpdate)> {
  constexpr static std::size_t size = 0xf14;
  constexpr static std::size_t addrs = 0x1753ba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(), "DoUpdate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpectatorCameraController.LockMouse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpectatorCameraController::*)()>(&::GlobalNamespace::SpectatorCameraController::LockMouse)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1755088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(),
                                                                               "LockMouse", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpectatorCameraController.UnlockMouse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpectatorCameraController::*)()>(
    &::GlobalNamespace::SpectatorCameraController::UnlockMouse)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1754ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(),
                                                                               "UnlockMouse", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpectatorCameraController.RotateUsingInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::GlobalNamespace::SpectatorCameraController::*)(
    ::UnityEngine::Quaternion, ::UnityEngine::Vector2)>(&::GlobalNamespace::SpectatorCameraController::RotateUsingInput)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x1754b74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(), "RotateUsingInput", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpectatorCameraController.CalculateVelocityToTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::SpectatorCameraController::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::SpectatorCameraController::CalculateVelocityToTarget)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1754d58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(), "CalculateVelocityToTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpectatorCameraController.TravelToAnchorRequested
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpectatorCameraController::*)(::GlobalNamespace::MobileTravelAnchor*)>(
    &::GlobalNamespace::SpectatorCameraController::TravelToAnchorRequested)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x17550c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(), "TravelToAnchorRequested", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MobileTravelAnchor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpectatorCameraController.SetCurrentAnchor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpectatorCameraController::*)(::GlobalNamespace::MobileTravelAnchor*)>(
    &::GlobalNamespace::SpectatorCameraController::SetCurrentAnchor)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1754f08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(), "SetCurrentAnchor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MobileTravelAnchor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpectatorCameraController.TravelToPointRequested
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpectatorCameraController::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::SpectatorCameraController::TravelToPointRequested)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x17551c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(), "TravelToPointRequested", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpectatorCameraController.ClearCurrentAnchor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpectatorCameraController::*)()>(
    &::GlobalNamespace::SpectatorCameraController::ClearCurrentAnchor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x17539d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(),
                                                                               "ClearCurrentAnchor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpectatorCameraController.OnRoomPositionShift
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpectatorCameraController::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::SpectatorCameraController::OnRoomPositionShift)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x1755220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(), "OnRoomPositionShift", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpectatorCameraController.OnPlayerToFollowUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpectatorCameraController::*)(::StringW)>(
    &::GlobalNamespace::SpectatorCameraController::OnPlayerToFollowUpdated)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x17539ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(), "OnPlayerToFollowUpdated",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpectatorCameraController.InitiateFollowPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpectatorCameraController::*)(::GlobalNamespace::Player*)>(
    &::GlobalNamespace::SpectatorCameraController::InitiateFollowPlayer)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x17553f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(), "InitiateFollowPlayer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Player*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpectatorCameraController.OnFollowPlayerSuccess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpectatorCameraController::*)()>(
    &::GlobalNamespace::SpectatorCameraController::OnFollowPlayerSuccess)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x17559b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(),
                                                                               "OnFollowPlayerSuccess", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpectatorCameraController.ClearFollowPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpectatorCameraController::*)()>(
    &::GlobalNamespace::SpectatorCameraController::ClearFollowPlayer)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x17557f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(),
                                                                               "ClearFollowPlayer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpectatorCameraController.SetFollowPlayerMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpectatorCameraController::*)(
    ::GlobalNamespace::__SpectatorCameraController__FollowPlayerMode)>(&::GlobalNamespace::SpectatorCameraController::SetFollowPlayerMode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1754ae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(), "SetFollowPlayerMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SpectatorCameraController__FollowPlayerMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpectatorCameraController.SetActiveOverrideCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpectatorCameraController::*)(::GlobalNamespace::OverrideCamera*)>(
    &::GlobalNamespace::SpectatorCameraController::SetActiveOverrideCamera)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1753934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(), "SetActiveOverrideCamera", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OverrideCamera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpectatorCameraController.RefreshFollowPlayerAvatarPortion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpectatorCameraController::*)()>(
    &::GlobalNamespace::SpectatorCameraController::RefreshFollowPlayerAvatarPortion)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x17558f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(), "RefreshFollowPlayerAvatarPortion",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpectatorCameraController.RefreshTargetFOV
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpectatorCameraController::*)()>(
    &::GlobalNamespace::SpectatorCameraController::RefreshTargetFOV)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x17533dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(),
                                                                               "RefreshTargetFOV", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpectatorCameraController.RefreshLocalPlayerHidden
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpectatorCameraController::*)()>(
    &::GlobalNamespace::SpectatorCameraController::RefreshLocalPlayerHidden)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x17550c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(),
                                                                               "RefreshLocalPlayerHidden", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpectatorCameraController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpectatorCameraController::*)()>(&::GlobalNamespace::SpectatorCameraController::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1755a4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_linkedFollowInThirdPerson() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linkedFollowInThirdPerson;
}
constexpr bool const& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_linkedFollowInThirdPerson() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linkedFollowInThirdPerson;
}
constexpr void GlobalNamespace::SpectatorCameraController::__cordl_internal_set_linkedFollowInThirdPerson(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___linkedFollowInThirdPerson = value;
}
constexpr float_t& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_initialFOV() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialFOV;
}
constexpr float_t const& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_initialFOV() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialFOV;
}
constexpr void GlobalNamespace::SpectatorCameraController::__cordl_internal_set_initialFOV(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___initialFOV = value;
}
constexpr ::GlobalNamespace::__SpectatorCameraController__FOVData& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_portraitFOVData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___portraitFOVData;
}
constexpr ::GlobalNamespace::__SpectatorCameraController__FOVData const& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_portraitFOVData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___portraitFOVData;
}
constexpr void GlobalNamespace::SpectatorCameraController::__cordl_internal_set_portraitFOVData(::GlobalNamespace::__SpectatorCameraController__FOVData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___portraitFOVData = value;
}
constexpr ::GlobalNamespace::__SpectatorCameraController__FOVData& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_landscapeFOVData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___landscapeFOVData;
}
constexpr ::GlobalNamespace::__SpectatorCameraController__FOVData const& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_landscapeFOVData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___landscapeFOVData;
}
constexpr void GlobalNamespace::SpectatorCameraController::__cordl_internal_set_landscapeFOVData(::GlobalNamespace::__SpectatorCameraController__FOVData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___landscapeFOVData = value;
}
constexpr float_t& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_targetFOV() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetFOV;
}
constexpr float_t const& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_targetFOV() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetFOV;
}
constexpr void GlobalNamespace::SpectatorCameraController::__cordl_internal_set_targetFOV(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___targetFOV = value;
}
constexpr float_t& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_curRotationSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curRotationSpeed;
}
constexpr float_t const& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_curRotationSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curRotationSpeed;
}
constexpr void GlobalNamespace::SpectatorCameraController::__cordl_internal_set_curRotationSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curRotationSpeed = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_targetRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_targetRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetRotation;
}
constexpr void GlobalNamespace::SpectatorCameraController::__cordl_internal_set_targetRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___targetRotation = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_rb() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rb;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_rb() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rb;
}
constexpr void GlobalNamespace::SpectatorCameraController::__cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rb)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MasterPlayer>& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_masterPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___masterPlayer;
}
constexpr ::UnityW<::GlobalNamespace::MasterPlayer> const& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_masterPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___masterPlayer;
}
constexpr void GlobalNamespace::SpectatorCameraController::__cordl_internal_set_masterPlayer(::UnityW<::GlobalNamespace::MasterPlayer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___masterPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_mainCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_mainCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainCamera;
}
constexpr void GlobalNamespace::SpectatorCameraController::__cordl_internal_set_mainCamera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mainCamera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MobileTravelAnchor>& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_currentAnchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentAnchor;
}
constexpr ::UnityW<::GlobalNamespace::MobileTravelAnchor> const& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_currentAnchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentAnchor;
}
constexpr void GlobalNamespace::SpectatorCameraController::__cordl_internal_set_currentAnchor(::UnityW<::GlobalNamespace::MobileTravelAnchor> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___currentAnchor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_isTravelingToPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isTravelingToPoint;
}
constexpr bool const& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_isTravelingToPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isTravelingToPoint;
}
constexpr void GlobalNamespace::SpectatorCameraController::__cordl_internal_set_isTravelingToPoint(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isTravelingToPoint = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_currentAnchorTargetPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentAnchorTargetPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_currentAnchorTargetPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentAnchorTargetPos;
}
constexpr void GlobalNamespace::SpectatorCameraController::__cordl_internal_set_currentAnchorTargetPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentAnchorTargetPos = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_currentAnchorTargetRot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentAnchorTargetRot;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_currentAnchorTargetRot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentAnchorTargetRot;
}
constexpr void GlobalNamespace::SpectatorCameraController::__cordl_internal_set_currentAnchorTargetRot(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentAnchorTargetRot = value;
}
constexpr float_t& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_nextAllowedMagnitizeTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextAllowedMagnitizeTime;
}
constexpr float_t const& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_nextAllowedMagnitizeTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextAllowedMagnitizeTime;
}
constexpr void GlobalNamespace::SpectatorCameraController::__cordl_internal_set_nextAllowedMagnitizeTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextAllowedMagnitizeTime = value;
}
constexpr float_t& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_nextAllowedResetRotationToAnchorTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextAllowedResetRotationToAnchorTime;
}
constexpr float_t const& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_nextAllowedResetRotationToAnchorTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextAllowedResetRotationToAnchorTime;
}
constexpr void GlobalNamespace::SpectatorCameraController::__cordl_internal_set_nextAllowedResetRotationToAnchorTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextAllowedResetRotationToAnchorTime = value;
}
constexpr float_t& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_curFollowPlayerDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curFollowPlayerDistance;
}
constexpr float_t const& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_curFollowPlayerDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curFollowPlayerDistance;
}
constexpr void GlobalNamespace::SpectatorCameraController::__cordl_internal_set_curFollowPlayerDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curFollowPlayerDistance = value;
}
constexpr ::UnityW<::GlobalNamespace::Player>& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_followPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___followPlayer;
}
constexpr ::UnityW<::GlobalNamespace::Player> const& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_followPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___followPlayer;
}
constexpr void GlobalNamespace::SpectatorCameraController::__cordl_internal_set_followPlayer(::UnityW<::GlobalNamespace::Player> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___followPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__SpectatorCameraController__FollowPlayerMode& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_followPlayerMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___followPlayerMode;
}
constexpr ::GlobalNamespace::__SpectatorCameraController__FollowPlayerMode const& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_followPlayerMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___followPlayerMode;
}
constexpr void GlobalNamespace::SpectatorCameraController::__cordl_internal_set_followPlayerMode(::GlobalNamespace::__SpectatorCameraController__FollowPlayerMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___followPlayerMode = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_idealThirdPersonOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___idealThirdPersonOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_idealThirdPersonOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___idealThirdPersonOffset;
}
constexpr void GlobalNamespace::SpectatorCameraController::__cordl_internal_set_idealThirdPersonOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___idealThirdPersonOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_thirdPersonRotationOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thirdPersonRotationOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_thirdPersonRotationOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thirdPersonRotationOffset;
}
constexpr void GlobalNamespace::SpectatorCameraController::__cordl_internal_set_thirdPersonRotationOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___thirdPersonRotationOffset = value;
}
constexpr float_t& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_followPlayerModeSwitchTimer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___followPlayerModeSwitchTimer;
}
constexpr float_t const& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_followPlayerModeSwitchTimer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___followPlayerModeSwitchTimer;
}
constexpr void GlobalNamespace::SpectatorCameraController::__cordl_internal_set_followPlayerModeSwitchTimer(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___followPlayerModeSwitchTimer = value;
}
constexpr ::UnityW<::GlobalNamespace::OverrideCamera>& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_activeOverrideCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeOverrideCamera;
}
constexpr ::UnityW<::GlobalNamespace::OverrideCamera> const& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_activeOverrideCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeOverrideCamera;
}
constexpr void GlobalNamespace::SpectatorCameraController::__cordl_internal_set_activeOverrideCamera(::UnityW<::GlobalNamespace::OverrideCamera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___activeOverrideCamera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_isRegistered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRegistered;
}
constexpr bool const& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_isRegistered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRegistered;
}
constexpr void GlobalNamespace::SpectatorCameraController::__cordl_internal_set_isRegistered(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isRegistered = value;
}
constexpr bool& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_useMobilePhoneControls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useMobilePhoneControls;
}
constexpr bool const& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_useMobilePhoneControls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useMobilePhoneControls;
}
constexpr void GlobalNamespace::SpectatorCameraController::__cordl_internal_set_useMobilePhoneControls(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useMobilePhoneControls = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_fixedUpdateTargetVelocity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fixedUpdateTargetVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_fixedUpdateTargetVelocity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fixedUpdateTargetVelocity;
}
constexpr void GlobalNamespace::SpectatorCameraController::__cordl_internal_set_fixedUpdateTargetVelocity(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fixedUpdateTargetVelocity = value;
}
constexpr bool& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_isMouseLocked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isMouseLocked;
}
constexpr bool const& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_isMouseLocked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isMouseLocked;
}
constexpr void GlobalNamespace::SpectatorCameraController::__cordl_internal_set_isMouseLocked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isMouseLocked = value;
}
constexpr ::StringW& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_attemptToFollowUserID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attemptToFollowUserID;
}
constexpr ::StringW const& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_attemptToFollowUserID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attemptToFollowUserID;
}
constexpr void GlobalNamespace::SpectatorCameraController::__cordl_internal_set_attemptToFollowUserID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attemptToFollowUserID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_nextAttemptToFollowTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextAttemptToFollowTime;
}
constexpr float_t const& GlobalNamespace::SpectatorCameraController::__cordl_internal_get_nextAttemptToFollowTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextAttemptToFollowTime;
}
constexpr void GlobalNamespace::SpectatorCameraController::__cordl_internal_set_nextAttemptToFollowTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextAttemptToFollowTime = value;
}
inline bool GlobalNamespace::SpectatorCameraController::get_isInitialized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(),
                                                                             "get_isInitialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::SpectatorCameraController::Initialize(::UnityEngine::Camera* mainCamera, bool rotateToFaceCenter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mainCamera, rotateToFaceCenter);
}
inline void GlobalNamespace::SpectatorCameraController::OnOrientationChanged(bool isLandscape) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(), "OnOrientationChanged",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isLandscape);
}
inline void GlobalNamespace::SpectatorCameraController::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SpectatorCameraController::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SpectatorCameraController::Register() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(), "Register",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SpectatorCameraController::Deregister() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(), "Deregister",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SpectatorCameraController::SetActive(bool newActive) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(), "SetActive",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newActive);
}
inline void GlobalNamespace::SpectatorCameraController::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(), "LateUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SpectatorCameraController::FixedUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(),
                                                                             "FixedUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SpectatorCameraController::DoUpdate(float_t deltaTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(), "DoUpdate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::SpectatorCameraController::LockMouse() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(), "LockMouse",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SpectatorCameraController::UnlockMouse() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(),
                                                                             "UnlockMouse", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion GlobalNamespace::SpectatorCameraController::RotateUsingInput(::UnityEngine::Quaternion currentRotation, ::UnityEngine::Vector2 lookInput) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(), "RotateUsingInput", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method, currentRotation, lookInput);
}
inline ::UnityEngine::Vector3 GlobalNamespace::SpectatorCameraController::CalculateVelocityToTarget(::UnityEngine::Vector3 targetPosition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(), "CalculateVelocityToTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, targetPosition);
}
inline void GlobalNamespace::SpectatorCameraController::TravelToAnchorRequested(::GlobalNamespace::MobileTravelAnchor* anchor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(), "TravelToAnchorRequested", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MobileTravelAnchor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, anchor);
}
inline void GlobalNamespace::SpectatorCameraController::SetCurrentAnchor(::GlobalNamespace::MobileTravelAnchor* newAnchor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(), "SetCurrentAnchor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MobileTravelAnchor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newAnchor);
}
inline void GlobalNamespace::SpectatorCameraController::TravelToPointRequested(::UnityEngine::Vector3 point) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(), "TravelToPointRequested", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, point);
}
inline void GlobalNamespace::SpectatorCameraController::ClearCurrentAnchor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(),
                                                                             "ClearCurrentAnchor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SpectatorCameraController::OnRoomPositionShift(::UnityEngine::Vector3 moveOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(), "OnRoomPositionShift", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, moveOffset);
}
inline void GlobalNamespace::SpectatorCameraController::OnPlayerToFollowUpdated(::StringW newUserID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(), "OnPlayerToFollowUpdated",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newUserID);
}
inline void GlobalNamespace::SpectatorCameraController::InitiateFollowPlayer(::GlobalNamespace::Player* player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(), "InitiateFollowPlayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Player*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
inline void GlobalNamespace::SpectatorCameraController::OnFollowPlayerSuccess() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(),
                                                                             "OnFollowPlayerSuccess", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SpectatorCameraController::ClearFollowPlayer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(),
                                                                             "ClearFollowPlayer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SpectatorCameraController::SetFollowPlayerMode(::GlobalNamespace::__SpectatorCameraController__FollowPlayerMode newFollowPlayerMode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(), "SetFollowPlayerMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SpectatorCameraController__FollowPlayerMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newFollowPlayerMode);
}
inline void GlobalNamespace::SpectatorCameraController::SetActiveOverrideCamera(::GlobalNamespace::OverrideCamera* newActiveOverrideCamera) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(), "SetActiveOverrideCamera", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OverrideCamera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newActiveOverrideCamera);
}
inline void GlobalNamespace::SpectatorCameraController::RefreshFollowPlayerAvatarPortion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(),
                                                                             "RefreshFollowPlayerAvatarPortion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SpectatorCameraController::RefreshTargetFOV() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(),
                                                                             "RefreshTargetFOV", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SpectatorCameraController::RefreshLocalPlayerHidden() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(),
                                                                             "RefreshLocalPlayerHidden", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SpectatorCameraController* GlobalNamespace::SpectatorCameraController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SpectatorCameraController*>());
}
inline void GlobalNamespace::SpectatorCameraController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectatorCameraController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpectatorCameraController::SpectatorCameraController() {}
