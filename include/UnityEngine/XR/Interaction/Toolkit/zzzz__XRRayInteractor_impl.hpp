#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseControllerInteractor_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRRayInteractor_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__PhysicsScene_impl.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRRayInteractor_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__IUIInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__RegisteredUIInteractorCache_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TrackedDeviceModel_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ILineRenderable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRHoverInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRSelectInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectExitEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractableSnapVolume_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionManager_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionUpdateOrder_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRRayInteractor_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__RaycastHitComparer.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__RaycastHitComparer::*)(
    ::UnityEngine::RaycastHit, ::UnityEngine::RaycastHit)>(&::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__RaycastHitComparer::Compare)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2cfb5ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__RaycastHitComparer*>::get(),
                                                 "Compare", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RaycastHit>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RaycastHit>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__RaycastHitComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__RaycastHitComparer::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__RaycastHitComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cfb52c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__RaycastHitComparer*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>"
constexpr UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__RaycastHitComparer::operator ::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>*() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>"
constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>*
UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__RaycastHitComparer::i___System__Collections__Generic__IComparer_1___UnityEngine__RaycastHit_() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>*>(static_cast<void*>(this));
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__RaycastHitComparer::Compare(::UnityEngine::RaycastHit a, ::UnityEngine::RaycastHit b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__RaycastHitComparer*>::get(),
                                               "Compare", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RaycastHit>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RaycastHit>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, a, b);
}
inline ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__RaycastHitComparer* UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__RaycastHitComparer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__RaycastHitComparer*>());
}
inline void UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__RaycastHitComparer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__RaycastHitComparer*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__RaycastHitComparer::__XRRayInteractor__RaycastHitComparer() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__LineType::__XRRayInteractor__LineType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__LineType::__XRRayInteractor__LineType() {}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__LineType UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__LineType::StraightLine{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__LineType UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__LineType::ProjectileCurve{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__LineType UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__LineType::BezierCurve{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__QuerySnapVolumeInteraction::__XRRayInteractor__QuerySnapVolumeInteraction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__QuerySnapVolumeInteraction::__XRRayInteractor__QuerySnapVolumeInteraction() {}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__QuerySnapVolumeInteraction UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__QuerySnapVolumeInteraction::Ignore{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__QuerySnapVolumeInteraction UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__QuerySnapVolumeInteraction::Collide{
  static_cast<int32_t>(0x1)
};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__HitDetectionType::__XRRayInteractor__HitDetectionType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__HitDetectionType::__XRRayInteractor__HitDetectionType() {}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__HitDetectionType UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__HitDetectionType::Raycast{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__HitDetectionType UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__HitDetectionType::SphereCast{ static_cast<int32_t>(
    0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__AnchorRotationMode::__XRRayInteractor__AnchorRotationMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__AnchorRotationMode::__XRRayInteractor__AnchorRotationMode() {}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__AnchorRotationMode UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__AnchorRotationMode::RotateOverTime{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__AnchorRotationMode UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__AnchorRotationMode::MatchDirection{
  static_cast<int32_t>(0x1)
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint.get_position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint::get_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2cfb6ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint>::get(), "get_position",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint.set_position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint::set_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2cfb6f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint>::get(), "set_position",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint.get_parameter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint::get_parameter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cfb704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint>::get(),
                                                 "get_parameter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint.set_parameter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint::set_parameter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cfb70c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint>::get(), "set_parameter",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint::get_position() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint>::get(), "get_position",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint::set_position(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint>::get(), "set_position", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint::get_parameter() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint>::get(), "get_parameter",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint::set_parameter(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint>::get(), "set_parameter",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_position_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "_parameter_k__BackingField", ty: "float_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint::__XRRayInteractor__SamplePoint(::UnityEngine::Vector3 _position_k__BackingField,
                                                                                                                  float_t _parameter_k__BackingField) noexcept {
  this->_position_k__BackingField = _position_k__BackingField;
  this->_parameter_k__BackingField = _parameter_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint::__XRRayInteractor__SamplePoint() {}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cfb778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c._CheckCollidersBetweenPoints_b__197_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume*)>(&::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c::_CheckCollidersBetweenPoints_b__197_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2cfb780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c*>::get(), "<CheckCollidersBetweenPoints>b__197_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c._CheckCollidersBetweenPoints_b__197_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume*)>(&::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c::_CheckCollidersBetweenPoints_b__197_1)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2cfb7dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c*>::get(), "<CheckCollidersBetweenPoints>b__197_1",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c::setStaticF___9(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c*>::get>(
      std::forward<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c*>(value));
}
inline ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c* UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c*>::get>();
}
inline void
UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c::setStaticF___9__197_0(::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume>, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume>, bool>*, "<>9__197_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c*>::get>(
      std::forward<::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume>, bool>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume>, bool>* UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c::getStaticF___9__197_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume>, bool>*, "<>9__197_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c*>::get>();
}
inline void
UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c::setStaticF___9__197_1(::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume>, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume>, bool>*, "<>9__197_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c*>::get>(
      std::forward<::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume>, bool>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume>, bool>* UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c::getStaticF___9__197_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume>, bool>*, "<>9__197_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c*>::get>();
}
inline ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c* UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c*>());
}
inline void UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c::_CheckCollidersBetweenPoints_b__197_0(::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume* snapVolume) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c*>::get(), "<CheckCollidersBetweenPoints>b__197_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, snapVolume);
}
inline bool UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c::_CheckCollidersBetweenPoints_b__197_1(::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume* snapVolume) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c*>::get(), "<CheckCollidersBetweenPoints>b__197_1",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, snapVolume);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c::__XRRayInteractor____c() {}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_lineType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__LineType (
    ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_lineType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6a5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "get_lineType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.set_lineType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(
    ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__LineType)>(&::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_lineType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6a64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_lineType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__LineType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_blendVisualLinePoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_blendVisualLinePoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6a6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "get_blendVisualLinePoints", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.set_blendVisualLinePoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_blendVisualLinePoints)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2cf6a74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_blendVisualLinePoints",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_maxRaycastDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_maxRaycastDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6a80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "get_maxRaycastDistance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.set_maxRaycastDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_maxRaycastDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_maxRaycastDistance",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_rayOriginTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_rayOriginTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6a90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "get_rayOriginTransform", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.set_rayOriginTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(::UnityEngine::Transform*)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_rayOriginTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6a98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_rayOriginTransform", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_referenceFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_referenceFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6aa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "get_referenceFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.set_referenceFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(::UnityEngine::Transform*)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_referenceFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6aa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_referenceFrame", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_velocity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_velocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6ab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "get_velocity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.set_velocity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_velocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_velocity",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_acceleration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_acceleration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6ac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "get_acceleration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.set_acceleration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_acceleration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6ac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_acceleration",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_additionalGroundHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_additionalGroundHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6ad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "get_additionalGroundHeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.set_additionalGroundHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_additionalGroundHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6ad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_additionalGroundHeight",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_additionalFlightTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_additionalFlightTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6ae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "get_additionalFlightTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.set_additionalFlightTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_additionalFlightTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6ae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_additionalFlightTime",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_endPointDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_endPointDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6af0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "get_endPointDistance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.set_endPointDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_endPointDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6af8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_endPointDistance",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_endPointHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_endPointHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6b00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "get_endPointHeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.set_endPointHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_endPointHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6b08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_endPointHeight",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_controlPointDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_controlPointDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6b10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "get_controlPointDistance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.set_controlPointDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_controlPointDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_controlPointDistance",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_controlPointHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_controlPointHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6b20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "get_controlPointHeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.set_controlPointHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_controlPointHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6b28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_controlPointHeight",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_sampleFrequency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_sampleFrequency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6b30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "get_sampleFrequency", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.set_sampleFrequency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(int32_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_sampleFrequency)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2cf6b38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_sampleFrequency",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_hitDetectionType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__HitDetectionType (
    ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_hitDetectionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6bb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "get_hitDetectionType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.set_hitDetectionType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(
    ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__HitDetectionType)>(&::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_hitDetectionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6bbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_hitDetectionType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__HitDetectionType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_sphereCastRadius
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_sphereCastRadius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6bc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "get_sphereCastRadius", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.set_sphereCastRadius
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_sphereCastRadius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6bcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_sphereCastRadius",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_raycastMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_raycastMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6bd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "get_raycastMask", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.set_raycastMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(::UnityEngine::LayerMask)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_raycastMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6bdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_raycastMask", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_raycastTriggerInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::QueryTriggerInteraction (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_raycastTriggerInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6be4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "get_raycastTriggerInteraction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.set_raycastTriggerInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(::UnityEngine::QueryTriggerInteraction)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_raycastTriggerInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_raycastTriggerInteraction",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_raycastSnapVolumeInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__QuerySnapVolumeInteraction (
    ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_raycastSnapVolumeInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6bf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                 "get_raycastSnapVolumeInteraction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.set_raycastSnapVolumeInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(
    ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__QuerySnapVolumeInteraction)>(&::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_raycastSnapVolumeInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6bfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_raycastSnapVolumeInteraction",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__QuerySnapVolumeInteraction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_hitClosestOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_hitClosestOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6c04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "get_hitClosestOnly", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.set_hitClosestOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_hitClosestOnly)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2cf6c0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_hitClosestOnly",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_hoverToSelect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_hoverToSelect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6c18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "get_hoverToSelect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.set_hoverToSelect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_hoverToSelect)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2cf6c20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_hoverToSelect",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_hoverTimeToSelect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_hoverTimeToSelect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "get_hoverTimeToSelect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.set_hoverTimeToSelect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_hoverTimeToSelect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6c34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_hoverTimeToSelect",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_autoDeselect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_autoDeselect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "get_autoDeselect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.set_autoDeselect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_autoDeselect)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2cf6c44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_autoDeselect",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_timeToAutoDeselect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_timeToAutoDeselect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6c50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "get_timeToAutoDeselect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.set_timeToAutoDeselect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_timeToAutoDeselect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6c58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_timeToAutoDeselect",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_enableUIInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_enableUIInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6c60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "get_enableUIInteraction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.set_enableUIInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_enableUIInteraction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2cf6c68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_enableUIInteraction",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_allowAnchorControl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_allowAnchorControl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6c98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "get_allowAnchorControl", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.set_allowAnchorControl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_allowAnchorControl)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2cf6ca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_allowAnchorControl",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_useForceGrab
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_useForceGrab)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6cac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "get_useForceGrab", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.set_useForceGrab
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_useForceGrab)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2cf6cb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_useForceGrab",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_rotateSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_rotateSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6cc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "get_rotateSpeed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.set_rotateSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_rotateSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6cc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_rotateSpeed",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_translateSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_translateSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6cd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "get_translateSpeed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.set_translateSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_translateSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6cd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_translateSpeed",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_anchorRotateReferenceFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_anchorRotateReferenceFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6ce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "get_anchorRotateReferenceFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.set_anchorRotateReferenceFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(::UnityEngine::Transform*)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_anchorRotateReferenceFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6ce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_anchorRotateReferenceFrame",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_anchorRotationMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__AnchorRotationMode (
    ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_anchorRotationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6cf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "get_anchorRotationMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.set_anchorRotationMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(
    ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__AnchorRotationMode)>(&::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_anchorRotationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf6cf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_anchorRotationMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__AnchorRotationMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_angle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_angle)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x2cf6d00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "get_angle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_currentNearestValidTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* (
    ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_currentNearestValidTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf71ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "get_currentNearestValidTarget", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.set_currentNearestValidTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_currentNearestValidTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf71f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_currentNearestValidTarget",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_effectiveRayOrigin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_effectiveRayOrigin)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2cf716c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "get_effectiveRayOrigin", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_closestAnyHitIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_closestAnyHitIndex)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2cf71fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "get_closestAnyHitIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.OnValidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::OnValidate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2cf7228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "OnValidate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::Awake)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2cef53c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), 51));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::OnEnable)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cf77a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), 52));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::OnDisable)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2cf77e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), 53));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.OnDrawGizmosSelected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x2cf785c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), 107));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.DrawQuadraticBezierGizmo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::DrawQuadraticBezierGizmo)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x2cf7db0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "DrawQuadraticBezierGizmo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.FindReferenceFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::FindReferenceFrame)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2cf73e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "FindReferenceFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.CreateRayOrigin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::CreateRayOrigin)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x2cf7550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "CreateRayOrigin", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.IsOverUIGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::IsOverUIGameObject)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2cf7fbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "IsOverUIGameObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.GetLinePoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(
    ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>, ByRef<int32_t>)>(&::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::GetLinePoints)> {
  constexpr static std::size_t size = 0x598;
  constexpr static std::size_t addrs = 0x2cf7fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "GetLinePoints", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.EnsureCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>, int32_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::EnsureCapacity)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2cf8574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "EnsureCapacity", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.TryGetHitInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(
    ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<int32_t>, ByRef<bool>)>(&::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::TryGetHitInfo)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x2ceffe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "TryGetHitInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.UpdateUIModel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(
    ByRef<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>)>(&::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::UpdateUIModel)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x2cf8ff4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), 108));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.TryGetUIModel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(
    ByRef<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>)>(&::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::TryGetUIModel)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2cf9284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "TryGetUIModel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.TryGetCurrent3DRaycastHit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(ByRef<::UnityEngine::RaycastHit>)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::TryGetCurrent3DRaycastHit)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2cf7d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "TryGetCurrent3DRaycastHit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::RaycastHit>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.TryGetCurrent3DRaycastHit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(ByRef<::UnityEngine::RaycastHit>, ByRef<int32_t>)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::TryGetCurrent3DRaycastHit)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2cf92a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "TryGetCurrent3DRaycastHit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::RaycastHit>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.TryGetCurrentUIRaycastResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(
    ByRef<::UnityEngine::EventSystems::RaycastResult>)>(&::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::TryGetCurrentUIRaycastResult)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2cf7d94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "TryGetCurrentUIRaycastResult",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::EventSystems::RaycastResult>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.TryGetCurrentUIRaycastResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(
    ByRef<::UnityEngine::EventSystems::RaycastResult>, ByRef<int32_t>)>(&::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::TryGetCurrentUIRaycastResult)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2cf930c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                 "TryGetCurrentUIRaycastResult", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::EventSystems::RaycastResult>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.TryGetCurrentRaycast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(
    ByRef<::System::Nullable_1<::UnityEngine::RaycastHit>>, ByRef<int32_t>, ByRef<::System::Nullable_1<::UnityEngine::EventSystems::RaycastResult>>, ByRef<int32_t>, ByRef<bool>)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::TryGetCurrentRaycast)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x2cf8e14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "TryGetCurrentRaycast", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Nullable_1<::UnityEngine::RaycastHit>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Nullable_1<::UnityEngine::EventSystems::RaycastResult>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.UpdateBezierControlPoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::UpdateBezierControlPoints)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x2cf93d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "UpdateBezierControlPoints", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.SampleQuadraticBezierPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::SampleQuadraticBezierPoint)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2cf95c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "SampleQuadraticBezierPoint", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.SampleCubicBezierPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::SampleCubicBezierPoint)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2cf8d7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "SampleCubicBezierPoint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.ElevateQuadraticToCubicBezier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ByRef<::UnityEngine::Vector3>,
                                                                                           ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::ElevateQuadraticToCubicBezier)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2cf8cfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "ElevateQuadraticToCubicBezier",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.SampleProjectilePoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::SampleProjectilePoint)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2cf9628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "SampleProjectilePoint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.CalculateProjectileParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<float_t>)>(
        &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::CalculateProjectileParameters)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x2cf9674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                 "CalculateProjectileParameters", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.TryRead2DAxis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::InputAction*, ByRef<::UnityEngine::Vector2>)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::TryRead2DAxis)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2cf9a68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "TryRead2DAxis", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.RotateAnchor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(::UnityEngine::Transform*, float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::RotateAnchor)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2cf9ad0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), 109));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.RotateAnchor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(
    ::UnityEngine::Transform*, ::UnityEngine::Vector2, ::UnityEngine::Quaternion)>(&::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::RotateAnchor)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2cf9c54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), 110));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.TranslateAnchor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(
    ::UnityEngine::Transform*, ::UnityEngine::Transform*, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::TranslateAnchor)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2cf9e10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), 111));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.PreprocessInteractor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(
    ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::PreprocessInteractor)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x2cef858;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), 67));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.ProcessInteractor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(
    ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::ProcessInteractor)> {
  constexpr static std::size_t size = 0x634;
  constexpr static std::size_t addrs = 0x2cfa0c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), 68));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.GetValidTargets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::GetValidTargets)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x2cfa6f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), 57));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.CreateSamplePointsListsIfNecessary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::CreateSamplePointsListsIfNecessary)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2cf72a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                 "CreateSamplePointsListsIfNecessary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.UpdateSamplePointsIfNecessary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::UpdateSamplePointsIfNecessary)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2cf9238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "UpdateSamplePointsIfNecessary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.UpdateSamplePoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(
    int32_t, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint>*)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::UpdateSamplePoints)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x2cf85dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "UpdateSamplePoints", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.UpdateRaycastHits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::UpdateRaycastHits)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2cf9fac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "UpdateRaycastHits", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.CheckCollidersBetweenPoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::CheckCollidersBetweenPoints)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x2cfaa9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                 "CheckCollidersBetweenPoints", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.FilterTriggerColliders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*>, int32_t,
    ::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume>, bool>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::FilterTriggerColliders)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2cfaf1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "FilterTriggerColliders", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume>, bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.UpdateUIHitIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::UpdateUIHitIndex)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2cfa094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "UpdateUIHitIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.CreateBezierCurve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint>*, int32_t, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::CreateBezierCurve)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x2cf8a08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "CreateBezierCurve", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_isSelectActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_isSelectActive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2cfb20c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), 59));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.CanHover
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::CanHover)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cfb22c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), 64));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.CanSelect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::CanSelect)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2cfb268;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), 65));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.GetHoverTimeToSelect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::GetHoverTimeToSelect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cfb300;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), 112));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.GetTimeToAutoDeselect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::GetTimeToAutoDeselect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cfb308;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), 113));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.OnSelectEntering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(
    ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::OnSelectEntering)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2cfb310;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), 75));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.OnSelectExiting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(
    ::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::OnSelectExiting)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cfb3ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), 77));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.RestoreAttachTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::RestoreAttachTransform)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2cfb430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "RestoreAttachTransform", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.SanitizeSampleFrequency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::SanitizeSampleFrequency)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2cf6ba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "SanitizeSampleFrequency",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_Velocity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_Velocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cfb4a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "get_Velocity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.set_Velocity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_Velocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cfb4ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_Velocity",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_Acceleration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_Acceleration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cfb4b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "get_Acceleration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.set_Acceleration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_Acceleration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cfb4bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_Acceleration",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_AdditionalFlightTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_AdditionalFlightTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cfb4c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "get_AdditionalFlightTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.set_AdditionalFlightTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_AdditionalFlightTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cfb4cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_AdditionalFlightTime",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_Angle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_Angle)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2cfb4d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "get_Angle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.get_originalAttachTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_originalAttachTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cfb4d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               "get_originalAttachTransform", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.set_originalAttachTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(::UnityEngine::Transform*)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_originalAttachTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cfb4e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_originalAttachTransform",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.GetLinePoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(
    ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>, ByRef<int32_t>, int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::GetLinePoints)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2cfb4e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "GetLinePoints", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.TryGetHitInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(
    ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<int32_t>, ByRef<bool>, int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::TryGetHitInfo)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2cfb4ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "TryGetHitInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.GetCurrentRaycastHit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(ByRef<::UnityEngine::RaycastHit>)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::GetCurrentRaycastHit)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2cfb4f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "GetCurrentRaycastHit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::RaycastHit>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.CanHover
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::CanHover)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2cfb50c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), 91));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor.CanSelect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::CanSelect)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2cfb51c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), 92));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::_ctor)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x2cf0640;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::ILineRenderable"
constexpr UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::operator ::UnityEngine::XR::Interaction::Toolkit::ILineRenderable*() noexcept {
  return static_cast<::UnityEngine::XR::Interaction::Toolkit::ILineRenderable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::ILineRenderable"
constexpr ::UnityEngine::XR::Interaction::Toolkit::ILineRenderable* UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::i___UnityEngine__XR__Interaction__Toolkit__ILineRenderable() noexcept {
  return static_cast<::UnityEngine::XR::Interaction::Toolkit::ILineRenderable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor"
constexpr UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::operator ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*() noexcept {
  return static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::i___UnityEngine__XR__Interaction__Toolkit__UI__IUIInteractor() noexcept {
  return static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__LineType& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_LineType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LineType;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__LineType const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_LineType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LineType;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_LineType(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__LineType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LineType = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_BlendVisualLinePoints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlendVisualLinePoints;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_BlendVisualLinePoints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlendVisualLinePoints;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_BlendVisualLinePoints(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BlendVisualLinePoints = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_MaxRaycastDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxRaycastDistance;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_MaxRaycastDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxRaycastDistance;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_MaxRaycastDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxRaycastDistance = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_RayOriginTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RayOriginTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_RayOriginTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RayOriginTransform;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_RayOriginTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RayOriginTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_ReferenceFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReferenceFrame;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_ReferenceFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReferenceFrame;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_ReferenceFrame(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ReferenceFrame)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_Velocity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Velocity;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_Velocity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Velocity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_Velocity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Velocity = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_Acceleration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Acceleration;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_Acceleration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Acceleration;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_Acceleration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Acceleration = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_AdditionalGroundHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalGroundHeight;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_AdditionalGroundHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalGroundHeight;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_AdditionalGroundHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AdditionalGroundHeight = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_AdditionalFlightTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalFlightTime;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_AdditionalFlightTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalFlightTime;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_AdditionalFlightTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AdditionalFlightTime = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_EndPointDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EndPointDistance;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_EndPointDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EndPointDistance;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_EndPointDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EndPointDistance = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_EndPointHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EndPointHeight;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_EndPointHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EndPointHeight;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_EndPointHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EndPointHeight = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_ControlPointDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ControlPointDistance;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_ControlPointDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ControlPointDistance;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_ControlPointDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ControlPointDistance = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_ControlPointHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ControlPointHeight;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_ControlPointHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ControlPointHeight;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_ControlPointHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ControlPointHeight = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_SampleFrequency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SampleFrequency;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_SampleFrequency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SampleFrequency;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_SampleFrequency(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SampleFrequency = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__HitDetectionType& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_HitDetectionType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HitDetectionType;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__HitDetectionType const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_HitDetectionType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HitDetectionType;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_HitDetectionType(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__HitDetectionType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HitDetectionType = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_SphereCastRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SphereCastRadius;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_SphereCastRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SphereCastRadius;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_SphereCastRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SphereCastRadius = value;
}
constexpr ::UnityEngine::LayerMask& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_RaycastMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastMask;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_RaycastMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastMask;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_RaycastMask(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RaycastMask = value;
}
constexpr ::UnityEngine::QueryTriggerInteraction& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_RaycastTriggerInteraction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastTriggerInteraction;
}
constexpr ::UnityEngine::QueryTriggerInteraction const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_RaycastTriggerInteraction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastTriggerInteraction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_RaycastTriggerInteraction(::UnityEngine::QueryTriggerInteraction value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RaycastTriggerInteraction = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__QuerySnapVolumeInteraction&
UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_RaycastSnapVolumeInteraction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastSnapVolumeInteraction;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__QuerySnapVolumeInteraction const&
UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_RaycastSnapVolumeInteraction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastSnapVolumeInteraction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_RaycastSnapVolumeInteraction(
    ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__QuerySnapVolumeInteraction value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RaycastSnapVolumeInteraction = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_HitClosestOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HitClosestOnly;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_HitClosestOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HitClosestOnly;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_HitClosestOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HitClosestOnly = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_HoverToSelect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HoverToSelect;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_HoverToSelect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HoverToSelect;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_HoverToSelect(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HoverToSelect = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_HoverTimeToSelect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HoverTimeToSelect;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_HoverTimeToSelect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HoverTimeToSelect;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_HoverTimeToSelect(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HoverTimeToSelect = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_AutoDeselect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AutoDeselect;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_AutoDeselect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AutoDeselect;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_AutoDeselect(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AutoDeselect = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_TimeToAutoDeselect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimeToAutoDeselect;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_TimeToAutoDeselect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimeToAutoDeselect;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_TimeToAutoDeselect(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TimeToAutoDeselect = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_EnableUIInteraction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableUIInteraction;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_EnableUIInteraction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableUIInteraction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_EnableUIInteraction(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EnableUIInteraction = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_AllowAnchorControl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowAnchorControl;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_AllowAnchorControl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowAnchorControl;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_AllowAnchorControl(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AllowAnchorControl = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_UseForceGrab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseForceGrab;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_UseForceGrab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseForceGrab;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_UseForceGrab(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseForceGrab = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_RotateSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RotateSpeed;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_RotateSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RotateSpeed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_RotateSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RotateSpeed = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_TranslateSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TranslateSpeed;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_TranslateSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TranslateSpeed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_TranslateSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TranslateSpeed = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_AnchorRotateReferenceFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AnchorRotateReferenceFrame;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_AnchorRotateReferenceFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AnchorRotateReferenceFrame;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_AnchorRotateReferenceFrame(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AnchorRotateReferenceFrame)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__AnchorRotationMode& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_AnchorRotationMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AnchorRotationMode;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__AnchorRotationMode const&
UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_AnchorRotationMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AnchorRotationMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_AnchorRotationMode(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__AnchorRotationMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AnchorRotationMode = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get__currentNearestValidTarget_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentNearestValidTarget_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*> const&
UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get__currentNearestValidTarget_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentNearestValidTarget_k__BackingField;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set__currentNearestValidTarget_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentNearestValidTarget_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>*&
UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_ValidTargets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ValidTargets;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>*> const&
UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_ValidTargets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ValidTargets;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_ValidTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ValidTargets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_LastTimeHoveredObjectChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastTimeHoveredObjectChanged;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_LastTimeHoveredObjectChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastTimeHoveredObjectChanged;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_LastTimeHoveredObjectChanged(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastTimeHoveredObjectChanged = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_PassedHoverTimeToSelect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassedHoverTimeToSelect;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_PassedHoverTimeToSelect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassedHoverTimeToSelect;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_PassedHoverTimeToSelect(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PassedHoverTimeToSelect = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_LastTimeAutoSelected() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastTimeAutoSelected;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_LastTimeAutoSelected() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastTimeAutoSelected;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_LastTimeAutoSelected(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastTimeAutoSelected = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_PassedTimeToAutoDeselect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassedTimeToAutoDeselect;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_PassedTimeToAutoDeselect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassedTimeToAutoDeselect;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_PassedTimeToAutoDeselect(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PassedTimeToAutoDeselect = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*>& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_RaycastHits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastHits;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_RaycastHits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastHits;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_RaycastHits(::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RaycastHits)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_RaycastHitsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastHitsCount;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_RaycastHitsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastHitsCount;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_RaycastHitsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RaycastHitsCount = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__RaycastHitComparer*& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_RaycastHitComparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastHitComparer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__RaycastHitComparer*> const&
UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_RaycastHitComparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastHitComparer;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_RaycastHitComparer(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__RaycastHitComparer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RaycastHitComparer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint>*&
UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_SamplePoints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SamplePoints;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint>*> const&
UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_SamplePoints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SamplePoints;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_SamplePoints(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SamplePoints)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_SamplePointsFrameUpdated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SamplePointsFrameUpdated;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_SamplePointsFrameUpdated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SamplePointsFrameUpdated;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_SamplePointsFrameUpdated(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SamplePointsFrameUpdated = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_RaycastHitEndpointIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastHitEndpointIndex;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_RaycastHitEndpointIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastHitEndpointIndex;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_RaycastHitEndpointIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RaycastHitEndpointIndex = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_UIRaycastHitEndpointIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UIRaycastHitEndpointIndex;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_UIRaycastHitEndpointIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UIRaycastHitEndpointIndex;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_UIRaycastHitEndpointIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UIRaycastHitEndpointIndex = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_ControlPoints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ControlPoints;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_ControlPoints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ControlPoints;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_ControlPoints(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ControlPoints)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_HitChordControlPoints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HitChordControlPoints;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_HitChordControlPoints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HitChordControlPoints;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_HitChordControlPoints(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_HitChordControlPoints)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::PhysicsScene& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_LocalPhysicsScene() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocalPhysicsScene;
}
constexpr ::UnityEngine::PhysicsScene const& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_LocalPhysicsScene() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocalPhysicsScene;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_LocalPhysicsScene(::UnityEngine::PhysicsScene value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LocalPhysicsScene = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache*& UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_RegisteredUIInteractorCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RegisteredUIInteractorCache;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache*> const&
UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_get_m_RegisteredUIInteractorCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RegisteredUIInteractorCache;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::__cordl_internal_set_m_RegisteredUIInteractorCache(::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RegisteredUIInteractorCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::setStaticF_s_Results(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>*, "s_Results",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::getStaticF_s_Results() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>*, "s_Results",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::setStaticF_s_ScratchSamplePoints(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint>*, "s_ScratchSamplePoints",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint>*
UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::getStaticF_s_ScratchSamplePoints() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint>*, "s_ScratchSamplePoints",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::setStaticF_s_ScratchControlPoints(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, "s_ScratchControlPoints",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get>(
      std::forward<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::getStaticF_s_ScratchControlPoints() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, "s_ScratchControlPoints",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get>();
}
inline ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__LineType UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_lineType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "get_lineType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__LineType, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_lineType(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__LineType value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_lineType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__LineType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_blendVisualLinePoints() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "get_blendVisualLinePoints", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_blendVisualLinePoints(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_blendVisualLinePoints",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_maxRaycastDistance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "get_maxRaycastDistance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_maxRaycastDistance(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_maxRaycastDistance",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_rayOriginTransform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "get_rayOriginTransform", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_rayOriginTransform(::UnityEngine::Transform* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_rayOriginTransform", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_referenceFrame() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "get_referenceFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_referenceFrame(::UnityEngine::Transform* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_referenceFrame", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_velocity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "get_velocity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_velocity(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_velocity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_acceleration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "get_acceleration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_acceleration(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_acceleration",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_additionalGroundHeight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "get_additionalGroundHeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_additionalGroundHeight(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_additionalGroundHeight",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_additionalFlightTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "get_additionalFlightTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_additionalFlightTime(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_additionalFlightTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_endPointDistance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "get_endPointDistance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_endPointDistance(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_endPointDistance",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_endPointHeight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "get_endPointHeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_endPointHeight(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_endPointHeight",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_controlPointDistance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "get_controlPointDistance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_controlPointDistance(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_controlPointDistance",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_controlPointHeight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "get_controlPointHeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_controlPointHeight(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_controlPointHeight",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_sampleFrequency() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "get_sampleFrequency", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_sampleFrequency(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_sampleFrequency",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__HitDetectionType UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_hitDetectionType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "get_hitDetectionType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__HitDetectionType, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_hitDetectionType(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__HitDetectionType value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_hitDetectionType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__HitDetectionType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_sphereCastRadius() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "get_sphereCastRadius", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_sphereCastRadius(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_sphereCastRadius",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::LayerMask UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_raycastMask() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "get_raycastMask", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_raycastMask(::UnityEngine::LayerMask value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_raycastMask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::QueryTriggerInteraction UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_raycastTriggerInteraction() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "get_raycastTriggerInteraction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::QueryTriggerInteraction, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_raycastTriggerInteraction(::UnityEngine::QueryTriggerInteraction value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_raycastTriggerInteraction",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__QuerySnapVolumeInteraction UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_raycastSnapVolumeInteraction() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "get_raycastSnapVolumeInteraction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__QuerySnapVolumeInteraction, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_raycastSnapVolumeInteraction(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__QuerySnapVolumeInteraction value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_raycastSnapVolumeInteraction",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__QuerySnapVolumeInteraction>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_hitClosestOnly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "get_hitClosestOnly", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_hitClosestOnly(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_hitClosestOnly",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_hoverToSelect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "get_hoverToSelect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_hoverToSelect(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_hoverToSelect",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_hoverTimeToSelect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "get_hoverTimeToSelect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_hoverTimeToSelect(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_hoverTimeToSelect",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_autoDeselect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "get_autoDeselect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_autoDeselect(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_autoDeselect",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_timeToAutoDeselect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "get_timeToAutoDeselect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_timeToAutoDeselect(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_timeToAutoDeselect",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_enableUIInteraction() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "get_enableUIInteraction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_enableUIInteraction(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_enableUIInteraction",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_allowAnchorControl() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "get_allowAnchorControl", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_allowAnchorControl(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_allowAnchorControl",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_useForceGrab() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "get_useForceGrab", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_useForceGrab(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_useForceGrab",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_rotateSpeed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "get_rotateSpeed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_rotateSpeed(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_rotateSpeed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_translateSpeed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "get_translateSpeed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_translateSpeed(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_translateSpeed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_anchorRotateReferenceFrame() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "get_anchorRotateReferenceFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_anchorRotateReferenceFrame(::UnityEngine::Transform* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_anchorRotateReferenceFrame",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__AnchorRotationMode UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_anchorRotationMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "get_anchorRotationMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__AnchorRotationMode, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_anchorRotationMode(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__AnchorRotationMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_anchorRotationMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__AnchorRotationMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_angle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "get_angle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_currentNearestValidTarget() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "get_currentNearestValidTarget", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_currentNearestValidTarget(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_currentNearestValidTarget",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_effectiveRayOrigin() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "get_effectiveRayOrigin", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_closestAnyHitIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "get_closestAnyHitIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "OnValidate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::Awake() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), 51)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::OnEnable() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), 52)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::OnDisable() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), 53)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::OnDrawGizmosSelected() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), 107)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::DrawQuadraticBezierGizmo(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "DrawQuadraticBezierGizmo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, p0, p1, p2);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::FindReferenceFrame() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "FindReferenceFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::CreateRayOrigin() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "CreateRayOrigin", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::IsOverUIGameObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "IsOverUIGameObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::GetLinePoints(ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>> linePoints, ByRef<int32_t> numPoints) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "GetLinePoints", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, linePoints, numPoints);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::EnsureCapacity(ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>> linePoints, int32_t numPoints) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "EnsureCapacity", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, linePoints, numPoints);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::TryGetHitInfo(ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Vector3> normal, ByRef<int32_t> positionInLine,
                                                                                  ByRef<bool> isValidTarget) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "TryGetHitInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, position, normal, positionInLine, isValidTarget);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::UpdateUIModel(ByRef<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel> model) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), 108)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, model);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::TryGetUIModel(ByRef<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel> model) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "TryGetUIModel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, model);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::TryGetCurrent3DRaycastHit(ByRef<::UnityEngine::RaycastHit> raycastHit) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "TryGetCurrent3DRaycastHit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::RaycastHit>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, raycastHit);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::TryGetCurrent3DRaycastHit(ByRef<::UnityEngine::RaycastHit> raycastHit, ByRef<int32_t> raycastEndpointIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "TryGetCurrent3DRaycastHit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::RaycastHit>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, raycastHit, raycastEndpointIndex);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::TryGetCurrentUIRaycastResult(ByRef<::UnityEngine::EventSystems::RaycastResult> raycastResult) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "TryGetCurrentUIRaycastResult",
                                               std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::EventSystems::RaycastResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, raycastResult);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::TryGetCurrentUIRaycastResult(ByRef<::UnityEngine::EventSystems::RaycastResult> raycastResult, ByRef<int32_t> raycastEndpointIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "TryGetCurrentUIRaycastResult",
                                               std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::EventSystems::RaycastResult>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, raycastResult, raycastEndpointIndex);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::TryGetCurrentRaycast(ByRef<::System::Nullable_1<::UnityEngine::RaycastHit>> raycastHit, ByRef<int32_t> raycastHitIndex,
                                                                                         ByRef<::System::Nullable_1<::UnityEngine::EventSystems::RaycastResult>> uiRaycastHit,
                                                                                         ByRef<int32_t> uiRaycastHitIndex, ByRef<bool> isUIHitClosest) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "TryGetCurrentRaycast", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Nullable_1<::UnityEngine::RaycastHit>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Nullable_1<::UnityEngine::EventSystems::RaycastResult>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, raycastHit, raycastHitIndex, uiRaycastHit, uiRaycastHitIndex, isUIHitClosest);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::UpdateBezierControlPoints() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "UpdateBezierControlPoints", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::SampleQuadraticBezierPoint(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2,
                                                                                                                 float_t t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "SampleQuadraticBezierPoint", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, p0, p1, p2, t);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::SampleCubicBezierPoint(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2,
                                                                                                             ::UnityEngine::Vector3 p3, float_t t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "SampleCubicBezierPoint", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, p0, p1, p2, p3, t);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::ElevateQuadraticToCubicBezier(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2,
                                                                                                  ByRef<::UnityEngine::Vector3> c0, ByRef<::UnityEngine::Vector3> c1, ByRef<::UnityEngine::Vector3> c2,
                                                                                                  ByRef<::UnityEngine::Vector3> c3) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "ElevateQuadraticToCubicBezier",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, p0, p1, p2, c0, c1, c2, c3);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::SampleProjectilePoint(::UnityEngine::Vector3 initialPosition, ::UnityEngine::Vector3 initialVelocity,
                                                                                                            ::UnityEngine::Vector3 constantAcceleration, float_t time) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "SampleProjectilePoint", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, initialPosition, initialVelocity, constantAcceleration, time);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::CalculateProjectileParameters(ByRef<::UnityEngine::Vector3> initialPosition, ByRef<::UnityEngine::Vector3> initialVelocity,
                                                                                                  ByRef<::UnityEngine::Vector3> constantAcceleration, ByRef<float_t> flightTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                               "CalculateProjectileParameters", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initialPosition, initialVelocity, constantAcceleration, flightTime);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::TryRead2DAxis(::UnityEngine::InputSystem::InputAction* action, ByRef<::UnityEngine::Vector2> output) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "TryRead2DAxis", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, action, output);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::RotateAnchor(::UnityEngine::Transform* anchor, float_t directionAmount) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), 109)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, anchor, directionAmount);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::RotateAnchor(::UnityEngine::Transform* anchor, ::UnityEngine::Vector2 direction, ::UnityEngine::Quaternion referenceRotation) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), 110)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, anchor, direction, referenceRotation);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::TranslateAnchor(::UnityEngine::Transform* rayOrigin, ::UnityEngine::Transform* anchor, float_t directionAmount) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), 111)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rayOrigin, anchor, directionAmount);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::PreprocessInteractor(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), 67)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, updatePhase);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::ProcessInteractor(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), 68)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, updatePhase);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::GetValidTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* targets) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), 57)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, targets);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::CreateSamplePointsListsIfNecessary() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                               "CreateSamplePointsListsIfNecessary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::UpdateSamplePointsIfNecessary() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "UpdateSamplePointsIfNecessary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::UpdateSamplePoints(
    int32_t count, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint>* samplePoints) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "UpdateSamplePoints", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, count, samplePoints);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::UpdateRaycastHits() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "UpdateRaycastHits", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::CheckCollidersBetweenPoints(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "CheckCollidersBetweenPoints", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, from, to);
}
inline int32_t
UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::FilterTriggerColliders(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager* interactionManager,
                                                                               ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> raycastHits, int32_t count,
                                                                               ::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume>, bool>* removeRule) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "FilterTriggerColliders", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume>, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, interactionManager, raycastHits, count, removeRule);
}
template <typename T> inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::RemoveAt(::ArrayW<T, ::Array<T>*> array, int32_t index, int32_t count) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "RemoveAt",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array, index, count);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::UpdateUIHitIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "UpdateUIHitIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::CreateBezierCurve(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint>* samplePoints,
                                                                          int32_t endSamplePointIndex, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> quadraticControlPoints) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "CreateBezierCurve", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, samplePoints, endSamplePointIndex, quadraticControlPoints);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_isSelectActive() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), 59)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::CanHover(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* interactable) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), 64)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, interactable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::CanSelect(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* interactable) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), 65)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, interactable);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::GetHoverTimeToSelect(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), 112)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, interactable);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::GetTimeToAutoDeselect(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), 113)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::OnSelectEntering(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), 75)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), 77)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::RestoreAttachTransform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "RestoreAttachTransform", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::SanitizeSampleFrequency(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "SanitizeSampleFrequency",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_Velocity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "get_Velocity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_Velocity(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_Velocity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_Acceleration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "get_Acceleration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_Acceleration(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_Acceleration",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_AdditionalFlightTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "get_AdditionalFlightTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_AdditionalFlightTime(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_AdditionalFlightTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_Angle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "get_Angle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::get_originalAttachTransform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             "get_originalAttachTransform", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::set_originalAttachTransform(::UnityEngine::Transform* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "set_originalAttachTransform", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
/// @param _: int32_t (default: static_cast<int32_t>(0x0))
inline bool UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::GetLinePoints(ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>> linePoints, ByRef<int32_t> numPoints,
                                                                                  int32_t _) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "GetLinePoints", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, linePoints, numPoints, _);
}
/// @param _: int32_t (default: static_cast<int32_t>(0x0))
inline bool UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::TryGetHitInfo(ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Vector3> normal, ByRef<int32_t> positionInLine,
                                                                                  ByRef<bool> isValidTarget, int32_t _) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "TryGetHitInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, position, normal, positionInLine, isValidTarget, _);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::GetCurrentRaycastHit(ByRef<::UnityEngine::RaycastHit> raycastHit) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), "GetCurrentRaycastHit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::RaycastHit>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, raycastHit);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::CanHover(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* interactable) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), 91)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, interactable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::CanSelect(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* interactable) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(), 92)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, interactable);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor* UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>());
}
inline void UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor::XRRayInteractor() {}
